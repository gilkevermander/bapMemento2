using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
//using UnityEngine.Experimental.XR;
using System;
using UnityEngine.XR.ARSubsystems;

public class ARTapToPlaceObject : MonoBehaviour
{
    public GameObject objectToPlace;
    public GameObject placementIndicator;
    public GameObject foot;
    public GameObject krantWrap;
    public GameObject voorblad;

    public float easing = 2f;

    private bool touched;

    private Animator doosOpenen;
    private Animator krantMetComments;

    private ARSessionOrigin arOrigin;

    private Pose placementPose;

    Vector3 footPos;
    Vector3 krantPos;

    private bool placementPoseIsValid = false;

    void Start()
    {
        arOrigin = FindObjectOfType<ARSessionOrigin>();
        doosOpenen = objectToPlace.GetComponentInChildren<Animator>();
        krantMetComments = voorblad.GetComponentInChildren<Animator>();
        touched = false;
        foot.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        krantWrap.SetActive(false);
        voorblad.transform.localScale = new Vector3(0f, 0f, 0f);

    }

    void Update()
    {
        UpdatePlacementPose();
        UpdatePlacementIndicator();
        

        if (placementPoseIsValid && Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Began && touched == false)
        {
            touched = true; //ervoorzorgen dat je maar 1 keer kan duwen
            Debug.Log(touched);
            placementIndicator.transform.localScale = new Vector3(0f, 0f, 0f); //indicator onzichtbaar maken
            PlaceObject();
        }
    }

    private void PlaceObject()
    {
        Instantiate(objectToPlace, placementPose.position, placementPose.rotation);
        //AR starten
        StartCoroutine(ArExpierence());
    }

    private IEnumerator ArExpierence()
    {
        //doos openen
        
        doosOpenen.Play("doos openen");

        yield return new WaitForSeconds(3); //doos is volledig geopend.
        //footstep tevoorschijn laten komen 1 unit naast de getrackte positie.
        footPos = new Vector3(placementPose.position.x + 1.0f, placementPose.position.y, placementPose.position.z);
        krantPos = new Vector3(placementPose.position.x + 1.0f, placementPose.position.y + 1.0f, placementPose.position.z);
        Instantiate(foot, footPos, placementPose.rotation);
        
        yield return new WaitForSeconds(2);
        //audio starten
        //kranten komen tevoorschijn en beginnen te wapperen op de plaats waar de doos staat!
        krantWrap.transform.localScale = new Vector3(1f, 1f, 1f);
        krantWrap.SetActive(true);
        StartCoroutine(KrantenVliegen(placementPose.position, krantPos, easing, krantWrap));
        voorblad.transform.localScale = new Vector3(1f, 1f, 1f);
        krantMetComments.Play("krantMetComments");

    }

    IEnumerator KrantenVliegen(Vector3 krant_startpos, Vector3 krant_endpos, float seconds, GameObject krant)
    {
        float t = 0f;
        while (t <= 1.0)
        {
            t += Time.deltaTime / seconds;
            krant.GetComponent<Transform>().localPosition = Vector3.Lerp(krant_startpos, krant_endpos, Mathf.SmoothStep(0f, 1f, t));
            yield return null;
        }
    }

    private void UpdatePlacementIndicator()
    {
        if (placementPoseIsValid)
        {
            placementIndicator.SetActive(true);
            placementIndicator.transform.SetPositionAndRotation(placementPose.position, placementPose.rotation);
        }
        else
        {
            placementIndicator.SetActive(false);
        }
    }

    private void UpdatePlacementPose()
    {

        var screenCenter = Camera.main.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));

        var hits = new List<ARRaycastHit>();
        arOrigin.GetComponent<ARRaycastManager>().Raycast(screenCenter, hits, TrackableType.Planes);

        placementPoseIsValid = hits.Count > 0;
        if (placementPoseIsValid)
        {
            placementPose = hits[0].pose;

            var cameraForward = Camera.current.transform.forward;
            var cameraBearing = new Vector3(cameraForward.x, 0, cameraForward.z).normalized;
            placementPose.rotation = Quaternion.LookRotation(cameraBearing);
        }
    }
}

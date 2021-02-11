using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.UI;
//using UnityEngine.Experimental.XR;
using System;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.Video;
using UnityEngine.SceneManagement;

public class ARTapToPlaceObject : MonoBehaviour
{
    public GameObject objectToPlace;
    public GameObject placementIndicator;
    public GameObject foot;
    public GameObject krantWrap;
    public GameObject voorblad;
    public GameObject rol;
    public GameObject bloedplas;
    public GameObject voet;
    public GameObject scherm;
    public GameObject Cube;
    public GameObject Cube1;
    public GameObject Cube2;
    public GameObject Gevangenis;
    public GameObject Mask;
    public GameObject subtitles;
    public GameObject uitleg;
    public GameObject mond1;
    public GameObject mond2;
    public GameObject mond3;
    public GameObject mond4;
    public GameObject mond5;
    public GameObject mond6;
    public GameObject monden;

    public RawImage rawImage;

    private GameObject krantjewrap;

    private ParticleSystem bloed;

    public AudioSource audioBap;

    public VideoPlayer videoScherm;
    public VideoPlayer glitchVideo;

    Renderer[] renderKranten;

    public Material white;
    public Material videoMat;

    public float easing = 2f;

    private bool touched;

    public Light directionalLight1;
    public Light directionalLight2;

    private Animator doosOpenen;
    private Animator krantMetComments;
    private Animator oprollen;
    private Animator krantenWeg;
    private Animator voetStappen;
    private Animator schermAnimatie;
    private Animator gevangenisAnimatie;

    public Animator mond1_a;
    public Animator mond1_an;

    public Animator mond2_a;
    public Animator mond2_an;

    public Animator mond3_a;
    public Animator mond3_an;

    public Animator mond4_a;
    public Animator mond4_an;

    public Animator mond5_a;
    public Animator mond5_an;

    public Animator mond6_a;
    public Animator mond6_an;

    private ARSessionOrigin arOrigin;

    private Pose placementPose;

    Vector3 footPos;
    Vector3 krantPos;
    Vector3 krantStart;
    Vector3 bloedPos;
    Vector3 voorbladPos;
    Vector3 schermPos;
    Vector3 krantPos2;
    Vector3 gevangenisPos;

    private bool placementPoseIsValid = false;

    void Start()
    {
        arOrigin = FindObjectOfType<ARSessionOrigin>();

        doosOpenen = objectToPlace.GetComponentInChildren<Animator>();
        krantMetComments = voorblad.GetComponentInChildren<Animator>();
        voetStappen = voet.GetComponentInChildren<Animator>();
        schermAnimatie = scherm.GetComponentInChildren<Animator>();
        gevangenisAnimatie = Gevangenis.GetComponentInChildren<Animator>();
        oprollen = rol.GetComponentInChildren<Animator>();
        //mond1_an = mond1.GetComponentInChildren<Animator>();

        Cube = GameObject.Find("Cube");
        Cube1 = GameObject.Find("Cube_1");
        Cube2 = GameObject.Find("Cube_2");

        touched = false;

        foot.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        voorblad.transform.localScale = new Vector3(0f, 0f, 0f);
        rol.transform.localScale = new Vector3(0f, 0f, 0f);
        voet.transform.localScale = new Vector3(0f, 0f, 0f);
        scherm.transform.localScale = new Vector3(0f, 0f, 0f);

        monden.transform.localScale = new Vector3(0f, 0f, 0f);

        Gevangenis.transform.localScale = new Vector3(0f, 0f, 0f);
        Mask.transform.localScale = new Vector3(0f, 0f, 0f);

        bloed = rol.GetComponentInChildren<ParticleSystem>();

        //StartCoroutine(Test());

        rawImage.GetComponent<CanvasGroup>().alpha = 0;
        rawImage.GetComponent<CanvasGroup>().blocksRaycasts = false;


    }

    private IEnumerator Test()
    {
        monden.transform.localScale = new Vector3(1f, 1f, 1f);
        //mond1.transform.position = voorbladPos;
        directionalLight1.intensity = 0.39f;
        directionalLight2.intensity = 1.04f;
        directionalLight1.shadows = LightShadows.None;
        directionalLight2.shadows = LightShadows.None;
        yield return new WaitForSeconds(0);//7
        mond1_a.Play("monden");
        mond1_an.Play("monden");
        yield return new WaitForSeconds(6);
        mond2_a.Play("monden2");
        mond2_an.Play("monden2");
        yield return new WaitForSeconds(9);
        mond3_a.Play("monden3");
        mond3_an.Play("monden3");
        yield return new WaitForSeconds(6);
        mond4_a.Play("monden4");
        mond4_an.Play("monden4");
        yield return new WaitForSeconds(9);
        mond5_a.Play("monden5");
        mond5_an.Play("monden5");
        yield return new WaitForSeconds(6);
        mond6_a.Play("monden6");
        mond6_an.Play("monden6");
    }

    public void startAR()
    {
        //popup moet weg gaan en raycast weg
        uitleg.GetComponent<CanvasGroup>().alpha = 0;
        uitleg.GetComponent<CanvasGroup>().blocksRaycasts = false;
        //glitch video moet beginnen
        rawImage.GetComponent<CanvasGroup>().alpha = 1;
        rawImage.GetComponent<CanvasGroup>().blocksRaycasts = true;
        glitchVideo.Play();
    }

    public void AwayFromAR()
    {
        SceneManager.LoadScene("kaart");
    }

    void Update()
    {
        UpdatePlacementPose();
        UpdatePlacementIndicator();

        if (placementPoseIsValid && Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Began && touched == false && glitchVideo.frame >= 178)
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
        //StartCoroutine(Test());
    }

    private IEnumerator ArExpierence()
    {
        //doos openen
        audioBap.Play();
        subtitles.GetComponent<SubScript>().MyFunction();
        doosOpenen.Play("doos openen");

        

        yield return new WaitForSeconds(3); //doos is volledig geopend.
        //footstep tevoorschijn laten komen 1 unit naast de getrackte positie.
        footPos = new Vector3(placementPose.position.x + 1.0f, placementPose.position.y, placementPose.position.z);
        voorbladPos = new Vector3(placementPose.position.x + 1.0f, placementPose.position.y + 0.5f, placementPose.position.z);
        bloedPos = new Vector3(placementPose.position.x + 1.0f, placementPose.position.y, placementPose.position.z);
        krantPos2 = new Vector3(placementPose.position.x + 1.0f, placementPose.position.y - 1f, placementPose.position.z);
        krantPos = new Vector3(placementPose.position.x + 1.0f, placementPose.position.y - 1f, placementPose.position.z);
        krantStart = new Vector3(placementPose.position.x - 1.0f, placementPose.position.y - 1.0f, placementPose.position.z);
        schermPos = new Vector3(placementPose.position.x + 2.0f, placementPose.position.y - 1.0f, placementPose.position.z);
        gevangenisPos = new Vector3(placementPose.position.x + 1.0f, placementPose.position.y - 1.0f, placementPose.position.z);
        Instantiate(foot, footPos, placementPose.rotation);

        //////
        //voet.transform.localScale = new Vector3(1f, 1f, 1f);
        //voet.transform.position = bloedPos;
        //voetStappen.Play("voetstappen");
        /////

        //kranten komen tevoorschijn en beginnen te wapperen op de plaats waar de doos staat!
        //krantWrap.SetActive(true);//doet ie niet
        Instantiate(krantWrap, krantPos2, placementPose.rotation);

        yield return new WaitForSeconds(17); //10 SECONDEN EXTRA HIER GEPAKT DUS ER MOET 10 SECONDEN VAN DE ANIMTIE VAN HET VOORBLAD. Dit was 12 dus nu +5
        krantjewrap = GameObject.Find("krantWrapper(Clone)");
        krantenWeg = krantjewrap.GetComponentInChildren<Animator>();

        krantenWeg.Play("vliegendeKranten");//kranten vliegen weg vroeger einde opo 24 21 nu op 19 19
        
        
        voorblad.transform.localScale = new Vector3(1f, 1f, 1f);
        voorblad.transform.position = voorbladPos;
        //
        krantMetComments.Play("krantMetComments");
        yield return new WaitForSeconds(7);
        krantjewrap.Destroy();
        yield return new WaitForSeconds(27); //was 32

        //Instantiate(rol, krantPos, placementPose.rotation);
        bloedplas.transform.position = krantPos;
        rol.transform.localScale = new Vector3(1f, 1f, 1f);
        rol.transform.position = bloedPos; //Error kan hier zitten.
        oprollen.Play("krantOprollen");
        //seconde 52
        yield return new WaitForSeconds(3);
        
        yield return new WaitForSeconds(7);
        
        bloed.Play();
        yield return new WaitForSeconds(18);
        bloed.Stop();

        voet.transform.localScale = new Vector3(1f, 1f, 1f);
        voet.transform.position = schermPos;
        voetStappen.Play("voetstappen");
        yield return new WaitForSeconds(5);
        voetStappen.enabled = false;  //voeten stoppen
        voet.transform.localScale = new Vector3(0f, 0f, 0f);

        Cube.GetComponent<Renderer>().material = white;
        Cube1.GetComponent<Renderer>().material = white;
        Cube2.GetComponent<Renderer>().material = white;

        scherm.transform.localScale = new Vector3(1f, 1f, 1f);
        scherm.transform.position = schermPos;
        schermAnimatie.Play("schermen");
        yield return new WaitForSeconds(4);
        yield return new WaitForSeconds(13);

        Cube.GetComponent<Renderer>().material = videoMat;
        Cube1.GetComponent<Renderer>().material = videoMat;
        Cube2.GetComponent<Renderer>().material = videoMat;

        videoScherm.Play();
        //schermen moeten verdwijnen!!!!
        yield return new WaitForSeconds(51);
        scherm.transform.localScale = new Vector3(0f, 0f, 0f);
        //aantal seconden wachten!!!!
        //gevangenis
        Mask.transform.localScale = new Vector3(1f, 1f, 1f);
        Mask.transform.position = gevangenisPos;
        Gevangenis.transform.localScale = new Vector3(1f, 1f, 1f);
        Gevangenis.transform.position = gevangenisPos;
        gevangenisAnimatie.Play("gevangenis");

        yield return new WaitForSeconds(74); //73
        //mondenkomen op
        monden.transform.localScale = new Vector3(1f, 1f, 1f);
        //mond1.transform.position = voorbladPos;
        monden.transform.position = footPos;
        directionalLight1.intensity = 0.39f;
        directionalLight2.intensity = 1.04f;
        directionalLight1.shadows = LightShadows.None;
        directionalLight2.shadows = LightShadows.None;
        yield return new WaitForSeconds(3);//7
        mond1_a.Play("monden");
        mond1_an.Play("monden");
        yield return new WaitForSeconds(6);
        mond2_a.Play("monden2");
        mond2_an.Play("monden2");
        yield return new WaitForSeconds(9);
        mond3_a.Play("monden3");
        mond3_an.Play("monden3");
        yield return new WaitForSeconds(6);
        mond4_a.Play("monden4");
        mond4_an.Play("monden4");
        yield return new WaitForSeconds(9);
        mond5_a.Play("monden5");
        mond5_an.Play("monden5");
        yield return new WaitForSeconds(6);
        mond6_a.Play("monden6");
        mond6_an.Play("monden6");
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

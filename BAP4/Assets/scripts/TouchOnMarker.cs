using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TouchOnMarker : MonoBehaviour
{
    
    private GameObject popup;
    private GameObject popupAr;

    // Start is called before the first frame update
    void Start()
    {
        popup = GameObject.Find("Popup");
        popupAr = GameObject.Find("PopupAR");
    }

    void Update()
    {

        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                Debug.Log(hit.transform.name);
                //Select Stage
                if (hit.transform.name == "Marker_1(Clone)")
                {
                    popup.GetComponent<CanvasGroup>().alpha = 1;
                    popup.GetComponent<CanvasGroup>().blocksRaycasts = true;

                }

                if (hit.transform.name == "Marker_2(Clone)")
                {
                    popupAr.GetComponent<CanvasGroup>().alpha = 1;
                    popupAr.GetComponent<CanvasGroup>().blocksRaycasts = true;

                }
            }
        }

    }

}

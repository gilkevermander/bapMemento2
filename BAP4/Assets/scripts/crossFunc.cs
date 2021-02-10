using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class crossFunc : MonoBehaviour
{
    private GameObject popup;
    private GameObject popupAr;
    private GameObject warning;
    public GameObject locatieTarger;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    public void crossOut()
    {
        popup = GameObject.Find("Popup");
        popup.GetComponent<CanvasGroup>().alpha = 0;
        popup.GetComponent<CanvasGroup>().blocksRaycasts = false;
    }

    public void crossOutAR()
    {
        popupAr = GameObject.Find("PopupAR");
        popupAr.GetComponent<CanvasGroup>().alpha = 0;
        popupAr.GetComponent<CanvasGroup>().blocksRaycasts = false;
    }

    public void crossWarning()
    {
        warning = GameObject.Find("warning");
        warning.GetComponent<CanvasGroup>().alpha = 0;
        warning.GetComponent<CanvasGroup>().blocksRaycasts = false;
    }

    public void openWarning()
    {
        warning = GameObject.Find("warning");
        warning.GetComponent<CanvasGroup>().alpha = 1;
        warning.GetComponent<CanvasGroup>().blocksRaycasts = true;
    }

    public void ChangeToScene()
    {
        SceneManager.LoadScene("ar");
    }

    

    public void Locatie()
    {
        var ray = Camera.main.ScreenPointToRay(new Vector2(Screen.height / 2, Screen.width / 2));
        RaycastHit hitPoint;

        if (Physics.Raycast(ray, out hitPoint, 100.0f))
            transform.LookAt(hitPoint.point);
    }
}

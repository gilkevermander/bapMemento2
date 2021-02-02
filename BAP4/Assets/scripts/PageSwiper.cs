using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class PageSwiper : MonoBehaviour, IDragHandler, IEndDragHandler
{
    private Vector3 panelLocation;
    public float percentThreshold = 0.2f;
    public float easing = 0.5f;
    public int totalPages = 3;
    public int currentPage = 1;
    public Image slider;
    public float speed = 0.5f;
    private Vector3 slider_endpos1;
    private Vector3 slider_endpos2;
    private Vector3 slider_endpos3;
    private Vector3 slider_startpos;
    public Button overslaan;
    public Button volgende;
    public Button ontdek;


    // Start is called before the first frame update
    void Start()
    {
        panelLocation = transform.position;
        slider_endpos1 = new Vector3(-307, -387, -6);
        slider_endpos2 = new Vector3(-207, -387, -6);
        slider_endpos3 = new Vector3(-110, -387, -6);
    }

    void Update()
    {
        if(currentPage == 3)
        {
            ontdek.GetComponent<CanvasGroup>().alpha = 1;
            ontdek.GetComponent<CanvasGroup>().blocksRaycasts = true;

            overslaan.GetComponent<CanvasGroup>().alpha = 0;
            overslaan.GetComponent<CanvasGroup>().blocksRaycasts = false;

            volgende.GetComponent<CanvasGroup>().alpha = 0;
            volgende.GetComponent<CanvasGroup>().blocksRaycasts = false;
        }
        else
        {
            ontdek.GetComponent<CanvasGroup>().alpha = 0;
            ontdek.GetComponent<CanvasGroup>().blocksRaycasts = false;

            overslaan.GetComponent<CanvasGroup>().alpha = 1;
            overslaan.GetComponent<CanvasGroup>().blocksRaycasts = true;

            volgende.GetComponent<CanvasGroup>().alpha = 1;
            volgende.GetComponent<CanvasGroup>().blocksRaycasts = true;
        }
    }

    public void Next()
    {
        Vector3 newLocation = panelLocation;
        if (currentPage < totalPages)
        {
            currentPage++;
            newLocation += new Vector3(-Screen.width, 0, 0);
        }
        StartCoroutine(SmoothMove(transform.position, newLocation, easing));
        panelLocation = newLocation;

        Slider();
    }

    public void Overslaan()
    {
        Vector3 newLocation = panelLocation;

        if (currentPage < totalPages && currentPage == 1)
        {
            currentPage = 3;
            newLocation += new Vector3((-Screen.width * 2), 0, 0);
        }
        if (currentPage < totalPages && currentPage == 2)
        {
            currentPage = 3;
            newLocation += new Vector3(-Screen.width, 0, 0);
        }
        StartCoroutine(SmoothMove(transform.position, newLocation, easing));
        panelLocation = newLocation;

        Slider();
    }


    public void Slider ()
    {
        //if (currentPage < totalPages)
        //{
        //    if (currentPage == 1)
        //{
        //    StartCoroutine(Onboarding(slider_startpos, slider_endpos1, easing));
        //}
        slider_startpos = slider.GetComponent<RectTransform>().localPosition;
        if (currentPage == 2)
        {
            StartCoroutine(Onboarding(slider_startpos, slider_endpos2, easing));
        }
        if (currentPage == 3)
        {
            StartCoroutine(Onboarding(slider_startpos, slider_endpos3, easing));
        }
        //}
    }


    public void OnDrag(PointerEventData data)
    {
        float difference = data.pressPosition.x - data.position.x;
        transform.position = panelLocation - new Vector3(difference, 0, 0);
    }
    public void OnEndDrag(PointerEventData data)
    {
        float percentage = (data.pressPosition.x - data.position.x) / Screen.width;
        if (Mathf.Abs(percentage) >= percentThreshold)
        {
            Vector3 newLocation = panelLocation;
            if (percentage > 0 && currentPage < totalPages)
            {
                currentPage++;
                newLocation += new Vector3(-Screen.width, 0, 0);
            }
            else if (percentage < 0 && currentPage > 1)
            {
                currentPage--;
                newLocation += new Vector3(Screen.width, 0, 0);
            }
            StartCoroutine(SmoothMove(transform.position, newLocation, easing));
            panelLocation = newLocation;
            Debug.Log(newLocation);
        }
        else
        {
            StartCoroutine(SmoothMove(transform.position, panelLocation, easing));
        }

        slider_startpos = slider.GetComponent<RectTransform>().localPosition;

        //Debug.Log(currentPage);
        if(currentPage == 1)
        {
            StartCoroutine(Onboarding(slider_startpos, slider_endpos1, easing));
        }
        if (currentPage == 2)
        {
            
            StartCoroutine(Onboarding(slider_startpos, slider_endpos2, easing));
        }
        if (currentPage == 3)
        {
            StartCoroutine(Onboarding(slider_startpos, slider_endpos3, easing));
        }

        
    }

    IEnumerator SmoothMove(Vector3 startpos, Vector3 endpos, float seconds)
    {
        float t = 0f;
        while (t <= 1.0)
        {
            t += Time.deltaTime / seconds;
            transform.position = Vector3.Lerp(startpos, endpos, Mathf.SmoothStep(0f, 1f, t));
            yield return null;
        }
    }

    IEnumerator Onboarding(Vector3 slider_startpos, Vector3 slider_endpos, float seconds)
    {
        float t = 0f;
        while (t <= 1.0)
        {
            t += Time.deltaTime / seconds;
            slider.GetComponent<RectTransform>().localPosition = Vector3.Lerp(slider_startpos, slider_endpos, Mathf.SmoothStep(0f, 1f, t));
            yield return null;
        }
    }
}

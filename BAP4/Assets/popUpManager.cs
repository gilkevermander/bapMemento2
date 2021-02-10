using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class popUpManager : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject popup;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OpenPopUp()
    {
        popup.GetComponent<CanvasGroup>().alpha = 1;
        popup.GetComponent<CanvasGroup>().blocksRaycasts = true;
    }
}

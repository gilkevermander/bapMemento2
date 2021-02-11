using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class navManager : MonoBehaviour
{
    // Start is called before the first frame update
    private List<string> sceneHistory = new List<string>();
    private GameObject popup;
    Scene currentScene;

    void Start()
    {
        currentScene = SceneManager.GetActiveScene();
        popup = GameObject.Find("popup");
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ChangeToMemento()
    {
        sceneHistory.Add("mementoInfo");
        SceneManager.LoadScene("mementoInfo");
    }

    public void ChangeToAmbassadeurs()
    {
        sceneHistory.Add("ambassadeursInfo");
        SceneManager.LoadScene("ambassadeursInfo");
        
    }

    public void ChangeToRoute()
    {
        sceneHistory.Add("kaart");
        SceneManager.LoadScene("kaart");
    }

    public void ChangeToMakers()
    {
        sceneHistory.Add("makersInfo");
        SceneManager.LoadScene("makersInfo");
    }

    public void PreviousScene()
    {
        //Debug.Log("terugjoepie");
        //Debug.Log(sceneHistory.Count);
        //if (sceneHistory.Count >= 2)  //Checking that we have actually switched scenes enough to go back to a previous scene
        //{
        //    Debug.Log("terug");
        //    Debug.Log(sceneHistory);
        //    sceneHistory.RemoveAt(sceneHistory.Count - 1);
        //    SceneManager.LoadScene(sceneHistory[sceneHistory.Count - 1]);
        //}
        //if (currentScene == SceneManager.ambassadeursInfo && popup.GetComponent<CanvasGroup>().alpha == 1)
        //{
        //    popup.GetComponent<CanvasGroup>().alpha = 0;
        //    popup.GetComponent<CanvasGroup>().blocksRaycasts = false;
        //}
        //else
        //{
            SceneManager.LoadScene("kaart");
        //}

    }
}

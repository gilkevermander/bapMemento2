using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

public class arManager : MonoBehaviour
{

    public GameObject Video;
    private VideoPlayer videoPlayer;
    public RawImage videoTexture;
    
    // Start is called before the first frame update
    void Start()
    {
        videoPlayer = Video.GetComponent<VideoPlayer>();
        
    }

    // Update is called once per frame
    void Update()
    {
        if (videoPlayer.frame == 178)
        {
            Debug.Log("video is finfished");
            videoTexture.GetComponent<CanvasGroup>().alpha = 0;
            videoTexture.GetComponent<CanvasGroup>().blocksRaycasts = false;
            
        }
    }
}

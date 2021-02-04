using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class takePicture : MonoBehaviour
{
	public bool takingScreenshot = false;

	public Image preview;
	public GameObject panel;
	private Texture2D ss;
	public Button cameraKnop;

	public void CaptureScreenshot()
	{
		StartCoroutine(TakeScreenshoAndSave());
	}

	public void SaveScreenshot()
	{
		StartCoroutine(Save());
	}

	public void Facebook()
	{
		Application.OpenURL("https://www.facebook.com/");
	}

	public void Instagram()
	{
		Application.OpenURL("https://www.instagram.com/");
	}

	public void Twitter()
	{
		Application.OpenURL("https://twitter.com/home");
	}




	public void closePanel()
	{
		panel.GetComponent<CanvasGroup>().alpha = 0;
		panel.GetComponent<CanvasGroup>().blocksRaycasts = false;

		cameraKnop.GetComponent<CanvasGroup>().alpha = 1;
		cameraKnop.GetComponent<CanvasGroup>().blocksRaycasts = true;

		Destroy(ss);
	}

	private IEnumerator TakeScreenshotAndSave()
	{

		takingScreenshot = true;
		yield return new WaitForEndOfFrame();

		Texture2D ss = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
		ss.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
		ss.Apply();

		// Save the screenshot to Gallery/Photos
		string name = string.Format("{0}_Capture{1}_{2}.png", Application.productName, "{0}", System.DateTime.Now.ToString("yyyy-MM-dd_HH-mm-ss"));
		Debug.Log("Permission result: " + NativeGallery.SaveImageToGallery(ss, Application.productName + " Captures", name));
		takingScreenshot = false;
	}

	private IEnumerator TakeScreenshoAndSave()
	{
		cameraKnop.GetComponent<CanvasGroup>().alpha = 0;
		cameraKnop.GetComponent<CanvasGroup>().blocksRaycasts = false;

		yield return new WaitForEndOfFrame();

		ss = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
		ss.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
		ss.Apply();

		preview.sprite = Sprite.Create(ss, new Rect(0.0f, 0.0f, ss.width, ss.height), new Vector2(0.5f, 0.5f), 100.0f);

		panel.GetComponent<CanvasGroup>().alpha = 1;
		panel.GetComponent<CanvasGroup>().blocksRaycasts = true;

		//// Save the screenshot to Gallery/Photos
		//NativeGallery.Permission permission = NativeGallery.SaveImageToGallery(ss, "GalleryTest", "Image.png", (success, path) => Debug.Log("Media save result: " + success + " " + path));

		//Debug.Log("Permission result: " + permission);

		//// To avoid memory leaks
		//Destroy(ss);
	}

	private IEnumerator Save()
	{


		yield return new WaitForEndOfFrame();

		//ss = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
		//ss.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
		//ss.Apply();

		//preview.sprite = Sprite.Create(ss, new Rect(0.0f, 0.0f, ss.width, ss.height), new Vector2(0.5f, 0.5f), 100.0f);

		//panel.GetComponent<CanvasGroup>().alpha = 1;
		//panel.GetComponent<CanvasGroup>().blocksRaycasts = true;

        // Save the screenshot to Gallery/Photos
        NativeGallery.Permission permission = NativeGallery.SaveImageToGallery(ss, "GalleryTest", "Image.png", (success, path) => Debug.Log("Media save result: " + success + " " + path));

        Debug.Log("Permission result: " + permission);

        // To avoid memory leaks
        
    }
}

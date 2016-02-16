using UnityEngine;
using System.Collections;

public class PlayerScaler : MonoBehaviour {


	private float scalingSpeed = 1f;
	private float doubleSize = 2f;
	private float oneHalf = 1.5f;

	void OnEnable()
	{
		Ball.Scalling += StartScaling;
	}
	void OnDisable()
	{
		Ball.Scalling -= StartScaling;
	}

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void StartScaling(GameObject other)
	{
		StartCoroutine(ScalePlayer(other));
	}
		
	IEnumerator ScalePlayer(GameObject other)
	{
		while(transform.localScale.x < (other.gameObject.CompareTag("DoubleSize") ? doubleSize : oneHalf ))
		{
			float newScale = transform.localScale.x + Time.deltaTime * scalingSpeed ;
			transform.localScale = new Vector3(newScale, newScale, newScale);
			yield return 0;
		}
	}

}

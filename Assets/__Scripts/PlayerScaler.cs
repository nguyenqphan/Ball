﻿using UnityEngine;
using System.Collections;

public class PlayerScaler : MonoBehaviour {

	public GameObject timerText;

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
		StopAllCoroutines();
		StartCoroutine(ScalePlayer(other));
	}
		
	IEnumerator ScalePlayer(GameObject other)
	{
		timerText.SetActive(true);											
		while(transform.localScale.x < (other.gameObject.CompareTag("DoubleSize") ? doubleSize : oneHalf ))
		{
			float newScale = transform.localScale.x + Time.deltaTime * scalingSpeed ;
			transform.localScale = new Vector3(newScale, newScale, newScale);
			yield return 0;
		}
			
		StartCoroutine(TimeCounter(other));
	}

	IEnumerator TimeCounter(GameObject other)
	{
		while(GameManager.Instance.BallTimer > 0  )
		{
			GameManager.Instance.BallTimer -= Time.deltaTime;
			yield return 0;
		}

		timerText.SetActive(false);
		GameManager.Instance.BallTimer = 3f;
		StartCoroutine(ScaleBack(other));
	}

	IEnumerator ScaleBack(GameObject other)
	{
		while(transform.localScale.x > 1)
		{
			float newScale = transform.localScale.x - Time.deltaTime * scalingSpeed;
			transform.localScale = new Vector3(newScale, newScale, newScale);
			yield return 0;
		}
	}

}
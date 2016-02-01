using UnityEngine;
using System.Collections;

public class Deactivator : MonoBehaviour {

	//private bool isActive = false;
	private float time = 1f;
	private float resetTime = 0f;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {


		if(gameObject.activeInHierarchy)
		{
			resetTime += Time.deltaTime * time;
			if(resetTime >= 10f)
			{
				gameObject.SetActive(false);
				resetTime = 0f;
			}

		}
	}
}

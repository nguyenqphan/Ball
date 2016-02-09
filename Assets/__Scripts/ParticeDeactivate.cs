using UnityEngine;
using System.Collections;

public class ParticeDeactivate : MonoBehaviour {

	float startTime = 0f;
	float speedTime = 1f;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if(gameObject.activeInHierarchy)
		{
			startTime += Time.deltaTime * speedTime;
			if(startTime >= 3f)
			{
				startTime = 0;
				gameObject.SetActive(false);
//				Debug.Log(startTime);
			}
		}
			
	}
}

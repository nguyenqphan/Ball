using UnityEngine;
using System.Collections;

public class BallDeactivator : MonoBehaviour {

	[HideInInspector]
	public float timeToLive =0f;
	
	// Update is called once per frame
	void Update () {
		timeToLive += Time.deltaTime;

		if(timeToLive >= 60f)
		{
			timeToLive = 0f;
			gameObject.SetActive(false);
		}
	}
}

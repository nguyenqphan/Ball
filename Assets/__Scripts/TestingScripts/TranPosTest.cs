using UnityEngine;
using System.Collections;

public class TranPosTest : MonoBehaviour {


	bool cam = true;
	float  startTime = 0f;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame

	void Update () {
		if(cam){
			transform.position = transform.position + new Vector3(0f, Time.deltaTime * -1f, 0f);
			startTime += Time.deltaTime;
			if(startTime >= 5)
			{
				cam = false;
				startTime = 0f	;
			}
		}
	}
}

using UnityEngine;
using System.Collections;

public class DiamondDeactivate : MonoBehaviour {

	private float speed = 1f;
	private float resetTime = 0f;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if(gameObject.activeInHierarchy)
		{
			resetTime += Time.deltaTime * speed;
			if(resetTime >= 13f)
			{
				resetTime = 0f;
				gameObject.SetActive(false);
			}
		}
	}
}

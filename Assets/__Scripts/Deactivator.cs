using UnityEngine;
using System.Collections;

public class Deactivator : MonoBehaviour {

	//private bool isActive = false;
	private float time = 1f;
	private float resetTime = 0f;
	private GameObject leftCube;
	private GameObject rightCube;
	private Flashing flashing;
	private bool isFlashing = false;

	void Awake()
	{
		flashing = GetComponent<Flashing>();
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

		if(gameObject.activeInHierarchy)
		{
			resetTime += Time.deltaTime * time;

//			if(resetTime >= 10){
//			//	leftCube = GameObject.FindGameObjectWithTag("LeftCube");
//			
//
////				Debug.Log(leftCube.tag);
//			}

			if(resetTime >= 5f && !isFlashing)
			{
//				flashing.StartFlashing();
				isFlashing = true;
				//Debug.Log(isFlashing);
			}

			if(resetTime >= 12f)
			{
				gameObject.SetActive(false);
				resetTime = 0f;
			}

		}
	}
}

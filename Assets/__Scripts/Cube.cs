using UnityEngine;
using System.Collections;

public class Cube : MonoBehaviour {

	private float rotateSpeed = 30f;					//rotation of the cube
	private bool isRotating = true;
	private float startTime;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
//		if(Input.GetButtonDown("Fire2"))
//		{
//			RotateCube(-1f);
//		}
	}

	public void RotateCube(float dirToRotate)
	{
		StartCoroutine(StartToRotate(dirToRotate));
	}

	public IEnumerator StartToRotate(float dirToRotate)
	{
		while (isRotating) {
			transform.Rotate (transform.forward * dirToRotate, Time.deltaTime * rotateSpeed, Space.World);         //rotate the cube
			startTime += Time.deltaTime * rotateSpeed;	
				
			//Debug.Log(startTime + " is the rotate degree");
				
			//the degree to rotate
			if (startTime >= 30) {																					  //condition to stop the rotation of the cube
				isRotating = false;																				  
				startTime = 0;
			}
				
				
			yield return 0;
		}
	}
}

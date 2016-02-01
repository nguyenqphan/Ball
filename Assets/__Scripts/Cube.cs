using UnityEngine;
using System.Collections;

public class Cube : MonoBehaviour {

	private float rotateSpeed = 30f;					//rotation of the cube
	private bool isRotating = true;
	private float startTime;
	private float movingSpeed = 20f;

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
		StopAllCoroutines();
		//StopCoroutine("StartToRotate");
		startTime = 0;
		StartCoroutine(StartToRotate(dirToRotate));
		//StartCoroutine("StartToRotate");
	
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

		isRotating = !isRotating;
	}

	public void MoveCube(Vector3 targetPos)
	{
		StartCoroutine(StartToMove(targetPos));
	}

	public IEnumerator StartToMove(Vector3 targetPos)
	{
		while (transform.position != targetPos) {
			transform.position = Vector3.MoveTowards (transform.position, targetPos, movingSpeed * Time.deltaTime);

			yield return 0;
//			Debug.Log("Im still moving");
		}
	}

//	public IEnumerator ChangePosition(Vector3 currentPos, Vector3 targetPos)
//	{
//		//transform.position = Vector3.MoveTowards();
//	}
}

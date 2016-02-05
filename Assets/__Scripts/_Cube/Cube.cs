using UnityEngine;
using System.Collections;

public class Cube : MonoBehaviour {

	private float rotateSpeed = 30f;					//rotation of the cube
	private bool isRotating = true;
	private float startTime;
	private float movingSpeed = 20f;

	public void RotateCube(float dirToRotate)
	{
		StopAllCoroutines();
		startTime = 0;
		StartCoroutine(StartToRotate(dirToRotate));
	
	}

	public IEnumerator StartToRotate(float dirToRotate)
	{
		while (isRotating) {
			transform.Rotate (transform.forward * dirToRotate, Time.deltaTime * rotateSpeed, Space.World);         //rotate the cube
			startTime += Time.deltaTime * rotateSpeed;	
				
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
		BoxCollider[] boxes = gameObject.GetComponentsInChildren<BoxCollider>();		//Get all BoxColliders in ComboCube				
		foreach(BoxCollider box in boxes)
		{
			//Debug.Log(box.gameObject);
			box.enabled = false;														//Disalble all Boxcolliders when the ComboCube moves
		}


	
		while (transform.position != targetPos) {
			transform.position = Vector3.MoveTowards (transform.position, targetPos, movingSpeed * Time.deltaTime);

			yield return 0;
//			Debug.Log("Im still moving");
		}

		foreach(BoxCollider box in boxes)
		{
			box.enabled = true;															//Enable all BoxColliders in ComboCube after the cube reaches target position
		}
	}

//	public void Deactivate()
//	{
//		gameObject.SetActive(false);
//	}

	

}

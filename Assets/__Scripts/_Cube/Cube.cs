using UnityEngine;
using System.Collections;

public class Cube : MonoBehaviour {

	private float rotateSpeed = 30f;																				//rotation of the cube
	private bool isRotating = true;																					//a flag to control the rotation
	private float startTime;																						//the degree to rotate
	private float movingSpeed = 20f;																				//The speed of moving cube from a position to another

	//A method to rotate the cube
	public void RotateCube(float dirToRotate)
	{
		StopAllCoroutines();
		startTime = 0;																								//set the rotate degree to zero
		StartCoroutine(StartToRotate(dirToRotate));																	//use coroutine to call a function
	
	}

	public IEnumerator StartToRotate(float dirToRotate)
	{
		while (isRotating) {
			transform.Rotate (transform.forward * dirToRotate, Time.deltaTime * rotateSpeed, Space.World);        	//rotate the cube
			startTime += Time.deltaTime * rotateSpeed;																//keep track of the degree of rotation
	
			if (startTime >= 30) {																					//condition to stop the rotation of the cube
				isRotating = false;																				  
				startTime = 0;
			}
				
			yield return 0;								
		}

		isRotating = !isRotating;																					//set isRotating = true
	}

	//Call this method to move a cube to desired target
	public void MoveCube(Vector3 targetPos)
	{
		StartCoroutine(StartToMove(targetPos));
	}

	public IEnumerator StartToMove(Vector3 targetPos)
	{
		BoxCollider[] boxes = gameObject.GetComponentsInChildren<BoxCollider>();									//Get all BoxColliders in ComboCube				
		foreach(BoxCollider box in boxes)
		{
			box.enabled = false;																					//Disalble all Boxcolliders when the ComboCube is still moving to desired target
		}


		while (transform.position != targetPos) {
			transform.position = Vector3.MoveTowards (transform.position, targetPos, movingSpeed * Time.deltaTime);	//Moving to the target

			yield return 0;	
		}

		foreach(BoxCollider box in boxes)
		{
			box.enabled = true;																						//Enable all BoxColliders in ComboCube after the cube reaches target position
		}
	}
}

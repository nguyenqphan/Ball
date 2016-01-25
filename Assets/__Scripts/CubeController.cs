﻿using UnityEngine;
using System.Collections;

public class CubeController : MonoBehaviour {

	public float rotateSpeed = 1f;                    // The speed of cube rotation
	private float startTime = 0;					  // Stop the rotation after a specific time
	private LayerMask cube = -1;					  // Layer of the cube	
	private bool rotating = false;                    // stop or continue the rotation

	private RaycastHit hit;                           // Store the hit object's properties
	private float dirToRotate;                        // Rotate around the direction of Y

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);					//shoot a ray form the camera to a mouse position in the world

		// Debug.DrawRay(ray1.origin, ray1.direction * 100, Color.green);               //Draw a ray to debug

		if(rotating == false){

			if(Input.GetButtonDown("Fire1")){												//Check if left mouse is clicked

				if(Physics.Raycast(ray, out hit, 100, cube))								//Check if the Raycast hit any cube in 100 unit from the camera
				{
					rotating = true;														//set rotating equal true, so that we can rotate the cube
					Debug.DrawRay(ray.origin, ray.direction * 100, Color.red, 2f);          //Debug

					if(hit.collider.gameObject.tag == "LeftCube")                           //Check if the hit object is a LeftCube
					{
						dirToRotate = -1f;								
					}
					else if(hit.collider.gameObject.tag == "RightCube")                     //Check if the hit object is a RightCube
					{
						dirToRotate = 1f;
					}
				}
			}
		}
		if(rotating == true)
		{
			hit.transform.Rotate(transform.forward * dirToRotate, Time.deltaTime * rotateSpeed, Space.World);         //rotate the cube
			startTime += Time.deltaTime  * rotateSpeed;															  //the degree to rotate
			if(startTime >= 30)																					  //condition to stop the rotation of the cube
			{
				rotating = false;																				  
				startTime = 0;
			}
		}
	}


	//a function to rotate the cube
//	private void RotateCube(Collider hitObject)
//	{
//		Debug.Log("RotateAngle is call from CubeController");
//		hitObject.transform.Rotate(-transform.up * dirToRotate, Time.deltaTime * rotateSpeed , Space.World);
//	}
	
}

using UnityEngine;
using System.Collections;

public class CubeController : MonoBehaviour {

	public float rotateSpeed = 30f;                    // The speed of cube rotation
	private float startTime = 0;					  // Stop the rotation after a specific time
	public LayerMask cube = -1;					  // Layer of the cube	
	private bool rotating = false;                    // stop or continue the rotation

	private RaycastHit hit;                           // Store the hit object's properties
	private float dirToRotate;                        // Rotate around the direction of Y

	public AudioClip cubeClick;
	private AudioSource cubeClickSource;

	void Awake()
	{
		cubeClickSource = GetComponent<AudioSource>();
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);					//shoot a ray form the camera to a mouse position in the world

		// Debug.DrawRay(ray1.origin, ray1.direction * 100, Color.green);               //Draw a ray to debug

		if(rotating == false){

			if(Input.GetButtonDown("Fire1")){												//Check if left mouse is clicked
				cubeClickSource.PlayOneShot(cubeClick , 1f);
				if(Physics.Raycast(ray, out hit, 100, cube.value))								//Check if the Raycast hit any cube in 100 unit from the camera
				{
					cubeClickSource.PlayOneShot(cubeClick , 1f);
					Debug.Log(cube + "is the layermask value");
					rotating = true;														//set rotating equal true, so that we can rotate the cube
					Debug.DrawRay(ray.origin, ray.direction * 100, Color.red, 2f);          //Debug

					if(hit.collider.gameObject.CompareTag("LeftCube"))                           //Check if the hit object is a LeftCube
					{
						dirToRotate = -1f;								
					}
					else if(hit.collider.gameObject.CompareTag("RightCube"))                     //Check if the hit object is a RightCube
					{
						dirToRotate = 1f;
					}
				}
			}
		}
		if(rotating == true)
		{
			hit.transform.Rotate(transform.forward * dirToRotate, Time.deltaTime * rotateSpeed, Space.World);         //rotate the cube
			startTime += Time.deltaTime  * rotateSpeed;	

			//Debug.Log(startTime + " is the rotate degree");

			//the degree to rotate
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

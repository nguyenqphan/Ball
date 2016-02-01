using UnityEngine;
using System.Collections;

public class CameraTracker : MonoBehaviour {

	public GameObject player;

	private Vector3 velocity = Vector3.down;

	private Vector3 playerPos;									// Store the first position of the player
	private Vector3 playerPosNext;								// Store the second position of the player when it lands on the cube.
	private float distanceY;									// Store the distance of playerPos and PlayerPosNext (The distance the camera moves)


	private Vector3 offset;										
	private Vector3 playerStartPos;
	private bool cam = false;                     				// A flag whether or not to allow the camera to move.
//	private float distanceMove = 1f;							
//	private float startTime = 0f;								// The degree in which the camera rotates
//	private float camSpeed = 5f;								// Speed of camera


	void OnEnable()
	{
		EventManager.OnCamMove += PlayerLand;
		EventManager.OnPlayerLeft += PlayerLeft;
	}

	void OnDisable()
	{
		EventManager.OnCamMove -= PlayerLand;					// Listen to an event action to trigger PlayerLand function
		EventManager.OnPlayerLeft -= PlayerLeft;                // Listten to an event action to trigger PlayerLeft function 

	}

	// Use this for initialization
	void Start () 
	{
    	playerStartPos = player.transform.position;				// Get the postion of the player when the game just starts
	}

//	void FixedUpdate()
//	{
//		if(cam)
//		{
//			transform.position = transform.position + new Vector3(0f,Time.deltaTime * -1f * camSpeed , 0f);         // move the camera
//			startTime += Time.deltaTime * camSpeed;																	// The distance the camera has moved
//			if(startTime >= distanceY)																				// Condition to stop the camera, the distance to move
//			{	
//				cam = false;
//				startTime = 0;
//
//			}
//		}
//	}
//

//	void FixedUpdate()
//	{
//		if(cam)
//		{
//			transform.position = Vector3.Lerp(transform.position,(transform.position + new Vector3(transform.position.x, -1f,0f)), Time.deltaTime * 2);
//		}
//	}



	void FixedUpdate()
	{
//		if(cam)
//		{
//
//			//Using SmoothDamp to move the camera smoothly
//			transform.position = Vector3.SmoothDamp( transform.position, new Vector3(transform.position.x, playerPosNext.y, transform.position.z), ref velocity , .3f);
//		}
	}



	//
	void PlayerLand() 
	{
		cam = true;
		playerPosNext = player.transform.position;																	// 
		distanceY = Vector3.Distance(new Vector3(0f, playerStartPos.y, 0f), new Vector3(0f, playerPosNext.y, 0f )); //
		playerStartPos = playerPosNext;
		//Debug.Log(distanceY + " is the distance in y");
		MoveCamera();
	
	}

	public void MoveCamera()
	{
		
		StartCoroutine(CameraToMove());
	}

	IEnumerator CameraToMove()
	{
		yield return new WaitForSeconds(2f);
		var distanceToMove = transform.position.y - distanceY;

		while(cam)
		{
			//transform.position = Vector3.SmoothDamp( transform.position, new Vector3(transform.position.x, playerPosNext.y, transform.position.z), ref velocity , .3f);
			transform.position = Vector3.SmoothDamp( transform.position, new Vector3(transform.position.x, distanceToMove, transform.position.z), ref velocity , .4f);

			yield return 0;
		}
	
	}

	void PlayerLeft()
	{
		cam = false;
	}
	
}

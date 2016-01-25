using UnityEngine;
using System.Collections;

public class CameraTracker : MonoBehaviour {

	public GameObject player;

	private Vector3 playerPos;									// Store the first position of the player
	private Vector3 playerPosNext;								// Store the second position of the player when it lands on the cube.
	private float distanceY;									// Store the distance of playerPos and PlayerPosNext (The distance the camera moves)


	private Vector3 offset;										
	private Vector3 playerStartPos;
	private bool cam = false;                     				// A flag whether or not to allow the camera to move.
	private float distanceMove = 1f;							
	private float startTime = 0f;								// The degree in which the camera rotates
	private float camSpeed = 5f;								// Speed of camera


	void OnEnable()
	{
		CamMoveEvent.OnCamMove += PlayerLand;
		CamMoveEvent.OnPlayerLeft += PlayerLeft;
	}

	void OnDisable()
	{
		CamMoveEvent.OnCamMove -= PlayerLand;					// Listen to an event action to trigger PlayerLand function
		CamMoveEvent.OnPlayerLeft -= PlayerLeft;                // Listten to an event action to trigger PlayerLeft function 

	}

	// Use this for initialization
	void Start () 
	{
    	playerStartPos = player.transform.position;				// Get the postion of the player when the game just starts
	}

	void FixedUpdate()
	{
		if(cam)
		{
			transform.position = transform.position + new Vector3(0f,Time.deltaTime * -1f * camSpeed , 0f);         // move the camera
			startTime += Time.deltaTime * camSpeed;																	// The distance the camera has moved
			if(startTime >= distanceY)																				// Condition to stop the camera
			{
				cam = false;
				startTime = 0;

			}
		}
	}



	//
	void PlayerLand(GameObject player1) 
	{
		cam = true;
		playerPosNext = player.transform.position;																	// 
		distanceY = Vector3.Distance(new Vector3(0f, playerStartPos.y, 0f), new Vector3(0f, playerPosNext.y, 0f )); //
		playerStartPos = playerPosNext;
		Debug.Log(distanceY + " is the distance in y");
	
	}

	void PlayerLeft(GameObject player)
	{
		cam = false;
	}
	
}

using UnityEngine;
using System.Collections;

public class CameraTracker : MonoBehaviour {

	public GameObject player;
	public int frameCounter = 0;

	private Vector3 velocity = Vector3.down;
	private float smoothTime = 0.4f;

	private Vector3 playerPos;									// Store the first position of the player
	private Vector3 playerPosNext;								// Store the second position of the player when it lands on the cube.
	private float distanceY;									// Store the distance of playerPos and PlayerPosNext (The distance the camera moves)

	private Vector3 offset;										
	private Vector3 playerStartPos;                   			

	void OnEnable()
	{
		EventManager.OnCamMove += PlayerLand;
//		EventManager.OnPlayerLeft += PlayerLeft;
	}

	void OnDisable()
	{
		EventManager.OnCamMove -= PlayerLand;					// Listen to an event action to trigger PlayerLand function
//		EventManager.OnPlayerLeft -= PlayerLeft;                // Listten to an event action to trigger PlayerLeft function 

	}

	// Use this for initialization
	void Start () 
	{
    	playerStartPos = player.transform.position;				// Get the postion of the player when the game just starts
	}
		
	void PlayerLand() 
	{
		
		playerPosNext = player.transform.position;																	// 
		distanceY = Vector3.Distance(new Vector3(0f, playerStartPos.y, 0f), new Vector3(0f, playerPosNext.y, 0f )); //
		playerStartPos = playerPosNext;
		MoveCamera();
	
	}

	public void MoveCamera()
	{
		
		StopAllCoroutines();
		StartCoroutine(CameraToMove());
	}

	IEnumerator CameraToMove()
	{
		yield return new WaitForSeconds(2f);
		float distanceToMove = transform.position.y - distanceY;
		while(true)
		{	
			frameCounter++;
			transform.position = Vector3.SmoothDamp( transform.position, new Vector3(transform.position.x, distanceToMove, transform.position.z), ref velocity , smoothTime);

			yield return 0;
		}
	}

//	IEnumerator FrameCounter()
//	{
//		
//		while (true) {
//			frameCounter++;
//			yield return 0;
//		}
//	}
//	void PlayerLeft()
//	{
//		//cam = false;
//		Debug.Log(cam + "left");
////		Debug.Log(transform.position);
//	}
	
}

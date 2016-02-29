using UnityEngine;
using System.Collections;

public class EventManager : MonoBehaviour {

	//public GameObject player;

	public delegate void EventAction();
	public static event EventAction OnCamMove;
//	public static event EventAction OnPlayerLeft;
	public static event EventAction OnPlayerEnter;

	void Update()
	{
		
	}

	void OnTriggerEnter(Collider collider)
	{


			if (collider.gameObject.tag == "Player") {

			GameStateManager.HighScore++;
//			Debug.Log(GameStateManager.HighScore);
//			Debug.Log(gameObject.tag);
//			Debug.Log(collider.gameObject.tag);
//			Debug.Log(gameObject.transform.position);
				if (OnCamMove != null) {
					OnCamMove ();
				}
				if (OnPlayerEnter != null) {
					OnPlayerEnter ();	
				}		
		}
	}

	void OnTriggerExit(Collider collider)
	{
		//Debug.Log("Player has left");
//		OnPlayerLeft();	

	}
}

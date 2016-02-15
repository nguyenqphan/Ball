using UnityEngine;
using System.Collections;

public class EventManager : MonoBehaviour {

	//public GameObject player;

	public delegate void EventAction();
	public static event EventAction OnCamMove;
	public static event EventAction OnPlayerLeft;
	public static event EventAction OnPlayerEnter;

	void Update()
	{
		
	}

	void OnTriggerEnter(Collider collider)
	{


			if (collider.gameObject.tag == "Player") {
				GameManager.Instance.Score++;
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
		OnPlayerLeft();	

	}
}

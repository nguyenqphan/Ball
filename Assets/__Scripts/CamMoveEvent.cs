using UnityEngine;
using System.Collections;

public class CamMoveEvent : MonoBehaviour {

	public GameObject player;

	public delegate void CamMoveAction(GameObject player);
	public static event CamMoveAction OnCamMove;
	public static event CamMoveAction OnPlayerLeft;

	void Update()
	{

	}

	void OnTriggerEnter(Collider collider)
	{

		if(collider.gameObject.tag == "Player")
		{
			if(OnCamMove != null)
			{
				OnCamMove(collider.gameObject);
			}
		}
	}

	void OnTriggerExit(Collider collider)
	{
		Debug.Log("Player has left");
		OnPlayerLeft(collider.gameObject);	

	}
}

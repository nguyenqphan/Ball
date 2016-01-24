using UnityEngine;
using System.Collections;

public class EventListenerTest : MonoBehaviour {

	void OnEnable(){
		CamMoveEvent.OnCamMove += ResponseToEvent;
	}

	void OnDisable()
	{
		CamMoveEvent.OnCamMove -= ResponseToEvent;
	}

	// Use this for initialization
	void Start () {
	
	}

	void ResponseToEvent(GameObject player)
	{
		Debug.Log("Event is trigger From nowhere");
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}

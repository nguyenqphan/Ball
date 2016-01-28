using UnityEngine;
using System.Collections;

public class EventListenerTest : MonoBehaviour {

	void OnEnable(){
		EventManager.OnCamMove += ResponseToEvent;
	}

	void OnDisable()
	{
		EventManager.OnCamMove -= ResponseToEvent;
	}

	// Use this for initialization
	void Start () {
	
	}

	void ResponseToEvent()
	{
		Debug.Log("Event is trigger From EventListenerTest");
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}

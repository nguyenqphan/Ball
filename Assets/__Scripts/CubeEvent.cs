using UnityEngine;
using System.Collections;

public class CubeEvent : MonoBehaviour {

	public delegate void CubeAction();
	public static event CubeAction OnPlayerEnter;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter(Collider collider)
	{
		if(collider.gameObject.tag == "Player")
		{
			if(OnPlayerEnter != null)
			{
				OnPlayerEnter();
			}
		}
	}
}

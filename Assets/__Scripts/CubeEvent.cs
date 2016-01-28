//using UnityEngine;
//using System.Collections;
//
///* Attach this script to the cube so that it can detect collision and enable an event.
// * The event will be executed in the SpawnerManager Script
//*/
//
//public class CubeEvent : MonoBehaviour {
//
//	public delegate void CubeAction();
//	public static event CubeAction OnPlayerEnter;
//
//	// Use this for initialization
//	void Start () {
//	
//	}
//	
//	// Update is called once per frame
//	void Update () {
//	
//	}
//
//	void OnTriggerEnter(Collider collider)
//	{
//		if(collider.gameObject.tag == "Player")
//		{
//			if(OnPlayerEnter != null)
//			{
//				OnPlayerEnter();
//			}
//		}
//	}
//}

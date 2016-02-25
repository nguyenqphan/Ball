using UnityEngine;
using System.Collections;

public class GroundEffect : MonoBehaviour {

	public GameObject[] ground;

	void Awake(){
		
	}

	// Use this for initialization
	void Start () {
		
		GameObject newGround= Instantiate(ground[GameStateManager.Instance.TestIndex], transform.position, Quaternion.identity) as GameObject;
		newGround.transform.SetParent(gameObject.transform);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}

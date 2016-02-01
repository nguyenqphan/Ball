using UnityEngine;
using System.Collections;

public class Destroyer : MonoBehaviour {

	void OnTriggerEnter(Collider collider)
	{

		if(collider.gameObject.tag == "Player")
		{
			collider.gameObject.SetActive(false);
			Debug.Log(collider.gameObject.tag);
		}
	}
}

using UnityEngine;
using System.Collections;

public class Destroyer : MonoBehaviour {

	void OnTriggerEnter(Collider collider)
	{

		if(collider.gameObject.tag == "Player")
		{
			GameStateManager.Instance.IsStarted = false;
			collider.gameObject.SetActive(false);
//			Debug.Log(collider.gameObject.tag);
			GameStateManager.Instance.StartGame();
			GameStateManager.Instance.Restart();
		}
	}
}

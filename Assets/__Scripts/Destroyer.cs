using UnityEngine;
using System.Collections;

public class Destroyer : MonoBehaviour {

	private ShowPanels showUI;


	void OnTriggerEnter(Collider collider)
	{

		if(collider.gameObject.tag == "Player")
		{
			GameStateManager.Instance.IsStarted = true;
			collider.gameObject.SetActive(false);


			if(showUI == null){
//				Debug.Log("ShowUI is null");
				showUI = GameObject.Find("UI").GetComponent<ShowPanels>() as ShowPanels;
				showUI.ShowMenu();
			}
			else if(showUI != null){
//				Debug.Log("ShowUI is not null");
				showUI.ShowMenu();
			}
//			Debug.Log(collider.gameObject.tag);
//			Time.timeScale = 0;
//			GameStateManager.Instance.StartGame();
//			GameStateManager.Instance.Restart();
		}
	}
}

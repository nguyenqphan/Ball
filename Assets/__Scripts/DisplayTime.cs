using UnityEngine;
using System.Collections;

public class DisplayTime : MonoBehaviour {

	public void TurnOn()
	{
		gameObject.SetActive(true);
	}

	public void TurnOff()
	{
		gameObject.SetActive(false);
	}
}

using UnityEngine;
using System.Collections;

public class PlayerScaler : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter(Collider other)
	{
		StartCoroutine(ScalePlayer(other));
	}

	IEnumerator ScalePlayer(Collider other)
	{
		while(other.transform.localScale.x < 3f)
		{
			other.transform.localScale += new Vector3(Time.deltaTime * 1f, Time.deltaTime * 1f, Time.deltaTime * 1f);
			yield return 0;
		}
	}

}

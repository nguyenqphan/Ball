using UnityEngine;
using System.Collections;

public class DiamondDeactivate : MonoBehaviour {

	public delegate void EmissiveAction(GameObject gameObject);
	public static event EmissiveAction EmissiveDiamond;

	private float speed = 1f;
	[HideInInspector]
	public float resetTime = 0f;
//	public Particle emissiveDiamond;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if(gameObject.activeInHierarchy)
		{
			resetTime += Time.deltaTime * speed;
			if(resetTime >= 15)
			{
				resetTime = 0f;
				gameObject.SetActive(false);

				if(EmissiveDiamond != null)
				{
					EmissiveDiamond(gameObject);
				}
			

			}
		}
	}
}

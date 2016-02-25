using UnityEngine;
using System.Collections;

public class GetIndexCube: MonoBehaviour{

	public int index;

	void Awake()
	{
		index = GameStateManager.Instance.IndexMaterial;
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}

using UnityEngine;
using System.Collections;

public class SkyboxMaterials : MonoBehaviour {

	public Material[] materials;
	private Skybox skybox;
	// Use this for initialization

	void Awake()
	{
		skybox = GetComponent<Skybox>();
	}
	void Start () 
	{
		skybox.material = materials[4];	

	}
	
	// Update is called once per frame
	void Update () {
	}

	int randomIndex()
	{
		return Random.Range(0, materials.Length);
	}
}
	
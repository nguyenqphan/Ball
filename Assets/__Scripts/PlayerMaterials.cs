using UnityEngine;
using System.Collections;

public class PlayerMaterials : MonoBehaviour {

	public Material[] materials;
	private Renderer renderMaterial;

	void Awake()
	{
		renderMaterial = GetComponent<Renderer>();
	}

	// Use this for initialization
	void Start () {
		renderMaterial.material = materials[GameManager.Instance.TestIndex];
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	int randomIndex()
	{
		return Random.Range(0, materials.Length);
	}
}

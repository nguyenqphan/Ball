using UnityEngine;
using System.Collections;

public class CubeMaterials : MonoBehaviour {



	public Material[] materialLeft;
	public Material[] materialRight;

	private Renderer renderMaterial;
	private GetIndexCube indexCube;

	void Awake()
	{
		renderMaterial = GetComponent<Renderer>();
//		if(getIndext == null)
//		{
//			getIndext = this;
//		}
//		else if(getIndext != null)
//		{
//			
//		}

	}

	// Use this for initialization
	void Start () {

		if(gameObject.CompareTag("LeftCube"))
		{
			renderMaterial.material = materialLeft[GameManager.Instance.IndexMaterial];

		}
		else if(gameObject.CompareTag("RightCube"))
		{
			renderMaterial.material = materialRight[GameManager.Instance.IndexMaterial];
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	int randomIndex(){
		return Random.Range(0, materialLeft.Length);	
	}
}

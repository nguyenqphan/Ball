using UnityEngine;
using System.Collections;

public class Flashing : MonoBehaviour {

	private bool isFlashing = true;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
//		MeshRenderer[] meshes = gameObject.GetComponentsInChildren<MeshRenderer>();
//		foreach(MeshRenderer mesh in meshes)
//		{
//			Debug.Log(mesh.gameObject);
//			Color color	= mesh.material.color;
//			Debug.Log(color);
//			mesh.material.color = new Color.(1f,1f,1f, 1f);
//		}
	}

	public void StartFlashing()
	{
		StopAllCoroutines();
		StartCoroutine(FlashingCube());
	}

	private IEnumerator FlashingCube()
	{
		while (isFlashing) {
			MeshRenderer[] meshes = gameObject.GetComponentsInChildren<MeshRenderer> ();
			
			foreach (MeshRenderer mesh in meshes) {
				//Debug.Log(mesh.gameObject);
				Color color	= mesh.material.color;
				mesh.material.color = color * 0.1f;
				//Debug.Log(color);
				//mesh.material.color = new Color (1f, 1f, 1f, 1f) * 0.1f;
			}			
			
			yield return 1;
		}

		isFlashing = false;
	}
		
}

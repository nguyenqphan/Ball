using UnityEngine;
using System.Collections;

public class Flashing : MonoBehaviour {

	private bool isFlashing = true;
	private float timeFlashing = 0f;
	private float speedFlashing = 1f;
	private int countFlashing = 0;

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
		countFlashing = 0;
//		Debug.Log(isFlashing + " is first called");
		StartCoroutine(FlashingCube());
	}

	private IEnumerator FlashingCube()
	{
//		while (isFlashing) 
//		{
//			MeshRenderer[] meshes = gameObject.GetComponentsInChildren<MeshRenderer> ();
//			
//			foreach (MeshRenderer mesh in meshes) {
//				//Debug.Log(mesh.gameObject);
//				Color color	= mesh.material.color;
//			//	mesh.material.color = color * 0.1f;
//				mesh.material.SetColor("_EmissionColor", Color.white);
//				//Debug.Log(color);
//				//mesh.material.color = new Color (1f, 1f, 1f, 1f) * 0.1f;
//			}			
//			
//			yield return 1;
//		}

		while (isFlashing) 
		{
			Renderer[] meshes = gameObject.GetComponentsInChildren<Renderer> ();
			timeFlashing += Time.deltaTime * speedFlashing;

			foreach (Renderer mesh in meshes) {
				//Debug.Log(mesh.gameObject);
//				Color color	= mesh.material.color;
				//	mesh.material.color = color * 0.1f;
			//	mesh.material.shader = Shader.Find("Specular");
				//Debug.Log(mesh.material.shader.name);
				//mesh.material.SetColor("_EMISSION", new Color(20f,20f,20f));
				//Debug.Log("I was here");

			
			//	mesh.material.GetColor("_SpecColor");
				//mesh.material.GetColor("_EmissionColor");
				//Debug.Log(mesh.material.GetColor("_EmissionColor"));
				//Debug.Log(mesh.material.GetColor("_SpecColor"));
			//	mesh.material.shader = Shader.Find("Emission");

//				mesh.material.shader = Shader.Find("Standard");


				mesh.material.shader = Shader.Find("Specular");			//Change the shader from Standard to LegacyShaders/Specular
				if(timeFlashing < 0.4 && countFlashing < 3)
				{
					mesh.material.SetColor("_SpecColor", new Color(40f,0f,40f,40f));
				}else if(timeFlashing >= 0.4f)
				{
					mesh.material.SetColor("_SpecColor", new Color(0.5f, 0.5f, 0.5f, 1f));
					if(timeFlashing >= 1)
					{
						timeFlashing = 0f;	
						countFlashing++;
					}
				}
//
//				Color temp = new Color(mesh.material.GetColor("_Color"));
//				Debug.Log(mesh.sharedMaterial.GetColor("_Color"));
//
//			//	mesh.sharedMaterial.globalIlluminationFlags = MaterialGlobalIlluminationFlags.RealtimeEmissive;
//
//				if(timeFlashing < 0.4 && countFlashing < 3)
//				{
//					mesh.material.SetColor("_Color", new Color(1f,1f,1f, 1f));
//				//	DynamicGI.SetEmissive(mesh, new Color(1f, 0.1f, 0.5f, 1.0f) * 4f);
//
//					//DynamicGI.UpdateMaterials(mesh);
//					//DynamicGI.UpdateEnvironment();
//				}else if(timeFlashing >= 0.4f)
//				{
//					mesh.material.SetColor("_Color", 	temp);
//				//	DynamicGI.UpdateMaterials(mesh);
//				//	DynamicGI.UpdateEnvironment();
//					if(timeFlashing >= 1)
//					{
//						timeFlashing = 0f;	
//						countFlashing++;
//					}
//				}
//

//				//Debug.Log(color);
				//mesh.material.color = new Color (1f, 1f, 1f, 1f) * 0.1f;
			}			


			yield return 0;


		}

		Debug.Log(isFlashing + " is ended");    //never reach this statement


//		while (isFlashing)
//		{
//			Material[] materials = gameObject.GetComponentsInChildren<Material> ();
//						
//			foreach (Material material in materials) 
//			{
//							//Debug.Log(mesh.gameObject);
//				material.SetColor("_EmissionColor", Color.white);
//			}			
//						
//			yield return 1;
//		}


	
	}
		
}

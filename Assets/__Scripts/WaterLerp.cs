using UnityEngine;
using System.Collections;

public class WaterLerp : MonoBehaviour {

	private Renderer render;
	public Vector4 colorValue = new Vector4(0.008f, 0.0f, 0.0f, 0.0f);
	private Color newColor;

	void Awake()
	{
		render = GetComponent<Renderer>();
		Debug.Log(render.material.GetColor("_HorizonColor"));
	}

	// Use this for initialization
	void Start () {
//		render.material.shader = Shader.Find("FX/Water");
		//Debug.Log(render.material.shader.name);
		newColor = new Color( colorValue.x, colorValue.y, colorValue.z, colorValue.w);


	}
	
	// Update is called once per frame
	void Update () {
		
		render.material.shader = Shader.Find("FX/Water");
		Debug.Log(render.material.GetColor("_HorizonColor"));
//		render.material.SetColor("_HorizonColor", new Color(0.0f, 0.5f, .5f, 0f));
	//	render.material.shader = Shader.Find("FX/Water");


		render.material.SetColor("_HorizonColor", newColor);
		//Debug.Log(render.material.GetColor("_HorizonColor"));
	}
}

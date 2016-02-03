using UnityEngine;
using System.Collections;

public class CubeManager : MonoBehaviour {

	public LayerMask cubeLayerMask;


	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
		if(Input.GetButtonDown("Fire1"))
		{
			Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			RaycastHit hit;

			if(Physics.Raycast(ray, out hit, 100f, cubeLayerMask))
			{
				//GameObject parent = hit.collider.GetComponentInParent<GameObject>();
				//Debug.Log(parent);
				Cube cube = hit.collider.GetComponentInParent<Cube>();
				//Cube cube = hit.collider.GetComponentInParent<Cube>().RotateCube(1f);
				//Debug.Log(cube.GetComponentInParent<Cube>().RotateCube(1f));
				if(hit.collider.tag == "RightCube")
					cube.RotateCube(1f);
				else if(hit.collider.tag == "LeftCube")
					cube.RotateCube(-1f);
			}
		}

	}
}

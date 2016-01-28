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
				Cube cube = hit.collider.GetComponent<Cube>();
				if(hit.collider.tag == "RightCube")
					cube.RotateCube(1f);
				else if(hit.collider.tag == "LeftCube")
					cube.RotateCube(-1f);
			}
		}

	}
}

using UnityEngine;
using System.Collections;

public class CubeManager : MonoBehaviour {

	public LayerMask cubeLayerMask;				
	public AudioClip cubeClick;
	private AudioSource cubeClickSource;//LayerMask for a raycast to hit

	void Awake()
	{
		cubeClickSource = GetComponent<AudioSource>();
	}

	// Update is called once per frame
	void Update () {
	
		if(Input.GetButtonDown("Fire1"))
		{
			Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);				//a ray from camera to the mouse position in 3d scene
			RaycastHit hit;																//store the infomation of hit object

			if(Physics.Raycast(ray, out hit, 100f, cubeLayerMask))
			{
				cubeClickSource.PlayOneShot(cubeClick , .2f);
				Cube cube = hit.collider.GetComponentInParent<Cube>();					//Get the cube component of the parent
				if(hit.collider.tag == "RightCube")												
					cube.RotateCube(1f);												//rotate clockwise
				else if(hit.collider.tag == "LeftCube")
					cube.RotateCube(-1f);												//rotate counter-clockwise
			}
		}

	}
}

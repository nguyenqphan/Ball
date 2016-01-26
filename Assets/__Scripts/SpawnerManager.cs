using UnityEngine;
using System.Collections;

public class SpawnerManager : MonoBehaviour {

	public GameObject cubeToInstantiate;


	void OnEnable()
	{
//		CamMoveEvent.OnCamMove += PlayerLand;
//		CamMoveEvent.OnPlayerLeft += PlayerLeft;

		CubeEvent.OnPlayerEnter += StartSpawnCube;
	}

	void OnDisable()
	{
		CubeEvent.OnPlayerEnter -= StartSpawnCube;
	}

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

		if(Input.GetButtonDown("Fire2"))
		{
			StartSpawnCube();
		}
	
	}

	public IEnumerator InstantiateCube()
	{
		Instantiate(cubeToInstantiate, new Vector3(2.5f, -4.5f, 0f), Quaternion.identity);

		yield return 0;
	}

	public void StartSpawnCube()
	{
		StartCoroutine(InstantiateCube());	
	}
	
}

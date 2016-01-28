using UnityEngine;
using System.Collections;

public class SpawnerManager : MonoBehaviour {

	public GameObject[] cubeToInstantiate;
	private int indexSwitch = 1;
	private Vector3 leftOffset;
	private Vector3 rightOeffet;

	private float fixedY = 0f;

	void OnEnable()
	{
		EventManager.OnPlayerEnter += StartSpawnCube;
	}

	void OnDisable()
	{
		EventManager.OnPlayerEnter -= StartSpawnCube;
	}

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

	}

	public IEnumerator InstantiateCube()
	{
		fixedY += -4.5f;

		Instantiate(cubeToInstantiate[indexSwitch], new Vector3(0f, -4.5f, 0f), Quaternion.identity);

		yield return 2;
	}

	public void StartSpawnCube()
	{
		if(indexSwitch == 1)
			indexSwitch = 0;
		else if(indexSwitch == 0)
			indexSwitch = 1;
		StartCoroutine(InstantiateCube());	
		//StopCoroutine(InstantiateCube());
	}


	
}

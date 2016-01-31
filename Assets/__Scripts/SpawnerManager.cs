using UnityEngine;
using System.Collections;

public class SpawnerManager : MonoBehaviour {

	public GameObject[] cubeToInstantiate;
	private int indexSwitch = 1;
	private Vector3 leftOffset;
	private Vector3 rightOeffet;

	private float fixedY = 0f;
	private float fixedX;

	void OnEnable()
	{

		//Debug.Log("Enable OnplayerEnter");
		EventManager.OnPlayerEnter += StartSpawnCube;
		//EventManager.OnPlayerEnter += StartSpawnCube;
		//EventManager.OnPlayerEnter += StartSpawnCube;
	}

	void OnDisable()
	{
		//Debug.Log("Disable OnPlayerEnter");
		EventManager.OnPlayerEnter -= StartSpawnCube;
	}

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

	}

//	private IEnumerator InstantiateCube()
//	{
//		//fixedY += -4.5f;
//
//		GameObject newCube = Instantiate(cubeToInstantiate[indexSwitch], transform.position, Quaternion.identity) as GameObject;
//
//		yield return 0;
//	}
//


	public void StartSpawnCube()
	{
		if(indexSwitch == 1){
			indexSwitch = 0;
			fixedX = 2.5f;
		}else { if(indexSwitch == 0)
			indexSwitch = 1;
			fixedX = -2.5f;
		}

		GameObject newCube = Instantiate(cubeToInstantiate[indexSwitch], transform.position, Quaternion.identity) as GameObject;
		Cube cube = newCube.GetComponent<Cube>();
		cube.MoveCube(targetPosition());
	}

	Vector3 targetPosition(){
		fixedY += -4.5f;
		return new Vector3(fixedX, fixedY, 0f);
	}

//	private IEnumerator InstantiateCube()
//	{
//		fixedY += -4.5f;
//
//		Instantiate(cubeToInstantiate[indexSwitch], new Vector3(fixedX, fixedY, 0f), Quaternion.identity);
//
//		yield return 0;
//	}
//
//
//
//	public void StartSpawnCube()
//	{
//		if(indexSwitch == 1){
//			indexSwitch = 0;
//			fixedX = 2.5f;
//		}else { if(indexSwitch == 0)
//			indexSwitch = 1;
//			fixedX = -2.5f;
//		}
//		StartCoroutine(InstantiateCube());
//	}


	
}

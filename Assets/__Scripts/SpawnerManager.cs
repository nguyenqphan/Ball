using UnityEngine;
using System.Collections;

public class SpawnerManager : MonoBehaviour {
	

	public GameObject[] cubeToInstantiate;
	private int indexSwitch = 0;
	private Vector3 leftOffset;
	private Vector3 rightOeffet;

	private float fixedY = 0f;
	private float fixedX;

	void OnEnable()
	{

		EventManager.OnPlayerEnter += StartSpawnCube;
	}

	void OnDisable()
	{
		EventManager.OnPlayerEnter -= StartSpawnCube;
	}
		
	public void StartSpawnCube()
	{
		if(indexSwitch == 1){
			indexSwitch = 0;
			fixedX = 2.5f;
		}else { if(indexSwitch == 0)
			indexSwitch = 1;
			fixedX = -2.5f;
		}
			
		StartCoroutine(InstantiateCube());
	}

	Vector3 targetPosition(){
		fixedY += -3.5f;
		return new Vector3(fixedX, fixedY, 0f);
	}

	private IEnumerator InstantiateCube()
	{

		yield return new WaitForSeconds(3f);

		GameObject newCube = Instantiate(cubeToInstantiate[indexSwitch], transform.position, Quaternion.identity) as GameObject;
		Cube cube = newCube.GetComponent<Cube>();
		cube.MoveCube(targetPosition());

		yield return 0;
	}


	
}

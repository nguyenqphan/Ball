using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SpawnerManager : MonoBehaviour {
	

	public GameObject cubeToInstantiate;

	private List<GameObject> cubeList;
	private int pooledAmount = 5;

	private int indexSwitch = 0;
	private Vector3 leftOffset;
	private Vector3 rightOeffet;

	private float fixedY = 2f;
	private float fixedX;

	void OnEnable()
	{

		EventManager.OnPlayerEnter += StartSpawnCube;
	}

	void OnDisable()
	{
		EventManager.OnPlayerEnter -= StartSpawnCube;
	}
		
	void Start()
	{
		cubeList = new List<GameObject>();
		for(int i = 0; i < pooledAmount; i++)
		{
			GameObject newCube = Instantiate(cubeToInstantiate, transform.position, Quaternion.identity) as GameObject;
			newCube.SetActive(false);
			cubeList.Add(newCube);
		}
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
		fixedY += -5.5f;
		return new Vector3(fixedX, fixedY, 0f);
	}

//	private IEnumerator InstantiateCube()
//	{
//
//		yield return new WaitForSeconds(3f);
//
//		GameObject newCube = Instantiate(cubeToInstantiate, transform.position, Quaternion.identity) as GameObject;
//		Cube cube = newCube.GetComponent<Cube>();
//		cube.MoveCube(targetPosition());
//
//		yield return 0;
//	}

	private IEnumerator InstantiateCube()
	{
	
		yield return new WaitForSeconds(3f);
			
		for(int i =0; i < cubeList.Count; i++)
		{
			if(!cubeList[i].activeInHierarchy)
			{
				cubeList[i].transform.position = transform.transform.position;
				cubeList[i].transform.rotation = transform.transform.rotation;
				cubeList[i].SetActive(true);
				Cube cube = cubeList[i].GetComponent<Cube>();
				cube.MoveCube(targetPosition());
				break;
			}
		}

		//Cube cube = cubeList[i].GetComponent<Cube>();
	
			//GameObject newCube = Instantiate(cubeToInstantiate, transform.position, Quaternion.identity) as GameObject;
			//Cube cube = newCube.GetComponent<Cube>();
		//	cube.MoveCube(targetPosition());
	
			yield return 0;
	}


}

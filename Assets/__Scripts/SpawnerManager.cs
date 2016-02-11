using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SpawnerManager : MonoBehaviour {
	
	public GameObject cubeToInstantiate;
	public GameObject cubeParticle;

	private List<GameObject> cubeList;
	private List<GameObject> particleList;

	private int pooledAmount = 7;

	private int indexSwitch = 0;
	private Vector3 leftOffset;
	private Vector3 rightOeffet;

	private float fixedY = 2f;
	private float fixedX;

	void OnEnable()
	{

		EventManager.OnPlayerEnter += StartSpawnCube;
		Deactivator.Emissive += PlayCubeEffect;
	}

	void OnDisable()
	{
		EventManager.OnPlayerEnter -= StartSpawnCube;
		Deactivator.Emissive -= PlayCubeEffect;
	}
		
	void Start()
	{
		cubeList = new List<GameObject>();
		particleList = new List<GameObject>();

		for(int i = 0; i < pooledAmount; i++)
		{
			GameObject newCube = Instantiate(cubeToInstantiate, transform.position, Quaternion.identity) as GameObject;
			GameObject newParticle = Instantiate(cubeParticle, transform.position, Quaternion.identity) as GameObject;

			newCube.SetActive(false);
			newParticle.SetActive(false);

			cubeList.Add(newCube);
			particleList.Add(newParticle);
		}
	}

	public void PlayCubeEffect(GameObject o)
	{

		//StopAllCoroutines();
		StartCoroutine(InstantiateEffect(o));
		
	}


	private IEnumerator InstantiateEffect(GameObject o)
	{
		for(int i = 0; i < particleList.Count; i++)
		{
			if(!particleList[i].activeInHierarchy)
			{
				particleList[i].transform.position = o.transform.position;
				particleList[i].transform.rotation = o.transform.rotation;
				particleList[i].SetActive(true);
				break;
			}
		}

		yield return 0;
			
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
		//fixedY += -randomFixedY();
		fixedY += -4.5f;
		return new Vector3(fixedX, fixedY, 0f);
	}

	int randomFixedY()
	{
		return Random.Range(5, 10);
	}

	float randonDegree()
	{
		return Random.Range(-30f, 30f);;
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
				cubeList[i].transform.position = transform.position;
				cubeList[i].transform.rotation = Quaternion.Euler(0f, 0f, randonDegree());
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

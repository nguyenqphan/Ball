using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SpawnerManager : MonoBehaviour {
	
	public GameObject cubeToInstantiate;
	public GameObject cubeParticle;
	public GameObject diamond;

	private List<GameObject> cubeList;
	private List<GameObject> particleList;
	private List<GameObject> diamondList;

	private int pooledAmount = 5;

	private int indexSwitch = 0;
	private Vector3 leftOffset;
	private Vector3 rightOeffet;
	private Vector3 position;

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
		diamondList = new List<GameObject>();

		for(int i = 0; i < pooledAmount; i++)
		{
			GameObject newCube = Instantiate(cubeToInstantiate, transform.position, Quaternion.identity) as GameObject;
			GameObject newParticle = Instantiate(cubeParticle, transform.position, Quaternion.identity) as GameObject;
			GameObject newDiamond = Instantiate(diamond, transform.position, Quaternion.identity) as GameObject;

			newCube.SetActive(false);
			newParticle.SetActive(false);
			newDiamond.SetActive(false);

			cubeList.Add(newCube);
			particleList.Add(newParticle);
			diamondList.Add(newDiamond);
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

	Vector3 diamondPos()
	{
		if(fixedX > 0)
			return position + new Vector3(2f, 2.5f, 0f);
		else if(fixedX < 0)
			return position + new Vector3(-2f, 2.5f, 0f);
		return Vector3.zero;										//never reach this statement
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
		position = targetPosition();
		StartCoroutine(InstantiateDiamond());
	
		yield return new WaitForSeconds(3f);
			
		for(int i =0; i < cubeList.Count; i++)
		{
			if(!cubeList[i].activeInHierarchy)
			{
				cubeList[i].transform.position = transform.position;
				cubeList[i].transform.rotation = Quaternion.Euler(0f, 0f, randonDegree());
				cubeList[i].SetActive(true);
				Cube cube = cubeList[i].GetComponent<Cube>();

				cube.MoveCube(position);
				break;
			}
		}

		//Cube cube = cubeList[i].GetComponent<Cube>();
	
			//GameObject newCube = Instantiate(cubeToInstantiate, transform.position, Quaternion.identity) as GameObject;
			//Cube cube = newCube.GetComponent<Cube>();
		//	cube.MoveCube(targetPosition());
	
			yield return 0;
	}

	private IEnumerator InstantiateDiamond()
	{
		for(int i = 0; i < diamondList.Count; i++)
		{
			if(!diamondList[i].activeInHierarchy)
			{
				diamondList[i].transform.position = transform.position;
				diamondList[i].transform.rotation = Quaternion.Euler(270f, 0f, 0f);;
				diamondList[i].SetActive(true);
				Diamond diamondScript = diamondList[i].GetComponent<Diamond>();
				diamondScript.MoveDiamond(diamondPos());
				break;
			}
		}

		yield return 0;
	}


}

using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SpawnerManager : MonoBehaviour {


	
	public GameObject cubeToInstantiate;
	public GameObject cubeParticle;
	public GameObject diamond;
	public GameObject diaEmissive;
	public GameObject diaBreaking;
	public GameObject ball;
	public GameObject ballExplode;

	private List<GameObject> cubeList;
	private List<GameObject> particleList;
	private List<GameObject> diamondList;
	private List<GameObject> diaEmissiveList;
	private List<GameObject> diaBreakingList;
	private List<GameObject> ballList;
	private List<GameObject> ballExplodeList;

	private int pooledAmount = 4;
	private int ballAmount = 2;
	private int diamondAmount = 8;

	private int indexSwitch = 1;
	private Vector3 leftOffset;
	private Vector3 rightOeffet;
	private Vector3 position;


	private float fixedY = 4f;
	private float fixedX;

	private float wait = 3f;
	private float spawnTime = 0f;				
	private float speedTime = 1f;
	private bool firstSpawn = true;

	private int spawnNumber = 0;
	private int ballNumber;


	void OnEnable()
	{

		EventManager.OnPlayerEnter += StartSpawnCube;
		Deactivator.Emissive += PlayCubeEffect;
		DiamondDeactivate.EmissiveDiamond += PlayerDiamondEmissive;
		Diamond.BreakingDiamond += PlayDiamondBreaking;
		Ball.ExplodeBall += PlayExplodeBall;
	}

	void OnDisable()
	{
		EventManager.OnPlayerEnter -= StartSpawnCube;
		Deactivator.Emissive -= PlayCubeEffect;
		DiamondDeactivate.EmissiveDiamond -= PlayerDiamondEmissive;
		Diamond.BreakingDiamond -= PlayDiamondBreaking;
		Ball.ExplodeBall -= PlayExplodeBall;
	}
		
	void Start()
	{
		ballNumber = RandomSpawnNum();

		cubeList = new List<GameObject>();
		particleList = new List<GameObject>();
		diamondList = new List<GameObject>();
		diaEmissiveList = new List<GameObject>();
		diaBreakingList = new List<GameObject>();
		ballList = new List<GameObject>();
		ballExplodeList = new List<GameObject>();

		for(int i = 0; i < pooledAmount; i++)
		{
			GameObject newCube = Instantiate(cubeToInstantiate, transform.position, Quaternion.identity) as GameObject;
			GameObject newParticle = Instantiate(cubeParticle, transform.position, Quaternion.identity) as GameObject;

			newCube.SetActive(false);
			newParticle.SetActive(false);

			cubeList.Add(newCube);
			particleList.Add(newParticle);
		}

		for(int i = 0; i < diamondAmount; i++)
		{
			GameObject newDiamond = Instantiate(diamond, transform.position, Quaternion.identity) as GameObject;
			GameObject newDiaEmissive = Instantiate(diaEmissive, transform.position, Quaternion.identity) as GameObject;
			GameObject newDiaBreaking = Instantiate(diaBreaking, transform.position, Quaternion.identity) as GameObject;

			newDiamond.SetActive(false);
			newDiaEmissive.SetActive(false);
			newDiaBreaking.SetActive(false);

			diamondList.Add(newDiamond);
			diaEmissiveList.Add(newDiaEmissive);
			diaBreakingList.Add(newDiaBreaking);
		}

		for(int j = 0; j < ballAmount; j++)
		{
			GameObject newBall = Instantiate(ball, transform.position, Quaternion.identity) as GameObject;
			GameObject newBallExplode = Instantiate(ballExplode, transform.position, Quaternion.identity) as GameObject;

			newBall.SetActive(false);
			newBallExplode.SetActive(false);

			ballList.Add(newBall);
			ballExplodeList.Add(newBallExplode);
		}
	} 

	void Update()
	{
		spawnTime += Time.deltaTime * speedTime;
		//Debug.Log(spawnTime);
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

	public void PlayerDiamondEmissive(GameObject o)
	{
		StartCoroutine(InstantiateDiamondEmissive(o));
	}

	private IEnumerator InstantiateDiamondEmissive(GameObject o)
	{
		for(int i =0; i < diaEmissiveList.Count; i++)
		{
			if(!diaEmissiveList[i].activeInHierarchy)
			{
				diaEmissiveList[i].transform.position = o.transform.position;
				diaEmissiveList[i].transform.rotation = o.transform.rotation;
				diaEmissiveList[i].SetActive(true);
				break;
			}
		}

		yield return 0;
	}

	public void PlayExplodeBall(GameObject o)
	{
		StartCoroutine(InstantiateBallExplode(o));
	}

	private IEnumerator InstantiateBallExplode(GameObject o)
	{
		for(int i = 0; i < ballExplodeList.Count; i++)
		{
			if(!ballExplodeList[i].activeInHierarchy)
			{
				ballExplodeList[i].transform.position = o.transform.position;
				ballExplodeList[i].transform.rotation = o.transform.rotation;
				ballExplodeList[i].SetActive(true);
			}
			break;
		}
			
		yield return 0;
	}

	public void PlayDiamondBreaking(GameObject o)
	{
		StartCoroutine(InstantiateDiamondBreaking(o));
	}

	private IEnumerator InstantiateDiamondBreaking(GameObject o)
	{
		for(int i = 0; i < diaBreakingList.Count; i++)
		{
			if(!diaBreakingList[i].activeInHierarchy)
			{
				diaBreakingList[i].transform.position = o.transform.position;
				diaBreakingList[i].transform.rotation = o.transform.rotation;
				diaBreakingList[i].SetActive(true);
				break;
			}
		}

		yield return 0;
	}

	public void StartSpawnCube()
	{
		if (firstSpawn || spawnTime >= wait) {
			spawnTime = 0f;
			firstSpawn = false;
			if (indexSwitch == 1) {
				indexSwitch = 0;
				fixedX = 2.5f;
			} else {
				if (indexSwitch == 0)
					indexSwitch = 1;
				fixedX = -2.5f;
			}

			spawnNumber++;
			StartCoroutine (InstantiateCube ());	
		}
	}

	Vector3 targetPosition(){

		if(GameStateManager.Instance.IsStarted){
			fixedY += -randomFixedY();
		}else{
			fixedY += - 5.5f;
		}



		//fixedY += -4.5f;
		return new Vector3(fixedX, fixedY, 0f);
	}

	Vector3 diamondPos()
	{
		if(fixedX > 0)
			return position + new Vector3(1.5f, 2.5f, 0f);
		else if(fixedX < 0)
			return position + new Vector3(-1.5f, 2.5f, 0f);
		return Vector3.zero;										//never reach this statement
	}

	Vector3 diamondPos2()
	{
		if(fixedX > 0)
			return position + new Vector3(2.5f, 3.0f, 0f);
		else if(fixedX < 0)
			return position + new Vector3(-2.5f, 3.0f, 0f);
		return Vector3.zero;										//nver reach this statement
	}

	Vector3 ballPos()
	{
			return position + new Vector3(0f, 1.5f, 0f );
	}

	Vector3 camPos()
	{
		return 	Vector3.zero	;
	}

	int randomFixedY()
	{
		return Random.Range(5, 10);
	}

	float randonDegree()
	{
		return Random.Range(-30f, 30f);;
	}

	private IEnumerator InstantiateCube()
	{
		position = targetPosition();
		StartCoroutine(InstantiateDiamond());

		//Condition to Spawn ball
//		if(GameManager.Instance.Score == 1 || GameManager.Instance.Score == 0)
//		{
//			StartCoroutine(InstantiateBall());
//		}
		//Condition to instantiate a scalling ball
		if(spawnNumber%2 == 0)
		{
			StartCoroutine(InstantiateBall());
		}
	
		yield return new WaitForSeconds(3f);
			
		for(int i =0; i < cubeList.Count; i++)
		{
			if(!cubeList[i].activeInHierarchy)
			{
				cubeList[i].transform.position = transform.position;
//				cubeList[i].transform.rotation = Quaternion.Euler(0f, 0f, randonDegree());
				cubeList[i].transform.rotation = transform.rotation;
				cubeList[i].SetActive(true);
				Cube cube = cubeList[i].GetComponent<Cube>();

//				cube.tag
				cube.MoveCube(position);
				if(cube.gameObject.transform.position.x > 0)
				{
					cube.RightWallOn();
				}
				if(cube.gameObject.transform.position.x < 0)
				{
					cube.LeftWallOn();
				}
			
				break;
			}
		}
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

		yield return new WaitForSeconds(0.5f);

		for(int i = 0; i < diamondList.Count; i++)
		{
			if(!diamondList[i].activeInHierarchy)
			{
				diamondList[i].transform.position = transform.position;
				diamondList[i].transform.rotation = Quaternion.Euler(270f, 0f, 0f);;
				diamondList[i].SetActive(true);
				Diamond diamondScript = diamondList[i].GetComponent<Diamond>();
				diamondScript.MoveDiamond(diamondPos2());
				break;
			}
		}
	}

	private IEnumerator InstantiateBall()
	{
		yield return new WaitForSeconds(1f);

		for(int i = 0; i < ballList.Count; i++)
		{
			if(!ballList[i].activeInHierarchy)
			{
				ballList[i].transform.position = transform.position;
				ballList[i].transform.rotation = transform.rotation;
				ballList[i].transform.localScale = new Vector3(.5f,.5f,.5f);
				ballList[i].SetActive(true);
				Ball ballScript = ballList[i].GetComponent<Ball>();
				ballScript.MoveBall(ballPos());


				break;
			}
		}

		yield return 0;
	}

	private int RandomSpawnNum()
	{
		return Random.Range(8, 12);
	}

}

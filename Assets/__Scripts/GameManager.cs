using UnityEngine;
using System.Collections;

public class GameManager : Singleton<GameManager> {

	private float _timeRemaining;
		
	public float TimeRemaining
	{
		get{return _timeRemaining;}
		set{_timeRemaining = value;}
	}

	private int numCoins = 0;

	public int NumCoins{
		get{return numCoins;}
		set{numCoins = value;}
	}

	private float maxTime = 5f * 60f;

	private GameObject cube;


	void OnEnable()
	{

	}
	
	void OnDisable()
	{

	}



	void Awake()
	{

	}

	// Use this for initialization
	void Start () {
		TimeRemaining = maxTime;
	}
	
	// Update is called once per frame
	void Update () {
	
		TimeRemaining -= Time.deltaTime;
		 if(TimeRemaining <= 0)
		{
			Application.LoadLevel(Application.loadedLevel);
			TimeRemaining = maxTime;
		}
	}
}

using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class GameManager : Singleton<GameManager> {

	private int testIndex = 2;
	public int TestIndex{
		get{return testIndex;}
		set{testIndex = value;}
	}


	//the score of the game
	private int score;								//Score of the player		
	private int startScore = 0;						//score start at 0
	public int Score{								//Property to get and set score
		get{return score;}
		set{score = value;}
	}

	//The time life after the ball gets scaled
	private float ballTimer;
	private float clock = 3f;
	public float BallTimer
	{
		get{return ballTimer;}
		set{ballTimer = value;}
	}

	private float _timeRemaining;
		
	public float TimeRemaining
	{
		get{return _timeRemaining;}
		set{_timeRemaining = value;}
	}

	private int numCoins;
	private int startCoints = 0;

	public int NumCoins{
		get{return numCoins;}
		set{numCoins = value;}
	}

	private float maxTime = 5f * 60f;

	private int indexMaterial = 0;					//Array index of Materials to set up the theme of each scene

	public int IndexMaterial{						
		get{return indexMaterial;}
		set{indexMaterial = value;}
	}

	private GameObject cube;


	void OnEnable()
	{

	}
	
	void OnDisable()
	{

	}



	// Use this for initialization
	public void Start () {
		Score = startScore;									//Reset the score every time the game starts
		ballTimer = clock;
		TimeRemaining = maxTime;
		NumCoins = startCoints;
		IndexMaterial = PlayerPrefs.GetInt("IndexGame");	//Get the indexMaterial that has been save in Restart()
	}
	
	// Update is called once per frame
	void Update () {
	
		TimeRemaining -= Time.deltaTime;
		 if(TimeRemaining <= 0)
		{
			//Application.LoadLevel(Application.loadedLevel);

			TimeRemaining = maxTime;
			//Restart();
		}
	}

	public void Restart()								
	{
		if(TestIndex < 4)
		{
			TestIndex++;
		}
		else if(TestIndex >=4){
			TestIndex = 0;
		}

		//Application.LoadLevel(Application.loadedLevel);
		TimeRemaining = maxTime;
		NumCoins = numCoins;
		if(IndexMaterial <= 5)
		{
			IndexMaterial++;
		}
		else{ if(IndexMaterial > 5){
				IndexMaterial = 0;
			}
		}

//		Debug.Log(IndexMaterial);

		PlayerPrefs.SetInt("IndexGame", IndexMaterial);		//save the indexMateriasl
		SceneManager.LoadScene("FirstScene");				//Load scene

	}
}

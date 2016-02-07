using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class GameManager : Singleton<GameManager> {

	private int testIndex = 0;
	public int TestIndex{
		get{return testIndex;}
		set{testIndex = value;}
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

	private int indexMaterial = 0;

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
		TimeRemaining = maxTime;
		NumCoins = startCoints;
		IndexMaterial = PlayerPrefs.GetInt("IndexGame");
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

		PlayerPrefs.SetInt("IndexGame", IndexMaterial);
		SceneManager.LoadScene("FirstScene");

	}
}

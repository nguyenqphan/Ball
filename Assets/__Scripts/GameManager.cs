using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class GameManager : Singleton<GameManager> {

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

	private int indexMaterial;

	public int IndexMaterial{
		get{return indexMaterial = Random.Range(0, 11);}
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
	}
	
	// Update is called once per frame
	void Update () {
	
		TimeRemaining -= Time.deltaTime;
		 if(TimeRemaining <= 0)
		{
			//Application.LoadLevel(Application.loadedLevel);

			TimeRemaining = maxTime;
			Restart();
		}
	}

	public void Restart()
	{
		//Application.LoadLevel(Application.loadedLevel);
		SceneManager.LoadScene("FirstScene");
		TimeRemaining = maxTime;
		NumCoins = numCoins;
	}
}

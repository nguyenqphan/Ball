using UnityEngine;
using System.Collections;

public class WeatherDetecter : MonoBehaviour {

	private WeatherMan weatherMan;

	void Awake()
	{
		weatherMan = GameObject.Find("WeatherCreater").GetComponent<WeatherMan>();
	}


	void OnTriggerEnter(Collider collider)
	{
		if(collider.gameObject.CompareTag("Player")){
			ChooseWeather();
		}

	}


	private void ChooseWeather()
	{
		switch(GameStateManager.Instance.TestIndex)
		{
		case 0:
			weatherMan.NoSnowRain();	
			break;
		case 1:
			weatherMan.TurnOnRain();	
			break;
		case 2:
			weatherMan.NoSnowRain();
			break;
		case 3:
			weatherMan.TurnOnSnow();
			break;
		case 4: 
			weatherMan.NoSnowRain();
			break;
		case 5: 
			weatherMan.TurnOnRain();
			break;
		case 6: 
			weatherMan.NoSnowRain();
			break;
		case 7:
			weatherMan.TurnOnSnow();
			break;
		case 8:
			weatherMan.TurnOnRain();
			break;
		default: 
			weatherMan.NoSnowRain(); 
			break;
		}
	}
}

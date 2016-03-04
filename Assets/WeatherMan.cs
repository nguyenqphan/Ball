using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class WeatherMan : MonoBehaviour {


	public GameObject rainToInstantiate;
	public GameObject snowToInstantiate;

	private List<GameObject> rainList;
	private List<GameObject> snowList;

	private int amount = 2;

	// Use this for initialization
	void Start () {
		rainList = new List<GameObject>();
		snowList = new List<GameObject>();

		for(int i = 0; i < amount; i++)
		{
			GameObject newRain = Instantiate(rainToInstantiate, transform.position + new Vector3(0f, 0f, 12f), Quaternion.identity) as GameObject;
			GameObject newSnow = Instantiate(snowToInstantiate, transform.position + new Vector3(0f, 0f, 12f), Quaternion.Euler(90f, 0f, 0f)) as GameObject;

			newRain.transform.SetParent(gameObject.transform);
			newSnow.transform.SetParent(gameObject.transform);

			newRain.SetActive(false);
			newSnow.SetActive(false);

			rainList.Add(newRain);
			snowList.Add(newSnow);
		}

	}

	public void TurnOnSnow()
	{
		for(int i =0; i < snowList.Count; i++)
		{
			if(!snowList[i].activeInHierarchy)
			{
				snowList[i].SetActive(true);
				break;
			}
		}

		for(int i = 0; i < rainList.Count; i++)
		{
			if(rainList[i].activeInHierarchy)
			{
				rainList[i].SetActive(false);
			}
		}
	}

	public void TurnOnRain()
	{
		for(int i =0; i < snowList.Count; i++)
		{
			if(snowList[i].activeInHierarchy)
			{
				snowList[i].SetActive(false);
			}
		}

		for(int i = 0; i < rainList.Count; i++)
		{
			if(!rainList[i].activeInHierarchy)
			{
				rainList[i].SetActive(true);
				break;
			}
		}
	}

	public void NoSnowRain()
	{

		for(int i =0; i < snowList.Count; i++)
		{
			if(snowList[i].activeInHierarchy)
			{
				snowList[i].SetActive(false);
			}
		}

		for(int i = 0; i < rainList.Count; i++)
		{
			if(rainList[i].activeInHierarchy)
			{
				rainList[i].SetActive(false);
			}
		}
	}



}

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UpdateUI : MonoBehaviour {

	public Text timerLabel;
	public Text scoreLabel;


	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		timerLabel.text = FormatTime(GameManager.Instance.TimeRemaining);
		scoreLabel.text = GameManager.Instance.Score.ToString();
	}

	private string FormatTime(float timeInSeconds)
	{
		return string.Format("{0}:{1:00}", Mathf.FloorToInt(timeInSeconds/60), Mathf.FloorToInt(timeInSeconds%60)); 
	}
}

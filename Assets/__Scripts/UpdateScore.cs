using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UpdateScore : MonoBehaviour {

	public Text scoreLabel;
	public Text bestScoreLabel;
	public Text liveScoreLable;
	public Text timerLabel;


	// Update is called once per frame
	void Update () {
		timerLabel.text = FormatTime(GameStateManager.Instance.BallTimer);
		scoreLabel.text = GameStateManager.HighScore.ToString();
		liveScoreLable.text = GameStateManager.HighScore.ToString();
		bestScoreLabel.text = GameStateManager.Instance.BestScore.ToString();
	}

	private string FormatTime(float timeInSeconds)
	{
		return string.Format("{0}:{1:00}", Mathf.FloorToInt(timeInSeconds/60), Mathf.FloorToInt(timeInSeconds%60)); 
	}
}

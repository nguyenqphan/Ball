using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TextColor : MonoBehaviour {

	public Text scoreTextColor;
	public Text bestTextColor;
	public Text scoreDisplay;
	public Text bestDisplay;
	public Text liveScoreDisplay;

	// Use this for initialization
	void Update () {
	
		switch(GameStateManager.Instance.TestIndex)
		{
		case 0:
			scoreTextColor.color = Color.grey;
			bestTextColor.color = Color.grey;
			scoreDisplay.color = Color.yellow;
			bestDisplay.color = Color.yellow;
			liveScoreDisplay.color = Color.yellow;
			break;
		case 1: 
			scoreTextColor.color = Color.red;
			bestTextColor.color = Color.red;
			scoreDisplay.color = Color.white;
			bestDisplay.color = Color.white;
			liveScoreDisplay.color = Color.white;
			break;
		case 2:
			scoreTextColor.color = Color.gray;
			bestTextColor.color = Color.gray;
			scoreDisplay.color = Color.black;
			bestDisplay.color = Color.black;
			liveScoreDisplay.color = Color.black;
			break;
		case 3:
			scoreTextColor.color = new Color(0, 255, 255, 255);
			bestTextColor.color = new Color(0, 255, 255, 255);
			scoreDisplay.color = new Color(168, 187, 214, 255);
			bestDisplay.color = new Color(168, 187, 214, 255);
			liveScoreDisplay.color = new Color(168, 187, 214, 255);
			break;
		case 4:
			scoreTextColor.color = new Color(188, 255, 0, 255);
			bestTextColor.color =  new Color(188, 255, 0, 255);
			scoreDisplay.color = new Color(5, 100, 200, 255);
			bestDisplay.color = new Color(5, 100, 200, 255);
			liveScoreDisplay.color = new Color(5, 100, 200, 255);
			break;
		case 5:
			scoreTextColor.color =  new Color(1f, 0.4f, 0f, 1f);  //Orange
			bestTextColor.color =   new Color(1f, 0.4f, 0f, 1f);
			scoreDisplay.color =    Color.white;
			bestDisplay.color =     Color.white; 
			liveScoreDisplay.color = Color.white; 
			break;
//		case 6:
//			scoreTextColor.color =  new Color(0.7f, 0.4f, 1f, 1f);  //purple
//			bestTextColor.color =   new Color(0.7f, 0.4f, 1f, 1f);
//			scoreDisplay.color =    new Color(1f, 0.4f, 0f, 1f);
//			bestDisplay.color =     new Color(1f, 0.4f, 0f, 1f);
//			liveScoreDisplay.color = new Color(1f, 0.4f, 0f, 1f);
//			break;
		case 6:
			scoreTextColor.color =  new Color(0.7f, 0.4f, 1f, 1f);  //purple
			bestTextColor.color =   new Color(0.7f, 0.4f, 1f, 1f);
			scoreDisplay.color =    Color.black;
			bestDisplay.color =     Color.black;
			liveScoreDisplay.color = Color.black;
			break;
		case 7:
			scoreTextColor.color =  new Color(0.2f, 0.4f, 0f, 1f);  //Light Green
			bestTextColor.color =   new Color(0.2f, 0.4f, 0f, 1f);
			scoreDisplay.color =    new Color(1f, 0.4f, 0f, 1f);
			bestDisplay.color =     new Color(1f, 0.4f, 0f, 1f);
			liveScoreDisplay.color = new Color(1f, 0.4f, 0f, 1f);
			break;
		case 8:
			scoreTextColor.color =  Color.white;
			bestTextColor.color =  Color.white;
			scoreDisplay.color =  Color.cyan;
			bestDisplay.color =  Color.cyan;
			liveScoreDisplay.color = Color.cyan;
			break;
			
		default: 
			scoreTextColor.color = Color.yellow;
			bestTextColor.color = Color.yellow;
			scoreDisplay.color = Color.white;
			bestDisplay.color = Color.white;
			liveScoreDisplay.color = Color.white;
			break;
		}
	}
}

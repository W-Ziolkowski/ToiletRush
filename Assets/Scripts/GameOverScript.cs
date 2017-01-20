using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameOverScript : MonoBehaviour {

	int score = 0;
	int highScore = 0;
	public Text DisplayScore;

	void Start () {
		score = PlayerPrefs.GetInt ("Score");
		highScore = PlayerPrefs.GetInt ("HighScore");

		if (score > highScore) {
			PlayerPrefs.SetInt ("HighScore", score);
			highScore = PlayerPrefs.GetInt ("HighScore");

		}

		DisplayScore.text = "S C O R E : " + score + "\nHIGHSCORE : " + highScore;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}

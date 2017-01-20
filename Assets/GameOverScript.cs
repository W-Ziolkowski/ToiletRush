using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameOverScript : MonoBehaviour {

	int score = 0;
	public Text DisplayScore;

	void Start () {
		score = PlayerPrefs.GetInt ("Score");
		DisplayScore.text = "S C O R E : " + score;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}

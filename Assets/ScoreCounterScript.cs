using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ScoreCounterScript : MonoBehaviour {

	public Text scoreCouter;

	float score = 0;
	float time = 0;
	
	// Update is called once per frame
	void Update () {
		time = Time.deltaTime;
		score += Mathf.RoundToInt(time);
		scoreCouter.text = "S  c  o  r  e  : " + score;
	}
}

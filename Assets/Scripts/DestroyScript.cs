using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class DestroyScript : MonoBehaviour {

	public Text ScoreCounter;
	int score = 0;

    void OnTriggerEnter2D(Collider2D other) {
        
		if (other.gameObject.tag == "Obstacle") {
			score++;
		}

		Destroy(other.gameObject);

    }
		
	void DisplayScore() {
		ScoreCounter.text = "S  c  o  r  e  : " + score;
	}

	void OnDisable() {
		PlayerPrefs.SetInt ("Score", score);
	}

	void FixedUpdate() {
		DisplayScore ();
	}

}

using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class ObstacleCollisionHandler : MonoBehaviour {

    void OnTriggerEnter2D(Collider2D col) {
		if (col.tag == "Player") {
			SceneManager.LoadScene ("GameOver", LoadSceneMode.Single);
			return;
		}
    }
}

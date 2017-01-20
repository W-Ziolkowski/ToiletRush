using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class RetryButtonHandler : MonoBehaviour {

	public void OnClick() {
		SceneManager.LoadScene ("Main", LoadSceneMode.Single);
	}

}

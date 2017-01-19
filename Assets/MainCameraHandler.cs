using UnityEngine;
using System.Collections;

public class MainCameraHandler : MonoBehaviour {

	void Start () {
		Screen.autorotateToPortrait = true;
		Screen.orientation = ScreenOrientation.Portrait;
	}

    void Awake() {
        Application.targetFrameRate = 60;
    }

	void Update () {
	
	}
}

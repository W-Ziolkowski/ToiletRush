using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ToggleHandler : MonoBehaviour {

	public GameObject playerObject;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}

	public void ToggleAudio () {
        if(playerObject.GetComponent<Toggle>().isOn) {
            AudioListener.pause = false;
        }
        else {
						AudioListener.pause = true;
        }
    }
}

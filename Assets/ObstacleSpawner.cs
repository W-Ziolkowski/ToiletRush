using UnityEngine;
using System.Collections;

public class ObstacleSpawner : MonoBehaviour {

    public GameObject obstaclePrototype;

	// Use this for initialization
	void Start () {
        Instantiate(obstaclePrototype);
	}
	
	// Update is called once per frame
	void Update () {
	    
	}

    void onCollisionEnter(Collision player) {
        if (player.gameObject.tag == "Player_PROTOTYPE") Destroy(obstaclePrototype);
    }

}

using UnityEngine;
using System.Collections;

public class ObstacleCollisionHandler : MonoBehaviour {

    void OnTriggerEnter2D(Collider2D col) {
        if (col.tag == "Player") Debug.Break();
    }
}

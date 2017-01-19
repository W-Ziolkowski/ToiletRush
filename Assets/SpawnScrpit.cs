using UnityEngine;
using System.Collections;

public class SpawnScrpit : MonoBehaviour {

    public GameObject obj;

    Vector3 target;

    void Start() {
        target = new Vector3(0, 8, -0.6f);
    }
    void OnTriggerExit2D(Collider2D col) {
        Spawn();
    }

    void Spawn() {
        Instantiate(obj, target, Quaternion.identity);
    }


}

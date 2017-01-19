using UnityEngine;
using System.Collections;

public class SpawnScrpit : MonoBehaviour {

    public GameObject obj;

    void OnTriggerExit2D(Collider2D col) {
        Spawn();
    }

    void Spawn() {
        Instantiate(obj, new Vector3(0, 8, -0.6f), Quaternion.identity);
    }


}

using UnityEngine;
using System.Collections;

public class ObstacleSpawner : MonoBehaviour {
    public GameObject[] obj;
    public float spawnMin = 1f;
    public float spawnMax = 4f;
   
    void Start() {
        Invoke("Spawn", Random.Range(spawnMin, spawnMax));
    }

    void Spawn() {
        Instantiate(obj[Random.Range(0, 2)], transform.position, Quaternion.identity);
        Invoke("Spawn", Random.Range(spawnMin, spawnMax));
    }


}

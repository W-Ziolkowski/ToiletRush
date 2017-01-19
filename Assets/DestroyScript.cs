using UnityEngine;
using System.Collections;

public class DestroyScript : MonoBehaviour {

    void OnTriggerEnter2D(Collider2D other) {
        Debug.Log("chuj");
        Destroy(other.gameObject);
    }

}

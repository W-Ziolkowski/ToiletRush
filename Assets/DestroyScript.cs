using UnityEngine;
using System.Collections;

public class DestroyScript : MonoBehaviour {

    void OnTriggerEnter2D(Collider2D other) {
        if (other.gameObject) Destroy(other.gameObject);
    }

}

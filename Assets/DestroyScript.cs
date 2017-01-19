using UnityEngine;
using System.Collections;

public class DestroyScript : MonoBehaviour {

    void OnCollisionEnter2D(Collision2D other) {
        Debug.Log("chuj");
        Destroy(other.gameObject);
    }

}

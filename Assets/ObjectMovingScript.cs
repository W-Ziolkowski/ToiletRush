using UnityEngine;
using System.Collections;

public class ObjectMovingScript : MonoBehaviour {

    public float speed = 1.0f;
    private float step = 0;
    public Vector3 target;

    void Start() {
        target = new Vector3(0, -10, -0.6f);
    }
	
	void Update () {
        step = speed * Time.deltaTime;
        transform.position = Vector3.MoveTowards(transform.position, target, step);
	}
}

using UnityEngine;
using System.Collections;

public class MovePlayer : MonoBehaviour {

    private const int LEFT   = 0;
    private const int CENTER = 1;
    private const int RIGHT  = 2;
    private const float OFFSET = 1.95f;

    private int playerPosition;


    public GameObject player;

	void Start () {
        playerPosition = CENTER;

	}

    void Update() {

		for (int i = 0; i < Input.touchCount; i++) {
			Touch touch = Input.GetTouch (i);
			switch (playerPosition) {
			case CENTER:
				if ((Input.GetKeyDown (KeyCode.LeftArrow)) || (touch.position.x < Screen.width / 2)) {
					this.transform.Translate (Vector2.left * OFFSET);
					playerPosition = LEFT;
				}
				if (Input.GetKeyDown (KeyCode.RightArrow) || (touch.position.x > Screen.width / 2)) {
					this.transform.Translate (Vector2.right * OFFSET);
					playerPosition = RIGHT;
				}
				break;
			case LEFT:
				if (Input.GetKeyDown (KeyCode.RightArrow) || (touch.position.x > Screen.width / 2)) {
					this.transform.Translate (Vector2.right * OFFSET);
					playerPosition = CENTER;
				}
				break;
			case RIGHT:
				if (Input.GetKeyDown (KeyCode.LeftArrow) || (touch.position.x < Screen.width / 2)) {
					this.transform.Translate (Vector2.left * OFFSET);
					playerPosition = CENTER;
				}
				break;
			default:
				playerPosition = CENTER;
				break;
			}
		}
	}
}

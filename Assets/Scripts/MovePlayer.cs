using UnityEngine;
using System.Collections;

public class MovePlayer : MonoBehaviour {

	private const int LEFT = 0;
	private const int CENTER = 1;
	private const int RIGHT = 2;
	private const float OFFSET = 1.95f;

	private int playerPosition;


	public GameObject player;

	void Start() {
		playerPosition = CENTER;

	}

	void Update() {
		int touchNumber = Input.touchCount;

		if (touchNumber > 0) {
			for (int i = 0; i < Input.touchCount; i++) {
				Touch touch = Input.GetTouch (i);
				if (touch.phase == TouchPhase.Began) {
					switch (playerPosition) {
					case CENTER:
						if (touch.position.x < Screen.width / 2) {
							this.transform.Translate (Vector2.left * OFFSET);
							playerPosition = LEFT;
						} else if (touch.position.x > Screen.width / 2) {
							this.transform.Translate (Vector2.right * OFFSET);
							playerPosition = RIGHT;
						}
						break;
					case LEFT:
						if (touch.position.x > Screen.width / 2) {
							this.transform.Translate (Vector2.right * OFFSET);
							playerPosition = CENTER;
						}
						break;
					case RIGHT:
						if (touch.position.x < Screen.width / 2) {
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
		} else {
			switch (playerPosition) {
			case CENTER:
				if (Input.GetKeyDown(KeyCode.LeftArrow)) {
					this.transform.Translate(Vector2.left * OFFSET);
					playerPosition = LEFT;
				} else if (Input.GetKeyDown(KeyCode.RightArrow)) {
					this.transform.Translate(Vector2.right * OFFSET);
					playerPosition = RIGHT;
				}
				break;
			case LEFT:
				if (Input.GetKeyDown(KeyCode.RightArrow)) {
					this.transform.Translate(Vector2.right * OFFSET);
					playerPosition = CENTER;
				}
				break;
			case RIGHT:
				if (Input.GetKeyDown(KeyCode.LeftArrow)) {
					this.transform.Translate(Vector2.left * OFFSET);
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
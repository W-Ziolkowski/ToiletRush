using UnityEngine;
using System.Collections;

[ExecuteInEditMode]
public class PlayerBoxColor : MonoBehaviour {
	public Color ObjectColor;

	private Color currentColor;
	private Material materialColored;

	void Update() {
		if (ObjectColor != currentColor) {
			//helps stop memory leaks
			if (materialColored != null)
				//UnityEditor.AssetDatabase.DeleteAsset(UnityEditor.AssetDatabase.GetAssetPath(materialColored));

			materialColored = new Material(Shader.Find("Diffuse"));
			materialColored.color = currentColor = ObjectColor;
			this.GetComponent<Renderer>().material = materialColored;
		}
	}
}
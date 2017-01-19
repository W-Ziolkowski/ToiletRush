struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 84 classes
	//0. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//1. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//6. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//7. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//8. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//9. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//10. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//11. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//12. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//13. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//14. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//15. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//16. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//17. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//18. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//19. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//20. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//21. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//22. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//23. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//24. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//25. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//26. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//27. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//28. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//29. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//30. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//31. NavMeshAgent
	void RegisterClass_NavMeshAgent();
	RegisterClass_NavMeshAgent();

	//32. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//33. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//34. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//35. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//36. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//37. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//38. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//39. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//40. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//41. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//42. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//43. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//44. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//45. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//46. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//47. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//48. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//49. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//50. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//51. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//52. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//53. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//54. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//55. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//56. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//57. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//58. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//59. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//60. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//61. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//62. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//63. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//64. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//65. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//66. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//67. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//68. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//69. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//70. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//71. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//72. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//73. NavMeshAreas
	void RegisterClass_NavMeshAreas();
	RegisterClass_NavMeshAreas();

	//74. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//75. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//76. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//77. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//78. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//79. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//80. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//81. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//82. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

	//83. NavMeshSettings
	void RegisterClass_NavMeshSettings();
	RegisterClass_NavMeshSettings();

}

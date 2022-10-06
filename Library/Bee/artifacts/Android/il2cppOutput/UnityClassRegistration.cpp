extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AndroidJNI();
	RegisterModule_AndroidJNI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_XR();
	RegisterModule_XR();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class Material; template <> void RegisterUnityClass<Material>(const char*);
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class Object; template <> void RegisterUnityClass<Object>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderNameRegistry; template <> void RegisterUnityClass<ShaderNameRegistry>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 66 non stripped classes
	//0. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//1. Animator
	RegisterUnityClass<Animator>("Animation");
	//2. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//3. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//4. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//5. Motion
	RegisterUnityClass<Motion>("Animation");
	//6. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//7. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//8. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//9. Camera
	RegisterUnityClass<Camera>("Core");
	//10. Component
	RegisterUnityClass<Unity::Component>("Core");
	//11. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//12. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//13. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//14. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//15. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//16. GameManager
	RegisterUnityClass<GameManager>("Core");
	//17. GameObject
	RegisterUnityClass<GameObject>("Core");
	//18. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//19. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//20. InputManager
	RegisterUnityClass<InputManager>("Core");
	//21. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//22. Light
	RegisterUnityClass<Light>("Core");
	//23. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//24. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//25. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//26. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//27. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//28. Material
	RegisterUnityClass<Material>("Core");
	//29. Mesh
	RegisterUnityClass<Mesh>("Core");
	//30. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//31. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//32. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//33. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//34. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//35. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//36. Object
	//Skipping Object
	//37. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//38. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//39. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//40. RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//41. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//42. Renderer
	RegisterUnityClass<Renderer>("Core");
	//43. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//44. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//45. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//46. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//47. Shader
	RegisterUnityClass<Shader>("Core");
	//48. ShaderNameRegistry
	RegisterUnityClass<ShaderNameRegistry>("Core");
	//49. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//50. Sprite
	RegisterUnityClass<Sprite>("Core");
	//51. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//52. TagManager
	RegisterUnityClass<TagManager>("Core");
	//53. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//54. Texture
	RegisterUnityClass<Texture>("Core");
	//55. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//56. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//57. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//58. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//59. Transform
	RegisterUnityClass<Transform>("Core");
	//60. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//61. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//62. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//63. Collider
	RegisterUnityClass<Collider>("Physics");
	//64. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//65. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");

}

#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Comparison`1<UnityEngine.GameObject>
struct Comparison_1_t48F09636634857D61E406009D472941BB2A2358F;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// ARRayCastInfo
struct ARRayCastInfo_t844EA7CDF894232D13E8BEE384E6ED1E22F9EE30;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BGMManager
struct BGMManager_tAC12D03592C5AEFC175199DBA4598C8F672EBC1F;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// CFX_AutoDestructShuriken
struct CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3;
// CFX_AutoRotate
struct CFX_AutoRotate_t6DF14621E2CB1E17A063E58A98C18828CEB51D4E;
// CFX_AutoStopLoopedEffect
struct CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A;
// CFX_Demo_New
struct CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31;
// CFX_Demo_RandomDir
struct CFX_Demo_RandomDir_t1ABEE68B0005EA8768B850153F696578B50C5BE2;
// CFX_Demo_RandomDirectionTranslate
struct CFX_Demo_RandomDirectionTranslate_t3680095D7DFA9CE930384E0F1126006F7310D853;
// CFX_Demo_RotateCamera
struct CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897;
// CFX_Demo_Translate
struct CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902;
// CFX_LightFlicker
struct CFX_LightFlicker_tEF1C73B34078D5C8FBC2984F685231A483125B5B;
// CFX_LightIntensityFade
struct CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// ClossHairPosition
struct ClossHairPosition_tDD18BAD6645A06DEBC7AC24359B901E96F79B918;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DamageDestory
struct DamageDestory_tC2EFE3E71E50FA12A89F1FF15CB1660AB5939D0B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// FallowParent
struct FallowParent_t6872B57A6E408B4BE9E7825371D623EB122C5669;
// FallowPlayer
struct FallowPlayer_tCE424DA7CDF9BECC889592B5FEC63B714DEBE597;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GPS
struct GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9;
// GPSEncoder
struct GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC;
// GameManagmont
struct GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2;
// MapManager
struct MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NaviManager
struct NaviManager_t66237C24EDDC85AF696021C6F3B72A00A207D31C;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ParticleManager
struct ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneMove
struct SceneMove_tCD46F7E9A656C3821AF6CD1049B9827E5DA1AF68;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SimpleShoot
struct SimpleShoot_tA677591C78019DB63F51DD7B4009D8CDDB549A90;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TouchObject
struct TouchObject_tEB05956A439551AB14350D16300240DD005D67E6;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// CFX_AutoDestructShuriken/<CheckIfAlive>d__2
struct U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511;
// CFX_Demo_New/<>c
struct U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963;
// CFX_Demo_New/<CheckForDeletedParticles>d__25
struct U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// GPS/<GPS_On>d__25
struct U3CGPS_OnU3Ed__25_t943647160F2230F06867DA566CE879213D704670;
// GameManagmont/<LoadingScene>d__18
struct U3CLoadingSceneU3Ed__18_t8515EF245519E85A41B329FF1D29775C13691E30;
// GameManagmont/<StartExplain>d__19
struct U3CStartExplainU3Ed__19_t67F8E6921178B32C8525835513D12A1FFEA128A4;
// MapManager/<MapLoader>d__22
struct U3CMapLoaderU3Ed__22_t93457AC44B15B6F49DD1F247034577343F1FF766;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// SceneMove/<LoadingScene>d__5
struct U3CLoadingSceneU3Ed__5_t5C7361F849A1EB1B94250E0E06ABF6F4F2FBEA6A;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t48F09636634857D61E406009D472941BB2A2358F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGPS_OnU3Ed__25_t943647160F2230F06867DA566CE879213D704670_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadingSceneU3Ed__18_t8515EF245519E85A41B329FF1D29775C13691E30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadingSceneU3Ed__5_t5C7361F849A1EB1B94250E0E06ABF6F4F2FBEA6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMapLoaderU3Ed__22_t93457AC44B15B6F49DD1F247034577343F1FF766_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartExplainU3Ed__19_t67F8E6921178B32C8525835513D12A1FFEA128A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral028FACF80E052870874038642F78B9BF75689F99;
IL2CPP_EXTERN_C String_t* _stringLiteral05B8DD997BF9F7D0806A038EC22F9D13BEB77E76;
IL2CPP_EXTERN_C String_t* _stringLiteral06BCD8FA4B8BE0BE354A8799865CBCBD494302CE;
IL2CPP_EXTERN_C String_t* _stringLiteral08EF1409295A748F17C961491378A3B6215AA838;
IL2CPP_EXTERN_C String_t* _stringLiteral1AC1E3F76B7F2B6122567C226E073DA33B16FACB;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333;
IL2CPP_EXTERN_C String_t* _stringLiteral2C379C0E0A25DBFE385DA48272389BBDDDE007B4;
IL2CPP_EXTERN_C String_t* _stringLiteral4B451042E7565CB8EF371FAB2ACF159FC55CF670;
IL2CPP_EXTERN_C String_t* _stringLiteral54287729296FD3168CFB1E6D666A8BCD437DAB2C;
IL2CPP_EXTERN_C String_t* _stringLiteral56375FA18341B9900227F9216A03DB600CB77AFA;
IL2CPP_EXTERN_C String_t* _stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347;
IL2CPP_EXTERN_C String_t* _stringLiteral773C10AC7B2C7AFBFDA64607526E4F567D903BA2;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8;
IL2CPP_EXTERN_C String_t* _stringLiteralA57982DBA0ADBED33403CE51D02C305E9BF87604;
IL2CPP_EXTERN_C String_t* _stringLiteralBDCE8C33BCD824C5DFCA45729A80FEB3EFCC5F49;
IL2CPP_EXTERN_C String_t* _stringLiteralBEBC54B2B3D2A59541375C139C15B52B4B751D64;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC75E528B7B1194FE36E40028BDF14E2281AA6F82;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDFBB9DB74E567528C553B92481C6E97CB3CC5191;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C String_t* _stringLiteralFABD836E281EC1E7CD87E4589E0753091888FC9A;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTouchObject_tEB05956A439551AB14350D16300240DD005D67E6_m7E4540A216AB61548ECAC08FF80026A36CD5AE82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m57AD7BC2C74B5B0DB79D1A50B788F8BBB2EA81A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A_mEF892AE5EA6E23A4B49F932B61910B9519A940EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902_mB8168AF53999E053141A357369F4768DB5E0050E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_m95BB664799250C69381FFA5A730914BF84DF9C86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD_mFFBF06E53388BB4BA39A4299F8DFB22D079C2BE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_mCBEE22E31FA4513E11FB040E9AADCD6E718DBCA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckForDeletedParticlesU3Ed__25_System_Collections_IEnumerator_Reset_m766243C9C80375A777FE2A13B85C392B56EB0DFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckIfAliveU3Ed__2_System_Collections_IEnumerator_Reset_m8659443A2B072F0CFA4D0D77AFD3821588EE1068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGPS_OnU3Ed__25_System_Collections_IEnumerator_Reset_mFE47775A33B52BAB108C33C48F252AA39D90C410_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadingSceneU3Ed__18_System_Collections_IEnumerator_Reset_m2FE2A011D2BA96E544B1E8BBA875508B3337D5C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadingSceneU3Ed__5_System_Collections_IEnumerator_Reset_mE639EE2BDFBC87F1BB307FE34FA1EF45E0A0A561_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMapLoaderU3Ed__22_System_Collections_IEnumerator_Reset_m90431832743E4507ADFEF4F853C349E0D4FB2570_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartExplainU3Ed__19_System_Collections_IEnumerator_Reset_m91B72B82D1736BCAFEE85015AFD28033969A0FE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__16_0_m269E213B94F91F8696A3055A7EB523172900185C_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// CFX_AutoDestructShuriken/<CheckIfAlive>d__2
struct U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511  : public RuntimeObject
{
	// System.Int32 CFX_AutoDestructShuriken/<CheckIfAlive>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CFX_AutoDestructShuriken/<CheckIfAlive>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CFX_AutoDestructShuriken CFX_AutoDestructShuriken/<CheckIfAlive>d__2::<>4__this
	CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* ___U3CU3E4__this_2;
	// UnityEngine.ParticleSystem CFX_AutoDestructShuriken/<CheckIfAlive>d__2::<ps>5__2
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___U3CpsU3E5__2_3;
};

// CFX_Demo_New/<>c
struct U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963  : public RuntimeObject
{
};

struct U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_StaticFields
{
	// CFX_Demo_New/<>c CFX_Demo_New/<>c::<>9
	U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963* ___U3CU3E9_0;
	// System.Comparison`1<UnityEngine.GameObject> CFX_Demo_New/<>c::<>9__16_0
	Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* ___U3CU3E9__16_0_1;
};

// CFX_Demo_New/<CheckForDeletedParticles>d__25
struct U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0  : public RuntimeObject
{
	// System.Int32 CFX_Demo_New/<CheckForDeletedParticles>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CFX_Demo_New/<CheckForDeletedParticles>d__25::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CFX_Demo_New CFX_Demo_New/<CheckForDeletedParticles>d__25::<>4__this
	CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* ___U3CU3E4__this_2;
};

// GPS/<GPS_On>d__25
struct U3CGPS_OnU3Ed__25_t943647160F2230F06867DA566CE879213D704670  : public RuntimeObject
{
	// System.Int32 GPS/<GPS_On>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GPS/<GPS_On>d__25::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GPS GPS/<GPS_On>d__25::<>4__this
	GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* ___U3CU3E4__this_2;
};

// GameManagmont/<LoadingScene>d__18
struct U3CLoadingSceneU3Ed__18_t8515EF245519E85A41B329FF1D29775C13691E30  : public RuntimeObject
{
	// System.Int32 GameManagmont/<LoadingScene>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManagmont/<LoadingScene>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManagmont GameManagmont/<LoadingScene>d__18::<>4__this
	GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* ___U3CU3E4__this_2;
	// UnityEngine.AsyncOperation GameManagmont/<LoadingScene>d__18::<loading>5__2
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CloadingU3E5__2_3;
	// System.Single GameManagmont/<LoadingScene>d__18::<timer>5__3
	float ___U3CtimerU3E5__3_4;
};

// GameManagmont/<StartExplain>d__19
struct U3CStartExplainU3Ed__19_t67F8E6921178B32C8525835513D12A1FFEA128A4  : public RuntimeObject
{
	// System.Int32 GameManagmont/<StartExplain>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManagmont/<StartExplain>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManagmont GameManagmont/<StartExplain>d__19::<>4__this
	GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* ___U3CU3E4__this_2;
};

// MapManager/<MapLoader>d__22
struct U3CMapLoaderU3Ed__22_t93457AC44B15B6F49DD1F247034577343F1FF766  : public RuntimeObject
{
	// System.Int32 MapManager/<MapLoader>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MapManager/<MapLoader>d__22::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MapManager MapManager/<MapLoader>d__22::<>4__this
	MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest MapManager/<MapLoader>d__22::<request>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__2_3;
};

// SceneMove/<LoadingScene>d__5
struct U3CLoadingSceneU3Ed__5_t5C7361F849A1EB1B94250E0E06ABF6F4F2FBEA6A  : public RuntimeObject
{
	// System.Int32 SceneMove/<LoadingScene>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SceneMove/<LoadingScene>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SceneMove SceneMove/<LoadingScene>d__5::<>4__this
	SceneMove_tCD46F7E9A656C3821AF6CD1049B9827E5DA1AF68* ___U3CU3E4__this_2;
	// UnityEngine.AsyncOperation SceneMove/<LoadingScene>d__5::<loading>5__2
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CloadingU3E5__2_3;
	// System.Single SceneMove/<LoadingScene>d__5::<timer>5__3
	float ___U3CtimerU3E5__3_4;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LocationInfo
struct LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 
{
	// System.Double UnityEngine.LocationInfo::m_Timestamp
	double ___m_Timestamp_0;
	// System.Single UnityEngine.LocationInfo::m_Latitude
	float ___m_Latitude_1;
	// System.Single UnityEngine.LocationInfo::m_Longitude
	float ___m_Longitude_2;
	// System.Single UnityEngine.LocationInfo::m_Altitude
	float ___m_Altitude_3;
	// System.Single UnityEngine.LocationInfo::m_HorizontalAccuracy
	float ___m_HorizontalAccuracy_4;
	// System.Single UnityEngine.LocationInfo::m_VerticalAccuracy
	float ___m_VerticalAccuracy_5;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// GPSEncoder
struct GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC  : public RuntimeObject
{
	// UnityEngine.Vector2 GPSEncoder::_localOrigin
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____localOrigin_1;
	// System.Single GPSEncoder::metersPerLat
	float ___metersPerLat_2;
	// System.Single GPSEncoder::metersPerLon
	float ___metersPerLon_3;
};

struct GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC_StaticFields
{
	// GPSEncoder GPSEncoder::_singleton
	GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* ____singleton_0;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.Comparison`1<UnityEngine.GameObject>
struct Comparison_1_t48F09636634857D61E406009D472941BB2A2358F  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// ARRayCastInfo
struct ARRayCastInfo_t844EA7CDF894232D13E8BEE384E6ED1E22F9EE30  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARRayCastInfo::aRRaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___aRRaycastManager_4;
	// UnityEngine.Camera ARRayCastInfo::ArCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___ArCamera_5;
	// TouchObject ARRayCastInfo::SlimeTouch
	TouchObject_tEB05956A439551AB14350D16300240DD005D67E6* ___SlimeTouch_6;
	// GPS ARRayCastInfo::gps
	GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* ___gps_7;
	// TouchObject ARRayCastInfo::TouchSlime
	TouchObject_tEB05956A439551AB14350D16300240DD005D67E6* ___TouchSlime_8;
	// UnityEngine.GameObject ARRayCastInfo::Effect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Effect_9;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> ARRayCastInfo::hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hits_10;
	// GameManagmont ARRayCastInfo::GameManager
	GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* ___GameManager_11;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BGMManager
struct BGMManager_tAC12D03592C5AEFC175199DBA4598C8F672EBC1F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip BGMManager::Bgm2
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___Bgm2_4;
	// UnityEngine.AudioSource BGMManager::audiosource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audiosource_5;
};

// CFX_AutoDestructShuriken
struct CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean CFX_AutoDestructShuriken::OnlyDeactivate
	bool ___OnlyDeactivate_4;
};

// CFX_AutoRotate
struct CFX_AutoRotate_t6DF14621E2CB1E17A063E58A98C18828CEB51D4E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 CFX_AutoRotate::rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotation_4;
	// UnityEngine.Space CFX_AutoRotate::space
	int32_t ___space_5;
};

// CFX_AutoStopLoopedEffect
struct CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CFX_AutoStopLoopedEffect::effectDuration
	float ___effectDuration_4;
	// System.Single CFX_AutoStopLoopedEffect::d
	float ___d_5;
};

// CFX_Demo_New
struct CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Renderer CFX_Demo_New::groundRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___groundRenderer_4;
	// UnityEngine.Collider CFX_Demo_New::groundCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___groundCollider_5;
	// UnityEngine.UI.Image CFX_Demo_New::slowMoBtn
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___slowMoBtn_6;
	// UnityEngine.UI.Text CFX_Demo_New::slowMoLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___slowMoLabel_7;
	// UnityEngine.UI.Image CFX_Demo_New::camRotBtn
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___camRotBtn_8;
	// UnityEngine.UI.Text CFX_Demo_New::camRotLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___camRotLabel_9;
	// UnityEngine.UI.Image CFX_Demo_New::groundBtn
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___groundBtn_10;
	// UnityEngine.UI.Text CFX_Demo_New::groundLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___groundLabel_11;
	// UnityEngine.UI.Text CFX_Demo_New::EffectLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___EffectLabel_12;
	// UnityEngine.UI.Text CFX_Demo_New::EffectIndexLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___EffectIndexLabel_13;
	// UnityEngine.GameObject[] CFX_Demo_New::ParticleExamples
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___ParticleExamples_14;
	// System.Int32 CFX_Demo_New::exampleIndex
	int32_t ___exampleIndex_15;
	// System.Boolean CFX_Demo_New::slowMo
	bool ___slowMo_16;
	// UnityEngine.Vector3 CFX_Demo_New::defaultCamPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultCamPosition_17;
	// UnityEngine.Quaternion CFX_Demo_New::defaultCamRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___defaultCamRotation_18;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CFX_Demo_New::onScreenParticles
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___onScreenParticles_19;
};

// CFX_Demo_RandomDir
struct CFX_Demo_RandomDir_t1ABEE68B0005EA8768B850153F696578B50C5BE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 CFX_Demo_RandomDir::min
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___min_4;
	// UnityEngine.Vector3 CFX_Demo_RandomDir::max
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___max_5;
};

// CFX_Demo_RandomDirectionTranslate
struct CFX_Demo_RandomDirectionTranslate_t3680095D7DFA9CE930384E0F1126006F7310D853  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CFX_Demo_RandomDirectionTranslate::speed
	float ___speed_4;
	// UnityEngine.Vector3 CFX_Demo_RandomDirectionTranslate::baseDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___baseDir_5;
	// UnityEngine.Vector3 CFX_Demo_RandomDirectionTranslate::axis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis_6;
	// System.Boolean CFX_Demo_RandomDirectionTranslate::gravity
	bool ___gravity_7;
	// UnityEngine.Vector3 CFX_Demo_RandomDirectionTranslate::dir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir_8;
};

// CFX_Demo_RotateCamera
struct CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CFX_Demo_RotateCamera::speed
	float ___speed_5;
	// UnityEngine.Transform CFX_Demo_RotateCamera::rotationCenter
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rotationCenter_6;
};

struct CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields
{
	// System.Boolean CFX_Demo_RotateCamera::rotating
	bool ___rotating_4;
};

// CFX_Demo_Translate
struct CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CFX_Demo_Translate::speed
	float ___speed_4;
	// UnityEngine.Vector3 CFX_Demo_Translate::rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotation_5;
	// UnityEngine.Vector3 CFX_Demo_Translate::axis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis_6;
	// System.Boolean CFX_Demo_Translate::gravity
	bool ___gravity_7;
	// UnityEngine.Vector3 CFX_Demo_Translate::dir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir_8;
};

// CFX_LightFlicker
struct CFX_LightFlicker_tEF1C73B34078D5C8FBC2984F685231A483125B5B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean CFX_LightFlicker::loop
	bool ___loop_4;
	// System.Single CFX_LightFlicker::smoothFactor
	float ___smoothFactor_5;
	// System.Single CFX_LightFlicker::addIntensity
	float ___addIntensity_6;
	// System.Single CFX_LightFlicker::minIntensity
	float ___minIntensity_7;
	// System.Single CFX_LightFlicker::maxIntensity
	float ___maxIntensity_8;
	// System.Single CFX_LightFlicker::baseIntensity
	float ___baseIntensity_9;
};

// CFX_LightIntensityFade
struct CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CFX_LightIntensityFade::duration
	float ___duration_4;
	// System.Single CFX_LightIntensityFade::delay
	float ___delay_5;
	// System.Single CFX_LightIntensityFade::finalIntensity
	float ___finalIntensity_6;
	// System.Single CFX_LightIntensityFade::baseIntensity
	float ___baseIntensity_7;
	// System.Boolean CFX_LightIntensityFade::autodestruct
	bool ___autodestruct_8;
	// System.Single CFX_LightIntensityFade::p_lifetime
	float ___p_lifetime_9;
	// System.Single CFX_LightIntensityFade::p_delay
	float ___p_delay_10;
};

// ClossHairPosition
struct ClossHairPosition_tDD18BAD6645A06DEBC7AC24359B901E96F79B918  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image ClossHairPosition::CrossHair
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CrossHair_4;
};

// DamageDestory
struct DamageDestory_tC2EFE3E71E50FA12A89F1FF15CB1660AB5939D0B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FallowParent
struct FallowParent_t6872B57A6E408B4BE9E7825371D623EB122C5669  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FallowPlayer
struct FallowPlayer_tCE424DA7CDF9BECC889592B5FEC63B714DEBE597  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject FallowPlayer::Player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Player_4;
	// System.Single FallowPlayer::offsetX
	float ___offsetX_5;
	// System.Single FallowPlayer::offsetY
	float ___offsetY_6;
	// System.Single FallowPlayer::offsetZ
	float ___offsetZ_7;
};

// GPS
struct GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GPS::maxWaitTime
	float ___maxWaitTime_5;
	// System.Single GPS::resendTime
	float ___resendTime_6;
	// System.Single GPS::latitude
	float ___latitude_7;
	// System.Single GPS::longitude
	float ___longitude_8;
	// System.Single GPS::waitTime
	float ___waitTime_9;
	// UnityEngine.Vector3 GPS::UCS
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___UCS_10;
	// System.Boolean GPS::receiveGPS
	bool ___receiveGPS_11;
	// UnityEngine.Vector2 GPS::GPSOrigin
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___GPSOrigin_12;
	// System.Boolean GPS::isGPSOrigin
	bool ___isGPSOrigin_13;
	// UnityEngine.GameObject GPS::Slime
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Slime_14;
	// UnityEngine.GameObject[] GPS::SpawnPoint
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___SpawnPoint_15;
	// UnityEngine.Vector3 GPS::UCS_Go
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___UCS_Go_16;
	// System.Boolean GPS::isGo
	bool ___isGo_17;
	// TouchObject GPS::touchslime
	TouchObject_tEB05956A439551AB14350D16300240DD005D67E6* ___touchslime_18;
	// GameManagmont GPS::GameManager
	GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* ___GameManager_19;
	// BGMManager GPS::bgm
	BGMManager_tAC12D03592C5AEFC175199DBA4598C8F672EBC1F* ___bgm_20;
	// UnityEngine.GameObject GPS::SettingButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SettingButton_21;
	// UnityEngine.GameObject GPS::GunObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GunObject_22;
	// MapManager GPS::mapmanager
	MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* ___mapmanager_23;
	// UnityEngine.GameObject GPS::Navi
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Navi_24;
	// System.Int32 GPS::CountSlime
	int32_t ___CountSlime_25;
	// System.Boolean GPS::LastExplain
	bool ___LastExplain_26;
};

struct GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_StaticFields
{
	// GPS GPS::instance
	GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* ___instance_4;
};

// GameManagmont
struct GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] GameManagmont::Explain
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Explain_4;
	// System.Int32 GameManagmont::ProcedureOfExplain
	int32_t ___ProcedureOfExplain_5;
	// UnityEngine.GameObject GameManagmont::ExplainCnavas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ExplainCnavas_6;
	// UnityEngine.GameObject GameManagmont::Setting
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Setting_7;
	// UnityEngine.UI.Slider GameManagmont::LoadingBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___LoadingBar_8;
	// UnityEngine.GameObject GameManagmont::CrossHair
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CrossHair_9;
	// TMPro.TMP_Text GameManagmont::CountSlime
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___CountSlime_10;
	// System.Boolean GameManagmont::isExplain
	bool ___isExplain_11;
	// System.Boolean GameManagmont::isSetting
	bool ___isSetting_12;
	// System.Int32 GameManagmont::CountSlime_int
	int32_t ___CountSlime_int_13;
};

// MapManager
struct MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.RawImage MapManager::mapRawImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___mapRawImage_4;
	// System.String MapManager::strBaseURL
	String_t* ___strBaseURL_5;
	// System.String MapManager::latitude
	String_t* ___latitude_6;
	// System.String MapManager::longitude
	String_t* ___longitude_7;
	// System.Int32 MapManager::level
	int32_t ___level_8;
	// System.Int32 MapManager::mapWidth
	int32_t ___mapWidth_9;
	// System.Int32 MapManager::mapHeight
	int32_t ___mapHeight_10;
	// System.String MapManager::strAPIKey
	String_t* ___strAPIKey_11;
	// System.String MapManager::secretKey
	String_t* ___secretKey_12;
	// GPS MapManager::gps
	GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* ___gps_13;
	// UnityEngine.Vector2 MapManager::gpsVec
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___gpsVec_14;
	// UnityEngine.Vector2 MapManager::TempgpsVec
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___TempgpsVec_15;
	// UnityEngine.GameObject MapManager::MapPin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MapPin_16;
	// System.Boolean MapManager::OnClickPlusMinusButton
	bool ___OnClickPlusMinusButton_17;
	// System.Boolean MapManager::MapCloseUp
	bool ___MapCloseUp_18;
	// System.Boolean MapManager::MapCloseUpSetting
	bool ___MapCloseUpSetting_19;
	// UnityEngine.UI.Image MapManager::Plus
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___Plus_20;
	// UnityEngine.UI.Image MapManager::Minus
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___Minus_21;
	// GameManagmont MapManager::GameManager
	GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* ___GameManager_22;
	// UnityEngine.UI.Image MapManager::MapPinImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___MapPinImage_23;
};

// NaviManager
struct NaviManager_t66237C24EDDC85AF696021C6F3B72A00A207D31C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] NaviManager::SpawnPoint
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___SpawnPoint_4;
	// System.Boolean NaviManager::FindSlime
	bool ___FindSlime_5;
	// System.Single[] NaviManager::shortDir
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___shortDir_6;
	// System.Single NaviManager::temp
	float ___temp_7;
	// System.Boolean NaviManager::SetShort
	bool ___SetShort_8;
	// UnityEngine.GameObject NaviManager::tempGameobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tempGameobject_9;
	// GameManagmont NaviManager::gamemanager
	GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* ___gamemanager_10;
};

// ParticleManager
struct ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.ParticleSystem ParticleManager::particleObject
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleObject_4;
};

// SceneMove
struct SceneMove_tCD46F7E9A656C3821AF6CD1049B9827E5DA1AF68  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneMove::StartMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___StartMenu_4;
	// UnityEngine.UI.Slider SceneMove::LoadingBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___LoadingBar_5;
};

// SimpleShoot
struct SimpleShoot_tA677591C78019DB63F51DD7B4009D8CDDB549A90  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SimpleShoot::bulletPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bulletPrefab_4;
	// UnityEngine.GameObject SimpleShoot::casingPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___casingPrefab_5;
	// UnityEngine.GameObject SimpleShoot::muzzleFlashPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___muzzleFlashPrefab_6;
	// UnityEngine.Animator SimpleShoot::gunAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___gunAnimator_7;
	// UnityEngine.Transform SimpleShoot::barrelLocation
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___barrelLocation_8;
	// UnityEngine.Transform SimpleShoot::casingExitLocation
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___casingExitLocation_9;
	// System.Single SimpleShoot::destroyTimer
	float ___destroyTimer_10;
	// System.Single SimpleShoot::shotPower
	float ___shotPower_11;
	// System.Single SimpleShoot::ejectPower
	float ___ejectPower_12;
	// GameManagmont SimpleShoot::GameManager
	GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* ___GameManager_13;
};

// TouchObject
struct TouchObject_tEB05956A439551AB14350D16300240DD005D67E6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 TouchObject::Hp
	int32_t ___Hp_4;
	// UnityEngine.Animator TouchObject::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_5;
	// UnityEngine.UI.Slider TouchObject::HpSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___HpSlider_6;
	// GPS TouchObject::gps
	GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* ___gps_7;
	// UnityEngine.AudioSource TouchObject::audiosoure
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audiosoure_8;
	// UnityEngine.AudioClip TouchObject::DieSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___DieSound_9;
	// GameManagmont TouchObject::gamemanager
	GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* ___gamemanager_10;
	// System.Boolean TouchObject::isDie
	bool ___isDie_11;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___comparison0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TouchObject>()
inline TouchObject_tEB05956A439551AB14350D16300240DD005D67E6* Component_GetComponent_TisTouchObject_tEB05956A439551AB14350D16300240DD005D67E6_m7E4540A216AB61548ECAC08FF80026A36CD5AE82 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TouchObject_tEB05956A439551AB14350D16300240DD005D67E6* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void TouchObject::SlimeTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchObject_SlimeTouch_m0398A3EF21B63E5FCE6C63760369C049FBA59B39 (TouchObject_tEB05956A439551AB14350D16300240DD005D67E6* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManagmont::StartExplain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManagmont_StartExplain_mE5BAAB32209F714A9C6CE3B426BDD8628ACBA7AD (GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManagmont::LoadingScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManagmont_LoadingScene_m5384D3154125E01877F91B9FFBA51570BF98E9F0 (GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* __this, const RuntimeMethod* method) ;
// System.Void GameManagmont/<LoadingScene>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadingSceneU3Ed__18__ctor_mD5A18F8C8B0CEE8280C207F54706D2DD0B02AD66 (U3CLoadingSceneU3Ed__18_t8515EF245519E85A41B329FF1D29775C13691E30* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameManagmont/<StartExplain>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartExplainU3Ed__19__ctor_mF204C0639E0C1149B107A9906E7D0ED93C376B03 (U3CStartExplainU3Ed__19_t67F8E6921178B32C8525835513D12A1FFEA128A4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_m84D316B1993A4E69F9E8CDE30531687B701F9300 (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void GameManagmont::ShowExplain(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagmont_ShowExplain_m5D11BC5E5F93EC446BC3885E36EE71C440AF193A (GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GPS::GPS_On()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GPS_GPS_On_m59205348FC05624234DF1D55E5735FCD7E4BAD5D (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) ;
// System.Void GPS/<GPS_On>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGPS_OnU3Ed__25__ctor_m1ED957F04AFE13DE1ACB81AFD94CB326E4D771F4 (U3CGPS_OnU3Ed__25_t943647160F2230F06867DA566CE879213D704670* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242 (String_t* ___permission0, const RuntimeMethod* method) ;
// UnityEngine.LocationService UnityEngine.Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.LocationService::get_isEnabledByUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// UnityEngine.LocationInfo UnityEngine.LocationService::get_lastData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Void GPSEncoder::SetLocalOrigin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPSEncoder_SetLocalOrigin_m751F111AB55B9957D73413E7F9AF74E99167B507 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___localOrigin0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 GPSEncoder::GPSToUCS(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GPSEncoder_GPSToUCS_mCC1A9BDE73FE02E675451540A670A02A422C03AC (float ___latitude0, float ___longitude1, const RuntimeMethod* method) ;
// System.Void MapManager::OnClickMapButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager_OnClickMapButton_mC6504F7729C34E87B9BEBC07E602771999822CBD (MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* __this, const RuntimeMethod* method) ;
// System.Void BGMManager::SetBgmBattle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGMManager_SetBgmBattle_mDE52FB488BC7F109A48B5D96A3568F1990AE2BF7 (BGMManager_tAC12D03592C5AEFC175199DBA4598C8F672EBC1F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 GPS::GetGPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GPS_GetGPS_m4B00A9B55F6735163ABCD21261974DC4251315F8 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MapManager::MapLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapManager_MapLoader_m88C8D9281EA6D97AE0F00E3B1F781BB347AA01FB (MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* __this, const RuntimeMethod* method) ;
// System.Void MapManager/<MapLoader>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMapLoaderU3Ed__22__ctor_m67BEDC9F93B0EAEC3C6C7241A2A34E5E937633FF (U3CMapLoaderU3Ed__22_t93457AC44B15B6F49DD1F247034577343F1FF766* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestTexture_GetTexture_mEEC74BBC5190D4012A0B87C5D439AF59E22EF2EF (String_t* ___uri0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DownloadHandlerTexture_GetContent_m86BC88F58305A1B21C21CE7D82658197932EFB18 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___www0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02 (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SceneMove::LoadingScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneMove_LoadingScene_mCD5B9A35B7529C5121064FC80BCD1DE10A3C6349 (SceneMove_tCD46F7E9A656C3821AF6CD1049B9827E5DA1AF68* __this, const RuntimeMethod* method) ;
// System.Void SceneMove/<LoadingScene>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadingSceneU3Ed__5__ctor_m3DF7819E14542ECEE4062BF2DB8DEC646F8836EB (U3CLoadingSceneU3Ed__5_t5C7361F849A1EB1B94250E0E06ABF6F4F2FBEA6A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<GPS>()
inline GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* GameObject_GetComponent_TisGPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_m95BB664799250C69381FFA5A730914BF84DF9C86 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<GameManagmont>()
inline GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* GameObject_GetComponent_TisGameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD_mFFBF06E53388BB4BA39A4299F8DFB22D079C2BE4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GameManagmont::SlimeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagmont_SlimeCount_m7EA4661B19D9A020B69BB31531CB0D611CDFF5BE (GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// GPSEncoder GPSEncoder::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* GPSEncoder_GetInstance_m5FAC4D3ECEFB250B416368F6641709B5E08C8BFF (const RuntimeMethod* method) ;
// UnityEngine.Vector2 GPSEncoder::ConvertUCStoGPS(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GPSEncoder_ConvertUCStoGPS_m1B95A0EFA1AECDB61E599F96793981E61CA147D1 (GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 GPSEncoder::ConvertGPStoUCS(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GPSEncoder_ConvertGPStoUCS_m2F3642DB827538F0F8B15E38DE46AEACB9C74F0C (GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___gps0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void GPSEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPSEncoder__ctor_mC0E395C348A31EDFCC480A5A07638C1C15ABD2B4 (GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* __this, const RuntimeMethod* method) ;
// System.Single GPSEncoder::get__LatOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GPSEncoder_get__LatOrigin_m3B0B00F4B4C9C67D2B5B642BD1A07EC32058CFAB (GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* __this, const RuntimeMethod* method) ;
// System.Void GPSEncoder::FindMetersPerLat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPSEncoder_FindMetersPerLat_m18295B37BCCFD0FFA3B8BAA1AB6E416BDFB28D1E (GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* __this, float ___lat0, const RuntimeMethod* method) ;
// System.Single GPSEncoder::get__LonOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GPSEncoder_get__LonOrigin_m9E4BE065C58CF65EE6928F058BAD7AA8378CFBD5 (GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m6CA855033D5CE2D3AF7927B6709BC65DBCD632DF (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___withChildren0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<CFX_Demo_Translate>()
inline CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* GameObject_GetComponent_TisCFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902_mB8168AF53999E053141A357369F4768DB5E0050E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Comparison`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m3A0DAD29EFE86C10726A9BA34608E88B5BE199B9 (Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t48F09636634857D61E406009D472941BB2A2358F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_mCBEE22E31FA4513E11FB040E9AADCD6E718DBCA8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, Comparison_1_t48F09636634857D61E406009D472941BB2A2358F*, const RuntimeMethod*))List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared)(__this, ___comparison0, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
inline GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void CFX_Demo_New::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_UpdateUI_m3E3DA5EC770C0F2B84B5206F16CD8A2484BFD6E5 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void CFX_Demo_New::prevParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_prevParticle_m875BF4D9036B6C5B6259FFA0F787F90042B5D5F9 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) ;
// System.Void CFX_Demo_New::nextParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_nextParticle_mB5D2F30BF16AC1AD51964810AE12B27744B7E8E1 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) ;
// System.Void CFX_Demo_New::destroyParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_destroyParticles_m6E09B94A196E46E199429F9DE2AE0DD0F9079D24 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.GameObject CFX_Demo_New::spawnParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* CFX_Demo_New_spawnParticle_m55467606F2E464D8337565A08442BB4747468A26 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<CFX_AutoStopLoopedEffect>()
inline CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* GameObject_AddComponent_TisCFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A_mEF892AE5EA6E23A4B49F932B61910B9519A940EA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<CFX_AutoDestructShuriken>()
inline CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* GameObject_AddComponent_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m57AD7BC2C74B5B0DB79D1A50B788F8BBB2EA81A8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void CFX_Demo_New/<CheckForDeletedParticles>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForDeletedParticlesU3Ed__25__ctor_m920C1552D0B704439FAC777FD178B57829E2D1B6 (U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void CFX_Demo_New/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m97F374614077DD1A825F933DED9B82FDCBAF91D4 (U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::CompareTo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareTo_m32A3DFBEA443A4091053D53825DBB76E6EAFECCF (String_t* __this, String_t* ___strB0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Scale(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, float ___angle2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void CFX_AutoDestructShuriken/<CheckIfAlive>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfAliveU3Ed__2__ctor_m107B0D89D95623B02336384ED1123B289D20231B (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem::IsAlive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_IsAlive_m4C919DCFF8EC256F68415875DF421DC53065AC7B (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___withChildren0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddExplosionForce_mD36F7D864F32F22DA1783D20F6E9563A9C51DFA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___explosionForce0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___explosionPosition1, float ___explosionRadius2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m7922F76C73DACF9E1610D72726C01709C14F0937 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___torque0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARRayCastInfo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARRayCastInfo_Update_m82A8FC6894EE59D76F79A8787BE3F7471B1A3205 (ARRayCastInfo_t844EA7CDF894232D13E8BEE384E6ED1E22F9EE30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTouchObject_tEB05956A439551AB14350D16300240DD005D67E6_m7E4540A216AB61548ECAC08FF80026A36CD5AE82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFABD836E281EC1E7CD87E4589E0753091888FC9A);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Input.touchCount == 0||GameManager.isSetting||GameManager.isExplain)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_1 = __this->___GameManager_11;
		NullCheck(L_1);
		bool L_2 = L_1->___isSetting_12;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_3 = __this->___GameManager_11;
		NullCheck(L_3);
		bool L_4 = L_3->___isExplain_11;
		if (!L_4)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		// return;
		return;
	}

IL_0022:
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_5;
		L_5 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_5;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_6;
		L_6 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_6)
		{
			goto IL_00ba;
		}
	}
	{
		// Ray ray = ArCamera.ScreenPointToRay(touch.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___ArCamera_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_8, NULL);
		NullCheck(L_7);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_10;
		L_10 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_7, L_9, NULL);
		// if (Physics.Raycast(ray, out objhit))
		bool L_11;
		L_11 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_10, (&V_1), NULL);
		if (!L_11)
		{
			goto IL_00ba;
		}
	}
	{
		// if (objhit.collider.transform.tag == "Slime")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12;
		L_12 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_13, NULL);
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralFABD836E281EC1E7CD87E4589E0753091888FC9A, NULL);
		if (!L_15)
		{
			goto IL_00ac;
		}
	}
	{
		// objhit.transform.parent.GetComponent<TouchObject>().SlimeTouch();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_16, NULL);
		NullCheck(L_17);
		TouchObject_tEB05956A439551AB14350D16300240DD005D67E6* L_18;
		L_18 = Component_GetComponent_TisTouchObject_tEB05956A439551AB14350D16300240DD005D67E6_m7E4540A216AB61548ECAC08FF80026A36CD5AE82(L_17, Component_GetComponent_TisTouchObject_tEB05956A439551AB14350D16300240DD005D67E6_m7E4540A216AB61548ECAC08FF80026A36CD5AE82_RuntimeMethod_var);
		NullCheck(L_18);
		TouchObject_SlimeTouch_m0398A3EF21B63E5FCE6C63760369C049FBA59B39(L_18, NULL);
		// Instantiate(Effect, objhit.transform.position, objhit.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___Effect_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_22);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_19, L_21, L_23, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
	}

IL_00ac:
	{
		// if(objhit.collider == null)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_25;
		L_25 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void ARRayCastInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARRayCastInfo__ctor_mFE4D2939404CF9B118045C8039FD68C896CFA7EF (ARRayCastInfo_t844EA7CDF894232D13E8BEE384E6ED1E22F9EE30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<ARRaycastHit> hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		__this->___hits_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hits_10), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BGMManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGMManager_Start_mB444319FB8E8080140CAF1E0F61645533EE0421A (BGMManager_tAC12D03592C5AEFC175199DBA4598C8F672EBC1F* __this, const RuntimeMethod* method) 
{
	{
		// audiosource.loop = true;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audiosource_5;
		NullCheck(L_0);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_0, (bool)1, NULL);
		// audiosource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___audiosource_5;
		NullCheck(L_1);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// }
		return;
	}
}
// System.Void BGMManager::SetBgmBattle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGMManager_SetBgmBattle_mDE52FB488BC7F109A48B5D96A3568F1990AE2BF7 (BGMManager_tAC12D03592C5AEFC175199DBA4598C8F672EBC1F* __this, const RuntimeMethod* method) 
{
	{
		// audiosource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audiosource_5;
		NullCheck(L_0);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_0, NULL);
		// audiosource.clip = Bgm2;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___audiosource_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___Bgm2_4;
		NullCheck(L_1);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_1, L_2, NULL);
		// audiosource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___audiosource_5;
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		// }
		return;
	}
}
// System.Void BGMManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGMManager__ctor_mFD9B18C39DDD18A07FA0D4CDBAB8A9D17A68FDFF (BGMManager_tAC12D03592C5AEFC175199DBA4598C8F672EBC1F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ClossHairPosition::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClossHairPosition_Start_m7389B412EED9090607E02C41691E5AD196908EB3 (ClossHairPosition_tDD18BAD6645A06DEBC7AC24359B901E96F79B918* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ClossHairPosition::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClossHairPosition_Update_m83DF51A93B4313EF529FC748B33E68568D61FCCA (ClossHairPosition_tDD18BAD6645A06DEBC7AC24359B901E96F79B918* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Input.touchCount == 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// if(touch.phase == TouchPhase.Began)
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_0036;
		}
	}
	{
		// CrossHair.rectTransform.anchoredPosition = Input.GetTouch(0).position;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___CrossHair_4;
		NullCheck(L_3);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_3, NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_5;
		L_5 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_1 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		NullCheck(L_4);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_4, L_6, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void ClossHairPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClossHairPosition__ctor_m0D25E969933FA52B99535FCDD80558E4E5375419 (ClossHairPosition_tDD18BAD6645A06DEBC7AC24359B901E96F79B918* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DamageDestory::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDestory_Start_m95705319CC622F867EFB163F1779B7222A17DE8B (DamageDestory_tC2EFE3E71E50FA12A89F1FF15CB1660AB5939D0B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DamageDestory::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDestory_Update_mFB26676EE497FD0D86124CC1188300CF09EC9A0D (DamageDestory_tC2EFE3E71E50FA12A89F1FF15CB1660AB5939D0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position += Vector3.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_4, NULL);
		// Destroy(this, 1f);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(__this, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void DamageDestory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDestory__ctor_m36593B93FCBDCA930F54E1AFF2758CB92ADD7563 (DamageDestory_tC2EFE3E71E50FA12A89F1FF15CB1660AB5939D0B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FallowParent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallowParent_Start_m301030F8755F8A3A51ED84AAABBBAB779CAE69DA (FallowParent_t6872B57A6E408B4BE9E7825371D623EB122C5669* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FallowParent::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallowParent_Update_mCBEA48AF4051669E3D47C55BF686B1C9458C19F4 (FallowParent_t6872B57A6E408B4BE9E7825371D623EB122C5669* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FallowParent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallowParent__ctor_mFE6AF91E66243F057C271FA49FDF89A7C4A01643 (FallowParent_t6872B57A6E408B4BE9E7825371D623EB122C5669* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FallowPlayer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallowPlayer_Awake_mCEEF6996F27E0951D5D666D7B12B4F774282428A (FallowPlayer_tCE424DA7CDF9BECC889592B5FEC63B714DEBE597* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FallowPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallowPlayer_Update_m66E48E8D7F4B4286148992EF122B2AB2422D24DB (FallowPlayer_tCE424DA7CDF9BECC889592B5FEC63B714DEBE597* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 FixedPos =
		//        new Vector3(
		//            Player.transform.position.x + offsetX,
		//            Player.transform.position.y + offsetY,
		//            Player.transform.position.z + offsetZ
		//            );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Player_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		float L_4 = __this->___offsetX_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Player_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		float L_9 = __this->___offsetY_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___Player_4;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___z_4;
		float L_14 = __this->___offsetZ_7;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)il2cpp_codegen_add(L_3, L_4)), ((float)il2cpp_codegen_add(L_8, L_9)), ((float)il2cpp_codegen_add(L_13, L_14)), NULL);
		// transform.position = FixedPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		NullCheck(L_15);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void FallowPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallowPlayer__ctor_m4134969D59677893C3F67E54C384536BF49CD05B (FallowPlayer_tCE424DA7CDF9BECC889592B5FEC63B714DEBE597* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManagmont::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagmont_Start_mAB30CC7D053D3589B795628C3CBDD0ACF6A8EBE7 (GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* __this, const RuntimeMethod* method) 
{
	{
		// isExplain = true;
		__this->___isExplain_11 = (bool)1;
		// StartCoroutine(StartExplain());
		RuntimeObject* L_0;
		L_0 = GameManagmont_StartExplain_mE5BAAB32209F714A9C6CE3B426BDD8628ACBA7AD(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// CountSlime.gameObject.SetActive(false);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___CountSlime_10;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// CrossHair.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___CrossHair_9;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GameManagmont::OnClickExplainNextButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagmont_OnClickExplainNextButton_m7F6AB4F60BE69F545E40F33A4577942743999B6A (GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (Explain.Length < ProcedureOfExplain)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___Explain_4;
		NullCheck(L_0);
		int32_t L_1 = __this->___ProcedureOfExplain_5;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// ProcedureOfExplain++;
		int32_t L_2 = __this->___ProcedureOfExplain_5;
		__this->___ProcedureOfExplain_5 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// for (int i = 0; i < Explain.Length; i++)
		V_0 = 0;
		goto IL_0044;
	}

IL_0023:
	{
		// if (Explain[i].activeSelf)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___Explain_4;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		bool L_7;
		L_7 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_6, NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		// Explain[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___Explain_4;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
	}

IL_0040:
	{
		// for (int i = 0; i < Explain.Length; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0044:
	{
		// for (int i = 0; i < Explain.Length; i++)
		int32_t L_13 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___Explain_4;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		// Explain[ProcedureOfExplain].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->___Explain_4;
		int32_t L_16 = __this->___ProcedureOfExplain_5;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
		// if(!isExplain)
		bool L_19 = __this->___isExplain_11;
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// isExplain = true;
		__this->___isExplain_11 = (bool)1;
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void GameManagmont::OnClickExplainEndButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagmont_OnClickExplainEndButton_mAED5F1533E461C8EBC274FE147B9555159CA1EEA (GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* __this, const RuntimeMethod* method) 
{
	{
		// isExplain = false;
		__this->___isExplain_11 = (bool)0;
		// ProcedureOfExplain++;
		int32_t L_0 = __this->___ProcedureOfExplain_5;
		__this->___ProcedureOfExplain_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// ExplainCnavas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___ExplainCnavas_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// if (ProcedureOfExplain == 7)
		int32_t L_2 = __this->___ProcedureOfExplain_5;
		if ((!(((uint32_t)L_2) == ((uint32_t)7))))
		{
			goto IL_0036;
		}
	}
	{
		// CrossHair.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___CrossHair_9;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void GameManagmont::ShowExplain(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagmont_ShowExplain_m5D11BC5E5F93EC446BC3885E36EE71C440AF193A (GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// isExplain = true;
		__this->___isExplain_11 = (bool)1;
		// ExplainCnavas.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ExplainCnavas_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// for (int i = 0; i < Explain.Length; i++)
		V_0 = 0;
		goto IL_0038;
	}

IL_0017:
	{
		// if (Explain[i].activeSelf)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___Explain_4;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// Explain[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___Explain_4;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
	}

IL_0034:
	{
		// for (int i = 0; i < Explain.Length; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < Explain.Length; i++)
		int32_t L_11 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___Explain_4;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// Explain[index].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___Explain_4;
		int32_t L_14 = ___index0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
		// CrossHair.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___CrossHair_9;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GameManagmont::ShowSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagmont_ShowSetting_m19A0BD25930807849B9EE568F144433489D2F73F (GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* __this, const RuntimeMethod* method) 
{
	{
		// if (!isExplain)
		bool L_0 = __this->___isExplain_11;
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		// if (isSetting)
		bool L_1 = __this->___isSetting_12;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// Setting.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Setting_7;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// isSetting = false;
		__this->___isSetting_12 = (bool)0;
		return;
	}

IL_0024:
	{
		// Setting.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___Setting_7;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// isSetting = true;
		__this->___isSetting_12 = (bool)1;
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void GameManagmont::ExitSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagmont_ExitSetting_m5258415EFB051DC39CF850A9FF02A1B2BAA30F81 (GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* __this, const RuntimeMethod* method) 
{
	{
		// isSetting = false;
		__this->___isSetting_12 = (bool)0;
		// Setting.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Setting_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GameManagmont::ExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagmont_ExitGame_m8BB2624CD81737A51DD57FD2C695B20863EF634E (GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void GameManagmont::GoMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagmont_GoMainMenu_mD754AECFBFDBAA5027CC587C6EE1417C7C1C7903 (GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* __this, const RuntimeMethod* method) 
{
	{
		// if (isSetting)
		bool L_0 = __this->___isSetting_12;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Setting.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Setting_7;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
	}

IL_0014:
	{
		// ExplainCnavas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___ExplainCnavas_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// StartCoroutine(LoadingScene());
		RuntimeObject* L_3;
		L_3 = GameManagmont_LoadingScene_m5384D3154125E01877F91B9FFBA51570BF98E9F0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManagmont::LoadingScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManagmont_LoadingScene_m5384D3154125E01877F91B9FFBA51570BF98E9F0 (GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadingSceneU3Ed__18_t8515EF245519E85A41B329FF1D29775C13691E30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadingSceneU3Ed__18_t8515EF245519E85A41B329FF1D29775C13691E30* L_0 = (U3CLoadingSceneU3Ed__18_t8515EF245519E85A41B329FF1D29775C13691E30*)il2cpp_codegen_object_new(U3CLoadingSceneU3Ed__18_t8515EF245519E85A41B329FF1D29775C13691E30_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadingSceneU3Ed__18__ctor_mD5A18F8C8B0CEE8280C207F54706D2DD0B02AD66(L_0, 0, NULL);
		U3CLoadingSceneU3Ed__18_t8515EF245519E85A41B329FF1D29775C13691E30* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameManagmont::StartExplain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManagmont_StartExplain_mE5BAAB32209F714A9C6CE3B426BDD8628ACBA7AD (GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartExplainU3Ed__19_t67F8E6921178B32C8525835513D12A1FFEA128A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartExplainU3Ed__19_t67F8E6921178B32C8525835513D12A1FFEA128A4* L_0 = (U3CStartExplainU3Ed__19_t67F8E6921178B32C8525835513D12A1FFEA128A4*)il2cpp_codegen_object_new(U3CStartExplainU3Ed__19_t67F8E6921178B32C8525835513D12A1FFEA128A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartExplainU3Ed__19__ctor_mF204C0639E0C1149B107A9906E7D0ED93C376B03(L_0, 0, NULL);
		U3CStartExplainU3Ed__19_t67F8E6921178B32C8525835513D12A1FFEA128A4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManagmont::SlimeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagmont_SlimeCount_m7EA4661B19D9A020B69BB31531CB0D611CDFF5BE (GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54287729296FD3168CFB1E6D666A8BCD437DAB2C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CountSlime_int--;
		int32_t L_0 = __this->___CountSlime_int_13;
		__this->___CountSlime_int_13 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if(CountSlime_int <= 0)
		int32_t L_1 = __this->___CountSlime_int_13;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		// CountSlime.gameObject.SetActive(false);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___CountSlime_10;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_0028:
	{
		// CountSlime.text = "???? ?????? : " + CountSlime_int.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___CountSlime_10;
		int32_t* L_5 = (&__this->___CountSlime_int_13);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral54287729296FD3168CFB1E6D666A8BCD437DAB2C, L_6, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void GameManagmont::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagmont__ctor_mA99F420D55815218894E42582C593D85AF73E043 (GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* __this, const RuntimeMethod* method) 
{
	{
		// public int CountSlime_int = 4;
		__this->___CountSlime_int_13 = 4;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManagmont/<LoadingScene>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadingSceneU3Ed__18__ctor_mD5A18F8C8B0CEE8280C207F54706D2DD0B02AD66 (U3CLoadingSceneU3Ed__18_t8515EF245519E85A41B329FF1D29775C13691E30* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManagmont/<LoadingScene>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadingSceneU3Ed__18_System_IDisposable_Dispose_m59387FB322128AD43370D0FE1D06F70A32218070 (U3CLoadingSceneU3Ed__18_t8515EF245519E85A41B329FF1D29775C13691E30* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManagmont/<LoadingScene>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadingSceneU3Ed__18_MoveNext_m1851CC46CF73B4B5AAB639720006362F20389BA4 (U3CLoadingSceneU3Ed__18_t8515EF245519E85A41B329FF1D29775C13691E30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral028FACF80E052870874038642F78B9BF75689F99);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_006b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// LoadingBar.gameObject.SetActive(true);
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_4 = V_1;
		NullCheck(L_4);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = L_4->___LoadingBar_8;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// AsyncOperation loading = SceneManager.LoadSceneAsync("MainMenuScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_7;
		L_7 = SceneManager_LoadSceneAsync_m84D316B1993A4E69F9E8CDE30531687B701F9300(_stringLiteral028FACF80E052870874038642F78B9BF75689F99, NULL);
		__this->___U3CloadingU3E5__2_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloadingU3E5__2_3), (void*)L_7);
		// loading.allowSceneActivation = false;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_8 = __this->___U3CloadingU3E5__2_3;
		NullCheck(L_8);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_8, (bool)0, NULL);
		// float timer = 0f;
		__this->___U3CtimerU3E5__3_4 = (0.0f);
		goto IL_00f4;
	}

IL_005b:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_006b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (loading.progress < 0.9f)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_9 = __this->___U3CloadingU3E5__2_3;
		NullCheck(L_9);
		float L_10;
		L_10 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_9, NULL);
		if ((!(((float)L_10) < ((float)(0.899999976f)))))
		{
			goto IL_009c;
		}
	}
	{
		// LoadingBar.value = loading.progress;
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_11 = V_1;
		NullCheck(L_11);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = L_11->___LoadingBar_8;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_13 = __this->___U3CloadingU3E5__2_3;
		NullCheck(L_13);
		float L_14;
		L_14 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_13, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_12, L_14);
		goto IL_00f4;
	}

IL_009c:
	{
		// timer += Time.unscaledTime*Time.deltaTime;
		float L_15 = __this->___U3CtimerU3E5__3_4;
		float L_16;
		L_16 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimerU3E5__3_4 = ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(L_16, L_17))));
		// LoadingBar.value = Mathf.Lerp(0.9f, 1f, timer);
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_18 = V_1;
		NullCheck(L_18);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_19 = L_18->___LoadingBar_8;
		float L_20 = __this->___U3CtimerU3E5__3_4;
		float L_21;
		L_21 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.899999976f), (1.0f), L_20, NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_19, L_21);
		// if (LoadingBar.value >= 1f)
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_22 = V_1;
		NullCheck(L_22);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_23 = L_22->___LoadingBar_8;
		NullCheck(L_23);
		float L_24;
		L_24 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_23);
		if ((!(((float)L_24) >= ((float)(1.0f)))))
		{
			goto IL_00f4;
		}
	}
	{
		// loading.allowSceneActivation = true;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_25 = __this->___U3CloadingU3E5__2_3;
		NullCheck(L_25);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_25, (bool)1, NULL);
		// yield break;
		return (bool)0;
	}

IL_00f4:
	{
		// while (!loading.isDone)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_26 = __this->___U3CloadingU3E5__2_3;
		NullCheck(L_26);
		bool L_27;
		L_27 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_26, NULL);
		if (!L_27)
		{
			goto IL_005b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object GameManagmont/<LoadingScene>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadingSceneU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m71FC6E4C5B5596CBCB0F8574AFD0B65430FB6481 (U3CLoadingSceneU3Ed__18_t8515EF245519E85A41B329FF1D29775C13691E30* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManagmont/<LoadingScene>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadingSceneU3Ed__18_System_Collections_IEnumerator_Reset_m2FE2A011D2BA96E544B1E8BBA875508B3337D5C2 (U3CLoadingSceneU3Ed__18_t8515EF245519E85A41B329FF1D29775C13691E30* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadingSceneU3Ed__18_System_Collections_IEnumerator_Reset_m2FE2A011D2BA96E544B1E8BBA875508B3337D5C2_RuntimeMethod_var)));
	}
}
// System.Object GameManagmont/<LoadingScene>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadingSceneU3Ed__18_System_Collections_IEnumerator_get_Current_mE1961E5DB510B94BB2BD158F97B0CD6C1F5424EF (U3CLoadingSceneU3Ed__18_t8515EF245519E85A41B329FF1D29775C13691E30* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManagmont/<StartExplain>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartExplainU3Ed__19__ctor_mF204C0639E0C1149B107A9906E7D0ED93C376B03 (U3CStartExplainU3Ed__19_t67F8E6921178B32C8525835513D12A1FFEA128A4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManagmont/<StartExplain>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartExplainU3Ed__19_System_IDisposable_Dispose_mE857D86D548AD5C40F08F01C3E0EE68019E7B727 (U3CStartExplainU3Ed__19_t67F8E6921178B32C8525835513D12A1FFEA128A4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManagmont/<StartExplain>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartExplainU3Ed__19_MoveNext_mC79A8795A4F21BAF91E47F66013752EA2A23131B (U3CStartExplainU3Ed__19_t67F8E6921178B32C8525835513D12A1FFEA128A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(3);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ShowExplain(0);
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_5 = V_1;
		NullCheck(L_5);
		GameManagmont_ShowExplain_m5D11BC5E5F93EC446BC3885E36EE71C440AF193A(L_5, 0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManagmont/<StartExplain>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartExplainU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB46644EBA5075ACC160973D6DC1947BD14F3DC30 (U3CStartExplainU3Ed__19_t67F8E6921178B32C8525835513D12A1FFEA128A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManagmont/<StartExplain>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartExplainU3Ed__19_System_Collections_IEnumerator_Reset_m91B72B82D1736BCAFEE85015AFD28033969A0FE6 (U3CStartExplainU3Ed__19_t67F8E6921178B32C8525835513D12A1FFEA128A4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartExplainU3Ed__19_System_Collections_IEnumerator_Reset_m91B72B82D1736BCAFEE85015AFD28033969A0FE6_RuntimeMethod_var)));
	}
}
// System.Object GameManagmont/<StartExplain>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartExplainU3Ed__19_System_Collections_IEnumerator_get_Current_m6DCB842F459A994C31AA396A77F70A1F7C5F5EC6 (U3CStartExplainU3Ed__19_t67F8E6921178B32C8525835513D12A1FFEA128A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GPS::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPS_Awake_m698B3F9889057961D7A6EED12A2C0CBA93CB0852 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GunObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___GunObject_22;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if (instance == null)
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_1 = ((GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_StaticFields*)il2cpp_codegen_static_fields_for(GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// instance = this;
		((GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_StaticFields*)il2cpp_codegen_static_fields_for(GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_StaticFields*)il2cpp_codegen_static_fields_for(GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void GPS::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPS_Start_m1A862A601DE8567A4784509DA15584ED5A0101F9 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(GPS_On());
		RuntimeObject* L_0;
		L_0 = GPS_GPS_On_m59205348FC05624234DF1D55E5735FCD7E4BAD5D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GPS::GPS_On()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GPS_GPS_On_m59205348FC05624234DF1D55E5735FCD7E4BAD5D (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGPS_OnU3Ed__25_t943647160F2230F06867DA566CE879213D704670_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGPS_OnU3Ed__25_t943647160F2230F06867DA566CE879213D704670* L_0 = (U3CGPS_OnU3Ed__25_t943647160F2230F06867DA566CE879213D704670*)il2cpp_codegen_object_new(U3CGPS_OnU3Ed__25_t943647160F2230F06867DA566CE879213D704670_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGPS_OnU3Ed__25__ctor_m1ED957F04AFE13DE1ACB81AFD94CB326E4D771F4(L_0, 0, NULL);
		U3CGPS_OnU3Ed__25_t943647160F2230F06867DA566CE879213D704670* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// UnityEngine.Vector2 GPS::GetGPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GPS_GetGPS_m4B00A9B55F6735163ABCD21261974DC4251315F8 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) 
{
	{
		// return new Vector2(latitude, longitude);
		float L_0 = __this->___latitude_7;
		float L_1 = __this->___longitude_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void GPS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPS__ctor_mD1DE1233CA5BBE1CB8BACA287B8594BF7B010F59 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) 
{
	{
		// public float maxWaitTime = 10.0f;
		__this->___maxWaitTime_5 = (10.0f);
		// public float resendTime = 1;
		__this->___resendTime_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GPS/<GPS_On>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGPS_OnU3Ed__25__ctor_m1ED957F04AFE13DE1ACB81AFD94CB326E4D771F4 (U3CGPS_OnU3Ed__25_t943647160F2230F06867DA566CE879213D704670* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GPS/<GPS_On>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGPS_OnU3Ed__25_System_IDisposable_Dispose_m17DC99460108A36C05EC8281DD643222E3BE002B (U3CGPS_OnU3Ed__25_t943647160F2230F06867DA566CE879213D704670* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GPS/<GPS_On>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGPS_OnU3Ed__25_MoveNext_mD07B7BD082474448F2FBAD3234086229575BCD45 (U3CGPS_OnU3Ed__25_t943647160F2230F06867DA566CE879213D704670* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56375FA18341B9900227F9216A03DB600CB77AFA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* V_1 = NULL;
	LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0055;
			}
			case 2:
			{
				goto IL_009b;
			}
			case 3:
			{
				goto IL_0348;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
		bool L_3;
		L_3 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		if (L_3)
		{
			goto IL_0068;
		}
	}
	{
		// Permission.RequestUserPermission(Permission.FineLocation);
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		goto IL_005c;
	}

IL_0045:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0055:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_005c:
	{
		// while (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
		bool L_4;
		L_4 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}

IL_0068:
	{
		// if (!Input.location.isEnabledByUser)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_5;
		L_5 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE(L_5, NULL);
		if (L_6)
		{
			goto IL_0076;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0076:
	{
		// Input.location.Start();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_7;
		L_7 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_7);
		LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A(L_7, NULL);
		goto IL_00b4;
	}

IL_0082:
	{
		// yield return new WaitForSeconds(1.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_009b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// waitTime++;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_9 = V_1;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->___waitTime_9;
		NullCheck(L_9);
		L_9->___waitTime_9 = ((float)il2cpp_codegen_add(L_11, (1.0f)));
	}

IL_00b4:
	{
		// while (Input.location.status == LocationServiceStatus.Initializing && waitTime < maxWaitTime)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_12;
		L_12 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_12, NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_00cf;
		}
	}
	{
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->___waitTime_9;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_16 = V_1;
		NullCheck(L_16);
		float L_17 = L_16->___maxWaitTime_5;
		if ((((float)L_15) < ((float)L_17)))
		{
			goto IL_0082;
		}
	}

IL_00cf:
	{
		// if (Input.location.status == LocationServiceStatus.Failed)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_18;
		L_18 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_18);
		int32_t L_19;
		L_19 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_18, NULL);
		if ((!(((uint32_t)L_19) == ((uint32_t)3))))
		{
			goto IL_00de;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_00de:
	{
		// if (waitTime >= maxWaitTime)
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_20 = V_1;
		NullCheck(L_20);
		float L_21 = L_20->___waitTime_9;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_22 = V_1;
		NullCheck(L_22);
		float L_23 = L_22->___maxWaitTime_5;
		if ((!(((float)L_21) >= ((float)L_23))))
		{
			goto IL_00ee;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_00ee:
	{
		// LocationInfo li = Input.location.lastData;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_24;
		L_24 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_24);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_25;
		L_25 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_24, NULL);
		V_2 = L_25;
		// receiveGPS = true;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_26 = V_1;
		NullCheck(L_26);
		L_26->___receiveGPS_11 = (bool)1;
		goto IL_034f;
	}

IL_0105:
	{
		// li = Input.location.lastData;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_27;
		L_27 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_27);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_28;
		L_28 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_27, NULL);
		V_2 = L_28;
		// latitude = li.latitude;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_29 = V_1;
		float L_30;
		L_30 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863((&V_2), NULL);
		NullCheck(L_29);
		L_29->___latitude_7 = L_30;
		// longitude = li.longitude;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_31 = V_1;
		float L_32;
		L_32 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2((&V_2), NULL);
		NullCheck(L_31);
		L_31->___longitude_8 = L_32;
		// if (!isGPSOrigin)
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_33 = V_1;
		NullCheck(L_33);
		bool L_34 = L_33->___isGPSOrigin_13;
		if (L_34)
		{
			goto IL_015b;
		}
	}
	{
		// isGPSOrigin = true;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_35 = V_1;
		NullCheck(L_35);
		L_35->___isGPSOrigin_13 = (bool)1;
		// GPSOrigin = new Vector2(latitude, longitude);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_36 = V_1;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_37 = V_1;
		NullCheck(L_37);
		float L_38 = L_37->___latitude_7;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_39 = V_1;
		NullCheck(L_39);
		float L_40 = L_39->___longitude_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_41), L_38, L_40, /*hidden argument*/NULL);
		NullCheck(L_36);
		L_36->___GPSOrigin_12 = L_41;
		// GPSEncoder.SetLocalOrigin(GPSOrigin);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_42 = V_1;
		NullCheck(L_42);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = L_42->___GPSOrigin_12;
		GPSEncoder_SetLocalOrigin_m751F111AB55B9957D73413E7F9AF74E99167B507(L_43, NULL);
	}

IL_015b:
	{
		// SettingButton.SetActive(true);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_44 = V_1;
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = L_44->___SettingButton_21;
		NullCheck(L_45);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)1, NULL);
		// UCS = GPSEncoder.GPSToUCS(latitude, longitude);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_46 = V_1;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_47 = V_1;
		NullCheck(L_47);
		float L_48 = L_47->___latitude_7;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_49 = V_1;
		NullCheck(L_49);
		float L_50 = L_49->___longitude_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = GPSEncoder_GPSToUCS_mCC1A9BDE73FE02E675451540A670A02A422C03AC(L_48, L_50, NULL);
		NullCheck(L_46);
		L_46->___UCS_10 = L_51;
		// if (!GameManager.isExplain&&!GameManager.isSetting)
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_52 = V_1;
		NullCheck(L_52);
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_53 = L_52->___GameManager_19;
		NullCheck(L_53);
		bool L_54 = L_53->___isExplain_11;
		if (L_54)
		{
			goto IL_0338;
		}
	}
	{
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_55 = V_1;
		NullCheck(L_55);
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_56 = L_55->___GameManager_19;
		NullCheck(L_56);
		bool L_57 = L_56->___isSetting_12;
		if (L_57)
		{
			goto IL_0338;
		}
	}
	{
		// if (!isGo && ((UCS_Go.z < UCS.z || UCS_Go.x < UCS.x)||(-UCS_Go.z>UCS.z||-UCS_Go.x>UCS.x))) //  ???????? ??????? ????? ?????? ????
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_58 = V_1;
		NullCheck(L_58);
		bool L_59 = L_58->___isGo_17;
		if (L_59)
		{
			goto IL_0300;
		}
	}
	{
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_60 = V_1;
		NullCheck(L_60);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_61 = (&L_60->___UCS_Go_16);
		float L_62 = L_61->___z_4;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_63 = V_1;
		NullCheck(L_63);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_64 = (&L_63->___UCS_10);
		float L_65 = L_64->___z_4;
		if ((((float)L_62) < ((float)L_65)))
		{
			goto IL_020e;
		}
	}
	{
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_66 = V_1;
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_67 = (&L_66->___UCS_Go_16);
		float L_68 = L_67->___x_2;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_69 = V_1;
		NullCheck(L_69);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_70 = (&L_69->___UCS_10);
		float L_71 = L_70->___x_2;
		if ((((float)L_68) < ((float)L_71)))
		{
			goto IL_020e;
		}
	}
	{
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_72 = V_1;
		NullCheck(L_72);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_73 = (&L_72->___UCS_Go_16);
		float L_74 = L_73->___z_4;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_75 = V_1;
		NullCheck(L_75);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_76 = (&L_75->___UCS_10);
		float L_77 = L_76->___z_4;
		if ((((float)((-L_74))) > ((float)L_77)))
		{
			goto IL_020e;
		}
	}
	{
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_78 = V_1;
		NullCheck(L_78);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_79 = (&L_78->___UCS_Go_16);
		float L_80 = L_79->___x_2;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_81 = V_1;
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_82 = (&L_81->___UCS_10);
		float L_83 = L_82->___x_2;
		if ((!(((float)((-L_80))) > ((float)L_83))))
		{
			goto IL_0300;
		}
	}

IL_020e:
	{
		// if (mapmanager.MapCloseUp)
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_84 = V_1;
		NullCheck(L_84);
		MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* L_85 = L_84->___mapmanager_23;
		NullCheck(L_85);
		bool L_86 = L_85->___MapCloseUp_18;
		if (!L_86)
		{
			goto IL_0228;
		}
	}
	{
		// mapmanager.OnClickMapButton();
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_87 = V_1;
		NullCheck(L_87);
		MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* L_88 = L_87->___mapmanager_23;
		NullCheck(L_88);
		MapManager_OnClickMapButton_mC6504F7729C34E87B9BEBC07E602771999822CBD(L_88, NULL);
		goto IL_022f;
	}

IL_0228:
	{
		// isGo = true;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_89 = V_1;
		NullCheck(L_89);
		L_89->___isGo_17 = (bool)1;
	}

IL_022f:
	{
		// bgm.SetBgmBattle();
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_90 = V_1;
		NullCheck(L_90);
		BGMManager_tAC12D03592C5AEFC175199DBA4598C8F672EBC1F* L_91 = L_90->___bgm_20;
		NullCheck(L_91);
		BGMManager_SetBgmBattle_mDE52FB488BC7F109A48B5D96A3568F1990AE2BF7(L_91, NULL);
		// GunObject.SetActive(true);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_92 = V_1;
		NullCheck(L_92);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = L_92->___GunObject_22;
		NullCheck(L_93);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_93, (bool)1, NULL);
		// GameManager.CountSlime.gameObject.SetActive(true);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_94 = V_1;
		NullCheck(L_94);
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_95 = L_94->___GameManager_19;
		NullCheck(L_95);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_96 = L_95->___CountSlime_10;
		NullCheck(L_96);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97;
		L_97 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_96, NULL);
		NullCheck(L_97);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_97, (bool)1, NULL);
		// GameManager.CountSlime.text = "???? ?????? ?? : " + GameManager.CountSlime_int.ToString();
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_98 = V_1;
		NullCheck(L_98);
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_99 = L_98->___GameManager_19;
		NullCheck(L_99);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_100 = L_99->___CountSlime_10;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_101 = V_1;
		NullCheck(L_101);
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_102 = L_101->___GameManager_19;
		NullCheck(L_102);
		int32_t* L_103 = (&L_102->___CountSlime_int_13);
		String_t* L_104;
		L_104 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_103, NULL);
		String_t* L_105;
		L_105 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral56375FA18341B9900227F9216A03DB600CB77AFA, L_104, NULL);
		NullCheck(L_100);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_100, L_105);
		// for (int i = 0; i < 4; i++)
		V_3 = 0;
		goto IL_02e2;
	}

IL_028a:
	{
		// Instantiate(Slime, SpawnPoint[i].transform.position, SpawnPoint[i].transform.rotation).transform.parent = SpawnPoint[i].transform;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_106 = V_1;
		NullCheck(L_106);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107 = L_106->___Slime_14;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_108 = V_1;
		NullCheck(L_108);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_109 = L_108->___SpawnPoint_15;
		int32_t L_110 = V_3;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		NullCheck(L_112);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113;
		L_113 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_112, NULL);
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_113, NULL);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_115 = V_1;
		NullCheck(L_115);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_116 = L_115->___SpawnPoint_15;
		int32_t L_117 = V_3;
		NullCheck(L_116);
		int32_t L_118 = L_117;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		NullCheck(L_119);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_120;
		L_120 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_119, NULL);
		NullCheck(L_120);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_121;
		L_121 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_120, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122;
		L_122 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_107, L_114, L_121, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		NullCheck(L_122);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123;
		L_123 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_122, NULL);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_124 = V_1;
		NullCheck(L_124);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_125 = L_124->___SpawnPoint_15;
		int32_t L_126 = V_3;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_128);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129;
		L_129 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_128, NULL);
		NullCheck(L_123);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_123, L_129, NULL);
		// CountSlime++;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_130 = V_1;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_131 = V_1;
		NullCheck(L_131);
		int32_t L_132 = L_131->___CountSlime_25;
		NullCheck(L_130);
		L_130->___CountSlime_25 = ((int32_t)il2cpp_codegen_add(L_132, 1));
		// for (int i = 0; i < 4; i++)
		int32_t L_133 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_133, 1));
	}

IL_02e2:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_134 = V_3;
		if ((((int32_t)L_134) < ((int32_t)4)))
		{
			goto IL_028a;
		}
	}
	{
		// Navi.SetActive(true);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_135 = V_1;
		NullCheck(L_135);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_136 = L_135->___Navi_24;
		NullCheck(L_136);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_136, (bool)1, NULL);
		// GameManager.ShowExplain(4);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_137 = V_1;
		NullCheck(L_137);
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_138 = L_137->___GameManager_19;
		NullCheck(L_138);
		GameManagmont_ShowExplain_m5D11BC5E5F93EC446BC3885E36EE71C440AF193A(L_138, 4, NULL);
		goto IL_0338;
	}

IL_0300:
	{
		// else if (isGo&&CountSlime <= 0&&!LastExplain)
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_139 = V_1;
		NullCheck(L_139);
		bool L_140 = L_139->___isGo_17;
		if (!L_140)
		{
			goto IL_0338;
		}
	}
	{
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_141 = V_1;
		NullCheck(L_141);
		int32_t L_142 = L_141->___CountSlime_25;
		if ((((int32_t)L_142) > ((int32_t)0)))
		{
			goto IL_0338;
		}
	}
	{
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_143 = V_1;
		NullCheck(L_143);
		bool L_144 = L_143->___LastExplain_26;
		if (L_144)
		{
			goto IL_0338;
		}
	}
	{
		// LastExplain = true;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_145 = V_1;
		NullCheck(L_145);
		L_145->___LastExplain_26 = (bool)1;
		// GameManager.ShowExplain(7);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_146 = V_1;
		NullCheck(L_146);
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_147 = L_146->___GameManager_19;
		NullCheck(L_147);
		GameManagmont_ShowExplain_m5D11BC5E5F93EC446BC3885E36EE71C440AF193A(L_147, 7, NULL);
		// GunObject.SetActive(false);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_148 = V_1;
		NullCheck(L_148);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_149 = L_148->___GunObject_22;
		NullCheck(L_149);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_149, (bool)0, NULL);
	}

IL_0338:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0348:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_034f:
	{
		// while (receiveGPS)
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_150 = V_1;
		NullCheck(L_150);
		bool L_151 = L_150->___receiveGPS_11;
		if (L_151)
		{
			goto IL_0105;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object GPS/<GPS_On>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGPS_OnU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD0F0DC381CE8E8B5DEDAAA0CE4AE69ED2428069D (U3CGPS_OnU3Ed__25_t943647160F2230F06867DA566CE879213D704670* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GPS/<GPS_On>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGPS_OnU3Ed__25_System_Collections_IEnumerator_Reset_mFE47775A33B52BAB108C33C48F252AA39D90C410 (U3CGPS_OnU3Ed__25_t943647160F2230F06867DA566CE879213D704670* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGPS_OnU3Ed__25_System_Collections_IEnumerator_Reset_mFE47775A33B52BAB108C33C48F252AA39D90C410_RuntimeMethod_var)));
	}
}
// System.Object GPS/<GPS_On>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGPS_OnU3Ed__25_System_Collections_IEnumerator_get_Current_mC2DBCA4BE155BB8F4473D6D5E1EF21D6B03A3275 (U3CGPS_OnU3Ed__25_t943647160F2230F06867DA566CE879213D704670* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MapManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager_Start_mCDA9E95FE73A0F74ACECEEF9C1EE6AD538ED4DC5 (MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MapManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager_FixedUpdate_m710E55F74C1DF93A5DD9E7DB544607455210F849 (MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* __this, const RuntimeMethod* method) 
{
	{
		// gpsVec = gps.GetGPS();
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_0 = __this->___gps_13;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = GPS_GetGPS_m4B00A9B55F6735163ABCD21261974DC4251315F8(L_0, NULL);
		__this->___gpsVec_14 = L_1;
		// if(gpsVec != TempgpsVec || OnClickPlusMinusButton || MapCloseUpSetting)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___gpsVec_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___TempgpsVec_15;
		bool L_4;
		L_4 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		bool L_5 = __this->___OnClickPlusMinusButton_17;
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		bool L_6 = __this->___MapCloseUpSetting_19;
		if (!L_6)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		// MapCloseUpSetting = false;
		__this->___MapCloseUpSetting_19 = (bool)0;
		// OnClickPlusMinusButton = false;
		__this->___OnClickPlusMinusButton_17 = (bool)0;
		// TempgpsVec = gpsVec;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___gpsVec_14;
		__this->___TempgpsVec_15 = L_7;
		// latitude = gpsVec.x.ToString();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___gpsVec_14);
		float* L_9 = (&L_8->___x_0);
		String_t* L_10;
		L_10 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_9, NULL);
		__this->___latitude_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___latitude_6), (void*)L_10);
		// longitude = gpsVec.y.ToString();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___gpsVec_14);
		float* L_12 = (&L_11->___y_1);
		String_t* L_13;
		L_13 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_12, NULL);
		__this->___longitude_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___longitude_7), (void*)L_13);
		// StartCoroutine(MapLoader());
		RuntimeObject* L_14;
		L_14 = MapManager_MapLoader_m88C8D9281EA6D97AE0F00E3B1F781BB347AA01FB(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_15;
		L_15 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_14, NULL);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator MapManager::MapLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapManager_MapLoader_m88C8D9281EA6D97AE0F00E3B1F781BB347AA01FB (MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMapLoaderU3Ed__22_t93457AC44B15B6F49DD1F247034577343F1FF766_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMapLoaderU3Ed__22_t93457AC44B15B6F49DD1F247034577343F1FF766* L_0 = (U3CMapLoaderU3Ed__22_t93457AC44B15B6F49DD1F247034577343F1FF766*)il2cpp_codegen_object_new(U3CMapLoaderU3Ed__22_t93457AC44B15B6F49DD1F247034577343F1FF766_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMapLoaderU3Ed__22__ctor_m67BEDC9F93B0EAEC3C6C7241A2A34E5E937633FF(L_0, 0, NULL);
		U3CMapLoaderU3Ed__22_t93457AC44B15B6F49DD1F247034577343F1FF766* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MapManager::OnClickMapPlusButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager_OnClickMapPlusButton_mD572D8958FAD32AB0D5395BE3E5DC957C30256D9 (MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* __this, const RuntimeMethod* method) 
{
	{
		// if (level >= 20)
		int32_t L_0 = __this->___level_8;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)20))))
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// level++;
		int32_t L_1 = __this->___level_8;
		__this->___level_8 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// OnClickPlusMinusButton = true;
		__this->___OnClickPlusMinusButton_17 = (bool)1;
		// }
		return;
	}
}
// System.Void MapManager::OnClickMapMinusButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager_OnClickMapMinusButton_m4CFD4229F5AB1592C87FB8EF7E12DF7D574073FF (MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* __this, const RuntimeMethod* method) 
{
	{
		// if (level <= 16)
		int32_t L_0 = __this->___level_8;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)16))))
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// level--;
		int32_t L_1 = __this->___level_8;
		__this->___level_8 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// OnClickPlusMinusButton = true;
		__this->___OnClickPlusMinusButton_17 = (bool)1;
		// }
		return;
	}
}
// System.Void MapManager::OnClickMapButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager_OnClickMapButton_mC6504F7729C34E87B9BEBC07E602771999822CBD (MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AC1E3F76B7F2B6122567C226E073DA33B16FACB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("?? ??? ????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1AC1E3F76B7F2B6122567C226E073DA33B16FACB, NULL);
		// if (!GameManager.isSetting && !GameManager.isExplain)
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_0 = __this->___GameManager_22;
		NullCheck(L_0);
		bool L_1 = L_0->___isSetting_12;
		if (L_1)
		{
			goto IL_0188;
		}
	}
	{
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_2 = __this->___GameManager_22;
		NullCheck(L_2);
		bool L_3 = L_2->___isExplain_11;
		if (L_3)
		{
			goto IL_0188;
		}
	}
	{
		// if (!MapCloseUp)
		bool L_4 = __this->___MapCloseUp_18;
		if (L_4)
		{
			goto IL_00df;
		}
	}
	{
		// MapCloseUp = true;
		__this->___MapCloseUp_18 = (bool)1;
		// MapCloseUpSetting = true;
		__this->___MapCloseUpSetting_19 = (bool)1;
		// mapRawImage.rectTransform.anchoredPosition = new Vector2(0, 0);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_5 = __this->___mapRawImage_4;
		NullCheck(L_5);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_6, L_7, NULL);
		// mapRawImage.rectTransform.sizeDelta = new Vector2(600, 600);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_8 = __this->___mapRawImage_4;
		NullCheck(L_8);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), (600.0f), (600.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_9, L_10, NULL);
		// Plus.rectTransform.anchoredPosition = new Vector2(383, 174);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___Plus_20;
		NullCheck(L_11);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12;
		L_12 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), (383.0f), (174.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_12, L_13, NULL);
		// Minus.rectTransform.anchoredPosition = new Vector2(383, -228);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___Minus_21;
		NullCheck(L_14);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15;
		L_15 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), (383.0f), (-228.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_15, L_16, NULL);
		// MapPinImage.rectTransform.anchoredPosition = new Vector2(0, 0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___MapPinImage_23;
		NullCheck(L_17);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18;
		L_18 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_18, L_19, NULL);
		return;
	}

IL_00df:
	{
		// MapCloseUp = false;
		__this->___MapCloseUp_18 = (bool)0;
		// MapCloseUpSetting = false;
		__this->___MapCloseUpSetting_19 = (bool)0;
		// mapRawImage.rectTransform.anchoredPosition = new Vector2(-339, -938);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_20 = __this->___mapRawImage_4;
		NullCheck(L_20);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21;
		L_21 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), (-339.0f), (-938.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_21, L_22, NULL);
		// mapRawImage.rectTransform.sizeDelta = new Vector2(400, 400);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_23 = __this->___mapRawImage_4;
		NullCheck(L_23);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24;
		L_24 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_23, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), (400.0f), (400.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_24, L_25, NULL);
		// Plus.rectTransform.anchoredPosition = new Vector2(-58, -801);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___Plus_20;
		NullCheck(L_26);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27;
		L_27 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_26, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), (-58.0f), (-801.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_27, L_28, NULL);
		// Minus.rectTransform.anchoredPosition = new Vector2(-58, -1065);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___Minus_21;
		NullCheck(L_29);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_30;
		L_30 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_29, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), (-58.0f), (-1065.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_30, L_31, NULL);
		// MapPinImage.rectTransform.anchoredPosition = new Vector2(-341, -922);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = __this->___MapPinImage_23;
		NullCheck(L_32);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_33;
		L_33 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_32, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_34), (-341.0f), (-922.0f), /*hidden argument*/NULL);
		NullCheck(L_33);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_33, L_34, NULL);
	}

IL_0188:
	{
		// }
		return;
	}
}
// System.Void MapManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager__ctor_m622D319D4B07043DDB690FB88FD531C149C63A7F (MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string strBaseURL = "";
		__this->___strBaseURL_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___strBaseURL_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string latitude = "";
		__this->___latitude_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___latitude_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string longitude = "";
		__this->___longitude_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___longitude_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public int level = 14;
		__this->___level_8 = ((int32_t)14);
		// public string strAPIKey = "";
		__this->___strAPIKey_11 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___strAPIKey_11), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string secretKey = "";
		__this->___secretKey_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secretKey_12), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MapManager/<MapLoader>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMapLoaderU3Ed__22__ctor_m67BEDC9F93B0EAEC3C6C7241A2A34E5E937633FF (U3CMapLoaderU3Ed__22_t93457AC44B15B6F49DD1F247034577343F1FF766* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MapManager/<MapLoader>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMapLoaderU3Ed__22_System_IDisposable_Dispose_mD535DE51B13DC3D1E44248E03BC792936740C7D1 (U3CMapLoaderU3Ed__22_t93457AC44B15B6F49DD1F247034577343F1FF766* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MapManager/<MapLoader>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMapLoaderU3Ed__22_MoveNext_m14613C5C40E37DE701A9AEA3BD7CD16DC14F45D2 (U3CMapLoaderU3Ed__22_t93457AC44B15B6F49DD1F247034577343F1FF766* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06BCD8FA4B8BE0BE354A8799865CBCBD494302CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B451042E7565CB8EF371FAB2ACF159FC55CF670);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA57982DBA0ADBED33403CE51D02C305E9BF87604);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDCE8C33BCD824C5DFCA45729A80FEB3EFCC5F49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC75E528B7B1194FE36E40028BDF14E2281AA6F82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFBB9DB74E567528C553B92481C6E97CB3CC5191);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00fa;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// string str = strBaseURL + "?w=" + mapWidth.ToString() + "&h=" + mapHeight.ToString() + "&center=" + longitude + "," + latitude + "&level=" + level.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = L_6->___strBaseURL_5;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral4B451042E7565CB8EF371FAB2ACF159FC55CF670);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4B451042E7565CB8EF371FAB2ACF159FC55CF670);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* L_10 = V_1;
		NullCheck(L_10);
		int32_t* L_11 = (&L_10->___mapWidth_9);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_9;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralC75E528B7B1194FE36E40028BDF14E2281AA6F82);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC75E528B7B1194FE36E40028BDF14E2281AA6F82);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* L_15 = V_1;
		NullCheck(L_15);
		int32_t* L_16 = (&L_15->___mapHeight_10);
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_16, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_14;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralBDCE8C33BCD824C5DFCA45729A80FEB3EFCC5F49);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralBDCE8C33BCD824C5DFCA45729A80FEB3EFCC5F49);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21 = L_20->___longitude_7;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_19;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* L_24 = V_1;
		NullCheck(L_24);
		String_t* L_25 = L_24->___latitude_6;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_23;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral06BCD8FA4B8BE0BE354A8799865CBCBD494302CE);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral06BCD8FA4B8BE0BE354A8799865CBCBD494302CE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* L_28 = V_1;
		NullCheck(L_28);
		int32_t* L_29 = (&L_28->___level_8);
		String_t* L_30;
		L_30 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_29, NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_30);
		String_t* L_31;
		L_31 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_27, NULL);
		V_2 = L_31;
		// Debug.Log(str.ToString());
		String_t* L_32 = V_2;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_33, NULL);
		// UnityWebRequest request = UnityWebRequestTexture.GetTexture(str);
		String_t* L_34 = V_2;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_35;
		L_35 = UnityWebRequestTexture_GetTexture_mEEC74BBC5190D4012A0B87C5D439AF59E22EF2EF(L_34, NULL);
		__this->___U3CrequestU3E5__2_3 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_3), (void*)L_35);
		// request.SetRequestHeader("X-NCP-APIGW-API-KEY-ID", strAPIKey);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_36 = __this->___U3CrequestU3E5__2_3;
		MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* L_37 = V_1;
		NullCheck(L_37);
		String_t* L_38 = L_37->___strAPIKey_11;
		NullCheck(L_36);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_36, _stringLiteralDFBB9DB74E567528C553B92481C6E97CB3CC5191, L_38, NULL);
		// request.SetRequestHeader("X-NCP-APIGW-API-KEY", secretKey);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_39 = __this->___U3CrequestU3E5__2_3;
		MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* L_40 = V_1;
		NullCheck(L_40);
		String_t* L_41 = L_40->___secretKey_12;
		NullCheck(L_39);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_39, _stringLiteralA57982DBA0ADBED33403CE51D02C305E9BF87604, L_41, NULL);
		// yield return request.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_42 = __this->___U3CrequestU3E5__2_3;
		NullCheck(L_42);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_43;
		L_43 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_42, NULL);
		__this->___U3CU3E2__current_1 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_43);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00fa:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_44 = __this->___U3CrequestU3E5__2_3;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_44, NULL);
		if ((((int32_t)L_45) == ((int32_t)2)))
		{
			goto IL_011d;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_46 = __this->___U3CrequestU3E5__2_3;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_46, NULL);
		if ((!(((uint32_t)L_47) == ((uint32_t)3))))
		{
			goto IL_012f;
		}
	}

IL_011d:
	{
		// Debug.Log(request.error);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_48 = __this->___U3CrequestU3E5__2_3;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_48, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_49, NULL);
		goto IL_0184;
	}

IL_012f:
	{
		// mapRawImage.gameObject.SetActive(true);
		MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* L_50 = V_1;
		NullCheck(L_50);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_51 = L_50->___mapRawImage_4;
		NullCheck(L_51);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52;
		L_52 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_51, NULL);
		NullCheck(L_52);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_52, (bool)1, NULL);
		// MapPin.SetActive(true);
		MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* L_53 = V_1;
		NullCheck(L_53);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = L_53->___MapPin_16;
		NullCheck(L_54);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_54, (bool)1, NULL);
		// Plus.gameObject.SetActive(true);
		MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* L_55 = V_1;
		NullCheck(L_55);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_56 = L_55->___Plus_20;
		NullCheck(L_56);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57;
		L_57 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_56, NULL);
		NullCheck(L_57);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_57, (bool)1, NULL);
		// Minus.gameObject.SetActive(true);
		MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* L_58 = V_1;
		NullCheck(L_58);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_59 = L_58->___Minus_21;
		NullCheck(L_59);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60;
		L_60 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_59, NULL);
		NullCheck(L_60);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, (bool)1, NULL);
		// mapRawImage.texture = DownloadHandlerTexture.GetContent(request);
		MapManager_t05F548D377024861E72CA6B6CC2D15681AA25F53* L_61 = V_1;
		NullCheck(L_61);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_62 = L_61->___mapRawImage_4;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_63 = __this->___U3CrequestU3E5__2_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_64;
		L_64 = DownloadHandlerTexture_GetContent_m86BC88F58305A1B21C21CE7D82658197932EFB18(L_63, NULL);
		NullCheck(L_62);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_62, L_64, NULL);
	}

IL_0184:
	{
		// }
		return (bool)0;
	}
}
// System.Object MapManager/<MapLoader>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMapLoaderU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m57A4540DEEBFB31D27EF3F7E9841EE99C1820C5B (U3CMapLoaderU3Ed__22_t93457AC44B15B6F49DD1F247034577343F1FF766* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MapManager/<MapLoader>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMapLoaderU3Ed__22_System_Collections_IEnumerator_Reset_m90431832743E4507ADFEF4F853C349E0D4FB2570 (U3CMapLoaderU3Ed__22_t93457AC44B15B6F49DD1F247034577343F1FF766* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMapLoaderU3Ed__22_System_Collections_IEnumerator_Reset_m90431832743E4507ADFEF4F853C349E0D4FB2570_RuntimeMethod_var)));
	}
}
// System.Object MapManager/<MapLoader>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMapLoaderU3Ed__22_System_Collections_IEnumerator_get_Current_m5734267A891A85B2119BE0AC76CEF6650D9FFC1D (U3CMapLoaderU3Ed__22_t93457AC44B15B6F49DD1F247034577343F1FF766* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NaviManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NaviManager_Update_m9A15B5FB55392CA24B7397A5D9173255ADAB38AF (NaviManager_t66237C24EDDC85AF696021C6F3B72A00A207D31C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral773C10AC7B2C7AFBFDA64607526E4F567D903BA2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (gameObject.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_0214;
		}
	}
	{
		// if (!FindSlime)
		bool L_2 = __this->___FindSlime_5;
		if (L_2)
		{
			goto IL_0055;
		}
	}
	{
		// FindSlime = true;
		__this->___FindSlime_5 = (bool)1;
		// for(int i =0; i < 4; i++)
		V_0 = 0;
		goto IL_0051;
	}

IL_0023:
	{
		// SpawnPoint[i] = GameObject.Find("AR Session Origin").transform.GetChild(i + 1).GetChild(0).gameObject;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___SpawnPoint_4;
		int32_t L_4 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral773C10AC7B2C7AFBFDA64607526E4F567D903BA2, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, 0, NULL);
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_10);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_10);
		// for(int i =0; i < 4; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0051:
	{
		// for(int i =0; i < 4; i++)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)4)))
		{
			goto IL_0023;
		}
	}

IL_0055:
	{
		// if (!SetShort)
		bool L_13 = __this->___SetShort_8;
		if (L_13)
		{
			goto IL_0151;
		}
	}
	{
		// for (int i = 0; i < SpawnPoint.Length; i++)
		V_1 = 0;
		goto IL_0097;
	}

IL_0064:
	{
		// shortDir[i] = Vector3.Distance(SpawnPoint[i].transform.position,gameObject.transform.position);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->___shortDir_6;
		int32_t L_15 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___SpawnPoint_4;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		float L_25;
		L_25 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_21, L_24, NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (float)L_25);
		// for (int i = 0; i < SpawnPoint.Length; i++)
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0097:
	{
		// for (int i = 0; i < SpawnPoint.Length; i++)
		int32_t L_27 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_28 = __this->___SpawnPoint_4;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0064;
		}
	}
	{
		// for (int i = 0; i < SpawnPoint.Length; i++)
		V_2 = 0;
		goto IL_0142;
	}

IL_00a9:
	{
		// for (int j = 0; j < SpawnPoint.Length-1-i; j++)
		V_3 = 0;
		goto IL_0125;
	}

IL_00ad:
	{
		// if (shortDir[j] > shortDir[j + 1])
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = __this->___shortDir_6;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		float L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = __this->___shortDir_6;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		float L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if ((!(((float)L_32) > ((float)L_36))))
		{
			goto IL_0121;
		}
	}
	{
		// temp = shortDir[j];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = __this->___shortDir_6;
		int32_t L_38 = V_3;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		float L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		__this->___temp_7 = L_40;
		// tempGameobject = SpawnPoint[j];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_41 = __this->___SpawnPoint_4;
		int32_t L_42 = V_3;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		__this->___tempGameobject_9 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempGameobject_9), (void*)L_44);
		// shortDir[j] = shortDir[j + 1];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = __this->___shortDir_6;
		int32_t L_46 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47 = __this->___shortDir_6;
		int32_t L_48 = V_3;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		float L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (float)L_50);
		// SpawnPoint[j] = SpawnPoint[j+1];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_51 = __this->___SpawnPoint_4;
		int32_t L_52 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_53 = __this->___SpawnPoint_4;
		int32_t L_54 = V_3;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_56);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_56);
		// shortDir[j + 1] = temp;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_57 = __this->___shortDir_6;
		int32_t L_58 = V_3;
		float L_59 = __this->___temp_7;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_58, 1))), (float)L_59);
		// SpawnPoint[j + 1] = tempGameobject;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_60 = __this->___SpawnPoint_4;
		int32_t L_61 = V_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = __this->___tempGameobject_9;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_62);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 1))), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_62);
	}

IL_0121:
	{
		// for (int j = 0; j < SpawnPoint.Length-1-i; j++)
		int32_t L_63 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0125:
	{
		// for (int j = 0; j < SpawnPoint.Length-1-i; j++)
		int32_t L_64 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_65 = __this->___SpawnPoint_4;
		NullCheck(L_65);
		int32_t L_66 = V_2;
		if ((((int32_t)L_64) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_65)->max_length)), 1)), L_66)))))
		{
			goto IL_00ad;
		}
	}
	{
		// SetShort = true;
		__this->___SetShort_8 = (bool)1;
		// for (int i = 0; i < SpawnPoint.Length; i++)
		int32_t L_67 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_0142:
	{
		// for (int i = 0; i < SpawnPoint.Length; i++)
		int32_t L_68 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_69 = __this->___SpawnPoint_4;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_00a9;
		}
	}
	{
		return;
	}

IL_0151:
	{
		// if (SpawnPoint[0] != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_70 = __this->___SpawnPoint_4;
		NullCheck(L_70);
		int32_t L_71 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_72, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_73)
		{
			goto IL_017f;
		}
	}
	{
		// transform.LookAt(SpawnPoint[0].transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_75 = __this->___SpawnPoint_4;
		NullCheck(L_75);
		int32_t L_76 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_77);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_77, NULL);
		NullCheck(L_78);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_78, NULL);
		NullCheck(L_74);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_74, L_79, NULL);
		return;
	}

IL_017f:
	{
		// else if (SpawnPoint[1] != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_80 = __this->___SpawnPoint_4;
		NullCheck(L_80);
		int32_t L_81 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_83;
		L_83 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_82, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_83)
		{
			goto IL_01ad;
		}
	}
	{
		// transform.LookAt(SpawnPoint[1].transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_85 = __this->___SpawnPoint_4;
		NullCheck(L_85);
		int32_t L_86 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_87);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_87, NULL);
		NullCheck(L_88);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_88, NULL);
		NullCheck(L_84);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_84, L_89, NULL);
		return;
	}

IL_01ad:
	{
		// else if (SpawnPoint[2] != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_90 = __this->___SpawnPoint_4;
		NullCheck(L_90);
		int32_t L_91 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_92, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_93)
		{
			goto IL_01db;
		}
	}
	{
		// transform.LookAt(SpawnPoint[2].transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_95 = __this->___SpawnPoint_4;
		NullCheck(L_95);
		int32_t L_96 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_97);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_97, NULL);
		NullCheck(L_98);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_98, NULL);
		NullCheck(L_94);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_94, L_99, NULL);
		return;
	}

IL_01db:
	{
		// else if (SpawnPoint[3] != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_100 = __this->___SpawnPoint_4;
		NullCheck(L_100);
		int32_t L_101 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_103;
		L_103 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_102, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_103)
		{
			goto IL_0209;
		}
	}
	{
		// transform.LookAt(SpawnPoint[3].transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_104;
		L_104 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_105 = __this->___SpawnPoint_4;
		NullCheck(L_105);
		int32_t L_106 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108;
		L_108 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_107, NULL);
		NullCheck(L_108);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_108, NULL);
		NullCheck(L_104);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_104, L_109, NULL);
		return;
	}

IL_0209:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_110;
		L_110 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_110, NULL);
	}

IL_0214:
	{
		// }
		return;
	}
}
// System.Void NaviManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NaviManager__ctor_m79C8A07E0DB0C816841275344BB7650F6DDC22E3 (NaviManager_t66237C24EDDC85AF696021C6F3B72A00A207D31C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ParticleManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleManager_Awake_m97D3E96C59572EB3A0E70BF09D94D335D8B5A57A (ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// particleObject = GetComponent<ParticleSystem>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0;
		L_0 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(__this, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		__this->___particleObject_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___particleObject_4), (void*)L_0);
		// particleObject.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_1 = __this->___particleObject_4;
		NullCheck(L_1);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_1, NULL);
		// Destroy(gameObject, 3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_2, (3.0f), NULL);
		// }
		return;
	}
}
// System.Void ParticleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleManager__ctor_mC4857BA72CB7DC629CC940CFE8D69D3E21B12E56 (ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMove_Start_mBE658E978B4CB102386CEFB02C92966C7A793763 (SceneMove_tCD46F7E9A656C3821AF6CD1049B9827E5DA1AF68* __this, const RuntimeMethod* method) 
{
	{
		// LoadingBar.gameObject.SetActive(false);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___LoadingBar_5;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SceneMove::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMove_StartGame_mC4976187D686E3C95BDFA955376878DF2C96E7FD (SceneMove_tCD46F7E9A656C3821AF6CD1049B9827E5DA1AF68* __this, const RuntimeMethod* method) 
{
	{
		// StartMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___StartMenu_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// StartCoroutine(LoadingScene());
		RuntimeObject* L_1;
		L_1 = SceneMove_LoadingScene_mCD5B9A35B7529C5121064FC80BCD1DE10A3C6349(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void SceneMove::ExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMove_ExitGame_m80590D57BABB9A72BC3D739F9E114640B09039C0 (SceneMove_tCD46F7E9A656C3821AF6CD1049B9827E5DA1AF68* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SceneMove::LoadingScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneMove_LoadingScene_mCD5B9A35B7529C5121064FC80BCD1DE10A3C6349 (SceneMove_tCD46F7E9A656C3821AF6CD1049B9827E5DA1AF68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadingSceneU3Ed__5_t5C7361F849A1EB1B94250E0E06ABF6F4F2FBEA6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadingSceneU3Ed__5_t5C7361F849A1EB1B94250E0E06ABF6F4F2FBEA6A* L_0 = (U3CLoadingSceneU3Ed__5_t5C7361F849A1EB1B94250E0E06ABF6F4F2FBEA6A*)il2cpp_codegen_object_new(U3CLoadingSceneU3Ed__5_t5C7361F849A1EB1B94250E0E06ABF6F4F2FBEA6A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadingSceneU3Ed__5__ctor_m3DF7819E14542ECEE4062BF2DB8DEC646F8836EB(L_0, 0, NULL);
		U3CLoadingSceneU3Ed__5_t5C7361F849A1EB1B94250E0E06ABF6F4F2FBEA6A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SceneMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMove__ctor_m3033E0F717B42F05DE5226427368DFA2775D9833 (SceneMove_tCD46F7E9A656C3821AF6CD1049B9827E5DA1AF68* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneMove/<LoadingScene>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadingSceneU3Ed__5__ctor_m3DF7819E14542ECEE4062BF2DB8DEC646F8836EB (U3CLoadingSceneU3Ed__5_t5C7361F849A1EB1B94250E0E06ABF6F4F2FBEA6A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SceneMove/<LoadingScene>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadingSceneU3Ed__5_System_IDisposable_Dispose_m1A3CE6843DAB42329E1B29DDBE7F600EDEE80909 (U3CLoadingSceneU3Ed__5_t5C7361F849A1EB1B94250E0E06ABF6F4F2FBEA6A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SceneMove/<LoadingScene>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadingSceneU3Ed__5_MoveNext_m02B86EBCB113F244A5F26975CAC84C8D874C5516 (U3CLoadingSceneU3Ed__5_t5C7361F849A1EB1B94250E0E06ABF6F4F2FBEA6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneMove_tCD46F7E9A656C3821AF6CD1049B9827E5DA1AF68* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SceneMove_tCD46F7E9A656C3821AF6CD1049B9827E5DA1AF68* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_006b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// LoadingBar.gameObject.SetActive(true);
		SceneMove_tCD46F7E9A656C3821AF6CD1049B9827E5DA1AF68* L_4 = V_1;
		NullCheck(L_4);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = L_4->___LoadingBar_5;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// AsyncOperation loading = SceneManager.LoadSceneAsync("MainScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_7;
		L_7 = SceneManager_LoadSceneAsync_m84D316B1993A4E69F9E8CDE30531687B701F9300(_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8, NULL);
		__this->___U3CloadingU3E5__2_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloadingU3E5__2_3), (void*)L_7);
		// loading.allowSceneActivation = false;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_8 = __this->___U3CloadingU3E5__2_3;
		NullCheck(L_8);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_8, (bool)0, NULL);
		// float timer = 0f;
		__this->___U3CtimerU3E5__3_4 = (0.0f);
		goto IL_00ee;
	}

IL_005b:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_006b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (loading.progress < 0.9f)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_9 = __this->___U3CloadingU3E5__2_3;
		NullCheck(L_9);
		float L_10;
		L_10 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_9, NULL);
		if ((!(((float)L_10) < ((float)(0.899999976f)))))
		{
			goto IL_009c;
		}
	}
	{
		// LoadingBar.value = loading.progress;
		SceneMove_tCD46F7E9A656C3821AF6CD1049B9827E5DA1AF68* L_11 = V_1;
		NullCheck(L_11);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = L_11->___LoadingBar_5;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_13 = __this->___U3CloadingU3E5__2_3;
		NullCheck(L_13);
		float L_14;
		L_14 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_13, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_12, L_14);
		goto IL_00ee;
	}

IL_009c:
	{
		// timer += Time.unscaledTime;
		float L_15 = __this->___U3CtimerU3E5__3_4;
		float L_16;
		L_16 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		__this->___U3CtimerU3E5__3_4 = ((float)il2cpp_codegen_add(L_15, L_16));
		// LoadingBar.value = Mathf.Lerp(0.9f, 1f, timer);
		SceneMove_tCD46F7E9A656C3821AF6CD1049B9827E5DA1AF68* L_17 = V_1;
		NullCheck(L_17);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_18 = L_17->___LoadingBar_5;
		float L_19 = __this->___U3CtimerU3E5__3_4;
		float L_20;
		L_20 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.899999976f), (1.0f), L_19, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_18, L_20);
		// if (LoadingBar.value >= 1f)
		SceneMove_tCD46F7E9A656C3821AF6CD1049B9827E5DA1AF68* L_21 = V_1;
		NullCheck(L_21);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_22 = L_21->___LoadingBar_5;
		NullCheck(L_22);
		float L_23;
		L_23 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_22);
		if ((!(((float)L_23) >= ((float)(1.0f)))))
		{
			goto IL_00ee;
		}
	}
	{
		// loading.allowSceneActivation = true;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_24 = __this->___U3CloadingU3E5__2_3;
		NullCheck(L_24);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_24, (bool)1, NULL);
		// yield break;
		return (bool)0;
	}

IL_00ee:
	{
		// while (!loading.isDone)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_25 = __this->___U3CloadingU3E5__2_3;
		NullCheck(L_25);
		bool L_26;
		L_26 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_25, NULL);
		if (!L_26)
		{
			goto IL_005b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SceneMove/<LoadingScene>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadingSceneU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m232B0D9EAC94E6BF333526D20C5272800B044571 (U3CLoadingSceneU3Ed__5_t5C7361F849A1EB1B94250E0E06ABF6F4F2FBEA6A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SceneMove/<LoadingScene>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadingSceneU3Ed__5_System_Collections_IEnumerator_Reset_mE639EE2BDFBC87F1BB307FE34FA1EF45E0A0A561 (U3CLoadingSceneU3Ed__5_t5C7361F849A1EB1B94250E0E06ABF6F4F2FBEA6A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadingSceneU3Ed__5_System_Collections_IEnumerator_Reset_mE639EE2BDFBC87F1BB307FE34FA1EF45E0A0A561_RuntimeMethod_var)));
	}
}
// System.Object SceneMove/<LoadingScene>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadingSceneU3Ed__5_System_Collections_IEnumerator_get_Current_mAF20ECC7477DA0E11D87B82AEE93F79909DDBDDE (U3CLoadingSceneU3Ed__5_t5C7361F849A1EB1B94250E0E06ABF6F4F2FBEA6A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchObject_Awake_mD903DC8606D9321C5BA735AA6581F306DEA54A65 (TouchObject_tEB05956A439551AB14350D16300240DD005D67E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_m95BB664799250C69381FFA5A730914BF84DF9C86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD_mFFBF06E53388BB4BA39A4299F8DFB22D079C2BE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C379C0E0A25DBFE385DA48272389BBDDDE007B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Hp = 150;
		__this->___Hp_4 = ((int32_t)150);
		// isDie = false;
		__this->___isDie_11 = (bool)0;
		// gps = GameObject.Find("GPSManager").GetComponent<GPS>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral2C379C0E0A25DBFE385DA48272389BBDDDE007B4, NULL);
		NullCheck(L_0);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_1;
		L_1 = GameObject_GetComponent_TisGPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_m95BB664799250C69381FFA5A730914BF84DF9C86(L_0, GameObject_GetComponent_TisGPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9_m95BB664799250C69381FFA5A730914BF84DF9C86_RuntimeMethod_var);
		__this->___gps_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gps_7), (void*)L_1);
		// gamemanager = GameObject.Find("GameManager").GetComponent<GameManagmont>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, NULL);
		NullCheck(L_2);
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_3;
		L_3 = GameObject_GetComponent_TisGameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD_mFFBF06E53388BB4BA39A4299F8DFB22D079C2BE4(L_2, GameObject_GetComponent_TisGameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD_mFFBF06E53388BB4BA39A4299F8DFB22D079C2BE4_RuntimeMethod_var);
		__this->___gamemanager_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gamemanager_10), (void*)L_3);
		// }
		return;
	}
}
// System.Void TouchObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchObject_Update_mC279964BBB88DC7C08500BD2A55A1DD587E7738D (TouchObject_tEB05956A439551AB14350D16300240DD005D67E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08EF1409295A748F17C961491378A3B6215AA838);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Hp <= 0&& !isDie)
		int32_t L_0 = __this->___Hp_4;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		bool L_1 = __this->___isDie_11;
		if (L_1)
		{
			goto IL_0088;
		}
	}
	{
		// gamemanager.SlimeCount();
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_2 = __this->___gamemanager_10;
		NullCheck(L_2);
		GameManagmont_SlimeCount_m7EA4661B19D9A020B69BB31531CB0D611CDFF5BE(L_2, NULL);
		// isDie = true;
		__this->___isDie_11 = (bool)1;
		// gps.CountSlime--;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_3 = __this->___gps_7;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = L_4->___CountSlime_25;
		NullCheck(L_4);
		L_4->___CountSlime_25 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		// anim.SetTrigger("Die");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___anim_5;
		NullCheck(L_6);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_6, _stringLiteral08EF1409295A748F17C961491378A3B6215AA838, NULL);
		// Destroy(gameObject,3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_7, (3.0f), NULL);
		// Destroy(transform.GetChild(1).GetComponent<BoxCollider>());
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, 1, NULL);
		NullCheck(L_9);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_10;
		L_10 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(L_9, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
		// audiosoure.clip = DieSound;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->___audiosoure_8;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12 = __this->___DieSound_9;
		NullCheck(L_11);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_11, L_12, NULL);
		// audiosoure.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13 = __this->___audiosoure_8;
		NullCheck(L_13);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_13, NULL);
	}

IL_0088:
	{
		// transform.LookAt(Camera.main.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15;
		L_15 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_14);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_14, L_16, NULL);
		// HpSlider.value = Hp;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_17 = __this->___HpSlider_6;
		int32_t L_18 = __this->___Hp_4;
		NullCheck(L_17);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_17, ((float)L_18));
		// }
		return;
	}
}
// System.Void TouchObject::SlimeTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchObject_SlimeTouch_m0398A3EF21B63E5FCE6C63760369C049FBA59B39 (TouchObject_tEB05956A439551AB14350D16300240DD005D67E6* __this, const RuntimeMethod* method) 
{
	{
		// Hp -= 15;
		int32_t L_0 = __this->___Hp_4;
		__this->___Hp_4 = ((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)15)));
		// if(Hp > 0)
		int32_t L_1 = __this->___Hp_4;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		// audiosoure.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audiosoure_8;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void TouchObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchObject__ctor_mB8F7D72E808696BF3D7B18397C4AD471377EB52B (TouchObject_tEB05956A439551AB14350D16300240DD005D67E6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 GPSEncoder::USCToGPS(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GPSEncoder_USCToGPS_m56FB7EF11F40331F42106DF1DF28FCA262573F31 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	{
		// return GetInstance().ConvertUCStoGPS(position);
		GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* L_0;
		L_0 = GPSEncoder_GetInstance_m5FAC4D3ECEFB250B416368F6641709B5E08C8BFF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = GPSEncoder_ConvertUCStoGPS_m1B95A0EFA1AECDB61E599F96793981E61CA147D1(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 GPSEncoder::GPSToUCS(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GPSEncoder_GPSToUCS_mACF74D91016B5175651D56FB397372C3E6B85C3C (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___gps0, const RuntimeMethod* method) 
{
	{
		// return GetInstance().ConvertGPStoUCS(gps);
		GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* L_0;
		L_0 = GPSEncoder_GetInstance_m5FAC4D3ECEFB250B416368F6641709B5E08C8BFF(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___gps0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = GPSEncoder_ConvertGPStoUCS_m2F3642DB827538F0F8B15E38DE46AEACB9C74F0C(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 GPSEncoder::GPSToUCS(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GPSEncoder_GPSToUCS_mCC1A9BDE73FE02E675451540A670A02A422C03AC (float ___latitude0, float ___longitude1, const RuntimeMethod* method) 
{
	{
		// return GetInstance().ConvertGPStoUCS(new Vector2(latitude,longitude));
		GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* L_0;
		L_0 = GPSEncoder_GetInstance_m5FAC4D3ECEFB250B416368F6641709B5E08C8BFF(NULL);
		float L_1 = ___latitude0;
		float L_2 = ___longitude1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = GPSEncoder_ConvertGPStoUCS_m2F3642DB827538F0F8B15E38DE46AEACB9C74F0C(L_0, L_3, NULL);
		return L_4;
	}
}
// System.Void GPSEncoder::SetLocalOrigin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPSEncoder_SetLocalOrigin_m751F111AB55B9957D73413E7F9AF74E99167B507 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___localOrigin0, const RuntimeMethod* method) 
{
	{
		// GetInstance()._localOrigin = localOrigin;
		GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* L_0;
		L_0 = GPSEncoder_GetInstance_m5FAC4D3ECEFB250B416368F6641709B5E08C8BFF(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___localOrigin0;
		NullCheck(L_0);
		L_0->____localOrigin_1 = L_1;
		// }
		return;
	}
}
// System.Void GPSEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPSEncoder__ctor_mC0E395C348A31EDFCC480A5A07638C1C15ABD2B4 (GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* __this, const RuntimeMethod* method) 
{
	{
		// private Vector2 _localOrigin = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->____localOrigin_1 = L_0;
		// private GPSEncoder()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// GPSEncoder GPSEncoder::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* GPSEncoder_GetInstance_m5FAC4D3ECEFB250B416368F6641709B5E08C8BFF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_singleton == null)
		GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* L_0 = ((GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC_StaticFields*)il2cpp_codegen_static_fields_for(GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC_il2cpp_TypeInfo_var))->____singleton_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// _singleton = new GPSEncoder();
		GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* L_1 = (GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC*)il2cpp_codegen_object_new(GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GPSEncoder__ctor_mC0E395C348A31EDFCC480A5A07638C1C15ABD2B4(L_1, NULL);
		((GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC_StaticFields*)il2cpp_codegen_static_fields_for(GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC_il2cpp_TypeInfo_var))->____singleton_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC_StaticFields*)il2cpp_codegen_static_fields_for(GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC_il2cpp_TypeInfo_var))->____singleton_0), (void*)L_1);
	}

IL_0011:
	{
		// return _singleton;
		GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* L_2 = ((GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC_StaticFields*)il2cpp_codegen_static_fields_for(GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC_il2cpp_TypeInfo_var))->____singleton_0;
		return L_2;
	}
}
// System.Single GPSEncoder::get__LatOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GPSEncoder_get__LatOrigin_m3B0B00F4B4C9C67D2B5B642BD1A07EC32058CFAB (GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* __this, const RuntimeMethod* method) 
{
	{
		// private float _LatOrigin { get{ return _localOrigin.x; }}
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->____localOrigin_1);
		float L_1 = L_0->___x_0;
		return L_1;
	}
}
// System.Single GPSEncoder::get__LonOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GPSEncoder_get__LonOrigin_m9E4BE065C58CF65EE6928F058BAD7AA8378CFBD5 (GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* __this, const RuntimeMethod* method) 
{
	{
		// private float _LonOrigin { get{ return _localOrigin.y; }}
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->____localOrigin_1);
		float L_1 = L_0->___y_1;
		return L_1;
	}
}
// System.Void GPSEncoder::FindMetersPerLat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPSEncoder_FindMetersPerLat_m18295B37BCCFD0FFA3B8BAA1AB6E416BDFB28D1E (GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* __this, float ___lat0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// float m1 = 111132.92f;    // latitude calculation term 1
		V_0 = (111132.922f);
		// float m2 = -559.82f;        // latitude calculation term 2
		V_1 = (-559.820007f);
		// float m3 = 1.175f;      // latitude calculation term 3
		V_2 = (1.17499995f);
		// float m4 = -0.0023f;        // latitude calculation term 4
		V_3 = (-0.00230000005f);
		// float p1 = 111412.84f;    // longitude calculation term 1
		V_4 = (111412.844f);
		// float p2 = -93.5f;      // longitude calculation term 2
		V_5 = (-93.5f);
		// float p3 = 0.118f;      // longitude calculation term 3
		V_6 = (0.118000001f);
		// lat = lat * Mathf.Deg2Rad;
		float L_0 = ___lat0;
		___lat0 = ((float)il2cpp_codegen_multiply(L_0, (0.0174532924f)));
		// metersPerLat = m1 + (m2 * Mathf.Cos(2 * (float)lat)) + (m3 * Mathf.Cos(4 * (float)lat)) + (m4 * Mathf.Cos(6 * (float)lat));
		float L_1 = V_0;
		float L_2 = V_1;
		float L_3 = ___lat0;
		float L_4;
		L_4 = cosf(((float)il2cpp_codegen_multiply((2.0f), ((float)L_3))));
		float L_5 = V_2;
		float L_6 = ___lat0;
		float L_7;
		L_7 = cosf(((float)il2cpp_codegen_multiply((4.0f), ((float)L_6))));
		float L_8 = V_3;
		float L_9 = ___lat0;
		float L_10;
		L_10 = cosf(((float)il2cpp_codegen_multiply((6.0f), ((float)L_9))));
		__this->___metersPerLat_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_2, L_4)))), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_8, L_10))));
		// metersPerLon = (p1 * Mathf.Cos((float)lat)) + (p2 * Mathf.Cos(3 * (float)lat)) + (p3 * Mathf.Cos(5 * (float)lat));
		float L_11 = V_4;
		float L_12 = ___lat0;
		float L_13;
		L_13 = cosf(((float)L_12));
		float L_14 = V_5;
		float L_15 = ___lat0;
		float L_16;
		L_16 = cosf(((float)il2cpp_codegen_multiply((3.0f), ((float)L_15))));
		float L_17 = V_6;
		float L_18 = ___lat0;
		float L_19;
		L_19 = cosf(((float)il2cpp_codegen_multiply((5.0f), ((float)L_18))));
		__this->___metersPerLon_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_11, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_16)))), ((float)il2cpp_codegen_multiply(L_17, L_19))));
		// }
		return;
	}
}
// UnityEngine.Vector3 GPSEncoder::ConvertGPStoUCS(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GPSEncoder_ConvertGPStoUCS_m2F3642DB827538F0F8B15E38DE46AEACB9C74F0C (GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___gps0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// FindMetersPerLat(_LatOrigin);
		float L_0;
		L_0 = GPSEncoder_get__LatOrigin_m3B0B00F4B4C9C67D2B5B642BD1A07EC32058CFAB(__this, NULL);
		GPSEncoder_FindMetersPerLat_m18295B37BCCFD0FFA3B8BAA1AB6E416BDFB28D1E(__this, L_0, NULL);
		// float zPosition  = metersPerLat * (gps.x - _LatOrigin); //Calc current lat
		float L_1 = __this->___metersPerLat_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___gps0;
		float L_3 = L_2.___x_0;
		float L_4;
		L_4 = GPSEncoder_get__LatOrigin_m3B0B00F4B4C9C67D2B5B642BD1A07EC32058CFAB(__this, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_1, ((float)il2cpp_codegen_subtract(L_3, L_4))));
		// float xPosition  = metersPerLon * (gps.y - _LonOrigin); //Calc current lat
		float L_5 = __this->___metersPerLon_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___gps0;
		float L_7 = L_6.___y_1;
		float L_8;
		L_8 = GPSEncoder_get__LonOrigin_m9E4BE065C58CF65EE6928F058BAD7AA8378CFBD5(__this, NULL);
		// return new Vector3((float)xPosition, 0, (float)zPosition);
		float L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), ((float)((float)il2cpp_codegen_multiply(L_5, ((float)il2cpp_codegen_subtract(L_7, L_8))))), (0.0f), ((float)L_9), /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Vector2 GPSEncoder::ConvertUCStoGPS(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GPSEncoder_ConvertUCStoGPS_m1B95A0EFA1AECDB61E599F96793981E61CA147D1 (GPSEncoder_tE55484FD4AC3835FE40CBFE5672D135B1F6A80AC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// FindMetersPerLat(_LatOrigin);
		float L_0;
		L_0 = GPSEncoder_get__LatOrigin_m3B0B00F4B4C9C67D2B5B642BD1A07EC32058CFAB(__this, NULL);
		GPSEncoder_FindMetersPerLat_m18295B37BCCFD0FFA3B8BAA1AB6E416BDFB28D1E(__this, L_0, NULL);
		// Vector2 geoLocation = new Vector2(0,0);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.0f), (0.0f), NULL);
		// geoLocation.x = (_LatOrigin + (position.z)/metersPerLat); //Calc current lat
		float L_1;
		L_1 = GPSEncoder_get__LatOrigin_m3B0B00F4B4C9C67D2B5B642BD1A07EC32058CFAB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position0;
		float L_3 = L_2.___z_4;
		float L_4 = __this->___metersPerLat_2;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_add(L_1, ((float)(L_3/L_4))));
		// geoLocation.y = (_LonOrigin + (position.x)/metersPerLon); //Calc current lon
		float L_5;
		L_5 = GPSEncoder_get__LonOrigin_m9E4BE065C58CF65EE6928F058BAD7AA8378CFBD5(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___position0;
		float L_7 = L_6.___x_2;
		float L_8 = __this->___metersPerLon_3;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_add(L_5, ((float)(L_7/L_8))));
		// return geoLocation;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_AutoStopLoopedEffect::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoStopLoopedEffect_OnEnable_mFAE624B7728A2F5F7865E685F4594BD0C9629FA5 (CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* __this, const RuntimeMethod* method) 
{
	{
		// d = effectDuration;
		float L_0 = __this->___effectDuration_4;
		__this->___d_5 = L_0;
		// }
		return;
	}
}
// System.Void CFX_AutoStopLoopedEffect::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoStopLoopedEffect_Update_m8416521A39549298F203B44EF089B09EBD8793FD (CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902_mB8168AF53999E053141A357369F4768DB5E0050E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* V_0 = NULL;
	{
		// if(d > 0)
		float L_0 = __this->___d_5;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		// d -= Time.deltaTime;
		float L_1 = __this->___d_5;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___d_5 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if(d <= 0)
		float L_3 = __this->___d_5;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		// this.GetComponent<ParticleSystem>().Stop(true);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4;
		L_4 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(__this, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		NullCheck(L_4);
		ParticleSystem_Stop_m6CA855033D5CE2D3AF7927B6709BC65DBCD632DF(L_4, (bool)1, NULL);
		// CFX_Demo_Translate translation = this.gameObject.GetComponent<CFX_Demo_Translate>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* L_6;
		L_6 = GameObject_GetComponent_TisCFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902_mB8168AF53999E053141A357369F4768DB5E0050E(L_5, GameObject_GetComponent_TisCFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902_mB8168AF53999E053141A357369F4768DB5E0050E_RuntimeMethod_var);
		V_0 = L_6;
		// if(translation != null)
		CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// translation.enabled = false;
		CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* L_9 = V_0;
		NullCheck(L_9);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)0, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void CFX_AutoStopLoopedEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoStopLoopedEffect__ctor_m66E2F5DD06231BC3D8D01C11A34D7D55BE5F7AAE (CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* __this, const RuntimeMethod* method) 
{
	{
		// public float effectDuration = 2.5f;
		__this->___effectDuration_4 = (2.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_Demo_New::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_Awake_m2BEACA32BC84D821DF07AF25B7B0B99BFE8F7371 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t48F09636634857D61E406009D472941BB2A2358F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_mCBEE22E31FA4513E11FB040E9AADCD6E718DBCA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__16_0_m269E213B94F91F8696A3055A7EB523172900185C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEBC54B2B3D2A59541375C139C15B52B4B751D64);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* G_B5_0 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* G_B5_1 = NULL;
	Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* G_B4_0 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* G_B4_1 = NULL;
	{
		// List<GameObject> particleExampleList = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_0 = L_0;
		// int nbChild = this.transform.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		V_1 = L_2;
		// for(int i = 0; i < nbChild; i++)
		V_2 = 0;
		goto IL_0033;
	}

IL_0016:
	{
		// GameObject child = this.transform.GetChild(i).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_4 = V_2;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, L_4, NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		V_3 = L_6;
		// particleExampleList.Add(child);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_3;
		NullCheck(L_7);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_7, L_8, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for(int i = 0; i < nbChild; i++)
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0033:
	{
		// for(int i = 0; i < nbChild; i++)
		int32_t L_10 = V_2;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0016;
		}
	}
	{
		// particleExampleList.Sort( delegate(GameObject o1, GameObject o2) { return o1.name.CompareTo(o2.name); } );
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var);
		Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* L_13 = ((U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1;
		Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* L_14 = L_13;
		G_B4_0 = L_14;
		G_B4_1 = L_12;
		if (L_14)
		{
			G_B5_0 = L_14;
			G_B5_1 = L_12;
			goto IL_0057;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var);
		U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963* L_15 = ((U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* L_16 = (Comparison_1_t48F09636634857D61E406009D472941BB2A2358F*)il2cpp_codegen_object_new(Comparison_1_t48F09636634857D61E406009D472941BB2A2358F_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Comparison_1__ctor_m3A0DAD29EFE86C10726A9BA34608E88B5BE199B9(L_16, L_15, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__16_0_m269E213B94F91F8696A3055A7EB523172900185C_RuntimeMethod_var), NULL);
		Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* L_17 = L_16;
		((U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1), (void*)L_17);
		G_B5_0 = L_17;
		G_B5_1 = G_B4_1;
	}

IL_0057:
	{
		NullCheck(G_B5_1);
		List_1_Sort_mCBEE22E31FA4513E11FB040E9AADCD6E718DBCA8(G_B5_1, G_B5_0, List_1_Sort_mCBEE22E31FA4513E11FB040E9AADCD6E718DBCA8_RuntimeMethod_var);
		// ParticleExamples = particleExampleList.ToArray();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18 = V_0;
		NullCheck(L_18);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19;
		L_19 = List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C(L_18, List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		__this->___ParticleExamples_14 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ParticleExamples_14), (void*)L_19);
		// defaultCamPosition = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20;
		L_20 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		__this->___defaultCamPosition_17 = L_22;
		// defaultCamRotation = Camera.main.transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23;
		L_23 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_24, NULL);
		__this->___defaultCamRotation_18 = L_25;
		// StartCoroutine("CheckForDeletedParticles");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_26;
		L_26 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralBEBC54B2B3D2A59541375C139C15B52B4B751D64, NULL);
		// UpdateUI();
		CFX_Demo_New_UpdateUI_m3E3DA5EC770C0F2B84B5206F16CD8A2484BFD6E5(__this, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_New::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_Update_m1172B662225E3FC12899D5FEEC66702AEA702EFB (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B12_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B11_1 = NULL;
	float G_B13_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B13_1;
	memset((&G_B13_1), 0, sizeof(G_B13_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B13_2 = NULL;
	{
		// if(Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)276), NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// prevParticle();
		CFX_Demo_New_prevParticle_m875BF4D9036B6C5B6259FFA0F787F90042B5D5F9(__this, NULL);
		goto IL_0037;
	}

IL_0014:
	{
		// else if(Input.GetKeyDown(KeyCode.RightArrow))
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)275), NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// nextParticle();
		CFX_Demo_New_nextParticle_mB5D2F30BF16AC1AD51964810AE12B27744B7E8E1(__this, NULL);
		goto IL_0037;
	}

IL_0028:
	{
		// else if(Input.GetKeyDown(KeyCode.Delete))
		bool L_2;
		L_2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)127), NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// destroyParticles();
		CFX_Demo_New_destroyParticles_m6E09B94A196E46E199429F9DE2AE0DD0F9079D24(__this, NULL);
	}

IL_0037:
	{
		// if(Input.GetMouseButtonDown(0))
		bool L_3;
		L_3 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_3)
		{
			goto IL_0093;
		}
	}
	{
		// RaycastHit hit = new RaycastHit();
		il2cpp_codegen_initobj((&V_1), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// if(groundCollider.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, 9999f))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = __this->___groundCollider_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_5);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7;
		L_7 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_5, L_6, NULL);
		NullCheck(L_4);
		bool L_8;
		L_8 = Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938(L_4, L_7, (&V_1), (9999.0f), NULL);
		if (!L_8)
		{
			goto IL_0093;
		}
	}
	{
		// GameObject particle = spawnParticle();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = CFX_Demo_New_spawnParticle_m55467606F2E464D8337565A08442BB4747468A26(__this, NULL);
		V_2 = L_9;
		// particle.transform.position = hit.point + particle.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_2;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_2;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_15, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_16, NULL);
	}

IL_0093:
	{
		// float scroll = Input.GetAxis("Mouse ScrollWheel");
		float L_17;
		L_17 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		V_0 = L_17;
		// if(scroll != 0f)
		float L_18 = V_0;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_00d4;
		}
	}
	{
		// Camera.main.transform.Translate(Vector3.forward * (scroll < 0f ? -1f : 1f), Space.Self);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19;
		L_19 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_22 = V_0;
		G_B11_0 = L_21;
		G_B11_1 = L_20;
		if ((((float)L_22) < ((float)(0.0f))))
		{
			G_B12_0 = L_21;
			G_B12_1 = L_20;
			goto IL_00c4;
		}
	}
	{
		G_B13_0 = (1.0f);
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00c9;
	}

IL_00c4:
	{
		G_B13_0 = (-1.0f);
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00c9:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(G_B13_1, G_B13_0, NULL);
		NullCheck(G_B13_2);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(G_B13_2, L_23, 1, NULL);
	}

IL_00d4:
	{
		// if(Input.GetMouseButtonDown(2))
		bool L_24;
		L_24 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(2, NULL);
		if (!L_24)
		{
			goto IL_0106;
		}
	}
	{
		// Camera.main.transform.position = defaultCamPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25;
		L_25 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___defaultCamPosition_17;
		NullCheck(L_26);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_26, L_27, NULL);
		// Camera.main.transform.rotation = defaultCamRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28;
		L_28 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = __this->___defaultCamRotation_18;
		NullCheck(L_29);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_29, L_30, NULL);
	}

IL_0106:
	{
		// }
		return;
	}
}
// System.Void CFX_Demo_New::OnToggleGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_OnToggleGround_mC1E9AC90083482747297AA60D9CE9ECABF307929 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	{
		// var c = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		V_0 = L_0;
		// groundRenderer.enabled = !groundRenderer.enabled;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = __this->___groundRenderer_4;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = __this->___groundRenderer_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_2, NULL);
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), NULL);
		// c.a = groundRenderer.enabled ? 1f : 0.33f;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = __this->___groundRenderer_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_4, NULL);
		G_B1_0 = (&V_0);
		if (L_5)
		{
			G_B2_0 = (&V_0);
			goto IL_0035;
		}
	}
	{
		G_B3_0 = (0.330000013f);
		G_B3_1 = G_B1_0;
		goto IL_003a;
	}

IL_0035:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_003a:
	{
		G_B3_1->___a_3 = G_B3_0;
		// groundBtn.color = c;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___groundBtn_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// groundLabel.color = c;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___groundLabel_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// }
		return;
	}
}
// System.Void CFX_Demo_New::OnToggleCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_OnToggleCamera_m756EE04AC3DC67A47CFA88C4CC86B1FB9FE0BD02 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	{
		// var c = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		V_0 = L_0;
		// CFX_Demo_RotateCamera.rotating = !CFX_Demo_RotateCamera.rotating;
		il2cpp_codegen_runtime_class_init_inline(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var);
		bool L_1 = ((CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields*)il2cpp_codegen_static_fields_for(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var))->___rotating_4;
		((CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields*)il2cpp_codegen_static_fields_for(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var))->___rotating_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// c.a = CFX_Demo_RotateCamera.rotating ? 1f : 0.33f;
		bool L_2 = ((CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields*)il2cpp_codegen_static_fields_for(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var))->___rotating_4;
		G_B1_0 = (&V_0);
		if (L_2)
		{
			G_B2_0 = (&V_0);
			goto IL_0023;
		}
	}
	{
		G_B3_0 = (0.330000013f);
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0023:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		G_B3_1->___a_3 = G_B3_0;
		// camRotBtn.color = c;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___camRotBtn_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// camRotLabel.color = c;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___camRotLabel_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void CFX_Demo_New::OnToggleSlowMo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_OnToggleSlowMo_m20658A6343C784057EFACEBED012978C4F78D48B (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var c = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		V_0 = L_0;
		// slowMo = !slowMo;
		bool L_1 = __this->___slowMo_16;
		__this->___slowMo_16 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// if(slowMo)
		bool L_2 = __this->___slowMo_16;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// Time.timeScale = 0.33f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.330000013f), NULL);
		// c.a = 1f;
		(&V_0)->___a_3 = (1.0f);
		goto IL_004b;
	}

IL_0035:
	{
		// Time.timeScale = 1.0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// c.a = 0.33f;
		(&V_0)->___a_3 = (0.330000013f);
	}

IL_004b:
	{
		// slowMoBtn.color = c;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___slowMoBtn_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// slowMoLabel.color = c;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___slowMoLabel_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void CFX_Demo_New::OnPreviousEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_OnPreviousEffect_mA2A209F797976C97EB976A21083FF4C6B9652812 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	{
		// prevParticle();
		CFX_Demo_New_prevParticle_m875BF4D9036B6C5B6259FFA0F787F90042B5D5F9(__this, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_New::OnNextEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_OnNextEffect_mBE56FE317B38E35579D4EC0868755EB2F4E4E640 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	{
		// nextParticle();
		CFX_Demo_New_nextParticle_mB5D2F30BF16AC1AD51964810AE12B27744B7E8E1(__this, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_New::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_UpdateUI_m3E3DA5EC770C0F2B84B5206F16CD8A2484BFD6E5 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// EffectLabel.text = ParticleExamples[exampleIndex].name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___EffectLabel_12;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___ParticleExamples_14;
		int32_t L_2 = __this->___exampleIndex_15;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// EffectIndexLabel.text = string.Format("{0}/{1}", (exampleIndex+1).ToString("00"), ParticleExamples.Length.ToString("00"));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___EffectIndexLabel_13;
		int32_t L_7 = __this->___exampleIndex_15;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		String_t* L_8;
		L_8 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___ParticleExamples_14;
		NullCheck(L_9);
		V_0 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		String_t* L_10;
		L_10 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		String_t* L_11;
		L_11 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_8, L_10, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_11);
		// }
		return;
	}
}
// UnityEngine.GameObject CFX_Demo_New::spawnParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* CFX_Demo_New_spawnParticle_m55467606F2E464D8337565A08442BB4747468A26 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m57AD7BC2C74B5B0DB79D1A50B788F8BBB2EA81A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A_mEF892AE5EA6E23A4B49F932B61910B9519A940EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_1 = NULL;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// GameObject particles = (GameObject)Instantiate(ParticleExamples[exampleIndex]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___ParticleExamples_14;
		int32_t L_1 = __this->___exampleIndex_15;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_0 = L_4;
		// particles.transform.position = new Vector3(0,particles.transform.position.y,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (0.0f), L_10, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_11, NULL);
		// particles.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// ParticleSystem ps = particles.GetComponent<ParticleSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_14;
		L_14 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_13, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		V_1 = L_14;
		// if (ps != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_15 = V_1;
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_007c;
		}
	}
	{
		// var main = ps.main;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_17 = V_1;
		NullCheck(L_17);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_18;
		L_18 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_17, NULL);
		V_2 = L_18;
		// if (main.loop)
		bool L_19;
		L_19 = MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8((&V_2), NULL);
		if (!L_19)
		{
			goto IL_007c;
		}
	}
	{
		// ps.gameObject.AddComponent<CFX_AutoStopLoopedEffect>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_20 = V_1;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		NullCheck(L_21);
		CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* L_22;
		L_22 = GameObject_AddComponent_TisCFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A_mEF892AE5EA6E23A4B49F932B61910B9519A940EA(L_21, GameObject_AddComponent_TisCFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A_mEF892AE5EA6E23A4B49F932B61910B9519A940EA_RuntimeMethod_var);
		// ps.gameObject.AddComponent<CFX_AutoDestructShuriken>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_23 = V_1;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		NullCheck(L_24);
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_25;
		L_25 = GameObject_AddComponent_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m57AD7BC2C74B5B0DB79D1A50B788F8BBB2EA81A8(L_24, GameObject_AddComponent_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m57AD7BC2C74B5B0DB79D1A50B788F8BBB2EA81A8_RuntimeMethod_var);
	}

IL_007c:
	{
		// onScreenParticles.Add(particles);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_26 = __this->___onScreenParticles_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_0;
		NullCheck(L_26);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_26, L_27, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// return particles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_0;
		return L_28;
	}
}
// System.Collections.IEnumerator CFX_Demo_New::CheckForDeletedParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CFX_Demo_New_CheckForDeletedParticles_m9693C5D1E5FB5189A81426EB45A4E1EE6416EE41 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* L_0 = (U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0*)il2cpp_codegen_object_new(U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCheckForDeletedParticlesU3Ed__25__ctor_m920C1552D0B704439FAC777FD178B57829E2D1B6(L_0, 0, NULL);
		U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void CFX_Demo_New::prevParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_prevParticle_m875BF4D9036B6C5B6259FFA0F787F90042B5D5F9 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	{
		// exampleIndex--;
		int32_t L_0 = __this->___exampleIndex_15;
		__this->___exampleIndex_15 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if(exampleIndex < 0) exampleIndex = ParticleExamples.Length - 1;
		int32_t L_1 = __this->___exampleIndex_15;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// if(exampleIndex < 0) exampleIndex = ParticleExamples.Length - 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___ParticleExamples_14;
		NullCheck(L_2);
		__this->___exampleIndex_15 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
	}

IL_0027:
	{
		// UpdateUI();
		CFX_Demo_New_UpdateUI_m3E3DA5EC770C0F2B84B5206F16CD8A2484BFD6E5(__this, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_New::nextParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_nextParticle_mB5D2F30BF16AC1AD51964810AE12B27744B7E8E1 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	{
		// exampleIndex++;
		int32_t L_0 = __this->___exampleIndex_15;
		__this->___exampleIndex_15 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if(exampleIndex >= ParticleExamples.Length) exampleIndex = 0;
		int32_t L_1 = __this->___exampleIndex_15;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___ParticleExamples_14;
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		// if(exampleIndex >= ParticleExamples.Length) exampleIndex = 0;
		__this->___exampleIndex_15 = 0;
	}

IL_0025:
	{
		// UpdateUI();
		CFX_Demo_New_UpdateUI_m3E3DA5EC770C0F2B84B5206F16CD8A2484BFD6E5(__this, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_New::destroyParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_destroyParticles_m6E09B94A196E46E199429F9DE2AE0DD0F9079D24 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___onScreenParticles_19;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0045;
	}

IL_0010:
	{
		// if(onScreenParticles[i] != null)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___onScreenParticles_19;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, L_3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// GameObject.Destroy(onScreenParticles[i]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___onScreenParticles_19;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, L_7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
	}

IL_0035:
	{
		// onScreenParticles.RemoveAt(i);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___onScreenParticles_19;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_9, L_10, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0045:
	{
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CFX_Demo_New::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New__ctor_m3F3E772F218F5D0DF6E561E20AE15B042CED6752 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> onScreenParticles = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___onScreenParticles_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onScreenParticles_19), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_Demo_New/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAB1F46E7745FB53F6527920549715240437DAA6A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963* L_0 = (U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963*)il2cpp_codegen_object_new(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m97F374614077DD1A825F933DED9B82FDCBAF91D4(L_0, NULL);
		((U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CFX_Demo_New/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m97F374614077DD1A825F933DED9B82FDCBAF91D4 (U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 CFX_Demo_New/<>c::<Awake>b__16_0(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CAwakeU3Eb__16_0_m269E213B94F91F8696A3055A7EB523172900185C (U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___o10, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___o21, const RuntimeMethod* method) 
{
	{
		// particleExampleList.Sort( delegate(GameObject o1, GameObject o2) { return o1.name.CompareTo(o2.name); } );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___o10;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___o21;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		NullCheck(L_1);
		int32_t L_4;
		L_4 = String_CompareTo_m32A3DFBEA443A4091053D53825DBB76E6EAFECCF(L_1, L_3, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_Demo_New/<CheckForDeletedParticles>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForDeletedParticlesU3Ed__25__ctor_m920C1552D0B704439FAC777FD178B57829E2D1B6 (U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CFX_Demo_New/<CheckForDeletedParticles>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForDeletedParticlesU3Ed__25_System_IDisposable_Dispose_m26C778C5C8416F55F436434D8F71289B81D9219E (U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CFX_Demo_New/<CheckForDeletedParticles>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckForDeletedParticlesU3Ed__25_MoveNext_mC7D590156EDDFF76ECD8798F8E7FF09A033ECBA0 (U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(5.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* L_5 = V_1;
		NullCheck(L_5);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = L_5->___onScreenParticles_19;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_6, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0072;
	}

IL_004e:
	{
		// if(onScreenParticles[i] == null)
		CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* L_8 = V_1;
		NullCheck(L_8);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = L_8->___onScreenParticles_19;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_9, L_10, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_006e;
		}
	}
	{
		// onScreenParticles.RemoveAt(i);
		CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* L_13 = V_1;
		NullCheck(L_13);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = L_13->___onScreenParticles_19;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_14, L_15, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
	}

IL_006e:
	{
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0072:
	{
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		// while(true)
		goto IL_001e;
	}
}
// System.Object CFX_Demo_New/<CheckForDeletedParticles>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckForDeletedParticlesU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCDF3D48683749224B09CCBFE3DCBE2B8E1DB72D2 (U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CFX_Demo_New/<CheckForDeletedParticles>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForDeletedParticlesU3Ed__25_System_Collections_IEnumerator_Reset_m766243C9C80375A777FE2A13B85C392B56EB0DFD (U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckForDeletedParticlesU3Ed__25_System_Collections_IEnumerator_Reset_m766243C9C80375A777FE2A13B85C392B56EB0DFD_RuntimeMethod_var)));
	}
}
// System.Object CFX_Demo_New/<CheckForDeletedParticles>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckForDeletedParticlesU3Ed__25_System_Collections_IEnumerator_get_Current_mAF1404FDA33F8CB72BCF184A9F9C2F32F8329ABA (U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_Demo_RandomDir::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RandomDir_Start_mBEA6B11F6CDBC5D92B9039AA8B18A7EBEF5448C8 (CFX_Demo_RandomDir_t1ABEE68B0005EA8768B850153F696578B50C5BE2* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.eulerAngles = new Vector3(Random.Range(min.x,max.x),Random.Range(min.y,max.y),Random.Range(min.z,max.z));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___min_4);
		float L_2 = L_1->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___max_5);
		float L_4 = L_3->___x_2;
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_2, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___min_4);
		float L_7 = L_6->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___max_5);
		float L_9 = L_8->___y_3;
		float L_10;
		L_10 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_7, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___min_4);
		float L_12 = L_11->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___max_5);
		float L_14 = L_13->___z_4;
		float L_15;
		L_15 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_12, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_5, L_10, L_15, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_16, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_RandomDir::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RandomDir__ctor_m0D93F82C71A0EAE6FF074A8F3EDBBB81ED3D0B48 (CFX_Demo_RandomDir_t1ABEE68B0005EA8768B850153F696578B50C5BE2* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 min = new Vector3(0,0,0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___min_4 = L_0;
		// public Vector3 max = new Vector3(0,360,0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (360.0f), (0.0f), /*hidden argument*/NULL);
		__this->___max_5 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_Demo_RandomDirectionTranslate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RandomDirectionTranslate_Start_m96E0BCED718092574499B7127C3A8673849208DB (CFX_Demo_RandomDirectionTranslate_t3680095D7DFA9CE930384E0F1126006F7310D853* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// dir = new Vector3(Random.Range(0.0f,360.0f),Random.Range(0.0f,360.0f),Random.Range(0.0f,360.0f)).normalized;
		float L_0;
		L_0 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (360.0f), NULL);
		float L_1;
		L_1 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (360.0f), NULL);
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (360.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		__this->___dir_8 = L_4;
		// dir.Scale(axis);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___dir_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___axis_6;
		Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline(L_5, L_6, NULL);
		// dir += baseDir;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___dir_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___baseDir_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_8, NULL);
		__this->___dir_8 = L_9;
		// }
		return;
	}
}
// System.Void CFX_Demo_RandomDirectionTranslate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RandomDirectionTranslate_Update_m4024B24E39F74439D91BB2A5C0077350853814AE (CFX_Demo_RandomDirectionTranslate_t3680095D7DFA9CE930384E0F1126006F7310D853* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.Translate(dir * speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___dir_8;
		float L_2 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_5, NULL);
		// if(gravity)
		bool L_6 = __this->___gravity_7;
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		// this.transform.Translate(Physics.gravity * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		NullCheck(L_7);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_7, L_10, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void CFX_Demo_RandomDirectionTranslate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RandomDirectionTranslate__ctor_m0069918B310E5DB0ABB7A4081DAE7EAFD6A1E0CF (CFX_Demo_RandomDirectionTranslate_t3680095D7DFA9CE930384E0F1126006F7310D853* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 30.0f;
		__this->___speed_4 = (30.0f);
		// public Vector3 baseDir = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___baseDir_5 = L_0;
		// public Vector3 axis = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		__this->___axis_6 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_Demo_RotateCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RotateCamera_Update_mF984EC78638612B1C89597528E3FD5ACBD2539A4 (CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(rotating)
		il2cpp_codegen_runtime_class_init_inline(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var);
		bool L_0 = ((CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields*)il2cpp_codegen_static_fields_for(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var))->___rotating_4;
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// transform.RotateAround(rotationCenter.position, Vector3.up, speed*Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___rotationCenter_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_5 = __this->___speed_5;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_1);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_1, L_3, L_4, ((float)il2cpp_codegen_multiply(L_5, L_6)), NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void CFX_Demo_RotateCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RotateCamera__ctor_m0ADA46D335888F3F43AC518ED19FFB1F1AABC7C8 (CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 30.0f;
		__this->___speed_5 = (30.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void CFX_Demo_RotateCamera::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RotateCamera__cctor_m4A71CF2705030EA82F2818BD43F82DC91C01486C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public bool rotating = true;
		((CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields*)il2cpp_codegen_static_fields_for(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var))->___rotating_4 = (bool)1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_Demo_Translate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_Translate_Start_m2408E76C85181E0D900CEFEA8E3CE9214763AC76 (CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* __this, const RuntimeMethod* method) 
{
	{
		// dir = new Vector3(Random.Range(0.0f,360.0f),Random.Range(0.0f,360.0f),Random.Range(0.0f,360.0f));
		float L_0;
		L_0 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (360.0f), NULL);
		float L_1;
		L_1 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (360.0f), NULL);
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (360.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___dir_8 = L_3;
		// dir.Scale(rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___dir_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___rotation_5;
		Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline(L_4, L_5, NULL);
		// this.transform.localEulerAngles = dir;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___dir_8;
		NullCheck(L_6);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_Translate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_Translate_Update_mD71C66B91F9EC43DD9ABBA2D8A45CBD57DE8EBF7 (CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.Translate(axis * speed * Time.deltaTime, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___axis_6;
		float L_2 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_0, L_5, 1, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_Translate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_Translate__ctor_m44AD33D5825BE599180B3ED3E3668893F46E29DB (CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 30.0f;
		__this->___speed_4 = (30.0f);
		// public Vector3 rotation = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		__this->___rotation_5 = L_0;
		// public Vector3 axis = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		__this->___axis_6 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_AutoDestructShuriken::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoDestructShuriken_OnEnable_m95AB27DC91BCCF60D378AE0665B095D44331D78A (CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B8DD997BF9F7D0806A038EC22F9D13BEB77E76);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine("CheckIfAlive");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral05B8DD997BF9F7D0806A038EC22F9D13BEB77E76, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CFX_AutoDestructShuriken::CheckIfAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CFX_AutoDestructShuriken_CheckIfAlive_mCFAEBF84CD35FBF9C742C9A170183136AAB53535 (CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* L_0 = (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511*)il2cpp_codegen_object_new(U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCheckIfAliveU3Ed__2__ctor_m107B0D89D95623B02336384ED1123B289D20231B(L_0, 0, NULL);
		U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void CFX_AutoDestructShuriken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoDestructShuriken__ctor_m22A7ABD6E38836099374390249F88639BB36CC33 (CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_AutoDestructShuriken/<CheckIfAlive>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfAliveU3Ed__2__ctor_m107B0D89D95623B02336384ED1123B289D20231B (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CFX_AutoDestructShuriken/<CheckIfAlive>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfAliveU3Ed__2_System_IDisposable_Dispose_m38FD34408CDD7ED7A963CD1156B55F7F313610A1 (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CFX_AutoDestructShuriken/<CheckIfAlive>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckIfAliveU3Ed__2_MoveNext_m18608B4F0601A8AEFEF69DDE44DBD191B198E3AB (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ParticleSystem ps = this.GetComponent<ParticleSystem>();
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_4 = V_1;
		NullCheck(L_4);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5;
		L_5 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(L_4, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		__this->___U3CpsU3E5__2_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpsU3E5__2_3), (void*)L_5);
		goto IL_007d;
	}

IL_002c:
	{
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0045:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(!ps.IsAlive(true))
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_7 = __this->___U3CpsU3E5__2_3;
		NullCheck(L_7);
		bool L_8;
		L_8 = ParticleSystem_IsAlive_m4C919DCFF8EC256F68415875DF421DC53065AC7B(L_7, (bool)1, NULL);
		if (L_8)
		{
			goto IL_007d;
		}
	}
	{
		// if(OnlyDeactivate)
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_9 = V_1;
		NullCheck(L_9);
		bool L_10 = L_9->___OnlyDeactivate_4;
		if (!L_10)
		{
			goto IL_0070;
		}
	}
	{
		// this.gameObject.SetActive(false);
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_11 = V_1;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		goto IL_008b;
	}

IL_0070:
	{
		// GameObject.Destroy(this.gameObject);
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_13 = V_1;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_14, NULL);
		// break;
		goto IL_008b;
	}

IL_007d:
	{
		// while(true && ps != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_15 = __this->___U3CpsU3E5__2_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_16)
		{
			goto IL_002c;
		}
	}

IL_008b:
	{
		// }
		return (bool)0;
	}
}
// System.Object CFX_AutoDestructShuriken/<CheckIfAlive>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckIfAliveU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m655B604E1C89420955196F4D9523D3B6CBACFF9B (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CFX_AutoDestructShuriken/<CheckIfAlive>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfAliveU3Ed__2_System_Collections_IEnumerator_Reset_m8659443A2B072F0CFA4D0D77AFD3821588EE1068 (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckIfAliveU3Ed__2_System_Collections_IEnumerator_Reset_m8659443A2B072F0CFA4D0D77AFD3821588EE1068_RuntimeMethod_var)));
	}
}
// System.Object CFX_AutoDestructShuriken/<CheckIfAlive>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckIfAliveU3Ed__2_System_Collections_IEnumerator_get_Current_mC14FB0B50310D1A3AD07A78314A0F5690B823799 (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_AutoRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoRotate_Update_m6B9C72C2FC80E6C5FABD9DB647C8FDAE2BD56328 (CFX_AutoRotate_t6DF14621E2CB1E17A063E58A98C18828CEB51D4E* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.Rotate(rotation * Time.deltaTime, space);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___rotation_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		int32_t L_4 = __this->___space_5;
		NullCheck(L_0);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_0, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void CFX_AutoRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoRotate__ctor_m66822106F9299AE6FB3E7BEE628175E86FAEF866 (CFX_AutoRotate_t6DF14621E2CB1E17A063E58A98C18828CEB51D4E* __this, const RuntimeMethod* method) 
{
	{
		// public Space space = Space.Self;
		__this->___space_5 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_LightFlicker::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightFlicker_Awake_mDD217C09D0CD73F750E12C784CF9B9671729817A (CFX_LightFlicker_tEF1C73B34078D5C8FBC2984F685231A483125B5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// baseIntensity = GetComponent<Light>().intensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0;
		L_0 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		NullCheck(L_0);
		float L_1;
		L_1 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_0, NULL);
		__this->___baseIntensity_9 = L_1;
		// }
		return;
	}
}
// System.Void CFX_LightFlicker::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightFlicker_OnEnable_mBAD2393E6F61D5D7981870E576F1238783ED8E3C (CFX_LightFlicker_tEF1C73B34078D5C8FBC2984F685231A483125B5B* __this, const RuntimeMethod* method) 
{
	{
		// minIntensity = baseIntensity;
		float L_0 = __this->___baseIntensity_9;
		__this->___minIntensity_7 = L_0;
		// maxIntensity = minIntensity + addIntensity;
		float L_1 = __this->___minIntensity_7;
		float L_2 = __this->___addIntensity_6;
		__this->___maxIntensity_8 = ((float)il2cpp_codegen_add(L_1, L_2));
		// }
		return;
	}
}
// System.Void CFX_LightFlicker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightFlicker_Update_m7EDE8F7D320D87C751799FE5EAEECAF24F33315E (CFX_LightFlicker_tEF1C73B34078D5C8FBC2984F685231A483125B5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Light>().intensity = Mathf.Lerp(minIntensity, maxIntensity, Mathf.PerlinNoise(Time.time * smoothFactor, 0f));
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0;
		L_0 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		float L_1 = __this->___minIntensity_7;
		float L_2 = __this->___maxIntensity_8;
		float L_3;
		L_3 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_4 = __this->___smoothFactor_5;
		float L_5;
		L_5 = Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A(((float)il2cpp_codegen_multiply(L_3, L_4)), (0.0f), NULL);
		float L_6;
		L_6 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_1, L_2, L_5, NULL);
		NullCheck(L_0);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void CFX_LightFlicker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightFlicker__ctor_mAB98FAF050C7B8A46472C42EBE3D802CBDFBE96C (CFX_LightFlicker_tEF1C73B34078D5C8FBC2984F685231A483125B5B* __this, const RuntimeMethod* method) 
{
	{
		// public float smoothFactor = 1f;
		__this->___smoothFactor_5 = (1.0f);
		// public float addIntensity = 1.0f;
		__this->___addIntensity_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_LightIntensityFade::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightIntensityFade_Start_mA64A524D6D15ADAE266FF2F3F8F81F38ACBD3EB6 (CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// baseIntensity = GetComponent<Light>().intensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0;
		L_0 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		NullCheck(L_0);
		float L_1;
		L_1 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_0, NULL);
		__this->___baseIntensity_7 = L_1;
		// }
		return;
	}
}
// System.Void CFX_LightIntensityFade::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightIntensityFade_OnEnable_m56FA183840193584063C3B0AF49B0FA8DB8D7014 (CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// p_lifetime = 0.0f;
		__this->___p_lifetime_9 = (0.0f);
		// p_delay = delay;
		float L_0 = __this->___delay_5;
		__this->___p_delay_10 = L_0;
		// if(delay > 0) GetComponent<Light>().enabled = false;
		float L_1 = __this->___delay_5;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		// if(delay > 0) GetComponent<Light>().enabled = false;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2;
		L_2 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void CFX_LightIntensityFade::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightIntensityFade_Update_mCE17E56AE5A9CE5993315D8F00B6AD2C9BEC08B4 (CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(p_delay > 0)
		float L_0 = __this->___p_delay_10;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		// p_delay -= Time.deltaTime;
		float L_1 = __this->___p_delay_10;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___p_delay_10 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if(p_delay <= 0)
		float L_3 = __this->___p_delay_10;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		// GetComponent<Light>().enabled = true;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4;
		L_4 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)1, NULL);
	}

IL_0038:
	{
		// return;
		return;
	}

IL_0039:
	{
		// if(p_lifetime/duration < 1.0f)
		float L_5 = __this->___p_lifetime_9;
		float L_6 = __this->___duration_4;
		if ((!(((float)((float)(L_5/L_6))) < ((float)(1.0f)))))
		{
			goto IL_0089;
		}
	}
	{
		// GetComponent<Light>().intensity = Mathf.Lerp(baseIntensity, finalIntensity, p_lifetime/duration);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_7;
		L_7 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		float L_8 = __this->___baseIntensity_7;
		float L_9 = __this->___finalIntensity_6;
		float L_10 = __this->___p_lifetime_9;
		float L_11 = __this->___duration_4;
		float L_12;
		L_12 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_8, L_9, ((float)(L_10/L_11)), NULL);
		NullCheck(L_7);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_7, L_12, NULL);
		// p_lifetime += Time.deltaTime;
		float L_13 = __this->___p_lifetime_9;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___p_lifetime_9 = ((float)il2cpp_codegen_add(L_13, L_14));
		return;
	}

IL_0089:
	{
		// if(autodestruct)
		bool L_15 = __this->___autodestruct_8;
		if (!L_15)
		{
			goto IL_009c;
		}
	}
	{
		// GameObject.Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_16, NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void CFX_LightIntensityFade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightIntensityFade__ctor_m0CFBDFFAFF4B1B51471D1B4AE3A3DE92BB8EE722 (CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* __this, const RuntimeMethod* method) 
{
	{
		// public float duration = 1.0f;
		__this->___duration_4 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleShoot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleShoot_Start_m49FBE100F02C578F2B3790D8F8C70B6D186C4EAE (SimpleShoot_tA677591C78019DB63F51DD7B4009D8CDDB549A90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (barrelLocation == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___barrelLocation_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// barrelLocation = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___barrelLocation_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___barrelLocation_8), (void*)L_2);
	}

IL_001a:
	{
		// if (gunAnimator == null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___gunAnimator_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// gunAnimator = GetComponentInChildren<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000(__this, Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		__this->___gunAnimator_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gunAnimator_7), (void*)L_5);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void SimpleShoot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleShoot_Update_m9398FE8946B099F32DC83B8F743B14921950B604 (SimpleShoot_tA677591C78019DB63F51DD7B4009D8CDDB549A90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!GameManager.isExplain&&!GameManager.isSetting)
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_0 = __this->___GameManager_13;
		NullCheck(L_0);
		bool L_1 = L_0->___isExplain_11;
		if (L_1)
		{
			goto IL_0046;
		}
	}
	{
		GameManagmont_t38DCCDA262B3D7C1EFA799DE91B2C32E28B2A6CD* L_2 = __this->___GameManager_13;
		NullCheck(L_2);
		bool L_3 = L_2->___isSetting_12;
		if (L_3)
		{
			goto IL_0046;
		}
	}
	{
		// if (Input.GetButtonDown("Fire1"))
		bool L_4;
		L_4 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, NULL);
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		// gunAnimator.ResetTrigger("Fire");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___gunAnimator_7;
		NullCheck(L_5);
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_5, _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8, NULL);
		// gunAnimator.SetTrigger("Fire");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___gunAnimator_7;
		NullCheck(L_6);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_6, _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void SimpleShoot::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleShoot_Shoot_mF9DB22811DA76E629BEA1677FAA3A7B879196214 (SimpleShoot_tA677591C78019DB63F51DD7B4009D8CDDB549A90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (muzzleFlashPrefab)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___muzzleFlashPrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// tempFlash = Instantiate(muzzleFlashPrefab, barrelLocation.position, barrelLocation.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___muzzleFlashPrefab_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___barrelLocation_8;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___barrelLocation_8;
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Destroy(tempFlash, destroyTimer);
		float L_8 = __this->___destroyTimer_10;
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_7, L_8, NULL);
	}

IL_0039:
	{
		// if (!bulletPrefab)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___bulletPrefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		// { return; }
		return;
	}
}
// System.Void SimpleShoot::CasingRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleShoot_CasingRelease_mD9648429F9B47FC031055F1F1EEC9C1E9143BE5D (SimpleShoot_tA677591C78019DB63F51DD7B4009D8CDDB549A90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!casingExitLocation || !casingPrefab)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___casingExitLocation_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___casingPrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		// { return; }
		return;
	}

IL_001b:
	{
		// tempCasing = Instantiate(casingPrefab, casingExitLocation.position, casingExitLocation.rotation) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___casingPrefab_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___casingExitLocation_9;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___casingExitLocation_9;
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_4, L_6, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// tempCasing.GetComponent<Rigidbody>().AddExplosionForce(Random.Range(ejectPower * 0.7f, ejectPower), (casingExitLocation.position - casingExitLocation.right * 0.3f - casingExitLocation.up * 0.6f), 1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9;
		NullCheck(L_10);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11;
		L_11 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_10, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		float L_12 = __this->___ejectPower_12;
		float L_13 = __this->___ejectPower_12;
		float L_14;
		L_14 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_multiply(L_12, (0.699999988f))), L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___casingExitLocation_9;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___casingExitLocation_9;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, (0.300000012f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_16, L_19, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___casingExitLocation_9;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, (0.600000024f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_20, L_23, NULL);
		NullCheck(L_11);
		Rigidbody_AddExplosionForce_mD36F7D864F32F22DA1783D20F6E9563A9C51DFA1(L_11, L_14, L_24, (1.0f), NULL);
		// tempCasing.GetComponent<Rigidbody>().AddTorque(new Vector3(0, Random.Range(100f, 500f), Random.Range(100f, 1000f)), ForceMode.Impulse);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = L_10;
		NullCheck(L_25);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_26;
		L_26 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_25, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		float L_27;
		L_27 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((100.0f), (500.0f), NULL);
		float L_28;
		L_28 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((100.0f), (1000.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_29), (0.0f), L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		Rigidbody_AddTorque_m7922F76C73DACF9E1610D72726C01709C14F0937(L_26, L_29, 1, NULL);
		// Destroy(tempCasing, destroyTimer);
		float L_30 = __this->___destroyTimer_10;
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_25, L_30, NULL);
		// }
		return;
	}
}
// System.Void SimpleShoot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleShoot__ctor_m22679D4A280391811E4DBF3EDE8E1A9CE8BB47DB (SimpleShoot_tA677591C78019DB63F51DD7B4009D8CDDB549A90* __this, const RuntimeMethod* method) 
{
	{
		// [Tooltip("Specify time to destory the casing object")] [SerializeField] private float destroyTimer = 2f;
		__this->___destroyTimer_10 = (2.0f);
		// [Tooltip("Bullet Speed")] [SerializeField] private float shotPower = 500f;
		__this->___shotPower_11 = (500.0f);
		// [Tooltip("Casing Ejection Speed")] [SerializeField] private float ejectPower = 150f;
		__this->___ejectPower_12 = (150.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale0, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___scale0;
		float L_2 = L_1.___x_2;
		__this->___x_2 = ((float)il2cpp_codegen_multiply(L_0, L_2));
		float L_3 = __this->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___scale0;
		float L_5 = L_4.___y_3;
		__this->___y_3 = ((float)il2cpp_codegen_multiply(L_3, L_5));
		float L_6 = __this->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___scale0;
		float L_8 = L_7.___z_4;
		__this->___z_4 = ((float)il2cpp_codegen_multiply(L_6, L_8));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}

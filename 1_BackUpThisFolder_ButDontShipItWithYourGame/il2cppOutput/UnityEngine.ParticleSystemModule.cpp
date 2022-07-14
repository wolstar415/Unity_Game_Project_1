#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>
struct List_1_tC738A5621689A7678648746667E7F66D96D6B8FD;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689;
// UnityEngine.ParticleCollisionEvent[]
struct ParticleCollisionEventU5BU5D_t38A3BDB80328B5E9131C909384B9942D5590DFF9;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;

struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689;
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD4D8152B1CC10B76FF3BD3BF122F926B6BF0D3EE 
{
};

// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>
struct List_1_tC738A5621689A7678648746667E7F66D96D6B8FD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParticleCollisionEventU5BU5D_t38A3BDB80328B5E9131C909384B9942D5590DFF9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParticleCollisionEventU5BU5D_t38A3BDB80328B5E9131C909384B9942D5590DFF9* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.ParticlePhysicsExtensions
struct ParticlePhysicsExtensions_t5CE73C1F0DA675006185F9E2C2D89DB8185BCD18  : public RuntimeObject
{
};

// UnityEngine.ParticleSystemExtensionsImpl
struct ParticleSystemExtensionsImpl_t5E3FDA53C41B4B37F180179B1C0854ADD1B3D264  : public RuntimeObject
{
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.ParticleSystem/ColorOverLifetimeModule
struct ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/ColorOverLifetimeModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/ColorOverLifetimeModule
struct ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/ColorOverLifetimeModule
struct ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/CustomDataModule
struct CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/CustomDataModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/CustomDataModule
struct CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/CustomDataModule
struct CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/LightsModule
struct LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/LightsModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/LightsModule
struct LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/LightsModule
struct LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
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

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// UnityEngine.ParticleSystem/ShapeModule
struct ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/ShapeModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/ShapeModule
struct ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/ShapeModule
struct ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TextureSheetAnimationModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TrailModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/VelocityOverLifetimeModule
struct VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/VelocityOverLifetimeModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/VelocityOverLifetimeModule
struct VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/VelocityOverLifetimeModule
struct VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.ParticleCollisionEvent
struct ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 
{
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Intersection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Intersection_0;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_2;
	// System.Int32 UnityEngine.ParticleCollisionEvent::m_ColliderInstanceID
	int32_t ___m_ColliderInstanceID_3;
};

// UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 
{
	// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMin
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMin_1;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMax
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMax_2;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMin
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMin_3;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMax
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMax_4;
};

// UnityEngine.ParticleSystem/Particle
struct Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D 
{
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_ParentRandomSeed
	uint32_t ___m_ParentRandomSeed_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_12;
	// System.Int32 UnityEngine.ParticleSystem/Particle::m_MeshIndex
	int32_t ___m_MeshIndex_13;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_14;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_15;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_Flags
	uint32_t ___m_Flags_16;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ParticleSystem/EmitParams
struct EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0 
{
	// UnityEngine.ParticleSystem/Particle UnityEngine.ParticleSystem/EmitParams::m_Particle
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D ___m_Particle_0;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_PositionSet
	bool ___m_PositionSet_1;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_VelocitySet
	bool ___m_VelocitySet_2;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AxisOfRotationSet
	bool ___m_AxisOfRotationSet_3;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RotationSet
	bool ___m_RotationSet_4;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AngularVelocitySet
	bool ___m_AngularVelocitySet_5;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartSizeSet
	bool ___m_StartSizeSet_6;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartColorSet
	bool ___m_StartColorSet_7;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RandomSeedSet
	bool ___m_RandomSeedSet_8;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartLifetimeSet
	bool ___m_StartLifetimeSet_9;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_MeshIndexSet
	bool ___m_MeshIndexSet_10;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_ApplyShapeToPosition
	bool ___m_ApplyShapeToPosition_11;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshaled_pinvoke
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_MeshIndexSet_10;
	int32_t ___m_ApplyShapeToPosition_11;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshaled_com
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_MeshIndexSet_10;
	int32_t ___m_ApplyShapeToPosition_11;
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7  : public RuntimeArray
{
	ALIGN_FIELD (8) Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D m_Items[1];

	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Mesh[]
struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689  : public RuntimeArray
{
	ALIGN_FIELD (8) Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* m_Items[1];

	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_position_mE9103000DB4EA6CE09D25650F5A2915731F7A63E (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_velocity_mF4C1DE326CCABE480F44D3DF3873241E85A6303B (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Particle::set_lifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_lifetime_m29360AF093721364BF46996EE1D400256DB95911 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Particle::set_startLifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_startLifetime_mCD0B16F2B1F2E2AEED84C4FCD85D5AD96F853A77 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Particle::set_startSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_startSize_mBBEBF7365A4E68FF2044E2ECEACC562376EA4A1F (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Particle::set_rotation3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_rotation3D_mC0B19BFEBA780F95C763DE14C80B29764E519D62 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Particle::set_angularVelocity3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_angularVelocity3D_m56AE22FE7AFB178DD206EA2A7E0DA64B360D7EA8 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Particle::set_startColor(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_startColor_mC3031F4238B0C003DFA5BF9AB4B3141B7CF71538 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Particle::set_randomSeed(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_randomSeed_mCC3C02CCBF9C0EA80E2CE01EC47AD30F31D5F6C2 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::EmitOld_Internal(UnityEngine.ParticleSystem/Particle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_EmitOld_Internal_mD22E235F6AB32455147A7DAF814AC8B4949C89D3 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* ___particle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::GetParticleCurrentColor_Injected(UnityEngine.ParticleSystem/Particle&,UnityEngine.Color32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_GetParticleCurrentColor_Injected_mB7BBA647AF01D60BDE0BA051BBE6B8FB6F32052B (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* ___particle0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___ret1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetParticles_mE9CFDFC35CCF4D54795A0F5B9DDCAA38149D1B31 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___particles0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetParticles_mFC9EA6E092E60A76445F36A5EC611E9D2B5A1761 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___particles0, int32_t ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m4A59E0A2C7CA49EF75287A067305ABB314A16E62 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___withChildren0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_mB5761CB85083F593FFEC3D27931CACF1855A6326 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___withChildren0, int32_t ___stopBehavior1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m6CA855033D5CE2D3AF7927B6709BC65DBCD632DF (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___withChildren0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Emit_Internal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_Internal_m54D6D9A78E8634846C9DB6445C0E0A0885E8A20E (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, int32_t ___count0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_Injected_mC5638D07E58C6EDB8C0CD3717A66A61CBA30C3A6 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0* ___emitParams0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule__ctor_m5F7D2DD815C741DE3FA18A0C1BB2F2776612EF7A (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmissionModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule__ctor_m6AE98CC2103BECB52B7551D1304E733AE8BD70B1 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule__ctor_m951B06AF6BDA194E8111B2B72C104562F41CB0AD (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule__ctor_m64A15E09916657384A99217570EB78F31A09E10A (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ColorOverLifetimeModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorOverLifetimeModule__ctor_m3870A84520D71E559FF26F8592B98865763E42F3 (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule__ctor_m86AE80EB2EAF5AC13146D2856AA7DF538A9412BC (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule__ctor_mB04B2490B71B56B4CCD7F5DFD983DAB98696FB4E (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule__ctor_m9FB482ADCAA6B390BC1D6A145D51594A8E13FE4C (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CustomDataModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDataModule__ctor_mFEC59E8A3F82DDEAD62D887E52E92D9B25B61D78 (CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_duration_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_duration_Injected_m8FFE76F870FE2DEE726419BF3D938ECF415B3510 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_duration_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_duration_Injected_m361AE74F574D0AD67408B17459CFC764781477C0 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_duration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_duration_m3B328F1E542EEE7BAE101B309512E0E3B4638B77 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_loop_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_loop_Injected_m981D150F1CB1259422834C967802AB03E6D098DB (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_loop_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_loop_Injected_m22DA9A4669A69F1D93A999C216264ACABE404833 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_loop_mB3FC83A6DA8D248D15C53388D6B9B7711ADD89BE (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_prewarm_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_prewarm_Injected_m8449153B8A5ED67CC3743B07C338D9F972F685C8 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_prewarm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_prewarm_m2B4B37F0B20CA2FDAB53315FC47E8FDCF3BBCD72 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_prewarm_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_prewarm_Injected_mCDA5CD4DC63DD61A38423B9E82D9D192128CF0A7 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_prewarm(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_prewarm_m99964C46DE65B6797E9FD6A5CAF19E0B150D99F6 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::get_startDelay_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_get_startDelay_Injected_m5E4A7FE7E2C4286BAE5F918278DDBA0519EFCBFA (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startDelay_m548FABFC02F1542B2B84EB3EBD9148C7CEB5DB6D (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startDelay_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startDelay_Injected_m3B0CF0F52137CDEE6C620E47B1BE3A144E3ED671 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startDelay(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startDelay_mFE9F9E7F79978F670904789F7F55B96F42434F69 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::get_startLifetime_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_get_startLifetime_Injected_m6C50EEC3F7594999EF7330AA13EE3C9649D6317B (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startLifetime_m09FB4B0E4B44A5B76E2DB11F177F770682BEA654 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startLifetime_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startLifetime_Injected_m6543469C178E9F4F3F9454AE7ACE547CDE3DC183 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startLifetime(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startLifetime_mDFC2433853CB12C0C93C8BF16FEDB4EA2E0B3514 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_startLifetimeMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_startLifetimeMultiplier_Injected_m835C8A2876D56CECEF8C47920CBF2D69584338E7 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_startLifetimeMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_startLifetimeMultiplier_m635DF5E608211FCF706FBAD039AE0C140BCEDB7C (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::get_startSpeed_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_get_startSpeed_Injected_mE4CEE405FFFF1BE721523C6E8994B62441E3B8CD (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startSpeed_m2F9A0CF5D05AA3522424EAD30CF226F0CDF8382B (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSpeed_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSpeed_Injected_mB5D5EE2B1DF8FC971EB328E5B93AD94BDE059748 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSpeed(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSpeed_mE6041E4BA54F01117AF6B81B1E53C5C9C669AC75 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_startSize3D_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_startSize3D_Injected_m9F1856E36D2ED6F1001794DBC1D0432A34E48CF0 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_startSize3D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_startSize3D_mA7F91E70AE687D0561D563C38C582DE9299F3FE9 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::get_startSize_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_get_startSize_Injected_m4450C02AC6B7E27E925D97761AFE732FE0F8F43C (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startSize_m7D92E17A7D36FB18A9D3ADA54D2D1DEDE89601FC (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSize_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSize_Injected_mB94AE315406585F961A8F40A9016D30E2A17EF12 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSize(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSize_m44C3A39EAF1AE9A526A126D93160128223BE827B (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::get_startSizeX_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_get_startSizeX_Injected_m700139362AEBDFED018D99C1CFF1E86B97314428 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startSizeX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startSizeX_mBDB87DD40CDA54AD0045EF86FB43763D192E6B6A (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeX_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeX_Injected_mF77E57B5C68F6BED36AFFAF605233CC7866A3A5E (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeX(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeX_m5F3F00611409B616D7B5B05EF3A6D7C35448C445 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_startSizeXMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_startSizeXMultiplier_Injected_mF9BBBDF71B7FBBF79CA4826359CDAA9C750B78FD (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_startSizeXMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_startSizeXMultiplier_m92CC2E6EBE468299F1B865326C3A29282E2AD01B (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeXMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeXMultiplier_Injected_mDC9E5974A2006F1A2C4793849186E95B191B36CA (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeXMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeXMultiplier_m97EF3367ABCA54443AB7E2DF038E1208CAFEDCC6 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::get_startSizeY_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_get_startSizeY_Injected_m875F8CFC8EDFD45B1D88C87AFB7D629BE6A7AB0B (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startSizeY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startSizeY_m9344B56673317BFEAF3A15C024BA57F034546199 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeY_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeY_Injected_mC5717D54E78AE210A8BA48CA201C76FA47986DAB (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeY(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeY_mAA04D165042FFAEC3F17672ED84F066A8295C0FD (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_startSizeYMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_startSizeYMultiplier_Injected_m46A071C970300DFDC08ED618A5EF59C9ABEA27B6 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_startSizeYMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_startSizeYMultiplier_mCADA7878245EDA4AF5A357F6E30D68F7EA4A0F41 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeYMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeYMultiplier_Injected_mA886D5EA2057BEB3E86B92223D5FB3C2ADE7C4DF (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeYMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeYMultiplier_m1100BB5A064C9F3638F2F7867EC404B95AC59215 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::get_startSizeZ_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_get_startSizeZ_Injected_mD43FA6AC5B6A34E27B4338521B0D82922B036FB6 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startSizeZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startSizeZ_m16145FFC5083D901D99270682AA250CB429076A6 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeZ_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeZ_Injected_mFECE249FECE08BA138FF7C02515A4367197F81D7 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeZ(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeZ_mA1D0B1E2E9505DFDB42622E575FD91134ABE9A50 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_startSizeZMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_startSizeZMultiplier_Injected_mA1DA279F6E2B341BE53D63FCAE86BF8400DCA8F2 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_startSizeZMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_startSizeZMultiplier_mEFA4FEC23CFE506F036568620A4EB720AD6F4BCC (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeZMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeZMultiplier_Injected_m2FA2039FEC326A5FE31BA46CE211A076A0452E76 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeZMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeZMultiplier_mE3AAF9C6580F32E7D986147CA060B243E392B9E0 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startRotation_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startRotation_Injected_m5181B142EBEB905B23F66B7E3ED71A6B43E33B40 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startRotation(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startRotation_m8D09FD13401B188EC3C20C489CFA1EDDA3B43079 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::get_startColor_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxGradient&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_get_startColor_Injected_m0E98B135389A5259B00D43751CB7802DFA2C0A6D (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* ___ret1, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxGradient UnityEngine.ParticleSystem/MainModule::get_startColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 MainModule_get_startColor_m24E66E583EB51341A885ABAE84114CBB37018781 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startColor_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxGradient&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startColor_Injected_m0521218BF17ABFE02A97C6D523EE4F35CB6B94E1 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startColor(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startColor_m504911284CAC53A7C1B97B5D01BBDD2FA67D0E7A (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemSimulationSpace UnityEngine.ParticleSystem/MainModule::get_simulationSpace_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_simulationSpace_Injected_m3CDF1C4782BA5048CCE147C6785F47E11D2FB49C (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemSimulationSpace UnityEngine.ParticleSystem/MainModule::get_simulationSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemScalingMode UnityEngine.ParticleSystem/MainModule::get_scalingMode_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_scalingMode_Injected_m2EB44BC6677EE6B5B12E74BEA2814B668D2C5FEC (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemScalingMode UnityEngine.ParticleSystem/MainModule::get_scalingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_scalingMode_m2C235E61B1ABBD31F471DC80EF15EA315EA3F0FA (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_scalingMode_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystemScalingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_scalingMode_Injected_m2E7F62B58F9064734E3850B4DE8E01624BC73140 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_scalingMode(UnityEngine.ParticleSystemScalingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_scalingMode_m08A4399A0E64E5894509084A42BB528BE16A648D (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_playOnAwake_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_playOnAwake_Injected_m0287BAC1E5D6161C144597072867F74B7C8E6BF2 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_playOnAwake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_playOnAwake_m4FEB55773ED05AB5166314D9883671F4B277762A (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/MainModule::get_maxParticles_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_maxParticles_Injected_m92DB3A34E29FDC1A9C457825B7F0DCECD77FFF7C (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/MainModule::get_maxParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles_Injected(UnityEngine.ParticleSystem/MainModule&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_maxParticles_Injected_mC872CCABDF8B4F5D1DC5D726A0EA7E0EB8E3E7E6 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_maxParticles_mF9E7A56D7E1A528904BE1A8C0E14F15C3AF0F748 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled_Injected(UnityEngine.ParticleSystem/EmissionModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_Injected_m8F10D1C98F11BB909A1403547168E56A8B31A16A (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* ____unity_self0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/ShapeModule::get_enabled_Injected(UnityEngine.ParticleSystem/ShapeModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShapeModule_get_enabled_Injected_m659D1B10DB9505C5108F019759CC5C3D5ED8DABA (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* ____unity_self0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/ShapeModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShapeModule_get_enabled_m95D1E7C55963FC8A6BFEC95B7B22C2E1218DCC4F (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/ShapeModule::get_radius_Injected(UnityEngine.ParticleSystem/ShapeModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShapeModule_get_radius_Injected_mB2DB597109ED6BD553826B412A3EABF7B3648A92 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* ____unity_self0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/ShapeModule::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShapeModule_get_radius_m41AE7721BB6CDD1E9E91509DD2D7B60F0D302E90 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_radius_Injected(UnityEngine.ParticleSystem/ShapeModule&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_radius_Injected_m9F14643006F53252E13BC56C96C15F290C02E3F4 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* ____unity_self0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_enabled_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureSheetAnimationModule_get_enabled_Injected_mCEED8C5D537DF4C2F27575205F4C7407E141FD71 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* ____unity_self0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureSheetAnimationModule_get_enabled_mF860A1A9A5794EA2FC3A5B9652C812981A4F3136 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_numTilesX_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_numTilesX_Injected_m51B0DF417D8A10F44945C522A9DAD696040BBA70 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* ____unity_self0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_numTilesX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_numTilesY_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_numTilesY_Injected_mF8E6411A7A51A01AEE6D0B25ABD88197B271AE13 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* ____unity_self0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_numTilesY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_numTilesY_mA39AD9D6245BE792B776B9834A3E83609266A8C4 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemAnimationType UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_animation_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_animation_Injected_mAEBDAB6CF3E847241AA49D755D597E98F2A88C8D (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* ____unity_self0, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemAnimationType UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_animation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_animation_mB402112DF63C35BB5B34B892D51791ABAED84176 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_frameOverTime_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_get_frameOverTime_Injected_mFF2C1F12546D3BFFA853A426B15E02A80508B147 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_frameOverTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_cycleCount_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_cycleCount_Injected_m4025F8B4AF8C4E8B78DDE4F809F5706FB7D60F1E (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* ____unity_self0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_cycleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_cycleCount_m99F3A1F1DFA7947B44B826C6B9C96B268FFE5DC0 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_rowIndex_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_rowIndex_Injected_mA2C71D68A7201115FD34FAC36461CDD296308FF4 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* ____unity_self0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_rowIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_rowIndex_m72BA6BAAD0F816E11E276B28907119054D8EA03C (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::SetSprite_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&,System.Int32,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_SetSprite_Injected_mC7A5604FC76604B2D9C9B7A2F14C1393A9827958 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* ____unity_self0, int32_t ___index1, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::SetSprite(System.Int32,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_SetSprite_mE3F2237069C9CA6E514B65E71449335FF8EE22AB (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___index0, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Particle::set_remainingLifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_remainingLifetime_m3E58D8B3599B0BA6790D43022C3DF16E6896D018 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/Particle::get_remainingLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/Particle::get_startLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/Particle::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_rotation_mA3A5978F95EDA141FE91C3423DE46DE9B91B49A2 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_rotation3D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Particle_get_rotation3D_m8BE7C2D25F8E6F44F19690266100723A5DBE64D1 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem::GetParticleCurrentSize(UnityEngine.ParticleSystem/Particle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ParticleSystem_GetParticleCurrentSize_m2C376AB1B5C76C9947A036D2F8F51EAFBDE1F859 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* ___particle0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/Particle::GetCurrentSize(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_GetCurrentSize_m3F7D066BF44CDC3B0E501CA10A06313CD0CCCA64 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___system0, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.ParticleSystem::GetParticleCurrentColor(UnityEngine.ParticleSystem/Particle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ParticleSystem_GetParticleCurrentColor_m9F1AE6C1766B504411F273E617115FF23ABC3C95 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* ___particle0, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::GetCurrentColor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Particle_GetCurrentColor_m793DDF1AC5043A8991B6663D965404B1B3855C78 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___system0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve__ctor_m1D3846251475D7BBC7B128CCD7DFF40B16AAEF9E (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___constant0, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::get_mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MinMaxCurve_get_mode_m3501926642278B695E0CDFE2E24B641A560B9526 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_mode(UnityEngine.ParticleSystemCurveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_curveMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_curveMultiplier_m3C3EF4A373A3B2E51A4D27B88F7D1ADEA5B35936 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::get_curveMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* MinMaxCurve_get_curveMax_m455705B0A048A51461E94DACD1503EA1DEAB68B8 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMax(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) ;
// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::get_curveMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* MinMaxCurve_get_curveMin_m2F6041CAA8760D21D39A6204973B411D7109CF00 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMin(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constantMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constantMax_mBC9884017B40BDF911C768F521950370A6B41463 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constantMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constantMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constantMin_mB39AF05209B993DC31AB4247D9BE8D4F80E5D710 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constantMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constant(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::get_curve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* MinMaxCurve_get_curve_mE735424B0F4A9F55699BD82254F159D4226F9661 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::.ctor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient__ctor_m982C2A8AD071EA714E5583F90727C306B126F062 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::get_mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MinMaxGradient_get_mode_mC4B1A93FD93B41544AED855AB1FC520EC642AA98 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_mode(UnityEngine.ParticleSystemGradientMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::get_gradientMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* MinMaxGradient_get_gradientMax_m94B2E99380FFCC82F0387C4B1E685DDD5B9C7947 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_gradientMax(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::get_gradientMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* MinMaxGradient_get_gradientMin_m906D46F5A5F72C83AF7651A910A97B616342DE4E (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_gradientMin(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::get_colorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MinMaxGradient_get_colorMax_mB9E445D4D3E2788B10EA785B0BA8A76015FEDD1C (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_colorMax(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::get_colorMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MinMaxGradient_get_colorMin_mD8698D56F1E88B7EE97638A3DC48AFC3FD2A6664 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_colorMin(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MinMaxGradient_get_color_m534E35D538D549F006E9F90E453D41B92FBAC3BF (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::get_gradient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* MinMaxGradient_get_gradient_m012030F7AEAE915DCC71C80674564E3FFD02FF9D (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_gradient(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmitParams::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParams_set_position_mF08E5334FDB60090C038498B6749CE742D9FE0E3 (EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmitParams::set_rotation3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParams_set_rotation3D_mB3B95DD1E8BD0E93E0C98F49D4FA0D4485FB495F (EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_enabled_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VelocityOverLifetimeModule_get_enabled_Injected_mB7A5AE07AAACBE69D912C410AED965B6009B345E (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* ____unity_self0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VelocityOverLifetimeModule_get_enabled_m60395DDF6F516804EBFCD7AAE5AD0D741B279E4E (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_x_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_get_x_Injected_m13F8123E360E2DD1E4E1BC89F37094A2455AF291 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 VelocityOverLifetimeModule_get_x_mB9014044B32BB551EBB06A9DF167DCA4036AA002 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_x_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_set_x_Injected_m23A73756B945B8DCFEEC0A8AD47937B75177A262 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_x(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_set_x_m667368604CF8D09F133E552E21CBD3DC344281A0 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_y_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_get_y_Injected_m4C851BE4A493DA375EF93924C8FC15769F169438 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 VelocityOverLifetimeModule_get_y_m2B00A63C14F173791F1CDD2ACB527F64A72D16BF (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_y_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_set_y_Injected_m2CFD2A2A63739B996C10A7920B3D5B06AEAB9553 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_y(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_set_y_m4B08D16D7F274567CC18790702C8F3C53A443089 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_z_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_get_z_Injected_m01F302E682EF8994B8C25CA9B87E046435E98DC4 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 VelocityOverLifetimeModule_get_z_mBEF172621B262D8E14742E3940DEC14757870B0C (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_z_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_set_z_Injected_m9DCC4C5B98B7597F6C5F39DB3FE2AD53419DEBA6 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_z(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_set_z_m8B5A03C2D6E06CD7C6177BD321E9121E96D1D889 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/ColorOverLifetimeModule::get_enabled_Injected(UnityEngine.ParticleSystem/ColorOverLifetimeModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorOverLifetimeModule_get_enabled_Injected_m007EAC65BDF28C61271CF0D60BA9E920E45CE532 (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* ____unity_self0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/ColorOverLifetimeModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorOverLifetimeModule_get_enabled_mAB86D22805596728C643ABDF4887A246F1652B5B (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ColorOverLifetimeModule::get_color_Injected(UnityEngine.ParticleSystem/ColorOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxGradient&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorOverLifetimeModule_get_color_Injected_m6B8D5D22C47E26756DA09A5EFF427C18D144EF46 (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* ____unity_self0, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* ___ret1, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxGradient UnityEngine.ParticleSystem/ColorOverLifetimeModule::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ColorOverLifetimeModule_get_color_m320131C4BBF3B84729CE1D2F7DD7FB986746BDB1 (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ColorOverLifetimeModule::set_color_Injected(UnityEngine.ParticleSystem/ColorOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxGradient&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorOverLifetimeModule_set_color_Injected_m36358251CD9A3487269CEFC0748E0571DB36602F (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* ____unity_self0, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ColorOverLifetimeModule::set_color(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/LightsModule::get_enabled_Injected(UnityEngine.ParticleSystem/LightsModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LightsModule_get_enabled_Injected_mCFFAB06613223DB0F3FF4DAE797D8D00E6E9F8C8 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* ____unity_self0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/LightsModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LightsModule_get_enabled_m944379FB6DC57FE6F4E11714BBCE194C51EA7DA9 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_enabled_Injected(UnityEngine.ParticleSystem/LightsModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_enabled_Injected_m6337E80E653BA45B5A1ECF74028B6EEC4E7EE433 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* ____unity_self0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/TrailModule::get_enabled_Injected(UnityEngine.ParticleSystem/TrailModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrailModule_get_enabled_Injected_m9114885AE38342F8F33BC75554434118A8ABF391 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* ____unity_self0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/TrailModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrailModule_get_enabled_m78262C91CD53A91AFC1472EA65B64EA0D064EE0C (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_enabled_Injected(UnityEngine.ParticleSystem/TrailModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_enabled_Injected_mD4ADECFADB6879344BF4312B342686297D88B7F1 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* ____unity_self0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CustomDataModule::set_enabled_Injected(UnityEngine.ParticleSystem/CustomDataModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDataModule_set_enabled_Injected_m9EEC00733D0C4F33794265BB7E7525DF8F70DC15 (CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4* ____unity_self0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CustomDataModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDataModule_set_enabled_m1C073CBA9E695C7B7BB85CE82EB2155CEDB86B62 (CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CustomDataModule::SetColor_Injected(UnityEngine.ParticleSystem/CustomDataModule&,UnityEngine.ParticleSystemCustomData,UnityEngine.ParticleSystem/MinMaxGradient&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDataModule_SetColor_Injected_mE1A54D996FC25E1E2B34AD97653206C931082930 (CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4* ____unity_self0, int32_t ___stream1, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* ___gradient2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CustomDataModule::SetColor(UnityEngine.ParticleSystemCustomData,UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDataModule_SetColor_m1314A02DD8330C806E970DA7076967273A1D2584 (CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4* __this, int32_t ___stream0, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___gradient1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystemExtensionsImpl::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystemExtensionsImpl_GetCollisionEvents_m20E540083AAAB639CDE0A5746375515D537736FC (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___ps0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* ___collisionEvents2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystemRenderer::get_pivot_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemRenderer_get_pivot_Injected_mE819E37322A80AC35F9AB3664B4F27232E053B78 (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystemRenderer::set_pivot_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemRenderer_set_pivot_Injected_mA3FD92B1ECD9BF77169C4D4EFCAD8F2AD7138DE7 (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::get_intersection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ParticleCollisionEvent_get_intersection_m5CD7C517228E7D6148DEA4ED0500533C146DEC97 (ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ParticleCollisionEvent_get_normal_m7FC8D0427210D507D8003DB9CCD791AB88DC63FC (ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_m27ED2FE38DEE11C9C98F7D30392BB5B39B6A16ED (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity1, float ___size2, float ___lifetime3, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color4, const RuntimeMethod* method) 
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		Particle_set_position_mE9103000DB4EA6CE09D25650F5A2915731F7A63E((&V_0), L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___velocity1;
		Particle_set_velocity_mF4C1DE326CCABE480F44D3DF3873241E85A6303B((&V_0), L_1, NULL);
		float L_2 = ___lifetime3;
		Particle_set_lifetime_m29360AF093721364BF46996EE1D400256DB95911((&V_0), L_2, NULL);
		float L_3 = ___lifetime3;
		Particle_set_startLifetime_mCD0B16F2B1F2E2AEED84C4FCD85D5AD96F853A77((&V_0), L_3, NULL);
		float L_4 = ___size2;
		Particle_set_startSize_mBBEBF7365A4E68FF2044E2ECEACC562376EA4A1F((&V_0), L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Particle_set_rotation3D_mC0B19BFEBA780F95C763DE14C80B29764E519D62((&V_0), L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Particle_set_angularVelocity3D_m56AE22FE7AFB178DD206EA2A7E0DA64B360D7EA8((&V_0), L_6, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = ___color4;
		Particle_set_startColor_mC3031F4238B0C003DFA5BF9AB4B3141B7CF71538((&V_0), L_7, NULL);
		Particle_set_randomSeed_mCC3C02CCBF9C0EA80E2CE01EC47AD30F31D5F6C2((&V_0), 5, NULL);
		ParticleSystem_EmitOld_Internal_mD22E235F6AB32455147A7DAF814AC8B4949C89D3(__this, (&V_0), NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/Particle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_m329091E7F55C972CE85A100CA624192AD8442688 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D ___particle0, const RuntimeMethod* method) 
{
	{
		ParticleSystem_EmitOld_Internal_mD22E235F6AB32455147A7DAF814AC8B4949C89D3(__this, (&___particle0), NULL);
		return;
	}
}
// System.Boolean UnityEngine.ParticleSystem::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_get_isPlaying_mC5170DA3C904670B88200C8DA1E0F8FC1BC7C42B (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) 
{
	typedef bool (*ParticleSystem_get_isPlaying_mC5170DA3C904670B88200C8DA1E0F8FC1BC7C42B_ftn) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*);
	static ParticleSystem_get_isPlaying_mC5170DA3C904670B88200C8DA1E0F8FC1BC7C42B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_isPlaying_mC5170DA3C904670B88200C8DA1E0F8FC1BC7C42B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_isPlaying()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.ParticleSystem::get_isEmitting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_get_isEmitting_mE3EC701A8C5DACA27FDA91D8956CCE1ABAC6A0D9 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) 
{
	typedef bool (*ParticleSystem_get_isEmitting_mE3EC701A8C5DACA27FDA91D8956CCE1ABAC6A0D9_ftn) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*);
	static ParticleSystem_get_isEmitting_mE3EC701A8C5DACA27FDA91D8956CCE1ABAC6A0D9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_isEmitting_mE3EC701A8C5DACA27FDA91D8956CCE1ABAC6A0D9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_isEmitting()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.ParticleSystem::GetParticleCurrentSize(UnityEngine.ParticleSystem/Particle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ParticleSystem_GetParticleCurrentSize_m2C376AB1B5C76C9947A036D2F8F51EAFBDE1F859 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* ___particle0, const RuntimeMethod* method) 
{
	typedef float (*ParticleSystem_GetParticleCurrentSize_m2C376AB1B5C76C9947A036D2F8F51EAFBDE1F859_ftn) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*);
	static ParticleSystem_GetParticleCurrentSize_m2C376AB1B5C76C9947A036D2F8F51EAFBDE1F859_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_GetParticleCurrentSize_m2C376AB1B5C76C9947A036D2F8F51EAFBDE1F859_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::GetParticleCurrentSize(UnityEngine.ParticleSystem/Particle&)");
	float icallRetVal = _il2cpp_icall_func(__this, ___particle0);
	return icallRetVal;
}
// UnityEngine.Color32 UnityEngine.ParticleSystem::GetParticleCurrentColor(UnityEngine.ParticleSystem/Particle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ParticleSystem_GetParticleCurrentColor_m9F1AE6C1766B504411F273E617115FF23ABC3C95 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* ___particle0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* L_0 = ___particle0;
		ParticleSystem_GetParticleCurrentColor_Injected_mB7BBA647AF01D60BDE0BA051BBE6B8FB6F32052B(__this, L_0, (&V_0), NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetParticles_mE9CFDFC35CCF4D54795A0F5B9DDCAA38149D1B31 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___particles0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	typedef int32_t (*ParticleSystem_GetParticles_mE9CFDFC35CCF4D54795A0F5B9DDCAA38149D1B31_ftn) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7*, int32_t, int32_t);
	static ParticleSystem_GetParticles_mE9CFDFC35CCF4D54795A0F5B9DDCAA38149D1B31_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_GetParticles_mE9CFDFC35CCF4D54795A0F5B9DDCAA38149D1B31_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___particles0, ___size1, ___offset2);
	return icallRetVal;
}
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetParticles_mFC9EA6E092E60A76445F36A5EC611E9D2B5A1761 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___particles0, int32_t ___size1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_0 = ___particles0;
		int32_t L_1 = ___size1;
		int32_t L_2;
		L_2 = ParticleSystem_GetParticles_mE9CFDFC35CCF4D54795A0F5B9DDCAA38149D1B31(__this, L_0, L_1, 0, NULL);
		V_0 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetParticles_m0F67158FED60933343574A1BEB68FEB9D5476E3F (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___particles0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_0 = ___particles0;
		int32_t L_1;
		L_1 = ParticleSystem_GetParticles_mFC9EA6E092E60A76445F36A5EC611E9D2B5A1761(__this, L_0, (-1), NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Simulate_m514E1FCC76A6882650BD237E1D14B43ECAA97643 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, float ___t0, bool ___withChildren1, bool ___restart2, bool ___fixedTimeStep3, const RuntimeMethod* method) 
{
	typedef void (*ParticleSystem_Simulate_m514E1FCC76A6882650BD237E1D14B43ECAA97643_ftn) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, float, bool, bool, bool);
	static ParticleSystem_Simulate_m514E1FCC76A6882650BD237E1D14B43ECAA97643_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Simulate_m514E1FCC76A6882650BD237E1D14B43ECAA97643_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean,System.Boolean)");
	_il2cpp_icall_func(__this, ___t0, ___withChildren1, ___restart2, ___fixedTimeStep3);
}
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m4A59E0A2C7CA49EF75287A067305ABB314A16E62 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___withChildren0, const RuntimeMethod* method) 
{
	typedef void (*ParticleSystem_Play_m4A59E0A2C7CA49EF75287A067305ABB314A16E62_ftn) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, bool);
	static ParticleSystem_Play_m4A59E0A2C7CA49EF75287A067305ABB314A16E62_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Play_m4A59E0A2C7CA49EF75287A067305ABB314A16E62_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Play(System.Boolean)");
	_il2cpp_icall_func(__this, ___withChildren0);
}
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) 
{
	{
		ParticleSystem_Play_m4A59E0A2C7CA49EF75287A067305ABB314A16E62(__this, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_mB5761CB85083F593FFEC3D27931CACF1855A6326 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___withChildren0, int32_t ___stopBehavior1, const RuntimeMethod* method) 
{
	typedef void (*ParticleSystem_Stop_mB5761CB85083F593FFEC3D27931CACF1855A6326_ftn) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, bool, int32_t);
	static ParticleSystem_Stop_mB5761CB85083F593FFEC3D27931CACF1855A6326_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Stop_mB5761CB85083F593FFEC3D27931CACF1855A6326_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)");
	_il2cpp_icall_func(__this, ___withChildren0, ___stopBehavior1);
}
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m6CA855033D5CE2D3AF7927B6709BC65DBCD632DF (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___withChildren0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___withChildren0;
		ParticleSystem_Stop_mB5761CB85083F593FFEC3D27931CACF1855A6326(__this, L_0, 1, NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) 
{
	{
		ParticleSystem_Stop_m6CA855033D5CE2D3AF7927B6709BC65DBCD632DF(__this, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Clear_m26F18A1A58006417A0F66688E3124CFD1E880E11 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___withChildren0, const RuntimeMethod* method) 
{
	typedef void (*ParticleSystem_Clear_m26F18A1A58006417A0F66688E3124CFD1E880E11_ftn) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, bool);
	static ParticleSystem_Clear_m26F18A1A58006417A0F66688E3124CFD1E880E11_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Clear_m26F18A1A58006417A0F66688E3124CFD1E880E11_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Clear(System.Boolean)");
	_il2cpp_icall_func(__this, ___withChildren0);
}
// System.Boolean UnityEngine.ParticleSystem::IsAlive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_IsAlive_m4C919DCFF8EC256F68415875DF421DC53065AC7B (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___withChildren0, const RuntimeMethod* method) 
{
	typedef bool (*ParticleSystem_IsAlive_m4C919DCFF8EC256F68415875DF421DC53065AC7B_ftn) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, bool);
	static ParticleSystem_IsAlive_m4C919DCFF8EC256F68415875DF421DC53065AC7B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_IsAlive_m4C919DCFF8EC256F68415875DF421DC53065AC7B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::IsAlive(System.Boolean)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___withChildren0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_m3E9E6359087607E84E0D4D35844D80D9452AD72D (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___count0;
		ParticleSystem_Emit_Internal_m54D6D9A78E8634846C9DB6445C0E0A0885E8A20E(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Emit_Internal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_Internal_m54D6D9A78E8634846C9DB6445C0E0A0885E8A20E (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	typedef void (*ParticleSystem_Emit_Internal_m54D6D9A78E8634846C9DB6445C0E0A0885E8A20E_ftn) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, int32_t);
	static ParticleSystem_Emit_Internal_m54D6D9A78E8634846C9DB6445C0E0A0885E8A20E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Emit_Internal_m54D6D9A78E8634846C9DB6445C0E0A0885E8A20E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Emit_Internal(System.Int32)");
	_il2cpp_icall_func(__this, ___count0);
}
// System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/EmitParams,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_m5AD1A3F02A19B61E3B0CC738FD498B52D19B65AA (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0 ___emitParams0, int32_t ___count1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___count1;
		ParticleSystem_Emit_Injected_mC5638D07E58C6EDB8C0CD3717A66A61CBA30C3A6(__this, (&___emitParams0), L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::EmitOld_Internal(UnityEngine.ParticleSystem/Particle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_EmitOld_Internal_mD22E235F6AB32455147A7DAF814AC8B4949C89D3 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* ___particle0, const RuntimeMethod* method) 
{
	typedef void (*ParticleSystem_EmitOld_Internal_mD22E235F6AB32455147A7DAF814AC8B4949C89D3_ftn) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*);
	static ParticleSystem_EmitOld_Internal_mD22E235F6AB32455147A7DAF814AC8B4949C89D3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_EmitOld_Internal_mD22E235F6AB32455147A7DAF814AC8B4949C89D3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::EmitOld_Internal(UnityEngine.ParticleSystem/Particle&)");
	_il2cpp_icall_func(__this, ___particle0);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) 
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		MainModule__ctor_m5F7D2DD815C741DE3FA18A0C1BB2F2776612EF7A((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) 
{
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_0;
		memset((&L_0), 0, sizeof(L_0));
		EmissionModule__ctor_m6AE98CC2103BECB52B7551D1304E733AE8BD70B1((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/ShapeModule UnityEngine.ParticleSystem::get_shape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 ParticleSystem_get_shape_mD7F072CC18587858138AA7B3A882995493AA7C80 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) 
{
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		ShapeModule__ctor_m951B06AF6BDA194E8111B2B72C104562F41CB0AD((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/VelocityOverLifetimeModule UnityEngine.ParticleSystem::get_velocityOverLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56 ParticleSystem_get_velocityOverLifetime_m84189E42E4B97EF44B66BC1FBB9FA0F15F05B535 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) 
{
	VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56 L_0;
		memset((&L_0), 0, sizeof(L_0));
		VelocityOverLifetimeModule__ctor_m64A15E09916657384A99217570EB78F31A09E10A((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/ColorOverLifetimeModule UnityEngine.ParticleSystem::get_colorOverLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 ParticleSystem_get_colorOverLifetime_mD8C72661EFE9BB063126752E744544EE2FF5814C (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) 
{
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		ColorOverLifetimeModule__ctor_m3870A84520D71E559FF26F8592B98865763E42F3((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/TextureSheetAnimationModule UnityEngine.ParticleSystem::get_textureSheetAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 ParticleSystem_get_textureSheetAnimation_mA35CFDD2E7F70F3AFA88A766359336F36CBA937B (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) 
{
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		TextureSheetAnimationModule__ctor_m86AE80EB2EAF5AC13146D2856AA7DF538A9412BC((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/LightsModule UnityEngine.ParticleSystem::get_lights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E ParticleSystem_get_lights_m45FB86E05C48DCB25ED3481B9FE0966DF29EDD6C (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) 
{
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_0;
		memset((&L_0), 0, sizeof(L_0));
		LightsModule__ctor_mB04B2490B71B56B4CCD7F5DFD983DAB98696FB4E((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/TrailModule UnityEngine.ParticleSystem::get_trails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D ParticleSystem_get_trails_mDDDD23F6C3540ECD10E42BB0A4F9ECBADC294C66 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) 
{
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_0;
		memset((&L_0), 0, sizeof(L_0));
		TrailModule__ctor_m9FB482ADCAA6B390BC1D6A145D51594A8E13FE4C((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/CustomDataModule UnityEngine.ParticleSystem::get_customData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4 ParticleSystem_get_customData_m0968C670E38B6154DF37A077EB60C6322E5880D0 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) 
{
	CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		CustomDataModule__ctor_mFEC59E8A3F82DDEAD62D887E52E92D9B25B61D78((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.ParticleSystem::GetParticleCurrentColor_Injected(UnityEngine.ParticleSystem/Particle&,UnityEngine.Color32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_GetParticleCurrentColor_Injected_mB7BBA647AF01D60BDE0BA051BBE6B8FB6F32052B (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* ___particle0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*ParticleSystem_GetParticleCurrentColor_Injected_mB7BBA647AF01D60BDE0BA051BBE6B8FB6F32052B_ftn) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*);
	static ParticleSystem_GetParticleCurrentColor_Injected_mB7BBA647AF01D60BDE0BA051BBE6B8FB6F32052B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_GetParticleCurrentColor_Injected_mB7BBA647AF01D60BDE0BA051BBE6B8FB6F32052B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::GetParticleCurrentColor_Injected(UnityEngine.ParticleSystem/Particle&,UnityEngine.Color32&)");
	_il2cpp_icall_func(__this, ___particle0, ___ret1);
}
// System.Void UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_Injected_mC5638D07E58C6EDB8C0CD3717A66A61CBA30C3A6 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0* ___emitParams0, int32_t ___count1, const RuntimeMethod* method) 
{
	typedef void (*ParticleSystem_Emit_Injected_mC5638D07E58C6EDB8C0CD3717A66A61CBA30C3A6_ftn) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0*, int32_t);
	static ParticleSystem_Emit_Injected_mC5638D07E58C6EDB8C0CD3717A66A61CBA30C3A6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Emit_Injected_mC5638D07E58C6EDB8C0CD3717A66A61CBA30C3A6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32)");
	_il2cpp_icall_func(__this, ___emitParams0, ___count1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/MainModule
IL2CPP_EXTERN_C void MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshal_pinvoke(const MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9& unmarshaled, MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'MainModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshal_pinvoke_back(const MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke& marshaled, MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'MainModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/MainModule
IL2CPP_EXTERN_C void MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshal_pinvoke_cleanup(MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/MainModule
IL2CPP_EXTERN_C void MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshal_com(const MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9& unmarshaled, MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'MainModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshal_com_back(const MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com& marshaled, MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'MainModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/MainModule
IL2CPP_EXTERN_C void MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshal_com_cleanup(MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/MainModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule__ctor_m5F7D2DD815C741DE3FA18A0C1BB2F2776612EF7A (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) 
{
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___particleSystem0;
		__this->___m_ParticleSystem_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ParticleSystem_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule__ctor_m5F7D2DD815C741DE3FA18A0C1BB2F2776612EF7A_AdjustorThunk (RuntimeObject* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule__ctor_m5F7D2DD815C741DE3FA18A0C1BB2F2776612EF7A(_thisAdjusted, ___particleSystem0, method);
}
// System.Single UnityEngine.ParticleSystem/MainModule::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = MainModule_get_duration_Injected_m8FFE76F870FE2DEE726419BF3D938ECF415B3510(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  float MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	float _returnValue;
	_returnValue = MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_duration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_duration_m3B328F1E542EEE7BAE101B309512E0E3B4638B77 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		MainModule_set_duration_Injected_m361AE74F574D0AD67408B17459CFC764781477C0(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_duration_m3B328F1E542EEE7BAE101B309512E0E3B4638B77_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule_set_duration_m3B328F1E542EEE7BAE101B309512E0E3B4638B77(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = MainModule_get_loop_Injected_m981D150F1CB1259422834C967802AB03E6D098DB(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	bool _returnValue;
	_returnValue = MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_loop_mB3FC83A6DA8D248D15C53388D6B9B7711ADD89BE (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		MainModule_set_loop_Injected_m22DA9A4669A69F1D93A999C216264ACABE404833(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_loop_mB3FC83A6DA8D248D15C53388D6B9B7711ADD89BE_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule_set_loop_mB3FC83A6DA8D248D15C53388D6B9B7711ADD89BE(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_prewarm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_prewarm_m2B4B37F0B20CA2FDAB53315FC47E8FDCF3BBCD72 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = MainModule_get_prewarm_Injected_m8449153B8A5ED67CC3743B07C338D9F972F685C8(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool MainModule_get_prewarm_m2B4B37F0B20CA2FDAB53315FC47E8FDCF3BBCD72_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	bool _returnValue;
	_returnValue = MainModule_get_prewarm_m2B4B37F0B20CA2FDAB53315FC47E8FDCF3BBCD72(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_prewarm(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_prewarm_m99964C46DE65B6797E9FD6A5CAF19E0B150D99F6 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		MainModule_set_prewarm_Injected_mCDA5CD4DC63DD61A38423B9E82D9D192128CF0A7(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_prewarm_m99964C46DE65B6797E9FD6A5CAF19E0B150D99F6_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule_set_prewarm_m99964C46DE65B6797E9FD6A5CAF19E0B150D99F6(_thisAdjusted, ___value0, method);
}
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startDelay_m548FABFC02F1542B2B84EB3EBD9148C7CEB5DB6D (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MainModule_get_startDelay_Injected_m5E4A7FE7E2C4286BAE5F918278DDBA0519EFCBFA(__this, (&V_0), NULL);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startDelay_m548FABFC02F1542B2B84EB3EBD9148C7CEB5DB6D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 _returnValue;
	_returnValue = MainModule_get_startDelay_m548FABFC02F1542B2B84EB3EBD9148C7CEB5DB6D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startDelay(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startDelay_mFE9F9E7F79978F670904789F7F55B96F42434F69 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) 
{
	{
		MainModule_set_startDelay_Injected_m3B0CF0F52137CDEE6C620E47B1BE3A144E3ED671(__this, (&___value0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_startDelay_mFE9F9E7F79978F670904789F7F55B96F42434F69_AdjustorThunk (RuntimeObject* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule_set_startDelay_mFE9F9E7F79978F670904789F7F55B96F42434F69(_thisAdjusted, ___value0, method);
}
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startLifetime_m09FB4B0E4B44A5B76E2DB11F177F770682BEA654 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MainModule_get_startLifetime_Injected_m6C50EEC3F7594999EF7330AA13EE3C9649D6317B(__this, (&V_0), NULL);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startLifetime_m09FB4B0E4B44A5B76E2DB11F177F770682BEA654_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 _returnValue;
	_returnValue = MainModule_get_startLifetime_m09FB4B0E4B44A5B76E2DB11F177F770682BEA654(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startLifetime(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startLifetime_mDFC2433853CB12C0C93C8BF16FEDB4EA2E0B3514 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) 
{
	{
		MainModule_set_startLifetime_Injected_m6543469C178E9F4F3F9454AE7ACE547CDE3DC183(__this, (&___value0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_startLifetime_mDFC2433853CB12C0C93C8BF16FEDB4EA2E0B3514_AdjustorThunk (RuntimeObject* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule_set_startLifetime_mDFC2433853CB12C0C93C8BF16FEDB4EA2E0B3514(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.ParticleSystem/MainModule::get_startLifetimeMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_startLifetimeMultiplier_m635DF5E608211FCF706FBAD039AE0C140BCEDB7C (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = MainModule_get_startLifetimeMultiplier_Injected_m835C8A2876D56CECEF8C47920CBF2D69584338E7(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  float MainModule_get_startLifetimeMultiplier_m635DF5E608211FCF706FBAD039AE0C140BCEDB7C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	float _returnValue;
	_returnValue = MainModule_get_startLifetimeMultiplier_m635DF5E608211FCF706FBAD039AE0C140BCEDB7C(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startSpeed_m2F9A0CF5D05AA3522424EAD30CF226F0CDF8382B (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MainModule_get_startSpeed_Injected_mE4CEE405FFFF1BE721523C6E8994B62441E3B8CD(__this, (&V_0), NULL);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startSpeed_m2F9A0CF5D05AA3522424EAD30CF226F0CDF8382B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 _returnValue;
	_returnValue = MainModule_get_startSpeed_m2F9A0CF5D05AA3522424EAD30CF226F0CDF8382B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSpeed(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSpeed_mE6041E4BA54F01117AF6B81B1E53C5C9C669AC75 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) 
{
	{
		MainModule_set_startSpeed_Injected_mB5D5EE2B1DF8FC971EB328E5B93AD94BDE059748(__this, (&___value0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_startSpeed_mE6041E4BA54F01117AF6B81B1E53C5C9C669AC75_AdjustorThunk (RuntimeObject* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule_set_startSpeed_mE6041E4BA54F01117AF6B81B1E53C5C9C669AC75(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_startSize3D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_startSize3D_mA7F91E70AE687D0561D563C38C582DE9299F3FE9 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = MainModule_get_startSize3D_Injected_m9F1856E36D2ED6F1001794DBC1D0432A34E48CF0(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool MainModule_get_startSize3D_mA7F91E70AE687D0561D563C38C582DE9299F3FE9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	bool _returnValue;
	_returnValue = MainModule_get_startSize3D_mA7F91E70AE687D0561D563C38C582DE9299F3FE9(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startSize_m7D92E17A7D36FB18A9D3ADA54D2D1DEDE89601FC (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MainModule_get_startSize_Injected_m4450C02AC6B7E27E925D97761AFE732FE0F8F43C(__this, (&V_0), NULL);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startSize_m7D92E17A7D36FB18A9D3ADA54D2D1DEDE89601FC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 _returnValue;
	_returnValue = MainModule_get_startSize_m7D92E17A7D36FB18A9D3ADA54D2D1DEDE89601FC(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSize(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSize_m44C3A39EAF1AE9A526A126D93160128223BE827B (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) 
{
	{
		MainModule_set_startSize_Injected_mB94AE315406585F961A8F40A9016D30E2A17EF12(__this, (&___value0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_startSize_m44C3A39EAF1AE9A526A126D93160128223BE827B_AdjustorThunk (RuntimeObject* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule_set_startSize_m44C3A39EAF1AE9A526A126D93160128223BE827B(_thisAdjusted, ___value0, method);
}
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startSizeX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startSizeX_mBDB87DD40CDA54AD0045EF86FB43763D192E6B6A (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MainModule_get_startSizeX_Injected_m700139362AEBDFED018D99C1CFF1E86B97314428(__this, (&V_0), NULL);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startSizeX_mBDB87DD40CDA54AD0045EF86FB43763D192E6B6A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 _returnValue;
	_returnValue = MainModule_get_startSizeX_mBDB87DD40CDA54AD0045EF86FB43763D192E6B6A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeX(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeX_m5F3F00611409B616D7B5B05EF3A6D7C35448C445 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) 
{
	{
		MainModule_set_startSizeX_Injected_mF77E57B5C68F6BED36AFFAF605233CC7866A3A5E(__this, (&___value0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_startSizeX_m5F3F00611409B616D7B5B05EF3A6D7C35448C445_AdjustorThunk (RuntimeObject* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule_set_startSizeX_m5F3F00611409B616D7B5B05EF3A6D7C35448C445(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.ParticleSystem/MainModule::get_startSizeXMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_startSizeXMultiplier_m92CC2E6EBE468299F1B865326C3A29282E2AD01B (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = MainModule_get_startSizeXMultiplier_Injected_mF9BBBDF71B7FBBF79CA4826359CDAA9C750B78FD(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  float MainModule_get_startSizeXMultiplier_m92CC2E6EBE468299F1B865326C3A29282E2AD01B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	float _returnValue;
	_returnValue = MainModule_get_startSizeXMultiplier_m92CC2E6EBE468299F1B865326C3A29282E2AD01B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeXMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeXMultiplier_m97EF3367ABCA54443AB7E2DF038E1208CAFEDCC6 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		MainModule_set_startSizeXMultiplier_Injected_mDC9E5974A2006F1A2C4793849186E95B191B36CA(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_startSizeXMultiplier_m97EF3367ABCA54443AB7E2DF038E1208CAFEDCC6_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule_set_startSizeXMultiplier_m97EF3367ABCA54443AB7E2DF038E1208CAFEDCC6(_thisAdjusted, ___value0, method);
}
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startSizeY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startSizeY_m9344B56673317BFEAF3A15C024BA57F034546199 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MainModule_get_startSizeY_Injected_m875F8CFC8EDFD45B1D88C87AFB7D629BE6A7AB0B(__this, (&V_0), NULL);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startSizeY_m9344B56673317BFEAF3A15C024BA57F034546199_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 _returnValue;
	_returnValue = MainModule_get_startSizeY_m9344B56673317BFEAF3A15C024BA57F034546199(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeY(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeY_mAA04D165042FFAEC3F17672ED84F066A8295C0FD (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) 
{
	{
		MainModule_set_startSizeY_Injected_mC5717D54E78AE210A8BA48CA201C76FA47986DAB(__this, (&___value0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_startSizeY_mAA04D165042FFAEC3F17672ED84F066A8295C0FD_AdjustorThunk (RuntimeObject* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule_set_startSizeY_mAA04D165042FFAEC3F17672ED84F066A8295C0FD(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.ParticleSystem/MainModule::get_startSizeYMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_startSizeYMultiplier_mCADA7878245EDA4AF5A357F6E30D68F7EA4A0F41 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = MainModule_get_startSizeYMultiplier_Injected_m46A071C970300DFDC08ED618A5EF59C9ABEA27B6(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  float MainModule_get_startSizeYMultiplier_mCADA7878245EDA4AF5A357F6E30D68F7EA4A0F41_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	float _returnValue;
	_returnValue = MainModule_get_startSizeYMultiplier_mCADA7878245EDA4AF5A357F6E30D68F7EA4A0F41(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeYMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeYMultiplier_m1100BB5A064C9F3638F2F7867EC404B95AC59215 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		MainModule_set_startSizeYMultiplier_Injected_mA886D5EA2057BEB3E86B92223D5FB3C2ADE7C4DF(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_startSizeYMultiplier_m1100BB5A064C9F3638F2F7867EC404B95AC59215_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule_set_startSizeYMultiplier_m1100BB5A064C9F3638F2F7867EC404B95AC59215(_thisAdjusted, ___value0, method);
}
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startSizeZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startSizeZ_m16145FFC5083D901D99270682AA250CB429076A6 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MainModule_get_startSizeZ_Injected_mD43FA6AC5B6A34E27B4338521B0D82922B036FB6(__this, (&V_0), NULL);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startSizeZ_m16145FFC5083D901D99270682AA250CB429076A6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 _returnValue;
	_returnValue = MainModule_get_startSizeZ_m16145FFC5083D901D99270682AA250CB429076A6(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeZ(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeZ_mA1D0B1E2E9505DFDB42622E575FD91134ABE9A50 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) 
{
	{
		MainModule_set_startSizeZ_Injected_mFECE249FECE08BA138FF7C02515A4367197F81D7(__this, (&___value0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_startSizeZ_mA1D0B1E2E9505DFDB42622E575FD91134ABE9A50_AdjustorThunk (RuntimeObject* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule_set_startSizeZ_mA1D0B1E2E9505DFDB42622E575FD91134ABE9A50(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.ParticleSystem/MainModule::get_startSizeZMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_startSizeZMultiplier_mEFA4FEC23CFE506F036568620A4EB720AD6F4BCC (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = MainModule_get_startSizeZMultiplier_Injected_mA1DA279F6E2B341BE53D63FCAE86BF8400DCA8F2(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  float MainModule_get_startSizeZMultiplier_mEFA4FEC23CFE506F036568620A4EB720AD6F4BCC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	float _returnValue;
	_returnValue = MainModule_get_startSizeZMultiplier_mEFA4FEC23CFE506F036568620A4EB720AD6F4BCC(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeZMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeZMultiplier_mE3AAF9C6580F32E7D986147CA060B243E392B9E0 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		MainModule_set_startSizeZMultiplier_Injected_m2FA2039FEC326A5FE31BA46CE211A076A0452E76(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_startSizeZMultiplier_mE3AAF9C6580F32E7D986147CA060B243E392B9E0_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule_set_startSizeZMultiplier_mE3AAF9C6580F32E7D986147CA060B243E392B9E0(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startRotation(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startRotation_m8D09FD13401B188EC3C20C489CFA1EDDA3B43079 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) 
{
	{
		MainModule_set_startRotation_Injected_m5181B142EBEB905B23F66B7E3ED71A6B43E33B40(__this, (&___value0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_startRotation_m8D09FD13401B188EC3C20C489CFA1EDDA3B43079_AdjustorThunk (RuntimeObject* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule_set_startRotation_m8D09FD13401B188EC3C20C489CFA1EDDA3B43079(_thisAdjusted, ___value0, method);
}
// UnityEngine.ParticleSystem/MinMaxGradient UnityEngine.ParticleSystem/MainModule::get_startColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 MainModule_get_startColor_m24E66E583EB51341A885ABAE84114CBB37018781 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MainModule_get_startColor_Injected_m0E98B135389A5259B00D43751CB7802DFA2C0A6D(__this, (&V_0), NULL);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 MainModule_get_startColor_m24E66E583EB51341A885ABAE84114CBB37018781_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 _returnValue;
	_returnValue = MainModule_get_startColor_m24E66E583EB51341A885ABAE84114CBB37018781(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startColor(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startColor_m504911284CAC53A7C1B97B5D01BBDD2FA67D0E7A (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method) 
{
	{
		MainModule_set_startColor_Injected_m0521218BF17ABFE02A97C6D523EE4F35CB6B94E1(__this, (&___value0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_startColor_m504911284CAC53A7C1B97B5D01BBDD2FA67D0E7A_AdjustorThunk (RuntimeObject* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule_set_startColor_m504911284CAC53A7C1B97B5D01BBDD2FA67D0E7A(_thisAdjusted, ___value0, method);
}
// UnityEngine.ParticleSystemSimulationSpace UnityEngine.ParticleSystem/MainModule::get_simulationSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = MainModule_get_simulationSpace_Injected_m3CDF1C4782BA5048CCE147C6785F47E11D2FB49C(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ParticleSystemScalingMode UnityEngine.ParticleSystem/MainModule::get_scalingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_scalingMode_m2C235E61B1ABBD31F471DC80EF15EA315EA3F0FA (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = MainModule_get_scalingMode_Injected_m2EB44BC6677EE6B5B12E74BEA2814B668D2C5FEC(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MainModule_get_scalingMode_m2C235E61B1ABBD31F471DC80EF15EA315EA3F0FA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MainModule_get_scalingMode_m2C235E61B1ABBD31F471DC80EF15EA315EA3F0FA(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_scalingMode(UnityEngine.ParticleSystemScalingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_scalingMode_m08A4399A0E64E5894509084A42BB528BE16A648D (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		MainModule_set_scalingMode_Injected_m2E7F62B58F9064734E3850B4DE8E01624BC73140(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_scalingMode_m08A4399A0E64E5894509084A42BB528BE16A648D_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule_set_scalingMode_m08A4399A0E64E5894509084A42BB528BE16A648D(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_playOnAwake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_playOnAwake_m4FEB55773ED05AB5166314D9883671F4B277762A (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = MainModule_get_playOnAwake_Injected_m0287BAC1E5D6161C144597072867F74B7C8E6BF2(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool MainModule_get_playOnAwake_m4FEB55773ED05AB5166314D9883671F4B277762A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	bool _returnValue;
	_returnValue = MainModule_get_playOnAwake_m4FEB55773ED05AB5166314D9883671F4B277762A(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.ParticleSystem/MainModule::get_maxParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = MainModule_get_maxParticles_Injected_m92DB3A34E29FDC1A9C457825B7F0DCECD77FFF7C(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_maxParticles_mF9E7A56D7E1A528904BE1A8C0E14F15C3AF0F748 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		MainModule_set_maxParticles_Injected_mC872CCABDF8B4F5D1DC5D726A0EA7E0EB8E3E7E6(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_maxParticles_mF9E7A56D7E1A528904BE1A8C0E14F15C3AF0F748_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*>(__this + _offset);
	MainModule_set_maxParticles_mF9E7A56D7E1A528904BE1A8C0E14F15C3AF0F748(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.ParticleSystem/MainModule::get_duration_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_duration_Injected_m8FFE76F870FE2DEE726419BF3D938ECF415B3510 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) 
{
	typedef float (*MainModule_get_duration_Injected_m8FFE76F870FE2DEE726419BF3D938ECF415B3510_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*);
	static MainModule_get_duration_Injected_m8FFE76F870FE2DEE726419BF3D938ECF415B3510_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_duration_Injected_m8FFE76F870FE2DEE726419BF3D938ECF415B3510_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_duration_Injected(UnityEngine.ParticleSystem/MainModule&)");
	float icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_duration_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_duration_Injected_m361AE74F574D0AD67408B17459CFC764781477C0 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, float ___value1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_set_duration_Injected_m361AE74F574D0AD67408B17459CFC764781477C0_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, float);
	static MainModule_set_duration_Injected_m361AE74F574D0AD67408B17459CFC764781477C0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_duration_Injected_m361AE74F574D0AD67408B17459CFC764781477C0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_duration_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_loop_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_loop_Injected_m981D150F1CB1259422834C967802AB03E6D098DB (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) 
{
	typedef bool (*MainModule_get_loop_Injected_m981D150F1CB1259422834C967802AB03E6D098DB_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*);
	static MainModule_get_loop_Injected_m981D150F1CB1259422834C967802AB03E6D098DB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_loop_Injected_m981D150F1CB1259422834C967802AB03E6D098DB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_loop_Injected(UnityEngine.ParticleSystem/MainModule&)");
	bool icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_loop_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_loop_Injected_m22DA9A4669A69F1D93A999C216264ACABE404833 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_set_loop_Injected_m22DA9A4669A69F1D93A999C216264ACABE404833_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, bool);
	static MainModule_set_loop_Injected_m22DA9A4669A69F1D93A999C216264ACABE404833_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_loop_Injected_m22DA9A4669A69F1D93A999C216264ACABE404833_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_loop_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_prewarm_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_prewarm_Injected_m8449153B8A5ED67CC3743B07C338D9F972F685C8 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) 
{
	typedef bool (*MainModule_get_prewarm_Injected_m8449153B8A5ED67CC3743B07C338D9F972F685C8_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*);
	static MainModule_get_prewarm_Injected_m8449153B8A5ED67CC3743B07C338D9F972F685C8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_prewarm_Injected_m8449153B8A5ED67CC3743B07C338D9F972F685C8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_prewarm_Injected(UnityEngine.ParticleSystem/MainModule&)");
	bool icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_prewarm_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_prewarm_Injected_mCDA5CD4DC63DD61A38423B9E82D9D192128CF0A7 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_set_prewarm_Injected_mCDA5CD4DC63DD61A38423B9E82D9D192128CF0A7_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, bool);
	static MainModule_set_prewarm_Injected_mCDA5CD4DC63DD61A38423B9E82D9D192128CF0A7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_prewarm_Injected_mCDA5CD4DC63DD61A38423B9E82D9D192128CF0A7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_prewarm_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::get_startDelay_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_get_startDelay_Injected_m5E4A7FE7E2C4286BAE5F918278DDBA0519EFCBFA (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_get_startDelay_Injected_m5E4A7FE7E2C4286BAE5F918278DDBA0519EFCBFA_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static MainModule_get_startDelay_Injected_m5E4A7FE7E2C4286BAE5F918278DDBA0519EFCBFA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_startDelay_Injected_m5E4A7FE7E2C4286BAE5F918278DDBA0519EFCBFA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_startDelay_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___ret1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startDelay_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startDelay_Injected_m3B0CF0F52137CDEE6C620E47B1BE3A144E3ED671 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_set_startDelay_Injected_m3B0CF0F52137CDEE6C620E47B1BE3A144E3ED671_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static MainModule_set_startDelay_Injected_m3B0CF0F52137CDEE6C620E47B1BE3A144E3ED671_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_startDelay_Injected_m3B0CF0F52137CDEE6C620E47B1BE3A144E3ED671_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_startDelay_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::get_startLifetime_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_get_startLifetime_Injected_m6C50EEC3F7594999EF7330AA13EE3C9649D6317B (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_get_startLifetime_Injected_m6C50EEC3F7594999EF7330AA13EE3C9649D6317B_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static MainModule_get_startLifetime_Injected_m6C50EEC3F7594999EF7330AA13EE3C9649D6317B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_startLifetime_Injected_m6C50EEC3F7594999EF7330AA13EE3C9649D6317B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_startLifetime_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___ret1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startLifetime_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startLifetime_Injected_m6543469C178E9F4F3F9454AE7ACE547CDE3DC183 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_set_startLifetime_Injected_m6543469C178E9F4F3F9454AE7ACE547CDE3DC183_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static MainModule_set_startLifetime_Injected_m6543469C178E9F4F3F9454AE7ACE547CDE3DC183_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_startLifetime_Injected_m6543469C178E9F4F3F9454AE7ACE547CDE3DC183_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_startLifetime_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Single UnityEngine.ParticleSystem/MainModule::get_startLifetimeMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_startLifetimeMultiplier_Injected_m835C8A2876D56CECEF8C47920CBF2D69584338E7 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) 
{
	typedef float (*MainModule_get_startLifetimeMultiplier_Injected_m835C8A2876D56CECEF8C47920CBF2D69584338E7_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*);
	static MainModule_get_startLifetimeMultiplier_Injected_m835C8A2876D56CECEF8C47920CBF2D69584338E7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_startLifetimeMultiplier_Injected_m835C8A2876D56CECEF8C47920CBF2D69584338E7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_startLifetimeMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)");
	float icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem/MainModule::get_startSpeed_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_get_startSpeed_Injected_mE4CEE405FFFF1BE721523C6E8994B62441E3B8CD (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_get_startSpeed_Injected_mE4CEE405FFFF1BE721523C6E8994B62441E3B8CD_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static MainModule_get_startSpeed_Injected_mE4CEE405FFFF1BE721523C6E8994B62441E3B8CD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_startSpeed_Injected_mE4CEE405FFFF1BE721523C6E8994B62441E3B8CD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_startSpeed_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___ret1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSpeed_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSpeed_Injected_mB5D5EE2B1DF8FC971EB328E5B93AD94BDE059748 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_set_startSpeed_Injected_mB5D5EE2B1DF8FC971EB328E5B93AD94BDE059748_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static MainModule_set_startSpeed_Injected_mB5D5EE2B1DF8FC971EB328E5B93AD94BDE059748_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_startSpeed_Injected_mB5D5EE2B1DF8FC971EB328E5B93AD94BDE059748_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_startSpeed_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_startSize3D_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_startSize3D_Injected_m9F1856E36D2ED6F1001794DBC1D0432A34E48CF0 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) 
{
	typedef bool (*MainModule_get_startSize3D_Injected_m9F1856E36D2ED6F1001794DBC1D0432A34E48CF0_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*);
	static MainModule_get_startSize3D_Injected_m9F1856E36D2ED6F1001794DBC1D0432A34E48CF0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_startSize3D_Injected_m9F1856E36D2ED6F1001794DBC1D0432A34E48CF0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_startSize3D_Injected(UnityEngine.ParticleSystem/MainModule&)");
	bool icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem/MainModule::get_startSize_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_get_startSize_Injected_m4450C02AC6B7E27E925D97761AFE732FE0F8F43C (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_get_startSize_Injected_m4450C02AC6B7E27E925D97761AFE732FE0F8F43C_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static MainModule_get_startSize_Injected_m4450C02AC6B7E27E925D97761AFE732FE0F8F43C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_startSize_Injected_m4450C02AC6B7E27E925D97761AFE732FE0F8F43C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_startSize_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___ret1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSize_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSize_Injected_mB94AE315406585F961A8F40A9016D30E2A17EF12 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_set_startSize_Injected_mB94AE315406585F961A8F40A9016D30E2A17EF12_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static MainModule_set_startSize_Injected_mB94AE315406585F961A8F40A9016D30E2A17EF12_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_startSize_Injected_mB94AE315406585F961A8F40A9016D30E2A17EF12_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_startSize_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::get_startSizeX_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_get_startSizeX_Injected_m700139362AEBDFED018D99C1CFF1E86B97314428 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_get_startSizeX_Injected_m700139362AEBDFED018D99C1CFF1E86B97314428_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static MainModule_get_startSizeX_Injected_m700139362AEBDFED018D99C1CFF1E86B97314428_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_startSizeX_Injected_m700139362AEBDFED018D99C1CFF1E86B97314428_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_startSizeX_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___ret1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeX_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeX_Injected_mF77E57B5C68F6BED36AFFAF605233CC7866A3A5E (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_set_startSizeX_Injected_mF77E57B5C68F6BED36AFFAF605233CC7866A3A5E_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static MainModule_set_startSizeX_Injected_mF77E57B5C68F6BED36AFFAF605233CC7866A3A5E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_startSizeX_Injected_mF77E57B5C68F6BED36AFFAF605233CC7866A3A5E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_startSizeX_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Single UnityEngine.ParticleSystem/MainModule::get_startSizeXMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_startSizeXMultiplier_Injected_mF9BBBDF71B7FBBF79CA4826359CDAA9C750B78FD (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) 
{
	typedef float (*MainModule_get_startSizeXMultiplier_Injected_mF9BBBDF71B7FBBF79CA4826359CDAA9C750B78FD_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*);
	static MainModule_get_startSizeXMultiplier_Injected_mF9BBBDF71B7FBBF79CA4826359CDAA9C750B78FD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_startSizeXMultiplier_Injected_mF9BBBDF71B7FBBF79CA4826359CDAA9C750B78FD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_startSizeXMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)");
	float icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeXMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeXMultiplier_Injected_mDC9E5974A2006F1A2C4793849186E95B191B36CA (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, float ___value1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_set_startSizeXMultiplier_Injected_mDC9E5974A2006F1A2C4793849186E95B191B36CA_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, float);
	static MainModule_set_startSizeXMultiplier_Injected_mDC9E5974A2006F1A2C4793849186E95B191B36CA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_startSizeXMultiplier_Injected_mDC9E5974A2006F1A2C4793849186E95B191B36CA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_startSizeXMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::get_startSizeY_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_get_startSizeY_Injected_m875F8CFC8EDFD45B1D88C87AFB7D629BE6A7AB0B (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_get_startSizeY_Injected_m875F8CFC8EDFD45B1D88C87AFB7D629BE6A7AB0B_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static MainModule_get_startSizeY_Injected_m875F8CFC8EDFD45B1D88C87AFB7D629BE6A7AB0B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_startSizeY_Injected_m875F8CFC8EDFD45B1D88C87AFB7D629BE6A7AB0B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_startSizeY_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___ret1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeY_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeY_Injected_mC5717D54E78AE210A8BA48CA201C76FA47986DAB (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_set_startSizeY_Injected_mC5717D54E78AE210A8BA48CA201C76FA47986DAB_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static MainModule_set_startSizeY_Injected_mC5717D54E78AE210A8BA48CA201C76FA47986DAB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_startSizeY_Injected_mC5717D54E78AE210A8BA48CA201C76FA47986DAB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_startSizeY_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Single UnityEngine.ParticleSystem/MainModule::get_startSizeYMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_startSizeYMultiplier_Injected_m46A071C970300DFDC08ED618A5EF59C9ABEA27B6 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) 
{
	typedef float (*MainModule_get_startSizeYMultiplier_Injected_m46A071C970300DFDC08ED618A5EF59C9ABEA27B6_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*);
	static MainModule_get_startSizeYMultiplier_Injected_m46A071C970300DFDC08ED618A5EF59C9ABEA27B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_startSizeYMultiplier_Injected_m46A071C970300DFDC08ED618A5EF59C9ABEA27B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_startSizeYMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)");
	float icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeYMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeYMultiplier_Injected_mA886D5EA2057BEB3E86B92223D5FB3C2ADE7C4DF (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, float ___value1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_set_startSizeYMultiplier_Injected_mA886D5EA2057BEB3E86B92223D5FB3C2ADE7C4DF_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, float);
	static MainModule_set_startSizeYMultiplier_Injected_mA886D5EA2057BEB3E86B92223D5FB3C2ADE7C4DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_startSizeYMultiplier_Injected_mA886D5EA2057BEB3E86B92223D5FB3C2ADE7C4DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_startSizeYMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::get_startSizeZ_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_get_startSizeZ_Injected_mD43FA6AC5B6A34E27B4338521B0D82922B036FB6 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_get_startSizeZ_Injected_mD43FA6AC5B6A34E27B4338521B0D82922B036FB6_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static MainModule_get_startSizeZ_Injected_mD43FA6AC5B6A34E27B4338521B0D82922B036FB6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_startSizeZ_Injected_mD43FA6AC5B6A34E27B4338521B0D82922B036FB6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_startSizeZ_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___ret1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeZ_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeZ_Injected_mFECE249FECE08BA138FF7C02515A4367197F81D7 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_set_startSizeZ_Injected_mFECE249FECE08BA138FF7C02515A4367197F81D7_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static MainModule_set_startSizeZ_Injected_mFECE249FECE08BA138FF7C02515A4367197F81D7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_startSizeZ_Injected_mFECE249FECE08BA138FF7C02515A4367197F81D7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_startSizeZ_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Single UnityEngine.ParticleSystem/MainModule::get_startSizeZMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_startSizeZMultiplier_Injected_mA1DA279F6E2B341BE53D63FCAE86BF8400DCA8F2 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) 
{
	typedef float (*MainModule_get_startSizeZMultiplier_Injected_mA1DA279F6E2B341BE53D63FCAE86BF8400DCA8F2_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*);
	static MainModule_get_startSizeZMultiplier_Injected_mA1DA279F6E2B341BE53D63FCAE86BF8400DCA8F2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_startSizeZMultiplier_Injected_mA1DA279F6E2B341BE53D63FCAE86BF8400DCA8F2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_startSizeZMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)");
	float icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeZMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeZMultiplier_Injected_m2FA2039FEC326A5FE31BA46CE211A076A0452E76 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, float ___value1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_set_startSizeZMultiplier_Injected_m2FA2039FEC326A5FE31BA46CE211A076A0452E76_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, float);
	static MainModule_set_startSizeZMultiplier_Injected_m2FA2039FEC326A5FE31BA46CE211A076A0452E76_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_startSizeZMultiplier_Injected_m2FA2039FEC326A5FE31BA46CE211A076A0452E76_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_startSizeZMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startRotation_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startRotation_Injected_m5181B142EBEB905B23F66B7E3ED71A6B43E33B40 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_set_startRotation_Injected_m5181B142EBEB905B23F66B7E3ED71A6B43E33B40_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static MainModule_set_startRotation_Injected_m5181B142EBEB905B23F66B7E3ED71A6B43E33B40_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_startRotation_Injected_m5181B142EBEB905B23F66B7E3ED71A6B43E33B40_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_startRotation_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::get_startColor_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxGradient&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_get_startColor_Injected_m0E98B135389A5259B00D43751CB7802DFA2C0A6D (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_get_startColor_Injected_m0E98B135389A5259B00D43751CB7802DFA2C0A6D_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*);
	static MainModule_get_startColor_Injected_m0E98B135389A5259B00D43751CB7802DFA2C0A6D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_startColor_Injected_m0E98B135389A5259B00D43751CB7802DFA2C0A6D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_startColor_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxGradient&)");
	_il2cpp_icall_func(____unity_self0, ___ret1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startColor_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxGradient&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startColor_Injected_m0521218BF17ABFE02A97C6D523EE4F35CB6B94E1 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* ___value1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_set_startColor_Injected_m0521218BF17ABFE02A97C6D523EE4F35CB6B94E1_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*);
	static MainModule_set_startColor_Injected_m0521218BF17ABFE02A97C6D523EE4F35CB6B94E1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_startColor_Injected_m0521218BF17ABFE02A97C6D523EE4F35CB6B94E1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_startColor_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxGradient&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// UnityEngine.ParticleSystemSimulationSpace UnityEngine.ParticleSystem/MainModule::get_simulationSpace_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_simulationSpace_Injected_m3CDF1C4782BA5048CCE147C6785F47E11D2FB49C (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) 
{
	typedef int32_t (*MainModule_get_simulationSpace_Injected_m3CDF1C4782BA5048CCE147C6785F47E11D2FB49C_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*);
	static MainModule_get_simulationSpace_Injected_m3CDF1C4782BA5048CCE147C6785F47E11D2FB49C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_simulationSpace_Injected_m3CDF1C4782BA5048CCE147C6785F47E11D2FB49C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_simulationSpace_Injected(UnityEngine.ParticleSystem/MainModule&)");
	int32_t icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// UnityEngine.ParticleSystemScalingMode UnityEngine.ParticleSystem/MainModule::get_scalingMode_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_scalingMode_Injected_m2EB44BC6677EE6B5B12E74BEA2814B668D2C5FEC (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) 
{
	typedef int32_t (*MainModule_get_scalingMode_Injected_m2EB44BC6677EE6B5B12E74BEA2814B668D2C5FEC_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*);
	static MainModule_get_scalingMode_Injected_m2EB44BC6677EE6B5B12E74BEA2814B668D2C5FEC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_scalingMode_Injected_m2EB44BC6677EE6B5B12E74BEA2814B668D2C5FEC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_scalingMode_Injected(UnityEngine.ParticleSystem/MainModule&)");
	int32_t icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_scalingMode_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystemScalingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_scalingMode_Injected_m2E7F62B58F9064734E3850B4DE8E01624BC73140 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, int32_t ___value1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_set_scalingMode_Injected_m2E7F62B58F9064734E3850B4DE8E01624BC73140_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, int32_t);
	static MainModule_set_scalingMode_Injected_m2E7F62B58F9064734E3850B4DE8E01624BC73140_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_scalingMode_Injected_m2E7F62B58F9064734E3850B4DE8E01624BC73140_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_scalingMode_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystemScalingMode)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_playOnAwake_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_playOnAwake_Injected_m0287BAC1E5D6161C144597072867F74B7C8E6BF2 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) 
{
	typedef bool (*MainModule_get_playOnAwake_Injected_m0287BAC1E5D6161C144597072867F74B7C8E6BF2_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*);
	static MainModule_get_playOnAwake_Injected_m0287BAC1E5D6161C144597072867F74B7C8E6BF2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_playOnAwake_Injected_m0287BAC1E5D6161C144597072867F74B7C8E6BF2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_playOnAwake_Injected(UnityEngine.ParticleSystem/MainModule&)");
	bool icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Int32 UnityEngine.ParticleSystem/MainModule::get_maxParticles_Injected(UnityEngine.ParticleSystem/MainModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_maxParticles_Injected_m92DB3A34E29FDC1A9C457825B7F0DCECD77FFF7C (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, const RuntimeMethod* method) 
{
	typedef int32_t (*MainModule_get_maxParticles_Injected_m92DB3A34E29FDC1A9C457825B7F0DCECD77FFF7C_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*);
	static MainModule_get_maxParticles_Injected_m92DB3A34E29FDC1A9C457825B7F0DCECD77FFF7C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_get_maxParticles_Injected_m92DB3A34E29FDC1A9C457825B7F0DCECD77FFF7C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::get_maxParticles_Injected(UnityEngine.ParticleSystem/MainModule&)");
	int32_t icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles_Injected(UnityEngine.ParticleSystem/MainModule&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_maxParticles_Injected_mC872CCABDF8B4F5D1DC5D726A0EA7E0EB8E3E7E6 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* ____unity_self0, int32_t ___value1, const RuntimeMethod* method) 
{
	typedef void (*MainModule_set_maxParticles_Injected_mC872CCABDF8B4F5D1DC5D726A0EA7E0EB8E3E7E6_ftn) (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*, int32_t);
	static MainModule_set_maxParticles_Injected_mC872CCABDF8B4F5D1DC5D726A0EA7E0EB8E3E7E6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_maxParticles_Injected_mC872CCABDF8B4F5D1DC5D726A0EA7E0EB8E3E7E6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_maxParticles_Injected(UnityEngine.ParticleSystem/MainModule&,System.Int32)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/EmissionModule
IL2CPP_EXTERN_C void EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshal_pinvoke(const EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678& unmarshaled, EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'EmissionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshal_pinvoke_back(const EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_pinvoke& marshaled, EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'EmissionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/EmissionModule
IL2CPP_EXTERN_C void EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshal_pinvoke_cleanup(EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/EmissionModule
IL2CPP_EXTERN_C void EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshal_com(const EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678& unmarshaled, EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_com& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'EmissionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshal_com_back(const EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_com& marshaled, EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'EmissionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/EmissionModule
IL2CPP_EXTERN_C void EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshal_com_cleanup(EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule__ctor_m6AE98CC2103BECB52B7551D1304E733AE8BD70B1 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) 
{
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___particleSystem0;
		__this->___m_ParticleSystem_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ParticleSystem_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void EmissionModule__ctor_m6AE98CC2103BECB52B7551D1304E733AE8BD70B1_AdjustorThunk (RuntimeObject* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method)
{
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678*>(__this + _offset);
	EmissionModule__ctor_m6AE98CC2103BECB52B7551D1304E733AE8BD70B1(_thisAdjusted, ___particleSystem0, method);
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		EmissionModule_set_enabled_Injected_m8F10D1C98F11BB909A1403547168E56A8B31A16A(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678*>(__this + _offset);
	EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled_Injected(UnityEngine.ParticleSystem/EmissionModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_Injected_m8F10D1C98F11BB909A1403547168E56A8B31A16A (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* ____unity_self0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*EmissionModule_set_enabled_Injected_m8F10D1C98F11BB909A1403547168E56A8B31A16A_ftn) (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678*, bool);
	static EmissionModule_set_enabled_Injected_m8F10D1C98F11BB909A1403547168E56A8B31A16A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (EmissionModule_set_enabled_Injected_m8F10D1C98F11BB909A1403547168E56A8B31A16A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/EmissionModule::set_enabled_Injected(UnityEngine.ParticleSystem/EmissionModule&,System.Boolean)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/ShapeModule
IL2CPP_EXTERN_C void ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshal_pinvoke(const ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2& unmarshaled, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ShapeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshal_pinvoke_back(const ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshaled_pinvoke& marshaled, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ShapeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/ShapeModule
IL2CPP_EXTERN_C void ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshal_pinvoke_cleanup(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/ShapeModule
IL2CPP_EXTERN_C void ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshal_com(const ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2& unmarshaled, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshaled_com& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ShapeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshal_com_back(const ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshaled_com& marshaled, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ShapeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/ShapeModule
IL2CPP_EXTERN_C void ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshal_com_cleanup(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/ShapeModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule__ctor_m951B06AF6BDA194E8111B2B72C104562F41CB0AD (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) 
{
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___particleSystem0;
		__this->___m_ParticleSystem_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ParticleSystem_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ShapeModule__ctor_m951B06AF6BDA194E8111B2B72C104562F41CB0AD_AdjustorThunk (RuntimeObject* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method)
{
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*>(__this + _offset);
	ShapeModule__ctor_m951B06AF6BDA194E8111B2B72C104562F41CB0AD(_thisAdjusted, ___particleSystem0, method);
}
// System.Boolean UnityEngine.ParticleSystem/ShapeModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShapeModule_get_enabled_m95D1E7C55963FC8A6BFEC95B7B22C2E1218DCC4F (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = ShapeModule_get_enabled_Injected_m659D1B10DB9505C5108F019759CC5C3D5ED8DABA(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool ShapeModule_get_enabled_m95D1E7C55963FC8A6BFEC95B7B22C2E1218DCC4F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*>(__this + _offset);
	bool _returnValue;
	_returnValue = ShapeModule_get_enabled_m95D1E7C55963FC8A6BFEC95B7B22C2E1218DCC4F(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.ParticleSystem/ShapeModule::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShapeModule_get_radius_m41AE7721BB6CDD1E9E91509DD2D7B60F0D302E90 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = ShapeModule_get_radius_Injected_mB2DB597109ED6BD553826B412A3EABF7B3648A92(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  float ShapeModule_get_radius_m41AE7721BB6CDD1E9E91509DD2D7B60F0D302E90_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*>(__this + _offset);
	float _returnValue;
	_returnValue = ShapeModule_get_radius_m41AE7721BB6CDD1E9E91509DD2D7B60F0D302E90(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		ShapeModule_set_radius_Injected_m9F14643006F53252E13BC56C96C15F290C02E3F4(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*>(__this + _offset);
	ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.ParticleSystem/ShapeModule::get_enabled_Injected(UnityEngine.ParticleSystem/ShapeModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShapeModule_get_enabled_Injected_m659D1B10DB9505C5108F019759CC5C3D5ED8DABA (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* ____unity_self0, const RuntimeMethod* method) 
{
	typedef bool (*ShapeModule_get_enabled_Injected_m659D1B10DB9505C5108F019759CC5C3D5ED8DABA_ftn) (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*);
	static ShapeModule_get_enabled_Injected_m659D1B10DB9505C5108F019759CC5C3D5ED8DABA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ShapeModule_get_enabled_Injected_m659D1B10DB9505C5108F019759CC5C3D5ED8DABA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/ShapeModule::get_enabled_Injected(UnityEngine.ParticleSystem/ShapeModule&)");
	bool icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Single UnityEngine.ParticleSystem/ShapeModule::get_radius_Injected(UnityEngine.ParticleSystem/ShapeModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShapeModule_get_radius_Injected_mB2DB597109ED6BD553826B412A3EABF7B3648A92 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* ____unity_self0, const RuntimeMethod* method) 
{
	typedef float (*ShapeModule_get_radius_Injected_mB2DB597109ED6BD553826B412A3EABF7B3648A92_ftn) (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*);
	static ShapeModule_get_radius_Injected_mB2DB597109ED6BD553826B412A3EABF7B3648A92_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ShapeModule_get_radius_Injected_mB2DB597109ED6BD553826B412A3EABF7B3648A92_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/ShapeModule::get_radius_Injected(UnityEngine.ParticleSystem/ShapeModule&)");
	float icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_radius_Injected(UnityEngine.ParticleSystem/ShapeModule&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_radius_Injected_m9F14643006F53252E13BC56C96C15F290C02E3F4 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* ____unity_self0, float ___value1, const RuntimeMethod* method) 
{
	typedef void (*ShapeModule_set_radius_Injected_m9F14643006F53252E13BC56C96C15F290C02E3F4_ftn) (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*, float);
	static ShapeModule_set_radius_Injected_m9F14643006F53252E13BC56C96C15F290C02E3F4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ShapeModule_set_radius_Injected_m9F14643006F53252E13BC56C96C15F290C02E3F4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/ShapeModule::set_radius_Injected(UnityEngine.ParticleSystem/ShapeModule&,System.Single)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/TextureSheetAnimationModule
IL2CPP_EXTERN_C void TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshal_pinvoke(const TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6& unmarshaled, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TextureSheetAnimationModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshal_pinvoke_back(const TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_pinvoke& marshaled, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TextureSheetAnimationModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/TextureSheetAnimationModule
IL2CPP_EXTERN_C void TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshal_pinvoke_cleanup(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/TextureSheetAnimationModule
IL2CPP_EXTERN_C void TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshal_com(const TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6& unmarshaled, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_com& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TextureSheetAnimationModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshal_com_back(const TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_com& marshaled, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TextureSheetAnimationModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/TextureSheetAnimationModule
IL2CPP_EXTERN_C void TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshal_com_cleanup(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule__ctor_m86AE80EB2EAF5AC13146D2856AA7DF538A9412BC (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) 
{
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___particleSystem0;
		__this->___m_ParticleSystem_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ParticleSystem_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TextureSheetAnimationModule__ctor_m86AE80EB2EAF5AC13146D2856AA7DF538A9412BC_AdjustorThunk (RuntimeObject* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method)
{
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*>(__this + _offset);
	TextureSheetAnimationModule__ctor_m86AE80EB2EAF5AC13146D2856AA7DF538A9412BC(_thisAdjusted, ___particleSystem0, method);
}
// System.Boolean UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureSheetAnimationModule_get_enabled_mF860A1A9A5794EA2FC3A5B9652C812981A4F3136 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = TextureSheetAnimationModule_get_enabled_Injected_mCEED8C5D537DF4C2F27575205F4C7407E141FD71(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TextureSheetAnimationModule_get_enabled_mF860A1A9A5794EA2FC3A5B9652C812981A4F3136_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*>(__this + _offset);
	bool _returnValue;
	_returnValue = TextureSheetAnimationModule_get_enabled_mF860A1A9A5794EA2FC3A5B9652C812981A4F3136(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_numTilesX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = TextureSheetAnimationModule_get_numTilesX_Injected_m51B0DF417D8A10F44945C522A9DAD696040BBA70(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_numTilesY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_numTilesY_mA39AD9D6245BE792B776B9834A3E83609266A8C4 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = TextureSheetAnimationModule_get_numTilesY_Injected_mF8E6411A7A51A01AEE6D0B25ABD88197B271AE13(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t TextureSheetAnimationModule_get_numTilesY_mA39AD9D6245BE792B776B9834A3E83609266A8C4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TextureSheetAnimationModule_get_numTilesY_mA39AD9D6245BE792B776B9834A3E83609266A8C4(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ParticleSystemAnimationType UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_animation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_animation_mB402112DF63C35BB5B34B892D51791ABAED84176 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = TextureSheetAnimationModule_get_animation_Injected_mAEBDAB6CF3E847241AA49D755D597E98F2A88C8D(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t TextureSheetAnimationModule_get_animation_mB402112DF63C35BB5B34B892D51791ABAED84176_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TextureSheetAnimationModule_get_animation_mB402112DF63C35BB5B34B892D51791ABAED84176(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_frameOverTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) 
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TextureSheetAnimationModule_get_frameOverTime_Injected_mFF2C1F12546D3BFFA853A426B15E02A80508B147(__this, (&V_0), NULL);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*>(__this + _offset);
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 _returnValue;
	_returnValue = TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_cycleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_cycleCount_m99F3A1F1DFA7947B44B826C6B9C96B268FFE5DC0 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = TextureSheetAnimationModule_get_cycleCount_Injected_m4025F8B4AF8C4E8B78DDE4F809F5706FB7D60F1E(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t TextureSheetAnimationModule_get_cycleCount_m99F3A1F1DFA7947B44B826C6B9C96B268FFE5DC0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TextureSheetAnimationModule_get_cycleCount_m99F3A1F1DFA7947B44B826C6B9C96B268FFE5DC0(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_rowIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_rowIndex_m72BA6BAAD0F816E11E276B28907119054D8EA03C (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = TextureSheetAnimationModule_get_rowIndex_Injected_mA2C71D68A7201115FD34FAC36461CDD296308FF4(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t TextureSheetAnimationModule_get_rowIndex_m72BA6BAAD0F816E11E276B28907119054D8EA03C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TextureSheetAnimationModule_get_rowIndex_m72BA6BAAD0F816E11E276B28907119054D8EA03C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::SetSprite(System.Int32,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_SetSprite_mE3F2237069C9CA6E514B65E71449335FF8EE22AB (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___index0, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___sprite1;
		TextureSheetAnimationModule_SetSprite_Injected_mC7A5604FC76604B2D9C9B7A2F14C1393A9827958(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TextureSheetAnimationModule_SetSprite_mE3F2237069C9CA6E514B65E71449335FF8EE22AB_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite1, const RuntimeMethod* method)
{
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*>(__this + _offset);
	TextureSheetAnimationModule_SetSprite_mE3F2237069C9CA6E514B65E71449335FF8EE22AB(_thisAdjusted, ___index0, ___sprite1, method);
}
// System.Boolean UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_enabled_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureSheetAnimationModule_get_enabled_Injected_mCEED8C5D537DF4C2F27575205F4C7407E141FD71 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* ____unity_self0, const RuntimeMethod* method) 
{
	typedef bool (*TextureSheetAnimationModule_get_enabled_Injected_mCEED8C5D537DF4C2F27575205F4C7407E141FD71_ftn) (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*);
	static TextureSheetAnimationModule_get_enabled_Injected_mCEED8C5D537DF4C2F27575205F4C7407E141FD71_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextureSheetAnimationModule_get_enabled_Injected_mCEED8C5D537DF4C2F27575205F4C7407E141FD71_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_enabled_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)");
	bool icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_numTilesX_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_numTilesX_Injected_m51B0DF417D8A10F44945C522A9DAD696040BBA70 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* ____unity_self0, const RuntimeMethod* method) 
{
	typedef int32_t (*TextureSheetAnimationModule_get_numTilesX_Injected_m51B0DF417D8A10F44945C522A9DAD696040BBA70_ftn) (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*);
	static TextureSheetAnimationModule_get_numTilesX_Injected_m51B0DF417D8A10F44945C522A9DAD696040BBA70_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextureSheetAnimationModule_get_numTilesX_Injected_m51B0DF417D8A10F44945C522A9DAD696040BBA70_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_numTilesX_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)");
	int32_t icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_numTilesY_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_numTilesY_Injected_mF8E6411A7A51A01AEE6D0B25ABD88197B271AE13 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* ____unity_self0, const RuntimeMethod* method) 
{
	typedef int32_t (*TextureSheetAnimationModule_get_numTilesY_Injected_mF8E6411A7A51A01AEE6D0B25ABD88197B271AE13_ftn) (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*);
	static TextureSheetAnimationModule_get_numTilesY_Injected_mF8E6411A7A51A01AEE6D0B25ABD88197B271AE13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextureSheetAnimationModule_get_numTilesY_Injected_mF8E6411A7A51A01AEE6D0B25ABD88197B271AE13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_numTilesY_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)");
	int32_t icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// UnityEngine.ParticleSystemAnimationType UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_animation_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_animation_Injected_mAEBDAB6CF3E847241AA49D755D597E98F2A88C8D (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* ____unity_self0, const RuntimeMethod* method) 
{
	typedef int32_t (*TextureSheetAnimationModule_get_animation_Injected_mAEBDAB6CF3E847241AA49D755D597E98F2A88C8D_ftn) (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*);
	static TextureSheetAnimationModule_get_animation_Injected_mAEBDAB6CF3E847241AA49D755D597E98F2A88C8D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextureSheetAnimationModule_get_animation_Injected_mAEBDAB6CF3E847241AA49D755D597E98F2A88C8D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_animation_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)");
	int32_t icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_frameOverTime_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_get_frameOverTime_Injected_mFF2C1F12546D3BFFA853A426B15E02A80508B147 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*TextureSheetAnimationModule_get_frameOverTime_Injected_mFF2C1F12546D3BFFA853A426B15E02A80508B147_ftn) (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static TextureSheetAnimationModule_get_frameOverTime_Injected_mFF2C1F12546D3BFFA853A426B15E02A80508B147_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextureSheetAnimationModule_get_frameOverTime_Injected_mFF2C1F12546D3BFFA853A426B15E02A80508B147_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_frameOverTime_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___ret1);
}
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_cycleCount_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_cycleCount_Injected_m4025F8B4AF8C4E8B78DDE4F809F5706FB7D60F1E (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* ____unity_self0, const RuntimeMethod* method) 
{
	typedef int32_t (*TextureSheetAnimationModule_get_cycleCount_Injected_m4025F8B4AF8C4E8B78DDE4F809F5706FB7D60F1E_ftn) (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*);
	static TextureSheetAnimationModule_get_cycleCount_Injected_m4025F8B4AF8C4E8B78DDE4F809F5706FB7D60F1E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextureSheetAnimationModule_get_cycleCount_Injected_m4025F8B4AF8C4E8B78DDE4F809F5706FB7D60F1E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_cycleCount_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)");
	int32_t icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_rowIndex_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_rowIndex_Injected_mA2C71D68A7201115FD34FAC36461CDD296308FF4 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* ____unity_self0, const RuntimeMethod* method) 
{
	typedef int32_t (*TextureSheetAnimationModule_get_rowIndex_Injected_mA2C71D68A7201115FD34FAC36461CDD296308FF4_ftn) (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*);
	static TextureSheetAnimationModule_get_rowIndex_Injected_mA2C71D68A7201115FD34FAC36461CDD296308FF4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextureSheetAnimationModule_get_rowIndex_Injected_mA2C71D68A7201115FD34FAC36461CDD296308FF4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_rowIndex_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&)");
	int32_t icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::SetSprite_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&,System.Int32,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_SetSprite_Injected_mC7A5604FC76604B2D9C9B7A2F14C1393A9827958 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* ____unity_self0, int32_t ___index1, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite2, const RuntimeMethod* method) 
{
	typedef void (*TextureSheetAnimationModule_SetSprite_Injected_mC7A5604FC76604B2D9C9B7A2F14C1393A9827958_ftn) (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*, int32_t, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*);
	static TextureSheetAnimationModule_SetSprite_Injected_mC7A5604FC76604B2D9C9B7A2F14C1393A9827958_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextureSheetAnimationModule_SetSprite_Injected_mC7A5604FC76604B2D9C9B7A2F14C1393A9827958_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/TextureSheetAnimationModule::SetSprite_Injected(UnityEngine.ParticleSystem/TextureSheetAnimationModule&,System.Int32,UnityEngine.Sprite)");
	_il2cpp_icall_func(____unity_self0, ___index1, ___sprite2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ParticleSystem/Particle::set_lifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_lifetime_m29360AF093721364BF46996EE1D400256DB95911 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		Particle_set_remainingLifetime_m3E58D8B3599B0BA6790D43022C3DF16E6896D018(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_lifetime_m29360AF093721364BF46996EE1D400256DB95911_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*>(__this + _offset);
	Particle_set_lifetime_m29360AF093721364BF46996EE1D400256DB95911(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Position_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_position_mE9103000DB4EA6CE09D25650F5A2915731F7A63E (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_Position_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_position_mE9103000DB4EA6CE09D25650F5A2915731F7A63E_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*>(__this + _offset);
	Particle_set_position_mE9103000DB4EA6CE09D25650F5A2915731F7A63E(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_velocity_mF4C1DE326CCABE480F44D3DF3873241E85A6303B (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_velocity_mF4C1DE326CCABE480F44D3DF3873241E85A6303B_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*>(__this + _offset);
	Particle_set_velocity_mF4C1DE326CCABE480F44D3DF3873241E85A6303B(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.ParticleSystem/Particle::get_remainingLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Lifetime_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*>(__this + _offset);
	float _returnValue;
	_returnValue = Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/Particle::set_remainingLifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_remainingLifetime_m3E58D8B3599B0BA6790D43022C3DF16E6896D018 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_Lifetime_11 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_remainingLifetime_m3E58D8B3599B0BA6790D43022C3DF16E6896D018_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*>(__this + _offset);
	Particle_set_remainingLifetime_m3E58D8B3599B0BA6790D43022C3DF16E6896D018(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.ParticleSystem/Particle::get_startLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_StartLifetime_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*>(__this + _offset);
	float _returnValue;
	_returnValue = Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/Particle::set_startLifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_startLifetime_mCD0B16F2B1F2E2AEED84C4FCD85D5AD96F853A77 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_StartLifetime_12 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_startLifetime_mCD0B16F2B1F2E2AEED84C4FCD85D5AD96F853A77_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*>(__this + _offset);
	Particle_set_startLifetime_mCD0B16F2B1F2E2AEED84C4FCD85D5AD96F853A77(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_startColor(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_startColor_mC3031F4238B0C003DFA5BF9AB4B3141B7CF71538 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___value0, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___value0;
		__this->___m_StartColor_8 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_startColor_mC3031F4238B0C003DFA5BF9AB4B3141B7CF71538_AdjustorThunk (RuntimeObject* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___value0, const RuntimeMethod* method)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*>(__this + _offset);
	Particle_set_startColor_mC3031F4238B0C003DFA5BF9AB4B3141B7CF71538(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_randomSeed(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_randomSeed_mCC3C02CCBF9C0EA80E2CE01EC47AD30F31D5F6C2 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		__this->___m_RandomSeed_9 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_randomSeed_mCC3C02CCBF9C0EA80E2CE01EC47AD30F31D5F6C2_AdjustorThunk (RuntimeObject* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*>(__this + _offset);
	Particle_set_randomSeed_mCC3C02CCBF9C0EA80E2CE01EC47AD30F31D5F6C2(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_startSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_startSize_mBBEBF7365A4E68FF2044E2ECEACC562376EA4A1F (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		float L_1 = ___value0;
		float L_2 = ___value0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___m_StartSize_7 = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_startSize_mBBEBF7365A4E68FF2044E2ECEACC562376EA4A1F_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*>(__this + _offset);
	Particle_set_startSize_mBBEBF7365A4E68FF2044E2ECEACC562376EA4A1F(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.ParticleSystem/Particle::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_rotation_mA3A5978F95EDA141FE91C3423DE46DE9B91B49A2 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___m_Rotation_5);
		float L_1 = L_0->___z_4;
		V_0 = ((float)il2cpp_codegen_multiply(L_1, (57.2957802f)));
		goto IL_0015;
	}

IL_0015:
	{
		float L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  float Particle_get_rotation_mA3A5978F95EDA141FE91C3423DE46DE9B91B49A2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*>(__this + _offset);
	float _returnValue;
	_returnValue = Particle_get_rotation_mA3A5978F95EDA141FE91C3423DE46DE9B91B49A2(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_rotation3D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Particle_get_rotation3D_m8BE7C2D25F8E6F44F19690266100723A5DBE64D1 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Rotation_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (57.2957802f), NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Particle_get_rotation3D_m8BE7C2D25F8E6F44F19690266100723A5DBE64D1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Particle_get_rotation3D_m8BE7C2D25F8E6F44F19690266100723A5DBE64D1(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/Particle::set_rotation3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_rotation3D_mC0B19BFEBA780F95C763DE14C80B29764E519D62 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		__this->___m_Rotation_5 = L_1;
		uint32_t L_2 = __this->___m_Flags_16;
		__this->___m_Flags_16 = ((int32_t)((int32_t)L_2|2));
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_rotation3D_mC0B19BFEBA780F95C763DE14C80B29764E519D62_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*>(__this + _offset);
	Particle_set_rotation3D_mC0B19BFEBA780F95C763DE14C80B29764E519D62(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_angularVelocity3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_angularVelocity3D_m56AE22FE7AFB178DD206EA2A7E0DA64B360D7EA8 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		__this->___m_AngularVelocity_6 = L_1;
		uint32_t L_2 = __this->___m_Flags_16;
		__this->___m_Flags_16 = ((int32_t)((int32_t)L_2|2));
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_angularVelocity3D_m56AE22FE7AFB178DD206EA2A7E0DA64B360D7EA8_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*>(__this + _offset);
	Particle_set_angularVelocity3D_m56AE22FE7AFB178DD206EA2A7E0DA64B360D7EA8(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.ParticleSystem/Particle::GetCurrentSize(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_GetCurrentSize_m3F7D066BF44CDC3B0E501CA10A06313CD0CCCA64 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___system0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___system0;
		NullCheck(L_0);
		float L_1;
		L_1 = ParticleSystem_GetParticleCurrentSize_m2C376AB1B5C76C9947A036D2F8F51EAFBDE1F859(L_0, __this, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		float L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  float Particle_GetCurrentSize_m3F7D066BF44CDC3B0E501CA10A06313CD0CCCA64_AdjustorThunk (RuntimeObject* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___system0, const RuntimeMethod* method)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*>(__this + _offset);
	float _returnValue;
	_returnValue = Particle_GetCurrentSize_m3F7D066BF44CDC3B0E501CA10A06313CD0CCCA64(_thisAdjusted, ___system0, method);
	return _returnValue;
}
// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::GetCurrentColor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Particle_GetCurrentColor_m793DDF1AC5043A8991B6663D965404B1B3855C78 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___system0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___system0;
		NullCheck(L_0);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1;
		L_1 = ParticleSystem_GetParticleCurrentColor_m9F1AE6C1766B504411F273E617115FF23ABC3C95(L_0, __this, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Particle_GetCurrentColor_m793DDF1AC5043A8991B6663D965404B1B3855C78_AdjustorThunk (RuntimeObject* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___system0, const RuntimeMethod* method)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D*>(__this + _offset);
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B _returnValue;
	_returnValue = Particle_GetCurrentColor_m793DDF1AC5043A8991B6663D965404B1B3855C78(_thisAdjusted, ___system0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve__ctor_m1D3846251475D7BBC7B128CCD7DFF40B16AAEF9E (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___constant0, const RuntimeMethod* method) 
{
	{
		__this->___m_Mode_0 = 0;
		__this->___m_CurveMultiplier_1 = (0.0f);
		__this->___m_CurveMin_2 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurveMin_2), (void*)(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL);
		__this->___m_CurveMax_3 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurveMax_3), (void*)(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL);
		__this->___m_ConstantMin_4 = (0.0f);
		float L_0 = ___constant0;
		__this->___m_ConstantMax_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxCurve__ctor_m1D3846251475D7BBC7B128CCD7DFF40B16AAEF9E_AdjustorThunk (RuntimeObject* __this, float ___constant0, const RuntimeMethod* method)
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*>(__this + _offset);
	MinMaxCurve__ctor_m1D3846251475D7BBC7B128CCD7DFF40B16AAEF9E(_thisAdjusted, ___constant0, method);
}
// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::get_mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MinMaxCurve_get_mode_m3501926642278B695E0CDFE2E24B641A560B9526 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Mode_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MinMaxCurve_get_mode_m3501926642278B695E0CDFE2E24B641A560B9526_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MinMaxCurve_get_mode_m3501926642278B695E0CDFE2E24B641A560B9526(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_mode(UnityEngine.ParticleSystemCurveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Mode_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*>(__this + _offset);
	MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_curveMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_curveMultiplier_m3C3EF4A373A3B2E51A4D27B88F7D1ADEA5B35936 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_CurveMultiplier_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float MinMaxCurve_get_curveMultiplier_m3C3EF4A373A3B2E51A4D27B88F7D1ADEA5B35936_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*>(__this + _offset);
	float _returnValue;
	_returnValue = MinMaxCurve_get_curveMultiplier_m3C3EF4A373A3B2E51A4D27B88F7D1ADEA5B35936(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_CurveMultiplier_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*>(__this + _offset);
	MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC(_thisAdjusted, ___value0, method);
}
// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::get_curveMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* MinMaxCurve_get_curveMax_m455705B0A048A51461E94DACD1503EA1DEAB68B8 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) 
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* V_0 = NULL;
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___m_CurveMax_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* MinMaxCurve_get_curveMax_m455705B0A048A51461E94DACD1503EA1DEAB68B8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*>(__this + _offset);
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* _returnValue;
	_returnValue = MinMaxCurve_get_curveMax_m455705B0A048A51461E94DACD1503EA1DEAB68B8(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMax(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) 
{
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___value0;
		__this->___m_CurveMax_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurveMax_3), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF_AdjustorThunk (RuntimeObject* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method)
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*>(__this + _offset);
	MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF(_thisAdjusted, ___value0, method);
}
// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::get_curveMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* MinMaxCurve_get_curveMin_m2F6041CAA8760D21D39A6204973B411D7109CF00 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) 
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* V_0 = NULL;
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___m_CurveMin_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* MinMaxCurve_get_curveMin_m2F6041CAA8760D21D39A6204973B411D7109CF00_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*>(__this + _offset);
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* _returnValue;
	_returnValue = MinMaxCurve_get_curveMin_m2F6041CAA8760D21D39A6204973B411D7109CF00(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMin(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) 
{
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___value0;
		__this->___m_CurveMin_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurveMin_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75_AdjustorThunk (RuntimeObject* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method)
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*>(__this + _offset);
	MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constantMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constantMax_mBC9884017B40BDF911C768F521950370A6B41463 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_ConstantMax_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float MinMaxCurve_get_constantMax_mBC9884017B40BDF911C768F521950370A6B41463_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*>(__this + _offset);
	float _returnValue;
	_returnValue = MinMaxCurve_get_constantMax_mBC9884017B40BDF911C768F521950370A6B41463(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constantMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_ConstantMax_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*>(__this + _offset);
	MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constantMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constantMin_mB39AF05209B993DC31AB4247D9BE8D4F80E5D710 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_ConstantMin_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float MinMaxCurve_get_constantMin_mB39AF05209B993DC31AB4247D9BE8D4F80E5D710_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*>(__this + _offset);
	float _returnValue;
	_returnValue = MinMaxCurve_get_constantMin_mB39AF05209B993DC31AB4247D9BE8D4F80E5D710(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constantMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_ConstantMin_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*>(__this + _offset);
	MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_ConstantMax_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*>(__this + _offset);
	float _returnValue;
	_returnValue = MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constant(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_ConstantMax_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*>(__this + _offset);
	MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897(_thisAdjusted, ___value0, method);
}
// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::get_curve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* MinMaxCurve_get_curve_mE735424B0F4A9F55699BD82254F159D4226F9661 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) 
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* V_0 = NULL;
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___m_CurveMax_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* MinMaxCurve_get_curve_mE735424B0F4A9F55699BD82254F159D4226F9661_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*>(__this + _offset);
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* _returnValue;
	_returnValue = MinMaxCurve_get_curve_mE735424B0F4A9F55699BD82254F159D4226F9661(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) 
{
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___value0;
		__this->___m_CurveMax_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurveMax_3), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF_AdjustorThunk (RuntimeObject* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method)
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*>(__this + _offset);
	MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF(_thisAdjusted, ___value0, method);
}
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MinMaxCurve::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MinMaxCurve_op_Implicit_mC7A24E6FC61103CFFA277A87302688010A1C54F1 (float ___constant0, const RuntimeMethod* method) 
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___constant0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_1;
		memset((&L_1), 0, sizeof(L_1));
		MinMaxCurve__ctor_m1D3846251475D7BBC7B128CCD7DFF40B16AAEF9E((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_2 = V_0;
		return L_2;
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
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::.ctor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient__ctor_m982C2A8AD071EA714E5583F90727C306B126F062 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	{
		__this->___m_Mode_0 = 0;
		__this->___m_GradientMin_1 = (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GradientMin_1), (void*)(Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*)NULL);
		__this->___m_GradientMax_2 = (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GradientMax_2), (void*)(Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*)NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___m_ColorMin_3 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___color0;
		__this->___m_ColorMax_4 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxGradient__ctor_m982C2A8AD071EA714E5583F90727C306B126F062_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method)
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*>(__this + _offset);
	MinMaxGradient__ctor_m982C2A8AD071EA714E5583F90727C306B126F062(_thisAdjusted, ___color0, method);
}
// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::get_mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MinMaxGradient_get_mode_mC4B1A93FD93B41544AED855AB1FC520EC642AA98 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Mode_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MinMaxGradient_get_mode_mC4B1A93FD93B41544AED855AB1FC520EC642AA98_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MinMaxGradient_get_mode_mC4B1A93FD93B41544AED855AB1FC520EC642AA98(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_mode(UnityEngine.ParticleSystemGradientMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Mode_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*>(__this + _offset);
	MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E(_thisAdjusted, ___value0, method);
}
// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::get_gradientMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* MinMaxGradient_get_gradientMax_m94B2E99380FFCC82F0387C4B1E685DDD5B9C7947 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, const RuntimeMethod* method) 
{
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* V_0 = NULL;
	{
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_0 = __this->___m_GradientMax_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* MinMaxGradient_get_gradientMax_m94B2E99380FFCC82F0387C4B1E685DDD5B9C7947_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*>(__this + _offset);
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* _returnValue;
	_returnValue = MinMaxGradient_get_gradientMax_m94B2E99380FFCC82F0387C4B1E685DDD5B9C7947(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_gradientMax(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method) 
{
	{
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_0 = ___value0;
		__this->___m_GradientMax_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GradientMax_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB_AdjustorThunk (RuntimeObject* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method)
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*>(__this + _offset);
	MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB(_thisAdjusted, ___value0, method);
}
// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::get_gradientMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* MinMaxGradient_get_gradientMin_m906D46F5A5F72C83AF7651A910A97B616342DE4E (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, const RuntimeMethod* method) 
{
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* V_0 = NULL;
	{
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_0 = __this->___m_GradientMin_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* MinMaxGradient_get_gradientMin_m906D46F5A5F72C83AF7651A910A97B616342DE4E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*>(__this + _offset);
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* _returnValue;
	_returnValue = MinMaxGradient_get_gradientMin_m906D46F5A5F72C83AF7651A910A97B616342DE4E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_gradientMin(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method) 
{
	{
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_0 = ___value0;
		__this->___m_GradientMin_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GradientMin_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609_AdjustorThunk (RuntimeObject* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method)
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*>(__this + _offset);
	MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609(_thisAdjusted, ___value0, method);
}
// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::get_colorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MinMaxGradient_get_colorMax_mB9E445D4D3E2788B10EA785B0BA8A76015FEDD1C (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_ColorMax_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MinMaxGradient_get_colorMax_mB9E445D4D3E2788B10EA785B0BA8A76015FEDD1C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*>(__this + _offset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _returnValue;
	_returnValue = MinMaxGradient_get_colorMax_mB9E445D4D3E2788B10EA785B0BA8A76015FEDD1C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_colorMax(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_ColorMax_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method)
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*>(__this + _offset);
	MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33(_thisAdjusted, ___value0, method);
}
// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::get_colorMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MinMaxGradient_get_colorMin_mD8698D56F1E88B7EE97638A3DC48AFC3FD2A6664 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_ColorMin_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MinMaxGradient_get_colorMin_mD8698D56F1E88B7EE97638A3DC48AFC3FD2A6664_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*>(__this + _offset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _returnValue;
	_returnValue = MinMaxGradient_get_colorMin_mD8698D56F1E88B7EE97638A3DC48AFC3FD2A6664(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_colorMin(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_ColorMin_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method)
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*>(__this + _offset);
	MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF(_thisAdjusted, ___value0, method);
}
// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MinMaxGradient_get_color_m534E35D538D549F006E9F90E453D41B92FBAC3BF (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_ColorMax_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MinMaxGradient_get_color_m534E35D538D549F006E9F90E453D41B92FBAC3BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*>(__this + _offset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _returnValue;
	_returnValue = MinMaxGradient_get_color_m534E35D538D549F006E9F90E453D41B92FBAC3BF(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_ColorMax_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method)
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*>(__this + _offset);
	MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B(_thisAdjusted, ___value0, method);
}
// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::get_gradient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* MinMaxGradient_get_gradient_m012030F7AEAE915DCC71C80674564E3FFD02FF9D (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, const RuntimeMethod* method) 
{
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* V_0 = NULL;
	{
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_0 = __this->___m_GradientMax_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* MinMaxGradient_get_gradient_m012030F7AEAE915DCC71C80674564E3FFD02FF9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*>(__this + _offset);
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* _returnValue;
	_returnValue = MinMaxGradient_get_gradient_m012030F7AEAE915DCC71C80674564E3FFD02FF9D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_gradient(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method) 
{
	{
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_0 = ___value0;
		__this->___m_GradientMax_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GradientMax_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D_AdjustorThunk (RuntimeObject* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method)
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*>(__this + _offset);
	MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D(_thisAdjusted, ___value0, method);
}
// UnityEngine.ParticleSystem/MinMaxGradient UnityEngine.ParticleSystem/MinMaxGradient::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 MinMaxGradient_op_Implicit_m70D5BA67A6801595378D57D0B136825BE16325D6 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___color0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_1;
		memset((&L_1), 0, sizeof(L_1));
		MinMaxGradient__ctor_m982C2A8AD071EA714E5583F90727C306B126F062((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_2 = V_0;
		return L_2;
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
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/EmitParams
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke(const EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0& unmarshaled, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Particle_0 = unmarshaled.___m_Particle_0;
	marshaled.___m_PositionSet_1 = static_cast<int32_t>(unmarshaled.___m_PositionSet_1);
	marshaled.___m_VelocitySet_2 = static_cast<int32_t>(unmarshaled.___m_VelocitySet_2);
	marshaled.___m_AxisOfRotationSet_3 = static_cast<int32_t>(unmarshaled.___m_AxisOfRotationSet_3);
	marshaled.___m_RotationSet_4 = static_cast<int32_t>(unmarshaled.___m_RotationSet_4);
	marshaled.___m_AngularVelocitySet_5 = static_cast<int32_t>(unmarshaled.___m_AngularVelocitySet_5);
	marshaled.___m_StartSizeSet_6 = static_cast<int32_t>(unmarshaled.___m_StartSizeSet_6);
	marshaled.___m_StartColorSet_7 = static_cast<int32_t>(unmarshaled.___m_StartColorSet_7);
	marshaled.___m_RandomSeedSet_8 = static_cast<int32_t>(unmarshaled.___m_RandomSeedSet_8);
	marshaled.___m_StartLifetimeSet_9 = static_cast<int32_t>(unmarshaled.___m_StartLifetimeSet_9);
	marshaled.___m_MeshIndexSet_10 = static_cast<int32_t>(unmarshaled.___m_MeshIndexSet_10);
	marshaled.___m_ApplyShapeToPosition_11 = static_cast<int32_t>(unmarshaled.___m_ApplyShapeToPosition_11);
}
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_back(const EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshaled_pinvoke& marshaled, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0& unmarshaled)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D unmarshaledm_Particle_temp_0;
	memset((&unmarshaledm_Particle_temp_0), 0, sizeof(unmarshaledm_Particle_temp_0));
	unmarshaledm_Particle_temp_0 = marshaled.___m_Particle_0;
	unmarshaled.___m_Particle_0 = unmarshaledm_Particle_temp_0;
	bool unmarshaledm_PositionSet_temp_1 = false;
	unmarshaledm_PositionSet_temp_1 = static_cast<bool>(marshaled.___m_PositionSet_1);
	unmarshaled.___m_PositionSet_1 = unmarshaledm_PositionSet_temp_1;
	bool unmarshaledm_VelocitySet_temp_2 = false;
	unmarshaledm_VelocitySet_temp_2 = static_cast<bool>(marshaled.___m_VelocitySet_2);
	unmarshaled.___m_VelocitySet_2 = unmarshaledm_VelocitySet_temp_2;
	bool unmarshaledm_AxisOfRotationSet_temp_3 = false;
	unmarshaledm_AxisOfRotationSet_temp_3 = static_cast<bool>(marshaled.___m_AxisOfRotationSet_3);
	unmarshaled.___m_AxisOfRotationSet_3 = unmarshaledm_AxisOfRotationSet_temp_3;
	bool unmarshaledm_RotationSet_temp_4 = false;
	unmarshaledm_RotationSet_temp_4 = static_cast<bool>(marshaled.___m_RotationSet_4);
	unmarshaled.___m_RotationSet_4 = unmarshaledm_RotationSet_temp_4;
	bool unmarshaledm_AngularVelocitySet_temp_5 = false;
	unmarshaledm_AngularVelocitySet_temp_5 = static_cast<bool>(marshaled.___m_AngularVelocitySet_5);
	unmarshaled.___m_AngularVelocitySet_5 = unmarshaledm_AngularVelocitySet_temp_5;
	bool unmarshaledm_StartSizeSet_temp_6 = false;
	unmarshaledm_StartSizeSet_temp_6 = static_cast<bool>(marshaled.___m_StartSizeSet_6);
	unmarshaled.___m_StartSizeSet_6 = unmarshaledm_StartSizeSet_temp_6;
	bool unmarshaledm_StartColorSet_temp_7 = false;
	unmarshaledm_StartColorSet_temp_7 = static_cast<bool>(marshaled.___m_StartColorSet_7);
	unmarshaled.___m_StartColorSet_7 = unmarshaledm_StartColorSet_temp_7;
	bool unmarshaledm_RandomSeedSet_temp_8 = false;
	unmarshaledm_RandomSeedSet_temp_8 = static_cast<bool>(marshaled.___m_RandomSeedSet_8);
	unmarshaled.___m_RandomSeedSet_8 = unmarshaledm_RandomSeedSet_temp_8;
	bool unmarshaledm_StartLifetimeSet_temp_9 = false;
	unmarshaledm_StartLifetimeSet_temp_9 = static_cast<bool>(marshaled.___m_StartLifetimeSet_9);
	unmarshaled.___m_StartLifetimeSet_9 = unmarshaledm_StartLifetimeSet_temp_9;
	bool unmarshaledm_MeshIndexSet_temp_10 = false;
	unmarshaledm_MeshIndexSet_temp_10 = static_cast<bool>(marshaled.___m_MeshIndexSet_10);
	unmarshaled.___m_MeshIndexSet_10 = unmarshaledm_MeshIndexSet_temp_10;
	bool unmarshaledm_ApplyShapeToPosition_temp_11 = false;
	unmarshaledm_ApplyShapeToPosition_temp_11 = static_cast<bool>(marshaled.___m_ApplyShapeToPosition_11);
	unmarshaled.___m_ApplyShapeToPosition_11 = unmarshaledm_ApplyShapeToPosition_temp_11;
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/EmitParams
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_cleanup(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/EmitParams
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_com(const EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0& unmarshaled, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshaled_com& marshaled)
{
	marshaled.___m_Particle_0 = unmarshaled.___m_Particle_0;
	marshaled.___m_PositionSet_1 = static_cast<int32_t>(unmarshaled.___m_PositionSet_1);
	marshaled.___m_VelocitySet_2 = static_cast<int32_t>(unmarshaled.___m_VelocitySet_2);
	marshaled.___m_AxisOfRotationSet_3 = static_cast<int32_t>(unmarshaled.___m_AxisOfRotationSet_3);
	marshaled.___m_RotationSet_4 = static_cast<int32_t>(unmarshaled.___m_RotationSet_4);
	marshaled.___m_AngularVelocitySet_5 = static_cast<int32_t>(unmarshaled.___m_AngularVelocitySet_5);
	marshaled.___m_StartSizeSet_6 = static_cast<int32_t>(unmarshaled.___m_StartSizeSet_6);
	marshaled.___m_StartColorSet_7 = static_cast<int32_t>(unmarshaled.___m_StartColorSet_7);
	marshaled.___m_RandomSeedSet_8 = static_cast<int32_t>(unmarshaled.___m_RandomSeedSet_8);
	marshaled.___m_StartLifetimeSet_9 = static_cast<int32_t>(unmarshaled.___m_StartLifetimeSet_9);
	marshaled.___m_MeshIndexSet_10 = static_cast<int32_t>(unmarshaled.___m_MeshIndexSet_10);
	marshaled.___m_ApplyShapeToPosition_11 = static_cast<int32_t>(unmarshaled.___m_ApplyShapeToPosition_11);
}
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_com_back(const EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshaled_com& marshaled, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0& unmarshaled)
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D unmarshaledm_Particle_temp_0;
	memset((&unmarshaledm_Particle_temp_0), 0, sizeof(unmarshaledm_Particle_temp_0));
	unmarshaledm_Particle_temp_0 = marshaled.___m_Particle_0;
	unmarshaled.___m_Particle_0 = unmarshaledm_Particle_temp_0;
	bool unmarshaledm_PositionSet_temp_1 = false;
	unmarshaledm_PositionSet_temp_1 = static_cast<bool>(marshaled.___m_PositionSet_1);
	unmarshaled.___m_PositionSet_1 = unmarshaledm_PositionSet_temp_1;
	bool unmarshaledm_VelocitySet_temp_2 = false;
	unmarshaledm_VelocitySet_temp_2 = static_cast<bool>(marshaled.___m_VelocitySet_2);
	unmarshaled.___m_VelocitySet_2 = unmarshaledm_VelocitySet_temp_2;
	bool unmarshaledm_AxisOfRotationSet_temp_3 = false;
	unmarshaledm_AxisOfRotationSet_temp_3 = static_cast<bool>(marshaled.___m_AxisOfRotationSet_3);
	unmarshaled.___m_AxisOfRotationSet_3 = unmarshaledm_AxisOfRotationSet_temp_3;
	bool unmarshaledm_RotationSet_temp_4 = false;
	unmarshaledm_RotationSet_temp_4 = static_cast<bool>(marshaled.___m_RotationSet_4);
	unmarshaled.___m_RotationSet_4 = unmarshaledm_RotationSet_temp_4;
	bool unmarshaledm_AngularVelocitySet_temp_5 = false;
	unmarshaledm_AngularVelocitySet_temp_5 = static_cast<bool>(marshaled.___m_AngularVelocitySet_5);
	unmarshaled.___m_AngularVelocitySet_5 = unmarshaledm_AngularVelocitySet_temp_5;
	bool unmarshaledm_StartSizeSet_temp_6 = false;
	unmarshaledm_StartSizeSet_temp_6 = static_cast<bool>(marshaled.___m_StartSizeSet_6);
	unmarshaled.___m_StartSizeSet_6 = unmarshaledm_StartSizeSet_temp_6;
	bool unmarshaledm_StartColorSet_temp_7 = false;
	unmarshaledm_StartColorSet_temp_7 = static_cast<bool>(marshaled.___m_StartColorSet_7);
	unmarshaled.___m_StartColorSet_7 = unmarshaledm_StartColorSet_temp_7;
	bool unmarshaledm_RandomSeedSet_temp_8 = false;
	unmarshaledm_RandomSeedSet_temp_8 = static_cast<bool>(marshaled.___m_RandomSeedSet_8);
	unmarshaled.___m_RandomSeedSet_8 = unmarshaledm_RandomSeedSet_temp_8;
	bool unmarshaledm_StartLifetimeSet_temp_9 = false;
	unmarshaledm_StartLifetimeSet_temp_9 = static_cast<bool>(marshaled.___m_StartLifetimeSet_9);
	unmarshaled.___m_StartLifetimeSet_9 = unmarshaledm_StartLifetimeSet_temp_9;
	bool unmarshaledm_MeshIndexSet_temp_10 = false;
	unmarshaledm_MeshIndexSet_temp_10 = static_cast<bool>(marshaled.___m_MeshIndexSet_10);
	unmarshaled.___m_MeshIndexSet_10 = unmarshaledm_MeshIndexSet_temp_10;
	bool unmarshaledm_ApplyShapeToPosition_temp_11 = false;
	unmarshaledm_ApplyShapeToPosition_temp_11 = static_cast<bool>(marshaled.___m_ApplyShapeToPosition_11);
	unmarshaled.___m_ApplyShapeToPosition_11 = unmarshaledm_ApplyShapeToPosition_temp_11;
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/EmitParams
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_com_cleanup(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/EmitParams::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParams_set_position_mF08E5334FDB60090C038498B6749CE742D9FE0E3 (EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* L_0 = (&__this->___m_Particle_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___value0;
		Particle_set_position_mE9103000DB4EA6CE09D25650F5A2915731F7A63E(L_0, L_1, NULL);
		__this->___m_PositionSet_1 = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C  void EmitParams_set_position_mF08E5334FDB60090C038498B6749CE742D9FE0E3_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0*>(__this + _offset);
	EmitParams_set_position_mF08E5334FDB60090C038498B6749CE742D9FE0E3(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/EmitParams::set_rotation3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParams_set_rotation3D_mB3B95DD1E8BD0E93E0C98F49D4FA0D4485FB495F (EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* L_0 = (&__this->___m_Particle_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___value0;
		Particle_set_rotation3D_mC0B19BFEBA780F95C763DE14C80B29764E519D62(L_0, L_1, NULL);
		__this->___m_RotationSet_4 = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C  void EmitParams_set_rotation3D_mB3B95DD1E8BD0E93E0C98F49D4FA0D4485FB495F_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0*>(__this + _offset);
	EmitParams_set_rotation3D_mB3B95DD1E8BD0E93E0C98F49D4FA0D4485FB495F(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/VelocityOverLifetimeModule
IL2CPP_EXTERN_C void VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_marshal_pinvoke(const VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56& unmarshaled, VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'VelocityOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_marshal_pinvoke_back(const VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_marshaled_pinvoke& marshaled, VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'VelocityOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/VelocityOverLifetimeModule
IL2CPP_EXTERN_C void VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_marshal_pinvoke_cleanup(VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/VelocityOverLifetimeModule
IL2CPP_EXTERN_C void VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_marshal_com(const VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56& unmarshaled, VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_marshaled_com& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'VelocityOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_marshal_com_back(const VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_marshaled_com& marshaled, VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'VelocityOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/VelocityOverLifetimeModule
IL2CPP_EXTERN_C void VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_marshal_com_cleanup(VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule__ctor_m64A15E09916657384A99217570EB78F31A09E10A (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) 
{
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___particleSystem0;
		__this->___m_ParticleSystem_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ParticleSystem_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void VelocityOverLifetimeModule__ctor_m64A15E09916657384A99217570EB78F31A09E10A_AdjustorThunk (RuntimeObject* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method)
{
	VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56*>(__this + _offset);
	VelocityOverLifetimeModule__ctor_m64A15E09916657384A99217570EB78F31A09E10A(_thisAdjusted, ___particleSystem0, method);
}
// System.Boolean UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VelocityOverLifetimeModule_get_enabled_m60395DDF6F516804EBFCD7AAE5AD0D741B279E4E (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = VelocityOverLifetimeModule_get_enabled_Injected_mB7A5AE07AAACBE69D912C410AED965B6009B345E(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool VelocityOverLifetimeModule_get_enabled_m60395DDF6F516804EBFCD7AAE5AD0D741B279E4E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56*>(__this + _offset);
	bool _returnValue;
	_returnValue = VelocityOverLifetimeModule_get_enabled_m60395DDF6F516804EBFCD7AAE5AD0D741B279E4E(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 VelocityOverLifetimeModule_get_x_mB9014044B32BB551EBB06A9DF167DCA4036AA002 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, const RuntimeMethod* method) 
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VelocityOverLifetimeModule_get_x_Injected_m13F8123E360E2DD1E4E1BC89F37094A2455AF291(__this, (&V_0), NULL);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 VelocityOverLifetimeModule_get_x_mB9014044B32BB551EBB06A9DF167DCA4036AA002_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56*>(__this + _offset);
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 _returnValue;
	_returnValue = VelocityOverLifetimeModule_get_x_mB9014044B32BB551EBB06A9DF167DCA4036AA002(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_x(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_set_x_m667368604CF8D09F133E552E21CBD3DC344281A0 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) 
{
	{
		VelocityOverLifetimeModule_set_x_Injected_m23A73756B945B8DCFEEC0A8AD47937B75177A262(__this, (&___value0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void VelocityOverLifetimeModule_set_x_m667368604CF8D09F133E552E21CBD3DC344281A0_AdjustorThunk (RuntimeObject* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method)
{
	VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56*>(__this + _offset);
	VelocityOverLifetimeModule_set_x_m667368604CF8D09F133E552E21CBD3DC344281A0(_thisAdjusted, ___value0, method);
}
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 VelocityOverLifetimeModule_get_y_m2B00A63C14F173791F1CDD2ACB527F64A72D16BF (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, const RuntimeMethod* method) 
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VelocityOverLifetimeModule_get_y_Injected_m4C851BE4A493DA375EF93924C8FC15769F169438(__this, (&V_0), NULL);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 VelocityOverLifetimeModule_get_y_m2B00A63C14F173791F1CDD2ACB527F64A72D16BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56*>(__this + _offset);
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 _returnValue;
	_returnValue = VelocityOverLifetimeModule_get_y_m2B00A63C14F173791F1CDD2ACB527F64A72D16BF(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_y(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_set_y_m4B08D16D7F274567CC18790702C8F3C53A443089 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) 
{
	{
		VelocityOverLifetimeModule_set_y_Injected_m2CFD2A2A63739B996C10A7920B3D5B06AEAB9553(__this, (&___value0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void VelocityOverLifetimeModule_set_y_m4B08D16D7F274567CC18790702C8F3C53A443089_AdjustorThunk (RuntimeObject* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method)
{
	VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56*>(__this + _offset);
	VelocityOverLifetimeModule_set_y_m4B08D16D7F274567CC18790702C8F3C53A443089(_thisAdjusted, ___value0, method);
}
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 VelocityOverLifetimeModule_get_z_mBEF172621B262D8E14742E3940DEC14757870B0C (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, const RuntimeMethod* method) 
{
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VelocityOverLifetimeModule_get_z_Injected_m01F302E682EF8994B8C25CA9B87E046435E98DC4(__this, (&V_0), NULL);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 VelocityOverLifetimeModule_get_z_mBEF172621B262D8E14742E3940DEC14757870B0C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56*>(__this + _offset);
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 _returnValue;
	_returnValue = VelocityOverLifetimeModule_get_z_mBEF172621B262D8E14742E3940DEC14757870B0C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_z(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_set_z_m8B5A03C2D6E06CD7C6177BD321E9121E96D1D889 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) 
{
	{
		VelocityOverLifetimeModule_set_z_Injected_m9DCC4C5B98B7597F6C5F39DB3FE2AD53419DEBA6(__this, (&___value0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void VelocityOverLifetimeModule_set_z_m8B5A03C2D6E06CD7C6177BD321E9121E96D1D889_AdjustorThunk (RuntimeObject* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method)
{
	VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56*>(__this + _offset);
	VelocityOverLifetimeModule_set_z_m8B5A03C2D6E06CD7C6177BD321E9121E96D1D889(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_enabled_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VelocityOverLifetimeModule_get_enabled_Injected_mB7A5AE07AAACBE69D912C410AED965B6009B345E (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* ____unity_self0, const RuntimeMethod* method) 
{
	typedef bool (*VelocityOverLifetimeModule_get_enabled_Injected_mB7A5AE07AAACBE69D912C410AED965B6009B345E_ftn) (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56*);
	static VelocityOverLifetimeModule_get_enabled_Injected_mB7A5AE07AAACBE69D912C410AED965B6009B345E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VelocityOverLifetimeModule_get_enabled_Injected_mB7A5AE07AAACBE69D912C410AED965B6009B345E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_enabled_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&)");
	bool icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_x_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_get_x_Injected_m13F8123E360E2DD1E4E1BC89F37094A2455AF291 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*VelocityOverLifetimeModule_get_x_Injected_m13F8123E360E2DD1E4E1BC89F37094A2455AF291_ftn) (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static VelocityOverLifetimeModule_get_x_Injected_m13F8123E360E2DD1E4E1BC89F37094A2455AF291_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VelocityOverLifetimeModule_get_x_Injected_m13F8123E360E2DD1E4E1BC89F37094A2455AF291_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_x_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___ret1);
}
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_x_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_set_x_Injected_m23A73756B945B8DCFEEC0A8AD47937B75177A262 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) 
{
	typedef void (*VelocityOverLifetimeModule_set_x_Injected_m23A73756B945B8DCFEEC0A8AD47937B75177A262_ftn) (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static VelocityOverLifetimeModule_set_x_Injected_m23A73756B945B8DCFEEC0A8AD47937B75177A262_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VelocityOverLifetimeModule_set_x_Injected_m23A73756B945B8DCFEEC0A8AD47937B75177A262_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_x_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_y_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_get_y_Injected_m4C851BE4A493DA375EF93924C8FC15769F169438 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*VelocityOverLifetimeModule_get_y_Injected_m4C851BE4A493DA375EF93924C8FC15769F169438_ftn) (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static VelocityOverLifetimeModule_get_y_Injected_m4C851BE4A493DA375EF93924C8FC15769F169438_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VelocityOverLifetimeModule_get_y_Injected_m4C851BE4A493DA375EF93924C8FC15769F169438_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_y_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___ret1);
}
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_y_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_set_y_Injected_m2CFD2A2A63739B996C10A7920B3D5B06AEAB9553 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) 
{
	typedef void (*VelocityOverLifetimeModule_set_y_Injected_m2CFD2A2A63739B996C10A7920B3D5B06AEAB9553_ftn) (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static VelocityOverLifetimeModule_set_y_Injected_m2CFD2A2A63739B996C10A7920B3D5B06AEAB9553_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VelocityOverLifetimeModule_set_y_Injected_m2CFD2A2A63739B996C10A7920B3D5B06AEAB9553_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_y_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_z_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_get_z_Injected_m01F302E682EF8994B8C25CA9B87E046435E98DC4 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*VelocityOverLifetimeModule_get_z_Injected_m01F302E682EF8994B8C25CA9B87E046435E98DC4_ftn) (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static VelocityOverLifetimeModule_get_z_Injected_m01F302E682EF8994B8C25CA9B87E046435E98DC4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VelocityOverLifetimeModule_get_z_Injected_m01F302E682EF8994B8C25CA9B87E046435E98DC4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/VelocityOverLifetimeModule::get_z_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___ret1);
}
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_z_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_set_z_Injected_m9DCC4C5B98B7597F6C5F39DB3FE2AD53419DEBA6 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* ____unity_self0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* ___value1, const RuntimeMethod* method) 
{
	typedef void (*VelocityOverLifetimeModule_set_z_Injected_m9DCC4C5B98B7597F6C5F39DB3FE2AD53419DEBA6_ftn) (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56*, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*);
	static VelocityOverLifetimeModule_set_z_Injected_m9DCC4C5B98B7597F6C5F39DB3FE2AD53419DEBA6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VelocityOverLifetimeModule_set_z_Injected_m9DCC4C5B98B7597F6C5F39DB3FE2AD53419DEBA6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_z_Injected(UnityEngine.ParticleSystem/VelocityOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/ColorOverLifetimeModule
IL2CPP_EXTERN_C void ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshal_pinvoke(const ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9& unmarshaled, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ColorOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshal_pinvoke_back(const ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshaled_pinvoke& marshaled, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ColorOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/ColorOverLifetimeModule
IL2CPP_EXTERN_C void ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshal_pinvoke_cleanup(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/ColorOverLifetimeModule
IL2CPP_EXTERN_C void ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshal_com(const ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9& unmarshaled, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshaled_com& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ColorOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshal_com_back(const ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshaled_com& marshaled, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ColorOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/ColorOverLifetimeModule
IL2CPP_EXTERN_C void ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshal_com_cleanup(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/ColorOverLifetimeModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorOverLifetimeModule__ctor_m3870A84520D71E559FF26F8592B98865763E42F3 (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) 
{
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___particleSystem0;
		__this->___m_ParticleSystem_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ParticleSystem_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ColorOverLifetimeModule__ctor_m3870A84520D71E559FF26F8592B98865763E42F3_AdjustorThunk (RuntimeObject* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method)
{
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*>(__this + _offset);
	ColorOverLifetimeModule__ctor_m3870A84520D71E559FF26F8592B98865763E42F3(_thisAdjusted, ___particleSystem0, method);
}
// System.Boolean UnityEngine.ParticleSystem/ColorOverLifetimeModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorOverLifetimeModule_get_enabled_mAB86D22805596728C643ABDF4887A246F1652B5B (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = ColorOverLifetimeModule_get_enabled_Injected_m007EAC65BDF28C61271CF0D60BA9E920E45CE532(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool ColorOverLifetimeModule_get_enabled_mAB86D22805596728C643ABDF4887A246F1652B5B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColorOverLifetimeModule_get_enabled_mAB86D22805596728C643ABDF4887A246F1652B5B(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ParticleSystem/MinMaxGradient UnityEngine.ParticleSystem/ColorOverLifetimeModule::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ColorOverLifetimeModule_get_color_m320131C4BBF3B84729CE1D2F7DD7FB986746BDB1 (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* __this, const RuntimeMethod* method) 
{
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ColorOverLifetimeModule_get_color_Injected_m6B8D5D22C47E26756DA09A5EFF427C18D144EF46(__this, (&V_0), NULL);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ColorOverLifetimeModule_get_color_m320131C4BBF3B84729CE1D2F7DD7FB986746BDB1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*>(__this + _offset);
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 _returnValue;
	_returnValue = ColorOverLifetimeModule_get_color_m320131C4BBF3B84729CE1D2F7DD7FB986746BDB1(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/ColorOverLifetimeModule::set_color(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method) 
{
	{
		ColorOverLifetimeModule_set_color_Injected_m36358251CD9A3487269CEFC0748E0571DB36602F(__this, (&___value0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B_AdjustorThunk (RuntimeObject* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method)
{
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*>(__this + _offset);
	ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.ParticleSystem/ColorOverLifetimeModule::get_enabled_Injected(UnityEngine.ParticleSystem/ColorOverLifetimeModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorOverLifetimeModule_get_enabled_Injected_m007EAC65BDF28C61271CF0D60BA9E920E45CE532 (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* ____unity_self0, const RuntimeMethod* method) 
{
	typedef bool (*ColorOverLifetimeModule_get_enabled_Injected_m007EAC65BDF28C61271CF0D60BA9E920E45CE532_ftn) (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*);
	static ColorOverLifetimeModule_get_enabled_Injected_m007EAC65BDF28C61271CF0D60BA9E920E45CE532_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ColorOverLifetimeModule_get_enabled_Injected_m007EAC65BDF28C61271CF0D60BA9E920E45CE532_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/ColorOverLifetimeModule::get_enabled_Injected(UnityEngine.ParticleSystem/ColorOverLifetimeModule&)");
	bool icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem/ColorOverLifetimeModule::get_color_Injected(UnityEngine.ParticleSystem/ColorOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxGradient&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorOverLifetimeModule_get_color_Injected_m6B8D5D22C47E26756DA09A5EFF427C18D144EF46 (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* ____unity_self0, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*ColorOverLifetimeModule_get_color_Injected_m6B8D5D22C47E26756DA09A5EFF427C18D144EF46_ftn) (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*);
	static ColorOverLifetimeModule_get_color_Injected_m6B8D5D22C47E26756DA09A5EFF427C18D144EF46_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ColorOverLifetimeModule_get_color_Injected_m6B8D5D22C47E26756DA09A5EFF427C18D144EF46_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/ColorOverLifetimeModule::get_color_Injected(UnityEngine.ParticleSystem/ColorOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxGradient&)");
	_il2cpp_icall_func(____unity_self0, ___ret1);
}
// System.Void UnityEngine.ParticleSystem/ColorOverLifetimeModule::set_color_Injected(UnityEngine.ParticleSystem/ColorOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxGradient&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorOverLifetimeModule_set_color_Injected_m36358251CD9A3487269CEFC0748E0571DB36602F (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* ____unity_self0, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* ___value1, const RuntimeMethod* method) 
{
	typedef void (*ColorOverLifetimeModule_set_color_Injected_m36358251CD9A3487269CEFC0748E0571DB36602F_ftn) (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*);
	static ColorOverLifetimeModule_set_color_Injected_m36358251CD9A3487269CEFC0748E0571DB36602F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ColorOverLifetimeModule_set_color_Injected_m36358251CD9A3487269CEFC0748E0571DB36602F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/ColorOverLifetimeModule::set_color_Injected(UnityEngine.ParticleSystem/ColorOverLifetimeModule&,UnityEngine.ParticleSystem/MinMaxGradient&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/LightsModule
IL2CPP_EXTERN_C void LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshal_pinvoke(const LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E& unmarshaled, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'LightsModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshal_pinvoke_back(const LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshaled_pinvoke& marshaled, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'LightsModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/LightsModule
IL2CPP_EXTERN_C void LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshal_pinvoke_cleanup(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/LightsModule
IL2CPP_EXTERN_C void LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshal_com(const LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E& unmarshaled, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshaled_com& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'LightsModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshal_com_back(const LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshaled_com& marshaled, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'LightsModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/LightsModule
IL2CPP_EXTERN_C void LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshal_com_cleanup(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/LightsModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule__ctor_mB04B2490B71B56B4CCD7F5DFD983DAB98696FB4E (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) 
{
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___particleSystem0;
		__this->___m_ParticleSystem_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ParticleSystem_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void LightsModule__ctor_mB04B2490B71B56B4CCD7F5DFD983DAB98696FB4E_AdjustorThunk (RuntimeObject* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method)
{
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*>(__this + _offset);
	LightsModule__ctor_mB04B2490B71B56B4CCD7F5DFD983DAB98696FB4E(_thisAdjusted, ___particleSystem0, method);
}
// System.Boolean UnityEngine.ParticleSystem/LightsModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LightsModule_get_enabled_m944379FB6DC57FE6F4E11714BBCE194C51EA7DA9 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = LightsModule_get_enabled_Injected_mCFFAB06613223DB0F3FF4DAE797D8D00E6E9F8C8(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool LightsModule_get_enabled_m944379FB6DC57FE6F4E11714BBCE194C51EA7DA9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*>(__this + _offset);
	bool _returnValue;
	_returnValue = LightsModule_get_enabled_m944379FB6DC57FE6F4E11714BBCE194C51EA7DA9(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/LightsModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		LightsModule_set_enabled_Injected_m6337E80E653BA45B5A1ECF74028B6EEC4E7EE433(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*>(__this + _offset);
	LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.ParticleSystem/LightsModule::get_enabled_Injected(UnityEngine.ParticleSystem/LightsModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LightsModule_get_enabled_Injected_mCFFAB06613223DB0F3FF4DAE797D8D00E6E9F8C8 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* ____unity_self0, const RuntimeMethod* method) 
{
	typedef bool (*LightsModule_get_enabled_Injected_mCFFAB06613223DB0F3FF4DAE797D8D00E6E9F8C8_ftn) (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*);
	static LightsModule_get_enabled_Injected_mCFFAB06613223DB0F3FF4DAE797D8D00E6E9F8C8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LightsModule_get_enabled_Injected_mCFFAB06613223DB0F3FF4DAE797D8D00E6E9F8C8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/LightsModule::get_enabled_Injected(UnityEngine.ParticleSystem/LightsModule&)");
	bool icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem/LightsModule::set_enabled_Injected(UnityEngine.ParticleSystem/LightsModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_enabled_Injected_m6337E80E653BA45B5A1ECF74028B6EEC4E7EE433 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* ____unity_self0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*LightsModule_set_enabled_Injected_m6337E80E653BA45B5A1ECF74028B6EEC4E7EE433_ftn) (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*, bool);
	static LightsModule_set_enabled_Injected_m6337E80E653BA45B5A1ECF74028B6EEC4E7EE433_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LightsModule_set_enabled_Injected_m6337E80E653BA45B5A1ECF74028B6EEC4E7EE433_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/LightsModule::set_enabled_Injected(UnityEngine.ParticleSystem/LightsModule&,System.Boolean)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/TrailModule
IL2CPP_EXTERN_C void TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshal_pinvoke(const TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D& unmarshaled, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TrailModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshal_pinvoke_back(const TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_pinvoke& marshaled, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TrailModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/TrailModule
IL2CPP_EXTERN_C void TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshal_pinvoke_cleanup(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/TrailModule
IL2CPP_EXTERN_C void TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshal_com(const TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D& unmarshaled, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_com& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TrailModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshal_com_back(const TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_com& marshaled, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TrailModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/TrailModule
IL2CPP_EXTERN_C void TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshal_com_cleanup(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/TrailModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule__ctor_m9FB482ADCAA6B390BC1D6A145D51594A8E13FE4C (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) 
{
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___particleSystem0;
		__this->___m_ParticleSystem_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ParticleSystem_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrailModule__ctor_m9FB482ADCAA6B390BC1D6A145D51594A8E13FE4C_AdjustorThunk (RuntimeObject* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method)
{
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*>(__this + _offset);
	TrailModule__ctor_m9FB482ADCAA6B390BC1D6A145D51594A8E13FE4C(_thisAdjusted, ___particleSystem0, method);
}
// System.Boolean UnityEngine.ParticleSystem/TrailModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrailModule_get_enabled_m78262C91CD53A91AFC1472EA65B64EA0D064EE0C (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = TrailModule_get_enabled_Injected_m9114885AE38342F8F33BC75554434118A8ABF391(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrailModule_get_enabled_m78262C91CD53A91AFC1472EA65B64EA0D064EE0C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*>(__this + _offset);
	bool _returnValue;
	_returnValue = TrailModule_get_enabled_m78262C91CD53A91AFC1472EA65B64EA0D064EE0C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ParticleSystem/TrailModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		TrailModule_set_enabled_Injected_mD4ADECFADB6879344BF4312B342686297D88B7F1(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*>(__this + _offset);
	TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.ParticleSystem/TrailModule::get_enabled_Injected(UnityEngine.ParticleSystem/TrailModule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrailModule_get_enabled_Injected_m9114885AE38342F8F33BC75554434118A8ABF391 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* ____unity_self0, const RuntimeMethod* method) 
{
	typedef bool (*TrailModule_get_enabled_Injected_m9114885AE38342F8F33BC75554434118A8ABF391_ftn) (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*);
	static TrailModule_get_enabled_Injected_m9114885AE38342F8F33BC75554434118A8ABF391_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TrailModule_get_enabled_Injected_m9114885AE38342F8F33BC75554434118A8ABF391_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/TrailModule::get_enabled_Injected(UnityEngine.ParticleSystem/TrailModule&)");
	bool icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystem/TrailModule::set_enabled_Injected(UnityEngine.ParticleSystem/TrailModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_enabled_Injected_mD4ADECFADB6879344BF4312B342686297D88B7F1 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* ____unity_self0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*TrailModule_set_enabled_Injected_mD4ADECFADB6879344BF4312B342686297D88B7F1_ftn) (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*, bool);
	static TrailModule_set_enabled_Injected_mD4ADECFADB6879344BF4312B342686297D88B7F1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TrailModule_set_enabled_Injected_mD4ADECFADB6879344BF4312B342686297D88B7F1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/TrailModule::set_enabled_Injected(UnityEngine.ParticleSystem/TrailModule&,System.Boolean)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/CustomDataModule
IL2CPP_EXTERN_C void CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4_marshal_pinvoke(const CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4& unmarshaled, CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'CustomDataModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4_marshal_pinvoke_back(const CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4_marshaled_pinvoke& marshaled, CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'CustomDataModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/CustomDataModule
IL2CPP_EXTERN_C void CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4_marshal_pinvoke_cleanup(CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/CustomDataModule
IL2CPP_EXTERN_C void CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4_marshal_com(const CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4& unmarshaled, CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4_marshaled_com& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'CustomDataModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4_marshal_com_back(const CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4_marshaled_com& marshaled, CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'CustomDataModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/CustomDataModule
IL2CPP_EXTERN_C void CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4_marshal_com_cleanup(CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/CustomDataModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDataModule__ctor_mFEC59E8A3F82DDEAD62D887E52E92D9B25B61D78 (CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method) 
{
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___particleSystem0;
		__this->___m_ParticleSystem_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ParticleSystem_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void CustomDataModule__ctor_mFEC59E8A3F82DDEAD62D887E52E92D9B25B61D78_AdjustorThunk (RuntimeObject* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem0, const RuntimeMethod* method)
{
	CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4*>(__this + _offset);
	CustomDataModule__ctor_mFEC59E8A3F82DDEAD62D887E52E92D9B25B61D78(_thisAdjusted, ___particleSystem0, method);
}
// System.Void UnityEngine.ParticleSystem/CustomDataModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDataModule_set_enabled_m1C073CBA9E695C7B7BB85CE82EB2155CEDB86B62 (CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		CustomDataModule_set_enabled_Injected_m9EEC00733D0C4F33794265BB7E7525DF8F70DC15(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void CustomDataModule_set_enabled_m1C073CBA9E695C7B7BB85CE82EB2155CEDB86B62_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4*>(__this + _offset);
	CustomDataModule_set_enabled_m1C073CBA9E695C7B7BB85CE82EB2155CEDB86B62(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/CustomDataModule::SetColor(UnityEngine.ParticleSystemCustomData,UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDataModule_SetColor_m1314A02DD8330C806E970DA7076967273A1D2584 (CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4* __this, int32_t ___stream0, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___gradient1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___stream0;
		CustomDataModule_SetColor_Injected_mE1A54D996FC25E1E2B34AD97653206C931082930(__this, L_0, (&___gradient1), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void CustomDataModule_SetColor_m1314A02DD8330C806E970DA7076967273A1D2584_AdjustorThunk (RuntimeObject* __this, int32_t ___stream0, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___gradient1, const RuntimeMethod* method)
{
	CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4*>(__this + _offset);
	CustomDataModule_SetColor_m1314A02DD8330C806E970DA7076967273A1D2584(_thisAdjusted, ___stream0, ___gradient1, method);
}
// System.Void UnityEngine.ParticleSystem/CustomDataModule::set_enabled_Injected(UnityEngine.ParticleSystem/CustomDataModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDataModule_set_enabled_Injected_m9EEC00733D0C4F33794265BB7E7525DF8F70DC15 (CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4* ____unity_self0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*CustomDataModule_set_enabled_Injected_m9EEC00733D0C4F33794265BB7E7525DF8F70DC15_ftn) (CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4*, bool);
	static CustomDataModule_set_enabled_Injected_m9EEC00733D0C4F33794265BB7E7525DF8F70DC15_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomDataModule_set_enabled_Injected_m9EEC00733D0C4F33794265BB7E7525DF8F70DC15_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/CustomDataModule::set_enabled_Injected(UnityEngine.ParticleSystem/CustomDataModule&,System.Boolean)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/CustomDataModule::SetColor_Injected(UnityEngine.ParticleSystem/CustomDataModule&,UnityEngine.ParticleSystemCustomData,UnityEngine.ParticleSystem/MinMaxGradient&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDataModule_SetColor_Injected_mE1A54D996FC25E1E2B34AD97653206C931082930 (CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4* ____unity_self0, int32_t ___stream1, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* ___gradient2, const RuntimeMethod* method) 
{
	typedef void (*CustomDataModule_SetColor_Injected_mE1A54D996FC25E1E2B34AD97653206C931082930_ftn) (CustomDataModule_t44BDC4DC2B7E66B5298D766D86667C063E8595C4*, int32_t, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69*);
	static CustomDataModule_SetColor_Injected_mE1A54D996FC25E1E2B34AD97653206C931082930_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomDataModule_SetColor_Injected_mE1A54D996FC25E1E2B34AD97653206C931082930_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/CustomDataModule::SetColor_Injected(UnityEngine.ParticleSystem/CustomDataModule&,UnityEngine.ParticleSystemCustomData,UnityEngine.ParticleSystem/MinMaxGradient&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___gradient2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.ParticlePhysicsExtensions::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticlePhysicsExtensions_GetCollisionEvents_m37C8F4C7FE60BBA0B6FD4B361BEFFE53CF8154F7 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___ps0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* ___collisionEvents2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___ps0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___go1;
		List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_2 = ___collisionEvents2;
		int32_t L_3;
		L_3 = ParticleSystemExtensionsImpl_GetCollisionEvents_m20E540083AAAB639CDE0A5746375515D537736FC(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
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
// System.Single UnityEngine.ParticleSystemRenderer::get_sortingFudge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ParticleSystemRenderer_get_sortingFudge_mE8617225CDEB6C31A6D75FFF91FCCDF8D95ABF48 (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* __this, const RuntimeMethod* method) 
{
	typedef float (*ParticleSystemRenderer_get_sortingFudge_mE8617225CDEB6C31A6D75FFF91FCCDF8D95ABF48_ftn) (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4*);
	static ParticleSystemRenderer_get_sortingFudge_mE8617225CDEB6C31A6D75FFF91FCCDF8D95ABF48_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystemRenderer_get_sortingFudge_mE8617225CDEB6C31A6D75FFF91FCCDF8D95ABF48_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystemRenderer::get_sortingFudge()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystemRenderer::set_sortingFudge(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemRenderer_set_sortingFudge_m1B451A3D949D6F06E4B86BB0480B545473CCF8FB (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*ParticleSystemRenderer_set_sortingFudge_m1B451A3D949D6F06E4B86BB0480B545473CCF8FB_ftn) (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4*, float);
	static ParticleSystemRenderer_set_sortingFudge_m1B451A3D949D6F06E4B86BB0480B545473CCF8FB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystemRenderer_set_sortingFudge_m1B451A3D949D6F06E4B86BB0480B545473CCF8FB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystemRenderer::set_sortingFudge(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.ParticleSystemRenderer::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ParticleSystemRenderer_get_pivot_m34645072CFB02401C67E1878A985D96203B9F862 (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ParticleSystemRenderer_get_pivot_Injected_mE819E37322A80AC35F9AB3664B4F27232E053B78(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.ParticleSystemRenderer::set_pivot(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemRenderer_set_pivot_m29E1CC5FC7A129C78387F68A7F91378835BCF7FC (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		ParticleSystemRenderer_set_pivot_Injected_mA3FD92B1ECD9BF77169C4D4EFCAD8F2AD7138DE7(__this, (&___value0), NULL);
		return;
	}
}
// System.Int32 UnityEngine.ParticleSystemRenderer::GetMeshes(UnityEngine.Mesh[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystemRenderer_GetMeshes_m3CA9AA8947C7F0468F6C0B7F1344D747EA43D440 (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* __this, MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* ___meshes0, const RuntimeMethod* method) 
{
	typedef int32_t (*ParticleSystemRenderer_GetMeshes_m3CA9AA8947C7F0468F6C0B7F1344D747EA43D440_ftn) (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4*, MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689*);
	static ParticleSystemRenderer_GetMeshes_m3CA9AA8947C7F0468F6C0B7F1344D747EA43D440_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystemRenderer_GetMeshes_m3CA9AA8947C7F0468F6C0B7F1344D747EA43D440_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystemRenderer::GetMeshes(UnityEngine.Mesh[])");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___meshes0);
	return icallRetVal;
}
// System.Void UnityEngine.ParticleSystemRenderer::get_pivot_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemRenderer_get_pivot_Injected_mE819E37322A80AC35F9AB3664B4F27232E053B78 (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*ParticleSystemRenderer_get_pivot_Injected_mE819E37322A80AC35F9AB3664B4F27232E053B78_ftn) (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static ParticleSystemRenderer_get_pivot_Injected_mE819E37322A80AC35F9AB3664B4F27232E053B78_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystemRenderer_get_pivot_Injected_mE819E37322A80AC35F9AB3664B4F27232E053B78_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystemRenderer::get_pivot_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.ParticleSystemRenderer::set_pivot_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemRenderer_set_pivot_Injected_mA3FD92B1ECD9BF77169C4D4EFCAD8F2AD7138DE7 (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) 
{
	typedef void (*ParticleSystemRenderer_set_pivot_Injected_mA3FD92B1ECD9BF77169C4D4EFCAD8F2AD7138DE7_ftn) (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static ParticleSystemRenderer_set_pivot_Injected_mA3FD92B1ECD9BF77169C4D4EFCAD8F2AD7138DE7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystemRenderer_set_pivot_Injected_mA3FD92B1ECD9BF77169C4D4EFCAD8F2AD7138DE7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystemRenderer::set_pivot_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::get_intersection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ParticleCollisionEvent_get_intersection_m5CD7C517228E7D6148DEA4ED0500533C146DEC97 (ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Intersection_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ParticleCollisionEvent_get_intersection_m5CD7C517228E7D6148DEA4ED0500533C146DEC97_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = ParticleCollisionEvent_get_intersection_m5CD7C517228E7D6148DEA4ED0500533C146DEC97(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ParticleCollisionEvent_get_normal_m7FC8D0427210D507D8003DB9CCD791AB88DC63FC (ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Normal_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ParticleCollisionEvent_get_normal_m7FC8D0427210D507D8003DB9CCD791AB88DC63FC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = ParticleCollisionEvent_get_normal_m7FC8D0427210D507D8003DB9CCD791AB88DC63FC(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.ParticleSystemExtensionsImpl::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystemExtensionsImpl_GetCollisionEvents_m20E540083AAAB639CDE0A5746375515D537736FC (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___ps0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* ___collisionEvents2, const RuntimeMethod* method) 
{
	typedef int32_t (*ParticleSystemExtensionsImpl_GetCollisionEvents_m20E540083AAAB639CDE0A5746375515D537736FC_ftn) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, List_1_tC738A5621689A7678648746667E7F66D96D6B8FD*);
	static ParticleSystemExtensionsImpl_GetCollisionEvents_m20E540083AAAB639CDE0A5746375515D537736FC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystemExtensionsImpl_GetCollisionEvents_m20E540083AAAB639CDE0A5746375515D537736FC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystemExtensionsImpl::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>)");
	int32_t icallRetVal = _il2cpp_icall_func(___ps0, ___go1, ___collisionEvents2);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
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

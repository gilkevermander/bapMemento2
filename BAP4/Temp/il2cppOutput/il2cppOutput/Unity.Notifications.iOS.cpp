#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>
struct List_1_t74490A14DE1B801705191886C6038E212F513DF3;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6;
// Unity.Notifications.iOS.iOSNotification
struct iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152;
// Unity.Notifications.iOS.iOSNotificationCenter/<>c
struct U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683;
// Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback
struct AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189;
// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback
struct NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2;
// Unity.Notifications.iOS.iOSNotificationData[]
struct iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655;
// Unity.Notifications.iOS.iOSNotificationTrigger
struct iOSNotificationTrigger_t9317CA39408C0657F4820C5A4873EF67DD0AEC64;
// Unity.Notifications.iOS.iOSNotificationsWrapper
struct iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594;
// Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback
struct AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA;
// Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback
struct NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t74490A14DE1B801705191886C6038E212F513DF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationPushTrigger_t29A1F47CC48E56F32F2D3E8A51868CFD825355B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral42E1675938518324B72A94620A159CD1F6BA5EC2;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF2B80A6C9D316B4D42C4FBAF52E23FD61A0EDF13;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEFE827AEC936B5E526A09D7EA8DDB88EDD49F974_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mD5E1662591170D0B2A4E53979AC955514765646A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE3332C8E2419FA39E7D4F53A9C45F538FF8B7739_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_m06C18A11B6253261325A4EC6C30A68F9EC8521FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToPtr_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_m2F3A206D37954311DCFFBC6D6161A56EFAE6B8C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m08DA7F41D7EC820C2C3C8F282BBE6F291E82EBAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mA8DDD3E8230E283F4AB52903C6D81B419EA5576A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m3B9AD42DC128717E71D419845B7007F003E220A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__37_0_m2FE04AD3D2CCA28AA222F2D768C8D368BC40F01B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__37_1_m6666052569C9BAA2D0304FEF45DFFB6E2B4EB17B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__37_2_mEA60AEE2306CB5C7F289877DFCABD3911A692043_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotification_set_Trigger_m2170340977D6C6E104D18A82ED01FC192322571E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_AuthorizationRequestReceived_m7F2E5560B9F9BE57CDA06FCAFEE18C307C485AB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_NotificationReceived_mC2D919DE6267392194C686717D7C804D08644A12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_RemoteNotificationReceived_m631F99C037407B7D5D646444F7612E710930A1F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AuthorizationRequestCallback_BeginInvoke_m004394767BA4610AF82D9A667C1D8EF523A9A031_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AuthorizationRequestCompletedCallback_BeginInvoke_m45A610D08166DA55E4123E6F124C5FE8F08AD132_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NotificationReceivedCallback_BeginInvoke_mC1BFA471F65747F19776BB85F231062859C040B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mC8583156570205A418B0B51868CAD998942DCA1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_GetLastRespondedNotification_m0FA87E439B933EFA568B4BFED97CEE8B1C3094CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_Initialize_m5D8DAE0D39DCCEC17D89AED4C0A0155842E5A66E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_OnFinishedAuthorizationRequest_m27E8E4AD441434D0F04CA34298E404DC9717B695_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_OnReceivedRemoteNotification_mF618D4C4BF6CC24854F7A5E319D225B48C6667F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_OnSentNotification_m643A50BA43CFAE9E890279AA63C2D923919DC12C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_RemoveAllDeliveredNotifications_mD94C4A4AA639C1DF34B9B76E521012C169EBDF36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_RemoveAllScheduledNotifications_mFC4EFDA8F6DA0F0ED442E36FC22E614E69D3A45D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_RemoveDeliveredNotification_mC4EEB0CADDF9B181BC3E58EA569E0D0A342F03A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_RemoveScheduledNotification_m4C73DC72140FA4FBF15199004948FADCDAB1EB7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_ScheduleNotification_m38A670E80C13007915229879F2E4AEDE5F3E386D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter__cctor_m45F7D43BD95952A6914EB672CD23455160C8ABC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_add_OnNotificationReceived_m978A791202FE895A476BFECBE8971FCB96442EA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_add_s_OnNotificationReceived_m4344C4F6CFABAD3E43A5AFD65104995AEAFD6387_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_remove_OnNotificationReceived_mE1214E93F0FAE308CAB530FA1B858E90DA1F0BDB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_remove_s_OnNotificationReceived_mAFCF3BBFFE03628AF82617B73D91CEC20D0118A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_set_ApplicationBadge_m2ACF32475DA6FC7362A6BA391829230814083D3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotification_GenerateUniqueID_m6718EF11750C1111126DFAFFD89C7DCC92E98E82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotification__ctor_m21013DC8C6A18663D37CA13467F3FD1553FED42E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotification_get_Trigger_m37352D7D08B03ED28EFF302C5F116DED94F7B251_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotification_set_Trigger_m2170340977D6C6E104D18A82ED01FC192322571E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_AuthorizationRequestReceived_m7F2E5560B9F9BE57CDA06FCAFEE18C307C485AB0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_GetAppOpenedUsingNotification_mE1A4A15076997D1F54E22DB720C141434BAB0075_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_GetApplicationBadge_m14C281B1CE64821FF864959DCA59C11D24E9CFCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_GetDeliveredNotificationData_m6CD497233458F93AD76535CD43409084B75FBB60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_GetLastNotificationData_mA15D919959941DAB58C4CF58C957FE250919C1F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_GetNotificationSettings_m2EF48F45F4214C512AB7B831E235E43E3D45EEB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_GetScheduledNotificationData_m9703F377E5207667BB79C5556B39BC734DECAF51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_NotificationReceived_mC2D919DE6267392194C686717D7C804D08644A12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_m43EF54AE21C110C96BAA663A55B1AB9D0DC05A50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_RegisterOnReceivedCallback_mD39562B21E6DD6A95C1B106B1AB1CBD995597900_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_RegisterOnReceivedRemoteNotificationCallback_mDDF1C0EFD9CCA00E67BD0157BED6FE83AA298886_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_RemoteNotificationReceived_m631F99C037407B7D5D646444F7612E710930A1F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_RequestAuthorization_m17C4DA43EFBCA21F606E918B8311DC810511EB2E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_ScheduleLocalNotification_m6D11AC2A87A08FE4A282B02354F2041B49793607_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_SetApplicationBadge_m2B9781A9280B20BAF93C84C10360158948EF6DD9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6;;
struct iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke;
struct iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke;;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tEAB667AE9BD07531EA6E9EDC805B5483E6CEE9E6 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>
struct  List_1_t74490A14DE1B801705191886C6038E212F513DF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t74490A14DE1B801705191886C6038E212F513DF3, ____items_1)); }
	inline iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* get__items_1() const { return ____items_1; }
	inline iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t74490A14DE1B801705191886C6038E212F513DF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t74490A14DE1B801705191886C6038E212F513DF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t74490A14DE1B801705191886C6038E212F513DF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t74490A14DE1B801705191886C6038E212F513DF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t74490A14DE1B801705191886C6038E212F513DF3_StaticFields, ____emptyArray_5)); }
	inline iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* get__emptyArray_5() const { return ____emptyArray_5; }
	inline iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Unity.Notifications.iOS.iOSNotificationCenter
struct  iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0  : public RuntimeObject
{
public:

public:
};

struct iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields
{
public:
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::s_Initialized
	bool ___s_Initialized_0;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::s_OnNotificationReceivedCallbackSet
	bool ___s_OnNotificationReceivedCallbackSet_1;
	// Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationCenter::s_OnNotificationReceived
	NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * ___s_OnNotificationReceived_2;
	// Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationCenter::s_OnRemoteNotificationReceived
	NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * ___s_OnRemoteNotificationReceived_3;
	// Unity.Notifications.iOS.iOSNotificationCenter_AuthorizationRequestCompletedCallback Unity.Notifications.iOS.iOSNotificationCenter::OnAuthorizationRequestCompleted
	AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * ___OnAuthorizationRequestCompleted_4;

public:
	inline static int32_t get_offset_of_s_Initialized_0() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields, ___s_Initialized_0)); }
	inline bool get_s_Initialized_0() const { return ___s_Initialized_0; }
	inline bool* get_address_of_s_Initialized_0() { return &___s_Initialized_0; }
	inline void set_s_Initialized_0(bool value)
	{
		___s_Initialized_0 = value;
	}

	inline static int32_t get_offset_of_s_OnNotificationReceivedCallbackSet_1() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields, ___s_OnNotificationReceivedCallbackSet_1)); }
	inline bool get_s_OnNotificationReceivedCallbackSet_1() const { return ___s_OnNotificationReceivedCallbackSet_1; }
	inline bool* get_address_of_s_OnNotificationReceivedCallbackSet_1() { return &___s_OnNotificationReceivedCallbackSet_1; }
	inline void set_s_OnNotificationReceivedCallbackSet_1(bool value)
	{
		___s_OnNotificationReceivedCallbackSet_1 = value;
	}

	inline static int32_t get_offset_of_s_OnNotificationReceived_2() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields, ___s_OnNotificationReceived_2)); }
	inline NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * get_s_OnNotificationReceived_2() const { return ___s_OnNotificationReceived_2; }
	inline NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 ** get_address_of_s_OnNotificationReceived_2() { return &___s_OnNotificationReceived_2; }
	inline void set_s_OnNotificationReceived_2(NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * value)
	{
		___s_OnNotificationReceived_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnNotificationReceived_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_OnRemoteNotificationReceived_3() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields, ___s_OnRemoteNotificationReceived_3)); }
	inline NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * get_s_OnRemoteNotificationReceived_3() const { return ___s_OnRemoteNotificationReceived_3; }
	inline NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 ** get_address_of_s_OnRemoteNotificationReceived_3() { return &___s_OnRemoteNotificationReceived_3; }
	inline void set_s_OnRemoteNotificationReceived_3(NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * value)
	{
		___s_OnRemoteNotificationReceived_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnRemoteNotificationReceived_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAuthorizationRequestCompleted_4() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields, ___OnAuthorizationRequestCompleted_4)); }
	inline AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * get_OnAuthorizationRequestCompleted_4() const { return ___OnAuthorizationRequestCompleted_4; }
	inline AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 ** get_address_of_OnAuthorizationRequestCompleted_4() { return &___OnAuthorizationRequestCompleted_4; }
	inline void set_OnAuthorizationRequestCompleted_4(AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * value)
	{
		___OnAuthorizationRequestCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAuthorizationRequestCompleted_4), (void*)value);
	}
};


// Unity.Notifications.iOS.iOSNotificationCenter_<>c
struct  U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_StaticFields
{
public:
	// Unity.Notifications.iOS.iOSNotificationCenter_<>c Unity.Notifications.iOS.iOSNotificationCenter_<>c::<>9
	U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Unity.Notifications.iOS.iOSAuthorizationRequestData
struct  iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6 
{
public:
	// System.Boolean Unity.Notifications.iOS.iOSAuthorizationRequestData::granted
	bool ___granted_0;
	// System.String Unity.Notifications.iOS.iOSAuthorizationRequestData::error
	String_t* ___error_1;
	// System.Boolean Unity.Notifications.iOS.iOSAuthorizationRequestData::finished
	bool ___finished_2;
	// System.String Unity.Notifications.iOS.iOSAuthorizationRequestData::deviceToken
	String_t* ___deviceToken_3;

public:
	inline static int32_t get_offset_of_granted_0() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6, ___granted_0)); }
	inline bool get_granted_0() const { return ___granted_0; }
	inline bool* get_address_of_granted_0() { return &___granted_0; }
	inline void set_granted_0(bool value)
	{
		___granted_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6, ___error_1)); }
	inline String_t* get_error_1() const { return ___error_1; }
	inline String_t** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(String_t* value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_finished_2() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6, ___finished_2)); }
	inline bool get_finished_2() const { return ___finished_2; }
	inline bool* get_address_of_finished_2() { return &___finished_2; }
	inline void set_finished_2(bool value)
	{
		___finished_2 = value;
	}

	inline static int32_t get_offset_of_deviceToken_3() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6, ___deviceToken_3)); }
	inline String_t* get_deviceToken_3() const { return ___deviceToken_3; }
	inline String_t** get_address_of_deviceToken_3() { return &___deviceToken_3; }
	inline void set_deviceToken_3(String_t* value)
	{
		___deviceToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceToken_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke
{
	int32_t ___granted_0;
	char* ___error_1;
	int32_t ___finished_2;
	char* ___deviceToken_3;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_com
{
	int32_t ___granted_0;
	Il2CppChar* ___error_1;
	int32_t ___finished_2;
	Il2CppChar* ___deviceToken_3;
};

// Unity.Notifications.iOS.iOSNotificationData
struct  iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F 
{
public:
	// System.String Unity.Notifications.iOS.iOSNotificationData::identifier
	String_t* ___identifier_0;
	// System.String Unity.Notifications.iOS.iOSNotificationData::title
	String_t* ___title_1;
	// System.String Unity.Notifications.iOS.iOSNotificationData::body
	String_t* ___body_2;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::badge
	int32_t ___badge_3;
	// System.String Unity.Notifications.iOS.iOSNotificationData::subtitle
	String_t* ___subtitle_4;
	// System.String Unity.Notifications.iOS.iOSNotificationData::categoryIdentifier
	String_t* ___categoryIdentifier_5;
	// System.String Unity.Notifications.iOS.iOSNotificationData::threadIdentifier
	String_t* ___threadIdentifier_6;
	// System.String Unity.Notifications.iOS.iOSNotificationData::data
	String_t* ___data_7;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationData::showInForeground
	bool ___showInForeground_8;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::showInForegroundPresentationOptions
	int32_t ___showInForegroundPresentationOptions_9;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::triggerType
	int32_t ___triggerType_10;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationData::repeats
	bool ___repeats_11;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::timeTriggerInterval
	int32_t ___timeTriggerInterval_12;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerYear
	int32_t ___calendarTriggerYear_13;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerMonth
	int32_t ___calendarTriggerMonth_14;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerDay
	int32_t ___calendarTriggerDay_15;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerHour
	int32_t ___calendarTriggerHour_16;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerMinute
	int32_t ___calendarTriggerMinute_17;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerSecond
	int32_t ___calendarTriggerSecond_18;
	// System.Single Unity.Notifications.iOS.iOSNotificationData::locationTriggerCenterX
	float ___locationTriggerCenterX_19;
	// System.Single Unity.Notifications.iOS.iOSNotificationData::locationTriggerCenterY
	float ___locationTriggerCenterY_20;
	// System.Single Unity.Notifications.iOS.iOSNotificationData::locationTriggerRadius
	float ___locationTriggerRadius_21;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationData::locationTriggerNotifyOnEntry
	bool ___locationTriggerNotifyOnEntry_22;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationData::locationTriggerNotifyOnExit
	bool ___locationTriggerNotifyOnExit_23;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_title_1() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___title_1)); }
	inline String_t* get_title_1() const { return ___title_1; }
	inline String_t** get_address_of_title_1() { return &___title_1; }
	inline void set_title_1(String_t* value)
	{
		___title_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_1), (void*)value);
	}

	inline static int32_t get_offset_of_body_2() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___body_2)); }
	inline String_t* get_body_2() const { return ___body_2; }
	inline String_t** get_address_of_body_2() { return &___body_2; }
	inline void set_body_2(String_t* value)
	{
		___body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___body_2), (void*)value);
	}

	inline static int32_t get_offset_of_badge_3() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___badge_3)); }
	inline int32_t get_badge_3() const { return ___badge_3; }
	inline int32_t* get_address_of_badge_3() { return &___badge_3; }
	inline void set_badge_3(int32_t value)
	{
		___badge_3 = value;
	}

	inline static int32_t get_offset_of_subtitle_4() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___subtitle_4)); }
	inline String_t* get_subtitle_4() const { return ___subtitle_4; }
	inline String_t** get_address_of_subtitle_4() { return &___subtitle_4; }
	inline void set_subtitle_4(String_t* value)
	{
		___subtitle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subtitle_4), (void*)value);
	}

	inline static int32_t get_offset_of_categoryIdentifier_5() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___categoryIdentifier_5)); }
	inline String_t* get_categoryIdentifier_5() const { return ___categoryIdentifier_5; }
	inline String_t** get_address_of_categoryIdentifier_5() { return &___categoryIdentifier_5; }
	inline void set_categoryIdentifier_5(String_t* value)
	{
		___categoryIdentifier_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryIdentifier_5), (void*)value);
	}

	inline static int32_t get_offset_of_threadIdentifier_6() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___threadIdentifier_6)); }
	inline String_t* get_threadIdentifier_6() const { return ___threadIdentifier_6; }
	inline String_t** get_address_of_threadIdentifier_6() { return &___threadIdentifier_6; }
	inline void set_threadIdentifier_6(String_t* value)
	{
		___threadIdentifier_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threadIdentifier_6), (void*)value);
	}

	inline static int32_t get_offset_of_data_7() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___data_7)); }
	inline String_t* get_data_7() const { return ___data_7; }
	inline String_t** get_address_of_data_7() { return &___data_7; }
	inline void set_data_7(String_t* value)
	{
		___data_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_7), (void*)value);
	}

	inline static int32_t get_offset_of_showInForeground_8() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___showInForeground_8)); }
	inline bool get_showInForeground_8() const { return ___showInForeground_8; }
	inline bool* get_address_of_showInForeground_8() { return &___showInForeground_8; }
	inline void set_showInForeground_8(bool value)
	{
		___showInForeground_8 = value;
	}

	inline static int32_t get_offset_of_showInForegroundPresentationOptions_9() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___showInForegroundPresentationOptions_9)); }
	inline int32_t get_showInForegroundPresentationOptions_9() const { return ___showInForegroundPresentationOptions_9; }
	inline int32_t* get_address_of_showInForegroundPresentationOptions_9() { return &___showInForegroundPresentationOptions_9; }
	inline void set_showInForegroundPresentationOptions_9(int32_t value)
	{
		___showInForegroundPresentationOptions_9 = value;
	}

	inline static int32_t get_offset_of_triggerType_10() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___triggerType_10)); }
	inline int32_t get_triggerType_10() const { return ___triggerType_10; }
	inline int32_t* get_address_of_triggerType_10() { return &___triggerType_10; }
	inline void set_triggerType_10(int32_t value)
	{
		___triggerType_10 = value;
	}

	inline static int32_t get_offset_of_repeats_11() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___repeats_11)); }
	inline bool get_repeats_11() const { return ___repeats_11; }
	inline bool* get_address_of_repeats_11() { return &___repeats_11; }
	inline void set_repeats_11(bool value)
	{
		___repeats_11 = value;
	}

	inline static int32_t get_offset_of_timeTriggerInterval_12() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___timeTriggerInterval_12)); }
	inline int32_t get_timeTriggerInterval_12() const { return ___timeTriggerInterval_12; }
	inline int32_t* get_address_of_timeTriggerInterval_12() { return &___timeTriggerInterval_12; }
	inline void set_timeTriggerInterval_12(int32_t value)
	{
		___timeTriggerInterval_12 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerYear_13() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___calendarTriggerYear_13)); }
	inline int32_t get_calendarTriggerYear_13() const { return ___calendarTriggerYear_13; }
	inline int32_t* get_address_of_calendarTriggerYear_13() { return &___calendarTriggerYear_13; }
	inline void set_calendarTriggerYear_13(int32_t value)
	{
		___calendarTriggerYear_13 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerMonth_14() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___calendarTriggerMonth_14)); }
	inline int32_t get_calendarTriggerMonth_14() const { return ___calendarTriggerMonth_14; }
	inline int32_t* get_address_of_calendarTriggerMonth_14() { return &___calendarTriggerMonth_14; }
	inline void set_calendarTriggerMonth_14(int32_t value)
	{
		___calendarTriggerMonth_14 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerDay_15() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___calendarTriggerDay_15)); }
	inline int32_t get_calendarTriggerDay_15() const { return ___calendarTriggerDay_15; }
	inline int32_t* get_address_of_calendarTriggerDay_15() { return &___calendarTriggerDay_15; }
	inline void set_calendarTriggerDay_15(int32_t value)
	{
		___calendarTriggerDay_15 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerHour_16() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___calendarTriggerHour_16)); }
	inline int32_t get_calendarTriggerHour_16() const { return ___calendarTriggerHour_16; }
	inline int32_t* get_address_of_calendarTriggerHour_16() { return &___calendarTriggerHour_16; }
	inline void set_calendarTriggerHour_16(int32_t value)
	{
		___calendarTriggerHour_16 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerMinute_17() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___calendarTriggerMinute_17)); }
	inline int32_t get_calendarTriggerMinute_17() const { return ___calendarTriggerMinute_17; }
	inline int32_t* get_address_of_calendarTriggerMinute_17() { return &___calendarTriggerMinute_17; }
	inline void set_calendarTriggerMinute_17(int32_t value)
	{
		___calendarTriggerMinute_17 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerSecond_18() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___calendarTriggerSecond_18)); }
	inline int32_t get_calendarTriggerSecond_18() const { return ___calendarTriggerSecond_18; }
	inline int32_t* get_address_of_calendarTriggerSecond_18() { return &___calendarTriggerSecond_18; }
	inline void set_calendarTriggerSecond_18(int32_t value)
	{
		___calendarTriggerSecond_18 = value;
	}

	inline static int32_t get_offset_of_locationTriggerCenterX_19() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___locationTriggerCenterX_19)); }
	inline float get_locationTriggerCenterX_19() const { return ___locationTriggerCenterX_19; }
	inline float* get_address_of_locationTriggerCenterX_19() { return &___locationTriggerCenterX_19; }
	inline void set_locationTriggerCenterX_19(float value)
	{
		___locationTriggerCenterX_19 = value;
	}

	inline static int32_t get_offset_of_locationTriggerCenterY_20() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___locationTriggerCenterY_20)); }
	inline float get_locationTriggerCenterY_20() const { return ___locationTriggerCenterY_20; }
	inline float* get_address_of_locationTriggerCenterY_20() { return &___locationTriggerCenterY_20; }
	inline void set_locationTriggerCenterY_20(float value)
	{
		___locationTriggerCenterY_20 = value;
	}

	inline static int32_t get_offset_of_locationTriggerRadius_21() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___locationTriggerRadius_21)); }
	inline float get_locationTriggerRadius_21() const { return ___locationTriggerRadius_21; }
	inline float* get_address_of_locationTriggerRadius_21() { return &___locationTriggerRadius_21; }
	inline void set_locationTriggerRadius_21(float value)
	{
		___locationTriggerRadius_21 = value;
	}

	inline static int32_t get_offset_of_locationTriggerNotifyOnEntry_22() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___locationTriggerNotifyOnEntry_22)); }
	inline bool get_locationTriggerNotifyOnEntry_22() const { return ___locationTriggerNotifyOnEntry_22; }
	inline bool* get_address_of_locationTriggerNotifyOnEntry_22() { return &___locationTriggerNotifyOnEntry_22; }
	inline void set_locationTriggerNotifyOnEntry_22(bool value)
	{
		___locationTriggerNotifyOnEntry_22 = value;
	}

	inline static int32_t get_offset_of_locationTriggerNotifyOnExit_23() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___locationTriggerNotifyOnExit_23)); }
	inline bool get_locationTriggerNotifyOnExit_23() const { return ___locationTriggerNotifyOnExit_23; }
	inline bool* get_address_of_locationTriggerNotifyOnExit_23() { return &___locationTriggerNotifyOnExit_23; }
	inline void set_locationTriggerNotifyOnExit_23(bool value)
	{
		___locationTriggerNotifyOnExit_23 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshaled_pinvoke
{
	char* ___identifier_0;
	char* ___title_1;
	char* ___body_2;
	int32_t ___badge_3;
	char* ___subtitle_4;
	char* ___categoryIdentifier_5;
	char* ___threadIdentifier_6;
	char* ___data_7;
	int32_t ___showInForeground_8;
	int32_t ___showInForegroundPresentationOptions_9;
	int32_t ___triggerType_10;
	int32_t ___repeats_11;
	int32_t ___timeTriggerInterval_12;
	int32_t ___calendarTriggerYear_13;
	int32_t ___calendarTriggerMonth_14;
	int32_t ___calendarTriggerDay_15;
	int32_t ___calendarTriggerHour_16;
	int32_t ___calendarTriggerMinute_17;
	int32_t ___calendarTriggerSecond_18;
	float ___locationTriggerCenterX_19;
	float ___locationTriggerCenterY_20;
	float ___locationTriggerRadius_21;
	int32_t ___locationTriggerNotifyOnEntry_22;
	int32_t ___locationTriggerNotifyOnExit_23;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Il2CppChar* ___title_1;
	Il2CppChar* ___body_2;
	int32_t ___badge_3;
	Il2CppChar* ___subtitle_4;
	Il2CppChar* ___categoryIdentifier_5;
	Il2CppChar* ___threadIdentifier_6;
	Il2CppChar* ___data_7;
	int32_t ___showInForeground_8;
	int32_t ___showInForegroundPresentationOptions_9;
	int32_t ___triggerType_10;
	int32_t ___repeats_11;
	int32_t ___timeTriggerInterval_12;
	int32_t ___calendarTriggerYear_13;
	int32_t ___calendarTriggerMonth_14;
	int32_t ___calendarTriggerDay_15;
	int32_t ___calendarTriggerHour_16;
	int32_t ___calendarTriggerMinute_17;
	int32_t ___calendarTriggerSecond_18;
	float ___locationTriggerCenterX_19;
	float ___locationTriggerCenterY_20;
	float ___locationTriggerRadius_21;
	int32_t ___locationTriggerNotifyOnEntry_22;
	int32_t ___locationTriggerNotifyOnExit_23;
};

// Unity.Notifications.iOS.iOSNotificationPushTrigger
struct  iOSNotificationPushTrigger_t29A1F47CC48E56F32F2D3E8A51868CFD825355B5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t iOSNotificationPushTrigger_t29A1F47CC48E56F32F2D3E8A51868CFD825355B5__padding[1];
	};

public:
};


// Unity.Notifications.iOS.iOSNotificationSettings
struct  iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0 
{
public:
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::authorizationStatus
	int32_t ___authorizationStatus_0;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::notificationCenterSetting
	int32_t ___notificationCenterSetting_1;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::lockScreenSetting
	int32_t ___lockScreenSetting_2;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::carPlaySetting
	int32_t ___carPlaySetting_3;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::alertSetting
	int32_t ___alertSetting_4;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::badgeSetting
	int32_t ___badgeSetting_5;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::soundSetting
	int32_t ___soundSetting_6;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::alertStyle
	int32_t ___alertStyle_7;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::showPreviewsSetting
	int32_t ___showPreviewsSetting_8;

public:
	inline static int32_t get_offset_of_authorizationStatus_0() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___authorizationStatus_0)); }
	inline int32_t get_authorizationStatus_0() const { return ___authorizationStatus_0; }
	inline int32_t* get_address_of_authorizationStatus_0() { return &___authorizationStatus_0; }
	inline void set_authorizationStatus_0(int32_t value)
	{
		___authorizationStatus_0 = value;
	}

	inline static int32_t get_offset_of_notificationCenterSetting_1() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___notificationCenterSetting_1)); }
	inline int32_t get_notificationCenterSetting_1() const { return ___notificationCenterSetting_1; }
	inline int32_t* get_address_of_notificationCenterSetting_1() { return &___notificationCenterSetting_1; }
	inline void set_notificationCenterSetting_1(int32_t value)
	{
		___notificationCenterSetting_1 = value;
	}

	inline static int32_t get_offset_of_lockScreenSetting_2() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___lockScreenSetting_2)); }
	inline int32_t get_lockScreenSetting_2() const { return ___lockScreenSetting_2; }
	inline int32_t* get_address_of_lockScreenSetting_2() { return &___lockScreenSetting_2; }
	inline void set_lockScreenSetting_2(int32_t value)
	{
		___lockScreenSetting_2 = value;
	}

	inline static int32_t get_offset_of_carPlaySetting_3() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___carPlaySetting_3)); }
	inline int32_t get_carPlaySetting_3() const { return ___carPlaySetting_3; }
	inline int32_t* get_address_of_carPlaySetting_3() { return &___carPlaySetting_3; }
	inline void set_carPlaySetting_3(int32_t value)
	{
		___carPlaySetting_3 = value;
	}

	inline static int32_t get_offset_of_alertSetting_4() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___alertSetting_4)); }
	inline int32_t get_alertSetting_4() const { return ___alertSetting_4; }
	inline int32_t* get_address_of_alertSetting_4() { return &___alertSetting_4; }
	inline void set_alertSetting_4(int32_t value)
	{
		___alertSetting_4 = value;
	}

	inline static int32_t get_offset_of_badgeSetting_5() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___badgeSetting_5)); }
	inline int32_t get_badgeSetting_5() const { return ___badgeSetting_5; }
	inline int32_t* get_address_of_badgeSetting_5() { return &___badgeSetting_5; }
	inline void set_badgeSetting_5(int32_t value)
	{
		___badgeSetting_5 = value;
	}

	inline static int32_t get_offset_of_soundSetting_6() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___soundSetting_6)); }
	inline int32_t get_soundSetting_6() const { return ___soundSetting_6; }
	inline int32_t* get_address_of_soundSetting_6() { return &___soundSetting_6; }
	inline void set_soundSetting_6(int32_t value)
	{
		___soundSetting_6 = value;
	}

	inline static int32_t get_offset_of_alertStyle_7() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___alertStyle_7)); }
	inline int32_t get_alertStyle_7() const { return ___alertStyle_7; }
	inline int32_t* get_address_of_alertStyle_7() { return &___alertStyle_7; }
	inline void set_alertStyle_7(int32_t value)
	{
		___alertStyle_7 = value;
	}

	inline static int32_t get_offset_of_showPreviewsSetting_8() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___showPreviewsSetting_8)); }
	inline int32_t get_showPreviewsSetting_8() const { return ___showPreviewsSetting_8; }
	inline int32_t* get_address_of_showPreviewsSetting_8() { return &___showPreviewsSetting_8; }
	inline void set_showPreviewsSetting_8(int32_t value)
	{
		___showPreviewsSetting_8 = value;
	}
};


// Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct  iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 
{
public:
	// System.Int32 Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::timeInterval
	int32_t ___timeInterval_0;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::<Repeats>k__BackingField
	bool ___U3CRepeatsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_timeInterval_0() { return static_cast<int32_t>(offsetof(iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880, ___timeInterval_0)); }
	inline int32_t get_timeInterval_0() const { return ___timeInterval_0; }
	inline int32_t* get_address_of_timeInterval_0() { return &___timeInterval_0; }
	inline void set_timeInterval_0(int32_t value)
	{
		___timeInterval_0 = value;
	}

	inline static int32_t get_offset_of_U3CRepeatsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880, ___U3CRepeatsU3Ek__BackingField_1)); }
	inline bool get_U3CRepeatsU3Ek__BackingField_1() const { return ___U3CRepeatsU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CRepeatsU3Ek__BackingField_1() { return &___U3CRepeatsU3Ek__BackingField_1; }
	inline void set_U3CRepeatsU3Ek__BackingField_1(bool value)
	{
		___U3CRepeatsU3Ek__BackingField_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshaled_pinvoke
{
	int32_t ___timeInterval_0;
	int32_t ___U3CRepeatsU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshaled_com
{
	int32_t ___timeInterval_0;
	int32_t ___U3CRepeatsU3Ek__BackingField_1;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData>
struct  Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D 
{
public:
	// T System.Nullable`1::value
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D, ___value_0)); }
	inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  get_value_0() const { return ___value_0; }
	inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___data_7), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Notifications.iOS.iOSNotification
struct  iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152  : public RuntimeObject
{
public:
	// Unity.Notifications.iOS.iOSNotificationData Unity.Notifications.iOS.iOSNotification::data
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152, ___data_0)); }
	inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  get_data_0() const { return ___data_0; }
	inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___data_7), (void*)NULL);
		#endif
	}
};


// Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct  iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F 
{
public:
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Year>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CYearU3Ek__BackingField_0;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Month>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CMonthU3Ek__BackingField_1;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Day>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CDayU3Ek__BackingField_2;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Hour>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CHourU3Ek__BackingField_3;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Minute>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CMinuteU3Ek__BackingField_4;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Second>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CSecondU3Ek__BackingField_5;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Repeats>k__BackingField
	bool ___U3CRepeatsU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CYearU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F, ___U3CYearU3Ek__BackingField_0)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CYearU3Ek__BackingField_0() const { return ___U3CYearU3Ek__BackingField_0; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CYearU3Ek__BackingField_0() { return &___U3CYearU3Ek__BackingField_0; }
	inline void set_U3CYearU3Ek__BackingField_0(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CYearU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMonthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F, ___U3CMonthU3Ek__BackingField_1)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CMonthU3Ek__BackingField_1() const { return ___U3CMonthU3Ek__BackingField_1; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CMonthU3Ek__BackingField_1() { return &___U3CMonthU3Ek__BackingField_1; }
	inline void set_U3CMonthU3Ek__BackingField_1(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CMonthU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CDayU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F, ___U3CDayU3Ek__BackingField_2)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CDayU3Ek__BackingField_2() const { return ___U3CDayU3Ek__BackingField_2; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CDayU3Ek__BackingField_2() { return &___U3CDayU3Ek__BackingField_2; }
	inline void set_U3CDayU3Ek__BackingField_2(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CDayU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CHourU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F, ___U3CHourU3Ek__BackingField_3)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CHourU3Ek__BackingField_3() const { return ___U3CHourU3Ek__BackingField_3; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CHourU3Ek__BackingField_3() { return &___U3CHourU3Ek__BackingField_3; }
	inline void set_U3CHourU3Ek__BackingField_3(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CHourU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CMinuteU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F, ___U3CMinuteU3Ek__BackingField_4)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CMinuteU3Ek__BackingField_4() const { return ___U3CMinuteU3Ek__BackingField_4; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CMinuteU3Ek__BackingField_4() { return &___U3CMinuteU3Ek__BackingField_4; }
	inline void set_U3CMinuteU3Ek__BackingField_4(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CMinuteU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSecondU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F, ___U3CSecondU3Ek__BackingField_5)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CSecondU3Ek__BackingField_5() const { return ___U3CSecondU3Ek__BackingField_5; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CSecondU3Ek__BackingField_5() { return &___U3CSecondU3Ek__BackingField_5; }
	inline void set_U3CSecondU3Ek__BackingField_5(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CSecondU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CRepeatsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F, ___U3CRepeatsU3Ek__BackingField_6)); }
	inline bool get_U3CRepeatsU3Ek__BackingField_6() const { return ___U3CRepeatsU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CRepeatsU3Ek__BackingField_6() { return &___U3CRepeatsU3Ek__BackingField_6; }
	inline void set_U3CRepeatsU3Ek__BackingField_6(bool value)
	{
		___U3CRepeatsU3Ek__BackingField_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshaled_pinvoke
{
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CYearU3Ek__BackingField_0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CMonthU3Ek__BackingField_1;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CDayU3Ek__BackingField_2;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CHourU3Ek__BackingField_3;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CMinuteU3Ek__BackingField_4;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CSecondU3Ek__BackingField_5;
	int32_t ___U3CRepeatsU3Ek__BackingField_6;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshaled_com
{
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CYearU3Ek__BackingField_0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CMonthU3Ek__BackingField_1;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CDayU3Ek__BackingField_2;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CHourU3Ek__BackingField_3;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CMinuteU3Ek__BackingField_4;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CSecondU3Ek__BackingField_5;
	int32_t ___U3CRepeatsU3Ek__BackingField_6;
};

// Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct  iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B 
{
public:
	// UnityEngine.Vector2 Unity.Notifications.iOS.iOSNotificationLocationTrigger::<Center>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CCenterU3Ek__BackingField_0;
	// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::<Radius>k__BackingField
	float ___U3CRadiusU3Ek__BackingField_1;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::<NotifyOnEntry>k__BackingField
	bool ___U3CNotifyOnEntryU3Ek__BackingField_2;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::<NotifyOnExit>k__BackingField
	bool ___U3CNotifyOnExitU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B, ___U3CCenterU3Ek__BackingField_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CCenterU3Ek__BackingField_0() const { return ___U3CCenterU3Ek__BackingField_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CCenterU3Ek__BackingField_0() { return &___U3CCenterU3Ek__BackingField_0; }
	inline void set_U3CCenterU3Ek__BackingField_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CCenterU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CRadiusU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B, ___U3CRadiusU3Ek__BackingField_1)); }
	inline float get_U3CRadiusU3Ek__BackingField_1() const { return ___U3CRadiusU3Ek__BackingField_1; }
	inline float* get_address_of_U3CRadiusU3Ek__BackingField_1() { return &___U3CRadiusU3Ek__BackingField_1; }
	inline void set_U3CRadiusU3Ek__BackingField_1(float value)
	{
		___U3CRadiusU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CNotifyOnEntryU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B, ___U3CNotifyOnEntryU3Ek__BackingField_2)); }
	inline bool get_U3CNotifyOnEntryU3Ek__BackingField_2() const { return ___U3CNotifyOnEntryU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CNotifyOnEntryU3Ek__BackingField_2() { return &___U3CNotifyOnEntryU3Ek__BackingField_2; }
	inline void set_U3CNotifyOnEntryU3Ek__BackingField_2(bool value)
	{
		___U3CNotifyOnEntryU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CNotifyOnExitU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B, ___U3CNotifyOnExitU3Ek__BackingField_3)); }
	inline bool get_U3CNotifyOnExitU3Ek__BackingField_3() const { return ___U3CNotifyOnExitU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CNotifyOnExitU3Ek__BackingField_3() { return &___U3CNotifyOnExitU3Ek__BackingField_3; }
	inline void set_U3CNotifyOnExitU3Ek__BackingField_3(bool value)
	{
		___U3CNotifyOnExitU3Ek__BackingField_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshaled_pinvoke
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CCenterU3Ek__BackingField_0;
	float ___U3CRadiusU3Ek__BackingField_1;
	int32_t ___U3CNotifyOnEntryU3Ek__BackingField_2;
	int32_t ___U3CNotifyOnExitU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshaled_com
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CCenterU3Ek__BackingField_0;
	float ___U3CRadiusU3Ek__BackingField_1;
	int32_t ___U3CNotifyOnEntryU3Ek__BackingField_2;
	int32_t ___U3CNotifyOnExitU3Ek__BackingField_3;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationCenter_AuthorizationRequestCompletedCallback
struct  AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback
struct  NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper_AuthorizationRequestCallback
struct  AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback
struct  NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper
struct  iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields
{
public:
	// Unity.Notifications.iOS.iOSNotificationsWrapper_AuthorizationRequestCallback Unity.Notifications.iOS.iOSNotificationsWrapper::s_OnAuthenticationRequestFinished
	AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * ___s_OnAuthenticationRequestFinished_4;
	// Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationsWrapper::s_OnNotificationReceived
	NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * ___s_OnNotificationReceived_5;
	// Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationsWrapper::s_OnRemoteNotificationReceived
	NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * ___s_OnRemoteNotificationReceived_6;

public:
	inline static int32_t get_offset_of_s_OnAuthenticationRequestFinished_4() { return static_cast<int32_t>(offsetof(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields, ___s_OnAuthenticationRequestFinished_4)); }
	inline AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * get_s_OnAuthenticationRequestFinished_4() const { return ___s_OnAuthenticationRequestFinished_4; }
	inline AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA ** get_address_of_s_OnAuthenticationRequestFinished_4() { return &___s_OnAuthenticationRequestFinished_4; }
	inline void set_s_OnAuthenticationRequestFinished_4(AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * value)
	{
		___s_OnAuthenticationRequestFinished_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnAuthenticationRequestFinished_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_OnNotificationReceived_5() { return static_cast<int32_t>(offsetof(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields, ___s_OnNotificationReceived_5)); }
	inline NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * get_s_OnNotificationReceived_5() const { return ___s_OnNotificationReceived_5; }
	inline NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 ** get_address_of_s_OnNotificationReceived_5() { return &___s_OnNotificationReceived_5; }
	inline void set_s_OnNotificationReceived_5(NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * value)
	{
		___s_OnNotificationReceived_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnNotificationReceived_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_OnRemoteNotificationReceived_6() { return static_cast<int32_t>(offsetof(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields, ___s_OnRemoteNotificationReceived_6)); }
	inline NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * get_s_OnRemoteNotificationReceived_6() const { return ___s_OnRemoteNotificationReceived_6; }
	inline NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 ** get_address_of_s_OnRemoteNotificationReceived_6() { return &___s_OnRemoteNotificationReceived_6; }
	inline void set_s_OnRemoteNotificationReceived_6(NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * value)
	{
		___s_OnRemoteNotificationReceived_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnRemoteNotificationReceived_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Notifications.iOS.iOSNotificationData[]
struct iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  m_Items[1];

public:
	inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data_7), (void*)NULL);
		#endif
	}
	inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data_7), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_pinvoke(const iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6& unmarshaled, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_pinvoke_back(const iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke& marshaled, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6& unmarshaled);
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_pinvoke_cleanup(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke& marshaled);

// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mA8DDD3E8230E283F4AB52903C6D81B419EA5576A_gshared_inline (Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  Nullable_1_get_Value_m3B9AD42DC128717E71D419845B7007F003E220A8_gshared (Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D * __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<Unity.Notifications.iOS.iOSNotificationData>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_m06C18A11B6253261325A4EC6C30A68F9EC8521FC_gshared (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___structure0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<Unity.Notifications.iOS.iOSNotificationData>(!!0,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_m2F3A206D37954311DCFFBC6D6161A56EFAE6B8C7_gshared (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE3332C8E2419FA39E7D4F53A9C45F538FF8B7739_gshared (List_1_t74490A14DE1B801705191886C6038E212F513DF3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEFE827AEC936B5E526A09D7EA8DDB88EDD49F974_gshared (List_1_t74490A14DE1B801705191886C6038E212F513DF3 * __this, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* List_1_ToArray_mD5E1662591170D0B2A4E53979AC955514765646A_gshared (List_1_t74490A14DE1B801705191886C6038E212F513DF3 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m08DA7F41D7EC820C2C3C8F282BBE6F291E82EBAF_gshared (Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D * __this, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___value0, const RuntimeMethod* method);

// System.Int32 Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationTimeIntervalTrigger_get_Type_mA894BD36E9678962F7730E775C311D7D64BBF741 (const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Repeats()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_m553B7BA7CB3EC71AC52B595CABC7E28C6C3B6785_inline (iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationCalendarTrigger_get_Type_m6FBF91C5600A39FC6E9E40197E4D439719786D16 (const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Year()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Year_m412D54C7600F3B5E15210ED19760D5ECF1784B5A_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_gshared)(__this, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Month()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Month_m0970922AF4050BC478C7F0947A2C07CB750BC672_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Day()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Day_mB86BB81DA1863B3325B582606433233DA381ED20_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Hour()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Hour_m7D8C898AA95C8C006DB5689CB1A0BD0A48296F14_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Minute()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Minute_m9EAB1A013C605CFA791D72C2A38D29EF649DDB24_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Second()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Second_mA6B65A993AE13E363001AD9AAA03F82FDA4FDC2F_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Repeats()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_m222CC0DCE6A2102FD4D2932D7F461E4364E3A51B_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationLocationTrigger_get_Type_m61CA7CFA5959BAC4ECA26B18FB930A15DAA5C673 (const RuntimeMethod* method);
// UnityEngine.Vector2 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Center()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  iOSNotificationLocationTrigger_get_Center_m4D05E6A08ACB04CB28161C053FD8F44264231912_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnEntry()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_m27A346EACD7DAA83BA26277B434FF7D29724748B_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnExit()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_mEC495935D398A1BB7D8FBBA2E1974CAFE5871B2E_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method);
// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Radius()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_m3A82BB3EC05917AB00B333AFACBEA418E958ECD2_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_Repeats(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_Repeats_m71EC709D73254781134CFDC74D50AB32D45FD6E6_inline (iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, ___value0, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Year(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Year_m8994CC0B661584537B0C1EFED662931CB0FEC6B7_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Month(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Month_m36C3BE781E8EFC01E7B47ED412C8F3C452D0C814_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Day(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Day_m19E9226FD018CFED98C939020FFC9E5CF485A1DF_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Hour(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Hour_m27EB1ADD0D88D83D07710FE952ABB0599AABB125_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Minute(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Minute_mD26C58058E85ED21CED944F45F5D59BCBDCA04D8_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Second(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Second_m4E9FA97F8D36DD7030729886BC544847EBFC2570_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Repeats(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Repeats_mDC3A21089DDCD35B8439E40ED63BF80CF4A48DA7_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationLocationTrigger::set_Center(UnityEngine.Vector2)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_Center_m6F15FBD9C1F80E458374DE4FBEEBEFCC4A8AC4F5_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationLocationTrigger::set_Radius(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_Radius_m402D36A5CB29B7E4555391D8DEB9B3D046DF9806_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, float ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationLocationTrigger::set_NotifyOnEntry(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_NotifyOnEntry_m380F16268DBC03C9FAAC68E8266F9C79D3EF807C_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationLocationTrigger::set_NotifyOnExit(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_NotifyOnExit_mFD27788A506E149251F8878BB3E13C61D3797E76_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, bool ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2 (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m203C5710CD7AB2F5F1B2D9DA1DFD45BB3774179A (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.String Unity.Notifications.iOS.iOSNotification::GenerateUniqueID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_GenerateUniqueID_m6718EF11750C1111126DFAFFD89C7DCC92E98E82 (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m21013DC8C6A18663D37CA13467F3FD1553FED42E (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, String_t* ___identifier0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedCallback_mD39562B21E6DD6A95C1B106B1AB1CBD995597900 (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::add_s_OnNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_add_s_OnNotificationReceived_m4344C4F6CFABAD3E43A5AFD65104995AEAFD6387 (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::remove_s_OnNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_remove_s_OnNotificationReceived_mAFCF3BBFFE03628AF82617B73D91CEC20D0118A6 (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * ___value0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_SetApplicationBadge_m2B9781A9280B20BAF93C84C10360158948EF6DD9 (int32_t ___badge0, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCenter_Initialize_m5D8DAE0D39DCCEC17D89AED4C0A0155842E5A66E (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotification::Verify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_Verify_m1AC69184FE3B34C45E921CECEE65CFD7AEA3B037 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ScheduleLocalNotification_m6D11AC2A87A08FE4A282B02354F2041B49793607 (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___data0, const RuntimeMethod* method);
// System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData> Unity.Notifications.iOS.iOSNotificationsWrapper::GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D  iOSNotificationsWrapper_GetLastNotificationData_mA15D919959941DAB58C4CF58C957FE250919C1F4 (const RuntimeMethod* method);
// System.Boolean System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData>::get_HasValue()
inline bool Nullable_1_get_HasValue_mA8DDD3E8230E283F4AB52903C6D81B419EA5576A_inline (Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D *, const RuntimeMethod*))Nullable_1_get_HasValue_mA8DDD3E8230E283F4AB52903C6D81B419EA5576A_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData>::get_Value()
inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  Nullable_1_get_Value_m3B9AD42DC128717E71D419845B7007F003E220A8 (Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D * __this, const RuntimeMethod* method)
{
	return ((  iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  (*) (Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D *, const RuntimeMethod*))Nullable_1_get_Value_m3B9AD42DC128717E71D419845B7007F003E220A8_gshared)(__this, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveScheduledNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveScheduledNotification_m097B0FA4E2EA84C89378923546AF919C2A647AAB (String_t* ___identifier0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveDeliveredNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveDeliveredNotification_m22B6DB909C0353FA88B7E3AC704E24A9BED456DE (String_t* ___identifier0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllScheduledNotifications_m5756666E06D8A8563E9D54393CCFCD649F159E23 (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllDeliveredNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllDeliveredNotifications_mE6F7B5312775E5FD75EBE47533CF49CDB8D40AC3 (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::Invoke(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_mFC51E9029899DCCAB5ACA44A2AAF49785E8F4F88 (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * __this, iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * ___notification0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback::Invoke(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback_Invoke_m9CC178BB8B90D1A6B5BFF27DC4884518F19E1465 (AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * __this, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_mAA0FD92B0E5812D2D10D8C8EB9F7E2C7CAB54078 (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback__ctor_m6318A6FBC740D20DE248F0C5A1F7EDBD8CAEA690 (AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5DD4F2C2F53F8C30ED8C993EDCF1831CD92261DE (U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::AuthorizationRequestReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_AuthorizationRequestReceived_m7F2E5560B9F9BE57CDA06FCAFEE18C307C485AB0 (intptr_t ___authRequestDataPtr0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RemoteNotificationReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RemoteNotificationReceived_m631F99C037407B7D5D646444F7612E710930A1F4 (intptr_t ___notificationDataPtr0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_NotificationReceived_mC2D919DE6267392194C686717D7C804D08644A12 (intptr_t ___notificationDataPtr0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback__ctor_mDCF725389FF9BD835D0CD2B4FEFE940221045C62 (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetAuthorizationRequestReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_m7C9734970A76C95B94B430D3761A44BECFD2C0C1 (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * ___callback0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m7ADF7B8AC2EE11962C4ECA1A70B0EA7C2660A1CD (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetRemoteNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_m0C181C556508C1765607E19BA745BA9C42E30238 (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * ___callback0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetNotificationReceivedDelegate_m1C85EF0F0D9B458164770D439C9EB9D879DBD75D (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * ___callback0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Marshal_PtrToStructure_mE1821119EAFE83614B6A16D3F14996713502DF43 (intptr_t ___ptr0, Type_t * ___structureType1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnFinishedAuthorizationRequest(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnFinishedAuthorizationRequest_m27E8E4AD441434D0F04CA34298E404DC9717B695 (iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnReceivedRemoteNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnReceivedRemoteNotification_mF618D4C4BF6CC24854F7A5E319D225B48C6667F0 (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnSentNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnSentNotification_m643A50BA43CFAE9E890279AA63C2D923919DC12C (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RequestAuthorization(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RequestAuthorization_m8DF46B9A6080C8FBFF02ECAB676CBAF7D4D82151 (int32_t ___options0, bool ___registerForRemote1, const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetNotificationSettings_mF2235DE6CB20FAFC84D8B1C8EE950D2E12438BB8 (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_FreeUnmanagedMemory(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__FreeUnmanagedMemory_mCE7F5B006A7189E45E69CBC5BD565946EFDDBEBD (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<Unity.Notifications.iOS.iOSNotificationData>(!!0)
inline int32_t Marshal_SizeOf_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_m06C18A11B6253261325A4EC6C30A68F9EC8521FC (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___structure0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F , const RuntimeMethod*))Marshal_SizeOf_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_m06C18A11B6253261325A4EC6C30A68F9EC8521FC_gshared)(___structure0, method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58 (int32_t ___cb0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<Unity.Notifications.iOS.iOSNotificationData>(!!0,System.IntPtr,System.Boolean)
inline void Marshal_StructureToPtr_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_m2F3A206D37954311DCFFBC6D6161A56EFAE6B8C7 (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method)
{
	((  void (*) (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F , intptr_t, bool, const RuntimeMethod*))Marshal_StructureToPtr_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_m2F3A206D37954311DCFFBC6D6161A56EFAE6B8C7_gshared)(___structure0, ___ptr1, ___fDeleteOld2, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ScheduleLocalNotification(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ScheduleLocalNotification_m462F1830356A8BA69660AB55D93480F3A105CE10 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetDeliveredNotificationDataCount_m872EAAB29C5F413B0BD2CA28DC967DFB0C5760BC (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::.ctor()
inline void List_1__ctor_mE3332C8E2419FA39E7D4F53A9C45F538FF8B7739 (List_1_t74490A14DE1B801705191886C6038E212F513DF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t74490A14DE1B801705191886C6038E212F513DF3 *, const RuntimeMethod*))List_1__ctor_mE3332C8E2419FA39E7D4F53A9C45F538FF8B7739_gshared)(__this, method);
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetDeliveredNotificationDataAt_m1BB836C8E81AA0F97F973230E91BF27AF9685434 (int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::Add(!0)
inline void List_1_Add_mEFE827AEC936B5E526A09D7EA8DDB88EDD49F974 (List_1_t74490A14DE1B801705191886C6038E212F513DF3 * __this, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t74490A14DE1B801705191886C6038E212F513DF3 *, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F , const RuntimeMethod*))List_1_Add_mEFE827AEC936B5E526A09D7EA8DDB88EDD49F974_gshared)(__this, ___item0, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_FreeUnmanagediOSNotificationData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__FreeUnmanagediOSNotificationData_mDDA7B640AE47E22B1CDCEAF38CCD584389A84391 (intptr_t ___ptr0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::ToArray()
inline iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* List_1_ToArray_mD5E1662591170D0B2A4E53979AC955514765646A (List_1_t74490A14DE1B801705191886C6038E212F513DF3 * __this, const RuntimeMethod* method)
{
	return ((  iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* (*) (List_1_t74490A14DE1B801705191886C6038E212F513DF3 *, const RuntimeMethod*))List_1_ToArray_mD5E1662591170D0B2A4E53979AC955514765646A_gshared)(__this, method);
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetScheduledNotificationDataCount_m2EFD36D7DE8D23F9E93878A2A3C2D8BBBBB682D5 (const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetScheduledNotificationDataAt_m4060614F439799024B12356E234D1FD40FB4165D (int32_t ___index0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetApplicationBadge_m7F83AC24BDB131F88C24235DCFFAD3D0308D3ED6 (int32_t ___badge0, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetApplicationBadge_m54921F73B902FD66F4728D24221A23EA4EE5CBE2 (const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::_GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper__GetAppOpenedUsingNotification_m837C105BA7E5119BDBFA6D5B6E057F36C0801FF6 (const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetLastNotificationData_mC2B1CE929E33E5B1DE5F10D196477C6086E36FA6 (const RuntimeMethod* method);
// System.Void System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData>::.ctor(!0)
inline void Nullable_1__ctor_m08DA7F41D7EC820C2C3C8F282BBE6F291E82EBAF (Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D * __this, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D *, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F , const RuntimeMethod*))Nullable_1__ctor_m08DA7F41D7EC820C2C3C8F282BBE6F291E82EBAF_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_pinvoke(const iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6& unmarshaled, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke& marshaled)
{
	marshaled.___granted_0 = static_cast<int32_t>(unmarshaled.get_granted_0());
	marshaled.___error_1 = il2cpp_codegen_marshal_string(unmarshaled.get_error_1());
	marshaled.___finished_2 = static_cast<int32_t>(unmarshaled.get_finished_2());
	marshaled.___deviceToken_3 = il2cpp_codegen_marshal_string(unmarshaled.get_deviceToken_3());
}
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_pinvoke_back(const iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke& marshaled, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6& unmarshaled)
{
	bool unmarshaled_granted_temp_0 = false;
	unmarshaled_granted_temp_0 = static_cast<bool>(marshaled.___granted_0);
	unmarshaled.set_granted_0(unmarshaled_granted_temp_0);
	unmarshaled.set_error_1(il2cpp_codegen_marshal_string_result(marshaled.___error_1));
	bool unmarshaled_finished_temp_2 = false;
	unmarshaled_finished_temp_2 = static_cast<bool>(marshaled.___finished_2);
	unmarshaled.set_finished_2(unmarshaled_finished_temp_2);
	unmarshaled.set_deviceToken_3(il2cpp_codegen_marshal_string_result(marshaled.___deviceToken_3));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_pinvoke_cleanup(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___error_1);
	marshaled.___error_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___deviceToken_3);
	marshaled.___deviceToken_3 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_com(const iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6& unmarshaled, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_com& marshaled)
{
	marshaled.___granted_0 = static_cast<int32_t>(unmarshaled.get_granted_0());
	marshaled.___error_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_error_1());
	marshaled.___finished_2 = static_cast<int32_t>(unmarshaled.get_finished_2());
	marshaled.___deviceToken_3 = il2cpp_codegen_marshal_bstring(unmarshaled.get_deviceToken_3());
}
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_com_back(const iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_com& marshaled, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6& unmarshaled)
{
	bool unmarshaled_granted_temp_0 = false;
	unmarshaled_granted_temp_0 = static_cast<bool>(marshaled.___granted_0);
	unmarshaled.set_granted_0(unmarshaled_granted_temp_0);
	unmarshaled.set_error_1(il2cpp_codegen_marshal_bstring_result(marshaled.___error_1));
	bool unmarshaled_finished_temp_2 = false;
	unmarshaled_finished_temp_2 = static_cast<bool>(marshaled.___finished_2);
	unmarshaled.set_finished_2(unmarshaled_finished_temp_2);
	unmarshaled.set_deviceToken_3(il2cpp_codegen_marshal_bstring_result(marshaled.___deviceToken_3));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_com_cleanup(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___error_1);
	marshaled.___error_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___deviceToken_3);
	marshaled.___deviceToken_3 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Notifications.iOS.iOSNotification::get_Identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_Identifier_m04943F5167E3653A84F7E028549BFB2EDA57E097 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.identifier; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = L_0->get_identifier_0();
		return L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Identifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Identifier_m674D64A4D134B9EC69D2C59721E42D1B9B55C6D1 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.identifier = value; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_identifier_0(L_1);
		// set { data.identifier = value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::get_CategoryIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_CategoryIdentifier_mC1E942093FDBCB104BB59CF3ABAC74783F2D289B (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.categoryIdentifier; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = L_0->get_categoryIdentifier_5();
		return L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_CategoryIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_CategoryIdentifier_m2EED8959D17E601769220E074E3A071179EF0F20 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.categoryIdentifier = value; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_categoryIdentifier_5(L_1);
		// set { data.categoryIdentifier = value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::get_Title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_Title_m9E392F6696586C35934C8E2FC38E3426344F78C6 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.title; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = L_0->get_title_1();
		return L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Title_mF44F1E7D0F51703B9B0D71E90BA4275D15AC2196 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.title = value; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_title_1(L_1);
		// set { data.title = value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::get_Subtitle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_Subtitle_m50A40A2F854D92EE10EFCB7825F63D2AA6656223 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.subtitle; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = L_0->get_subtitle_4();
		return L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Subtitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Subtitle_mEE1D2B1C6CD0940EF2C37A29747104A2FA521688 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.subtitle = value; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_subtitle_4(L_1);
		// set { data.subtitle = value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::get_Body()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_Body_m2A6A57444D0F92422E0572266442B4B9903B8088 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.body; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = L_0->get_body_2();
		return L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Body(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Body_m1F7D887B43CA16381D1D60EE27287E8A24883AE9 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.body = value; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_body_2(L_1);
		// set { data.body = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_ShowInForeground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ShowInForeground_m50700B87887C1120C64937D5E2E7ADC62A02A0EC (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { data.showInForeground = value; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		bool L_1 = ___value0;
		L_0->set_showInForeground_8(L_1);
		// set { data.showInForeground = value; }
		return;
	}
}
// System.Int32 Unity.Notifications.iOS.iOSNotification::get_Badge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotification_get_Badge_mC23222D3B29930A9994EBF85BD3FC9D8EAD8E1A2 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.badge; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		int32_t L_1 = L_0->get_badge_3();
		return L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Badge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Badge_m3746458E88AD85A9B53E8C434CA0DC61095E326B (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { data.badge = value; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		int32_t L_1 = ___value0;
		L_0->set_badge_3(L_1);
		// set { data.badge = value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_Data_m084A6AD68C12E11FD43AB99E566DC10C8374D744 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.data; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = L_0->get_data_7();
		return L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Data(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Data_m143AE75B0F6C8561DB4099709462441AA1001E99 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.data = value; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_data_7(L_1);
		// set { data.data = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Trigger(Unity.Notifications.iOS.iOSNotificationTrigger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Trigger_m2170340977D6C6E104D18A82ED01FC192322571E (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotification_set_Trigger_m2170340977D6C6E104D18A82ED01FC192322571E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880  V_0;
	memset((&V_0), 0, sizeof(V_0));
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B8_0 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B9_1 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B11_0 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B12_1 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B14_0 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B15_1 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B17_0 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B18_1 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B20_0 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B19_0 = NULL;
	int32_t G_B21_0 = 0;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B21_1 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B23_0 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B24_1 = NULL;
	{
		// if (value is iOSNotificationTimeIntervalTrigger)
		RuntimeObject* L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_il2cpp_TypeInfo_var)))
		{
			goto IL_0061;
		}
	}
	{
		// var trigger = (iOSNotificationTimeIntervalTrigger)value;
		RuntimeObject* L_1 = ___value0;
		V_0 = ((*(iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 *)((iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 *)UnBox(L_1, iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_il2cpp_TypeInfo_var))));
		// data.triggerType = iOSNotificationTimeIntervalTrigger.Type;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_2 = __this->get_address_of_data_0();
		int32_t L_3 = iOSNotificationTimeIntervalTrigger_get_Type_mA894BD36E9678962F7730E775C311D7D64BBF741(/*hidden argument*/NULL);
		L_2->set_triggerType_10(L_3);
		// data.timeTriggerInterval = trigger.timeInterval;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_4 = __this->get_address_of_data_0();
		iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880  L_5 = V_0;
		int32_t L_6 = L_5.get_timeInterval_0();
		L_4->set_timeTriggerInterval_12(L_6);
		// if (trigger.Repeats && trigger.timeInterval < 60)
		bool L_7 = iOSNotificationTimeIntervalTrigger_get_Repeats_m553B7BA7CB3EC71AC52B595CABC7E28C6C3B6785_inline((iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 *)(&V_0), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880  L_8 = V_0;
		int32_t L_9 = L_8.get_timeInterval_0();
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)60))))
		{
			goto IL_004e;
		}
	}
	{
		// throw new ArgumentException("Time interval must be 60 seconds or greater for repeating notifications.");
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_10 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_10, _stringLiteralF2B80A6C9D316B4D42C4FBAF52E23FD61A0EDF13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, iOSNotification_set_Trigger_m2170340977D6C6E104D18A82ED01FC192322571E_RuntimeMethod_var);
	}

IL_004e:
	{
		// data.repeats = trigger.Repeats;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_11 = __this->get_address_of_data_0();
		bool L_12 = iOSNotificationTimeIntervalTrigger_get_Repeats_m553B7BA7CB3EC71AC52B595CABC7E28C6C3B6785_inline((iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 *)(&V_0), /*hidden argument*/NULL);
		L_11->set_repeats_11(L_12);
		// }
		return;
	}

IL_0061:
	{
		// else if (value is iOSNotificationCalendarTrigger)
		RuntimeObject* L_13 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_13, iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_il2cpp_TypeInfo_var)))
		{
			goto IL_01aa;
		}
	}
	{
		// var trigger = (iOSNotificationCalendarTrigger)value;
		RuntimeObject* L_14 = ___value0;
		V_1 = ((*(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)UnBox(L_14, iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_il2cpp_TypeInfo_var))));
		// data.triggerType = iOSNotificationCalendarTrigger.Type;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_15 = __this->get_address_of_data_0();
		int32_t L_16 = iOSNotificationCalendarTrigger_get_Type_m6FBF91C5600A39FC6E9E40197E4D439719786D16(/*hidden argument*/NULL);
		L_15->set_triggerType_10(L_16);
		// data.calendarTriggerYear = trigger.Year != null ? trigger.Year.Value : -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_17 = __this->get_address_of_data_0();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_18 = iOSNotificationCalendarTrigger_get_Year_m412D54C7600F3B5E15210ED19760D5ECF1784B5A_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_18;
		bool L_19 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		G_B7_0 = L_17;
		if (L_19)
		{
			G_B8_0 = L_17;
			goto IL_009d;
		}
	}
	{
		G_B9_0 = (-1);
		G_B9_1 = G_B7_0;
		goto IL_00ac;
	}

IL_009d:
	{
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_20 = iOSNotificationCalendarTrigger_get_Year_m412D54C7600F3B5E15210ED19760D5ECF1784B5A_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_20;
		int32_t L_21 = Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var);
		G_B9_0 = L_21;
		G_B9_1 = G_B8_0;
	}

IL_00ac:
	{
		G_B9_1->set_calendarTriggerYear_13(G_B9_0);
		// data.calendarTriggerMonth = trigger.Month != null ? trigger.Month.Value : -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_22 = __this->get_address_of_data_0();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_23 = iOSNotificationCalendarTrigger_get_Month_m0970922AF4050BC478C7F0947A2C07CB750BC672_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_23;
		bool L_24 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		G_B10_0 = L_22;
		if (L_24)
		{
			G_B11_0 = L_22;
			goto IL_00cb;
		}
	}
	{
		G_B12_0 = (-1);
		G_B12_1 = G_B10_0;
		goto IL_00da;
	}

IL_00cb:
	{
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_25 = iOSNotificationCalendarTrigger_get_Month_m0970922AF4050BC478C7F0947A2C07CB750BC672_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_25;
		int32_t L_26 = Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var);
		G_B12_0 = L_26;
		G_B12_1 = G_B11_0;
	}

IL_00da:
	{
		G_B12_1->set_calendarTriggerMonth_14(G_B12_0);
		// data.calendarTriggerDay = trigger.Day != null ? trigger.Day.Value : -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_27 = __this->get_address_of_data_0();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_28 = iOSNotificationCalendarTrigger_get_Day_mB86BB81DA1863B3325B582606433233DA381ED20_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_28;
		bool L_29 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		G_B13_0 = L_27;
		if (L_29)
		{
			G_B14_0 = L_27;
			goto IL_00f9;
		}
	}
	{
		G_B15_0 = (-1);
		G_B15_1 = G_B13_0;
		goto IL_0108;
	}

IL_00f9:
	{
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_30 = iOSNotificationCalendarTrigger_get_Day_mB86BB81DA1863B3325B582606433233DA381ED20_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_30;
		int32_t L_31 = Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var);
		G_B15_0 = L_31;
		G_B15_1 = G_B14_0;
	}

IL_0108:
	{
		G_B15_1->set_calendarTriggerDay_15(G_B15_0);
		// data.calendarTriggerHour = trigger.Hour != null ? trigger.Hour.Value : -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_32 = __this->get_address_of_data_0();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_33 = iOSNotificationCalendarTrigger_get_Hour_m7D8C898AA95C8C006DB5689CB1A0BD0A48296F14_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_33;
		bool L_34 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		G_B16_0 = L_32;
		if (L_34)
		{
			G_B17_0 = L_32;
			goto IL_0127;
		}
	}
	{
		G_B18_0 = (-1);
		G_B18_1 = G_B16_0;
		goto IL_0136;
	}

IL_0127:
	{
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_35 = iOSNotificationCalendarTrigger_get_Hour_m7D8C898AA95C8C006DB5689CB1A0BD0A48296F14_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_35;
		int32_t L_36 = Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var);
		G_B18_0 = L_36;
		G_B18_1 = G_B17_0;
	}

IL_0136:
	{
		G_B18_1->set_calendarTriggerHour_16(G_B18_0);
		// data.calendarTriggerMinute = trigger.Minute != null ? trigger.Minute.Value : -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_37 = __this->get_address_of_data_0();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_38 = iOSNotificationCalendarTrigger_get_Minute_m9EAB1A013C605CFA791D72C2A38D29EF649DDB24_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_38;
		bool L_39 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		G_B19_0 = L_37;
		if (L_39)
		{
			G_B20_0 = L_37;
			goto IL_0155;
		}
	}
	{
		G_B21_0 = (-1);
		G_B21_1 = G_B19_0;
		goto IL_0164;
	}

IL_0155:
	{
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_40 = iOSNotificationCalendarTrigger_get_Minute_m9EAB1A013C605CFA791D72C2A38D29EF649DDB24_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_40;
		int32_t L_41 = Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var);
		G_B21_0 = L_41;
		G_B21_1 = G_B20_0;
	}

IL_0164:
	{
		G_B21_1->set_calendarTriggerMinute_17(G_B21_0);
		// data.calendarTriggerSecond = trigger.Second != null ? trigger.Second.Value : -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_42 = __this->get_address_of_data_0();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_43 = iOSNotificationCalendarTrigger_get_Second_mA6B65A993AE13E363001AD9AAA03F82FDA4FDC2F_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_43;
		bool L_44 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		G_B22_0 = L_42;
		if (L_44)
		{
			G_B23_0 = L_42;
			goto IL_0183;
		}
	}
	{
		G_B24_0 = (-1);
		G_B24_1 = G_B22_0;
		goto IL_0192;
	}

IL_0183:
	{
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_45 = iOSNotificationCalendarTrigger_get_Second_mA6B65A993AE13E363001AD9AAA03F82FDA4FDC2F_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_45;
		int32_t L_46 = Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var);
		G_B24_0 = L_46;
		G_B24_1 = G_B23_0;
	}

IL_0192:
	{
		G_B24_1->set_calendarTriggerSecond_18(G_B24_0);
		// data.repeats = trigger.Repeats;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_47 = __this->get_address_of_data_0();
		bool L_48 = iOSNotificationCalendarTrigger_get_Repeats_m222CC0DCE6A2102FD4D2932D7F461E4364E3A51B_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		L_47->set_repeats_11(L_48);
		// }
		return;
	}

IL_01aa:
	{
		// else if (value is iOSNotificationLocationTrigger)
		RuntimeObject* L_49 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_49, iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_il2cpp_TypeInfo_var)))
		{
			goto IL_022e;
		}
	}
	{
		// var trigger = (iOSNotificationLocationTrigger)value;
		RuntimeObject* L_50 = ___value0;
		V_3 = ((*(iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)((iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)UnBox(L_50, iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_il2cpp_TypeInfo_var))));
		// data.triggerType = iOSNotificationLocationTrigger.Type;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_51 = __this->get_address_of_data_0();
		int32_t L_52 = iOSNotificationLocationTrigger_get_Type_m61CA7CFA5959BAC4ECA26B18FB930A15DAA5C673(/*hidden argument*/NULL);
		L_51->set_triggerType_10(L_52);
		// data.locationTriggerCenterX = trigger.Center.x;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_53 = __this->get_address_of_data_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_54 = iOSNotificationLocationTrigger_get_Center_m4D05E6A08ACB04CB28161C053FD8F44264231912_inline((iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)(&V_3), /*hidden argument*/NULL);
		float L_55 = L_54.get_x_0();
		L_53->set_locationTriggerCenterX_19(L_55);
		// data.locationTriggerCenterY = trigger.Center.y;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_56 = __this->get_address_of_data_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_57 = iOSNotificationLocationTrigger_get_Center_m4D05E6A08ACB04CB28161C053FD8F44264231912_inline((iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)(&V_3), /*hidden argument*/NULL);
		float L_58 = L_57.get_y_1();
		L_56->set_locationTriggerCenterY_20(L_58);
		// data.locationTriggerNotifyOnEntry = trigger.NotifyOnEntry;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_59 = __this->get_address_of_data_0();
		bool L_60 = iOSNotificationLocationTrigger_get_NotifyOnEntry_m27A346EACD7DAA83BA26277B434FF7D29724748B_inline((iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)(&V_3), /*hidden argument*/NULL);
		L_59->set_locationTriggerNotifyOnEntry_22(L_60);
		// data.locationTriggerNotifyOnExit = trigger.NotifyOnExit;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_61 = __this->get_address_of_data_0();
		bool L_62 = iOSNotificationLocationTrigger_get_NotifyOnExit_mEC495935D398A1BB7D8FBBA2E1974CAFE5871B2E_inline((iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)(&V_3), /*hidden argument*/NULL);
		L_61->set_locationTriggerNotifyOnExit_23(L_62);
		// data.locationTriggerRadius = trigger.Radius;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_63 = __this->get_address_of_data_0();
		float L_64 = iOSNotificationLocationTrigger_get_Radius_m3A82BB3EC05917AB00B333AFACBEA418E958ECD2_inline((iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)(&V_3), /*hidden argument*/NULL);
		L_63->set_locationTriggerRadius_21(L_64);
		// }
		return;
	}

IL_022e:
	{
		// else if (value is iOSNotificationPushTrigger)
		RuntimeObject* L_65 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_65, iOSNotificationPushTrigger_t29A1F47CC48E56F32F2D3E8A51868CFD825355B5_il2cpp_TypeInfo_var)))
		{
			goto IL_0242;
		}
	}
	{
		// data.triggerType = 3;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_66 = __this->get_address_of_data_0();
		L_66->set_triggerType_10(3);
	}

IL_0242:
	{
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationTrigger Unity.Notifications.iOS.iOSNotification::get_Trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* iOSNotification_get_Trigger_m37352D7D08B03ED28EFF302C5F116DED94F7B251 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotification_get_Trigger_m37352D7D08B03ED28EFF302C5F116DED94F7B251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880  V_1;
	memset((&V_1), 0, sizeof(V_1));
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_3;
	memset((&V_3), 0, sizeof(V_3));
	iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	iOSNotificationPushTrigger_t29A1F47CC48E56F32F2D3E8A51868CFD825355B5  V_5;
	memset((&V_5), 0, sizeof(V_5));
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B5_0 = NULL;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B4_0 = NULL;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B6_1 = NULL;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B8_0 = NULL;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B7_0 = NULL;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B9_1 = NULL;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B11_0 = NULL;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B10_0 = NULL;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B12_1 = NULL;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B14_0 = NULL;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B13_0 = NULL;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B15_1 = NULL;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B17_0 = NULL;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B16_0 = NULL;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B18_0;
	memset((&G_B18_0), 0, sizeof(G_B18_0));
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B18_1 = NULL;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B20_0 = NULL;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B19_0 = NULL;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B21_0;
	memset((&G_B21_0), 0, sizeof(G_B21_0));
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * G_B21_1 = NULL;
	{
		// if (data.triggerType == iOSNotificationTimeIntervalTrigger.Type)
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		int32_t L_1 = L_0->get_triggerType_10();
		int32_t L_2 = iOSNotificationTimeIntervalTrigger_get_Type_mA894BD36E9678962F7730E775C311D7D64BBF741(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_004a;
		}
	}
	{
		// trigger = new iOSNotificationTimeIntervalTrigger()
		// {
		//     timeInterval = data.timeTriggerInterval,
		//     Repeats = data.repeats
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 ));
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_3 = __this->get_address_of_data_0();
		int32_t L_4 = L_3->get_timeTriggerInterval_12();
		(&V_1)->set_timeInterval_0(L_4);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_5 = __this->get_address_of_data_0();
		bool L_6 = L_5->get_repeats_11();
		iOSNotificationTimeIntervalTrigger_set_Repeats_m71EC709D73254781134CFDC74D50AB32D45FD6E6_inline((iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 *)(&V_1), L_6, /*hidden argument*/NULL);
		iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880  L_7 = V_1;
		iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880  L_8 = L_7;
		RuntimeObject * L_9 = Box(iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_il2cpp_TypeInfo_var, &L_8);
		V_0 = (RuntimeObject*)L_9;
		// }
		goto IL_0231;
	}

IL_004a:
	{
		// else if (data.triggerType == iOSNotificationCalendarTrigger.Type)
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_10 = __this->get_address_of_data_0();
		int32_t L_11 = L_10->get_triggerType_10();
		int32_t L_12 = iOSNotificationCalendarTrigger_get_Type_m6FBF91C5600A39FC6E9E40197E4D439719786D16(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_01a5;
		}
	}
	{
		// trigger = new iOSNotificationCalendarTrigger()
		// {
		//     Year = (data.calendarTriggerYear > 0) ? (int?)data.calendarTriggerYear : null,
		//     Month = (data.calendarTriggerMonth > 0) ? (int?)data.calendarTriggerMonth : null,
		//     Day = (data.calendarTriggerDay > 0) ? (int?)data.calendarTriggerDay : null,
		//     Hour = (data.calendarTriggerHour >= 0) ? (int?)data.calendarTriggerHour : null,
		//     Minute = (data.calendarTriggerMinute >= 0) ? (int?)data.calendarTriggerMinute : null,
		//     Second = (data.calendarTriggerSecond >= 0) ? (int?)data.calendarTriggerSecond : null,
		//     Repeats = data.repeats
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F ));
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_13 = __this->get_address_of_data_0();
		int32_t L_14 = L_13->get_calendarTriggerYear_13();
		G_B4_0 = (&V_2);
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			G_B5_0 = (&V_2);
			goto IL_0082;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_15 = V_3;
		G_B6_0 = L_15;
		G_B6_1 = G_B4_0;
		goto IL_0092;
	}

IL_0082:
	{
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_16 = __this->get_address_of_data_0();
		int32_t L_17 = L_16->get_calendarTriggerYear_13();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_18), L_17, /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B6_0 = L_18;
		G_B6_1 = G_B5_0;
	}

IL_0092:
	{
		iOSNotificationCalendarTrigger_set_Year_m8994CC0B661584537B0C1EFED662931CB0FEC6B7_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)G_B6_1, G_B6_0, /*hidden argument*/NULL);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_19 = __this->get_address_of_data_0();
		int32_t L_20 = L_19->get_calendarTriggerMonth_14();
		G_B7_0 = (&V_2);
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			G_B8_0 = (&V_2);
			goto IL_00b2;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_21 = V_3;
		G_B9_0 = L_21;
		G_B9_1 = G_B7_0;
		goto IL_00c2;
	}

IL_00b2:
	{
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_22 = __this->get_address_of_data_0();
		int32_t L_23 = L_22->get_calendarTriggerMonth_14();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_24), L_23, /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B9_0 = L_24;
		G_B9_1 = G_B8_0;
	}

IL_00c2:
	{
		iOSNotificationCalendarTrigger_set_Month_m36C3BE781E8EFC01E7B47ED412C8F3C452D0C814_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)G_B9_1, G_B9_0, /*hidden argument*/NULL);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_25 = __this->get_address_of_data_0();
		int32_t L_26 = L_25->get_calendarTriggerDay_15();
		G_B10_0 = (&V_2);
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			G_B11_0 = (&V_2);
			goto IL_00e2;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_27 = V_3;
		G_B12_0 = L_27;
		G_B12_1 = G_B10_0;
		goto IL_00f2;
	}

IL_00e2:
	{
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_28 = __this->get_address_of_data_0();
		int32_t L_29 = L_28->get_calendarTriggerDay_15();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_30), L_29, /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B12_0 = L_30;
		G_B12_1 = G_B11_0;
	}

IL_00f2:
	{
		iOSNotificationCalendarTrigger_set_Day_m19E9226FD018CFED98C939020FFC9E5CF485A1DF_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)G_B12_1, G_B12_0, /*hidden argument*/NULL);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_31 = __this->get_address_of_data_0();
		int32_t L_32 = L_31->get_calendarTriggerHour_16();
		G_B13_0 = (&V_2);
		if ((((int32_t)L_32) >= ((int32_t)0)))
		{
			G_B14_0 = (&V_2);
			goto IL_0112;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_33 = V_3;
		G_B15_0 = L_33;
		G_B15_1 = G_B13_0;
		goto IL_0122;
	}

IL_0112:
	{
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_34 = __this->get_address_of_data_0();
		int32_t L_35 = L_34->get_calendarTriggerHour_16();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_36), L_35, /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B15_0 = L_36;
		G_B15_1 = G_B14_0;
	}

IL_0122:
	{
		iOSNotificationCalendarTrigger_set_Hour_m27EB1ADD0D88D83D07710FE952ABB0599AABB125_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)G_B15_1, G_B15_0, /*hidden argument*/NULL);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_37 = __this->get_address_of_data_0();
		int32_t L_38 = L_37->get_calendarTriggerMinute_17();
		G_B16_0 = (&V_2);
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			G_B17_0 = (&V_2);
			goto IL_0142;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_39 = V_3;
		G_B18_0 = L_39;
		G_B18_1 = G_B16_0;
		goto IL_0152;
	}

IL_0142:
	{
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_40 = __this->get_address_of_data_0();
		int32_t L_41 = L_40->get_calendarTriggerMinute_17();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_42), L_41, /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B18_0 = L_42;
		G_B18_1 = G_B17_0;
	}

IL_0152:
	{
		iOSNotificationCalendarTrigger_set_Minute_mD26C58058E85ED21CED944F45F5D59BCBDCA04D8_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)G_B18_1, G_B18_0, /*hidden argument*/NULL);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_43 = __this->get_address_of_data_0();
		int32_t L_44 = L_43->get_calendarTriggerSecond_18();
		G_B19_0 = (&V_2);
		if ((((int32_t)L_44) >= ((int32_t)0)))
		{
			G_B20_0 = (&V_2);
			goto IL_0172;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_45 = V_3;
		G_B21_0 = L_45;
		G_B21_1 = G_B19_0;
		goto IL_0182;
	}

IL_0172:
	{
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_46 = __this->get_address_of_data_0();
		int32_t L_47 = L_46->get_calendarTriggerSecond_18();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_48;
		memset((&L_48), 0, sizeof(L_48));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_48), L_47, /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B21_0 = L_48;
		G_B21_1 = G_B20_0;
	}

IL_0182:
	{
		iOSNotificationCalendarTrigger_set_Second_m4E9FA97F8D36DD7030729886BC544847EBFC2570_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)G_B21_1, G_B21_0, /*hidden argument*/NULL);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_49 = __this->get_address_of_data_0();
		bool L_50 = L_49->get_repeats_11();
		iOSNotificationCalendarTrigger_set_Repeats_mDC3A21089DDCD35B8439E40ED63BF80CF4A48DA7_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_2), L_50, /*hidden argument*/NULL);
		iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F  L_51 = V_2;
		iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F  L_52 = L_51;
		RuntimeObject * L_53 = Box(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_il2cpp_TypeInfo_var, &L_52);
		V_0 = (RuntimeObject*)L_53;
		// }
		goto IL_0231;
	}

IL_01a5:
	{
		// else if (data.triggerType == iOSNotificationLocationTrigger.Type)
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_54 = __this->get_address_of_data_0();
		int32_t L_55 = L_54->get_triggerType_10();
		int32_t L_56 = iOSNotificationLocationTrigger_get_Type_m61CA7CFA5959BAC4ECA26B18FB930A15DAA5C673(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_55) == ((uint32_t)L_56))))
		{
			goto IL_0221;
		}
	}
	{
		// trigger = new iOSNotificationLocationTrigger()
		// {
		//     Center = new Vector2(data.locationTriggerCenterX, data.locationTriggerCenterY),
		//     Radius = data.locationTriggerRadius,
		//     NotifyOnEntry = data.locationTriggerNotifyOnEntry,
		//     NotifyOnExit = data.locationTriggerNotifyOnExit
		// };
		il2cpp_codegen_initobj((&V_4), sizeof(iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B ));
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_57 = __this->get_address_of_data_0();
		float L_58 = L_57->get_locationTriggerCenterX_19();
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_59 = __this->get_address_of_data_0();
		float L_60 = L_59->get_locationTriggerCenterY_20();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_61), L_58, L_60, /*hidden argument*/NULL);
		iOSNotificationLocationTrigger_set_Center_m6F15FBD9C1F80E458374DE4FBEEBEFCC4A8AC4F5_inline((iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)(&V_4), L_61, /*hidden argument*/NULL);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_62 = __this->get_address_of_data_0();
		float L_63 = L_62->get_locationTriggerRadius_21();
		iOSNotificationLocationTrigger_set_Radius_m402D36A5CB29B7E4555391D8DEB9B3D046DF9806_inline((iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)(&V_4), L_63, /*hidden argument*/NULL);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_64 = __this->get_address_of_data_0();
		bool L_65 = L_64->get_locationTriggerNotifyOnEntry_22();
		iOSNotificationLocationTrigger_set_NotifyOnEntry_m380F16268DBC03C9FAAC68E8266F9C79D3EF807C_inline((iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)(&V_4), L_65, /*hidden argument*/NULL);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_66 = __this->get_address_of_data_0();
		bool L_67 = L_66->get_locationTriggerNotifyOnExit_23();
		iOSNotificationLocationTrigger_set_NotifyOnExit_mFD27788A506E149251F8878BB3E13C61D3797E76_inline((iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)(&V_4), L_67, /*hidden argument*/NULL);
		iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B  L_68 = V_4;
		iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B  L_69 = L_68;
		RuntimeObject * L_70 = Box(iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_il2cpp_TypeInfo_var, &L_69);
		V_0 = (RuntimeObject*)L_70;
		// }
		goto IL_0231;
	}

IL_0221:
	{
		// trigger = new iOSNotificationPushTrigger();
		il2cpp_codegen_initobj((&V_5), sizeof(iOSNotificationPushTrigger_t29A1F47CC48E56F32F2D3E8A51868CFD825355B5 ));
		iOSNotificationPushTrigger_t29A1F47CC48E56F32F2D3E8A51868CFD825355B5  L_71 = V_5;
		iOSNotificationPushTrigger_t29A1F47CC48E56F32F2D3E8A51868CFD825355B5  L_72 = L_71;
		RuntimeObject * L_73 = Box(iOSNotificationPushTrigger_t29A1F47CC48E56F32F2D3E8A51868CFD825355B5_il2cpp_TypeInfo_var, &L_72);
		V_0 = (RuntimeObject*)L_73;
	}

IL_0231:
	{
		// return trigger;
		RuntimeObject* L_74 = V_0;
		return L_74;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::GenerateUniqueID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_GenerateUniqueID_m6718EF11750C1111126DFAFFD89C7DCC92E98E82 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotification_GenerateUniqueID_m6718EF11750C1111126DFAFFD89C7DCC92E98E82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// return Math.Abs(DateTime.Now.ToString("yyMMddHHmmssffffff").GetHashCode()).ToString();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = DateTime_ToString_m203C5710CD7AB2F5F1B2D9DA1DFD45BB3774179A((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), _stringLiteral42E1675938518324B72A94620A159CD1F6BA5EC2, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_3 = il2cpp_codegen_abs(L_2);
		V_1 = L_3;
		String_t* L_4 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_1), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_mEA0D52D22BCCC46481A2DE2530619325B95638B6 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, const RuntimeMethod* method)
{
	{
		// public iOSNotification() : this(GenerateUniqueID())
		String_t* L_0 = iOSNotification_GenerateUniqueID_m6718EF11750C1111126DFAFFD89C7DCC92E98E82(/*hidden argument*/NULL);
		iOSNotification__ctor_m21013DC8C6A18663D37CA13467F3FD1553FED42E(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m21013DC8C6A18663D37CA13467F3FD1553FED42E (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, String_t* ___identifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotification__ctor_m21013DC8C6A18663D37CA13467F3FD1553FED42E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public iOSNotification(string identifier)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// data = new iOSNotificationData();
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		il2cpp_codegen_initobj(L_0, sizeof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F ));
		// data.identifier = identifier;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_1 = __this->get_address_of_data_0();
		String_t* L_2 = ___identifier0;
		L_1->set_identifier_0(L_2);
		// data.title = "";
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_3 = __this->get_address_of_data_0();
		L_3->set_title_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.body = "";
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_4 = __this->get_address_of_data_0();
		L_4->set_body_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.badge = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_5 = __this->get_address_of_data_0();
		L_5->set_badge_3((-1));
		// data.subtitle = "";
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_6 = __this->get_address_of_data_0();
		L_6->set_subtitle_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.categoryIdentifier = "";
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_7 = __this->get_address_of_data_0();
		L_7->set_categoryIdentifier_5(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.threadIdentifier = "";
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_8 = __this->get_address_of_data_0();
		L_8->set_threadIdentifier_6(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.data = "";
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_9 = __this->get_address_of_data_0();
		L_9->set_data_7(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.showInForeground = false;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_10 = __this->get_address_of_data_0();
		L_10->set_showInForeground_8((bool)0);
		// data.showInForegroundPresentationOptions = (int)(PresentationOption.Alert |
		//     PresentationOption.Sound);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_11 = __this->get_address_of_data_0();
		L_11->set_showInForegroundPresentationOptions_9(6);
		// data.triggerType = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_12 = __this->get_address_of_data_0();
		L_12->set_triggerType_10((-1));
		// data.repeats = false;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_13 = __this->get_address_of_data_0();
		L_13->set_repeats_11((bool)0);
		// data.timeTriggerInterval = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_14 = __this->get_address_of_data_0();
		L_14->set_timeTriggerInterval_12((-1));
		// data.calendarTriggerYear = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_15 = __this->get_address_of_data_0();
		L_15->set_calendarTriggerYear_13((-1));
		// data.calendarTriggerMonth = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_16 = __this->get_address_of_data_0();
		L_16->set_calendarTriggerMonth_14((-1));
		// data.calendarTriggerDay = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_17 = __this->get_address_of_data_0();
		L_17->set_calendarTriggerDay_15((-1));
		// data.calendarTriggerHour = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_18 = __this->get_address_of_data_0();
		L_18->set_calendarTriggerHour_16((-1));
		// data.calendarTriggerMinute = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_19 = __this->get_address_of_data_0();
		L_19->set_calendarTriggerMinute_17((-1));
		// data.calendarTriggerSecond = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_20 = __this->get_address_of_data_0();
		L_20->set_calendarTriggerSecond_18((-1));
		// data.locationTriggerCenterX = 0f;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_21 = __this->get_address_of_data_0();
		L_21->set_locationTriggerCenterX_19((0.0f));
		// data.locationTriggerCenterY = 0f;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_22 = __this->get_address_of_data_0();
		L_22->set_locationTriggerCenterY_20((0.0f));
		// data.locationTriggerRadius = 2f;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_23 = __this->get_address_of_data_0();
		L_23->set_locationTriggerRadius_21((2.0f));
		// data.locationTriggerNotifyOnEntry = true;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_24 = __this->get_address_of_data_0();
		L_24->set_locationTriggerNotifyOnEntry_22((bool)1);
		// data.locationTriggerNotifyOnExit = false;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_25 = __this->get_address_of_data_0();
		L_25->set_locationTriggerNotifyOnExit_23((bool)0);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::Verify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_Verify_m1AC69184FE3B34C45E921CECEE65CFD7AEA3B037 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, const RuntimeMethod* method)
{
	{
		// if (data.identifier == null)
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = L_0->get_identifier_0();
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		// data.identifier = GenerateUniqueID();
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_2 = __this->get_address_of_data_0();
		String_t* L_3 = iOSNotification_GenerateUniqueID_m6718EF11750C1111126DFAFFD89C7DCC92E98E82(/*hidden argument*/NULL);
		L_2->set_identifier_0(L_3);
	}

IL_001d:
	{
		// }
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshal_pinvoke(const iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F& unmarshaled, iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshal_pinvoke_back(const iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshaled_pinvoke& marshaled, iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F& unmarshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshal_pinvoke_cleanup(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshal_com(const iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F& unmarshaled, iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshaled_com& marshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshal_com_back(const iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshaled_com& marshaled, iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F& unmarshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshal_com_cleanup(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshaled_com& marshaled)
{
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationCalendarTrigger_get_Type_m6FBF91C5600A39FC6E9E40197E4D439719786D16 (const RuntimeMethod* method)
{
	{
		// public static int Type { get { return (int)NotificationTriggerType.CalendarTrigger; } }
		return ((int32_t)10);
	}
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Year_m412D54C7600F3B5E15210ED19760D5ECF1784B5A (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Year { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CYearU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Year_m412D54C7600F3B5E15210ED19760D5ECF1784B5A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	return iOSNotificationCalendarTrigger_get_Year_m412D54C7600F3B5E15210ED19760D5ECF1784B5A_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Year(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Year_m8994CC0B661584537B0C1EFED662931CB0FEC6B7 (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Year { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = ___value0;
		__this->set_U3CYearU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Year_m8994CC0B661584537B0C1EFED662931CB0FEC6B7_AdjustorThunk (RuntimeObject * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Year_m8994CC0B661584537B0C1EFED662931CB0FEC6B7_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Month_m0970922AF4050BC478C7F0947A2C07CB750BC672 (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Month { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CMonthU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Month_m0970922AF4050BC478C7F0947A2C07CB750BC672_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	return iOSNotificationCalendarTrigger_get_Month_m0970922AF4050BC478C7F0947A2C07CB750BC672_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Month(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Month_m36C3BE781E8EFC01E7B47ED412C8F3C452D0C814 (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Month { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = ___value0;
		__this->set_U3CMonthU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Month_m36C3BE781E8EFC01E7B47ED412C8F3C452D0C814_AdjustorThunk (RuntimeObject * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Month_m36C3BE781E8EFC01E7B47ED412C8F3C452D0C814_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Day_mB86BB81DA1863B3325B582606433233DA381ED20 (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Day { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CDayU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Day_mB86BB81DA1863B3325B582606433233DA381ED20_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	return iOSNotificationCalendarTrigger_get_Day_mB86BB81DA1863B3325B582606433233DA381ED20_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Day(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Day_m19E9226FD018CFED98C939020FFC9E5CF485A1DF (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Day { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = ___value0;
		__this->set_U3CDayU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Day_m19E9226FD018CFED98C939020FFC9E5CF485A1DF_AdjustorThunk (RuntimeObject * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Day_m19E9226FD018CFED98C939020FFC9E5CF485A1DF_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Hour_m7D8C898AA95C8C006DB5689CB1A0BD0A48296F14 (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Hour { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CHourU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Hour_m7D8C898AA95C8C006DB5689CB1A0BD0A48296F14_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	return iOSNotificationCalendarTrigger_get_Hour_m7D8C898AA95C8C006DB5689CB1A0BD0A48296F14_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Hour(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Hour_m27EB1ADD0D88D83D07710FE952ABB0599AABB125 (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Hour { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = ___value0;
		__this->set_U3CHourU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Hour_m27EB1ADD0D88D83D07710FE952ABB0599AABB125_AdjustorThunk (RuntimeObject * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Hour_m27EB1ADD0D88D83D07710FE952ABB0599AABB125_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Minute_m9EAB1A013C605CFA791D72C2A38D29EF649DDB24 (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Minute { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CMinuteU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Minute_m9EAB1A013C605CFA791D72C2A38D29EF649DDB24_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	return iOSNotificationCalendarTrigger_get_Minute_m9EAB1A013C605CFA791D72C2A38D29EF649DDB24_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Minute(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Minute_mD26C58058E85ED21CED944F45F5D59BCBDCA04D8 (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Minute { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = ___value0;
		__this->set_U3CMinuteU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Minute_mD26C58058E85ED21CED944F45F5D59BCBDCA04D8_AdjustorThunk (RuntimeObject * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Minute_mD26C58058E85ED21CED944F45F5D59BCBDCA04D8_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Second_mA6B65A993AE13E363001AD9AAA03F82FDA4FDC2F (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Second { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CSecondU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Second_mA6B65A993AE13E363001AD9AAA03F82FDA4FDC2F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	return iOSNotificationCalendarTrigger_get_Second_mA6B65A993AE13E363001AD9AAA03F82FDA4FDC2F_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Second(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Second_m4E9FA97F8D36DD7030729886BC544847EBFC2570 (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Second { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = ___value0;
		__this->set_U3CSecondU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Second_m4E9FA97F8D36DD7030729886BC544847EBFC2570_AdjustorThunk (RuntimeObject * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Second_m4E9FA97F8D36DD7030729886BC544847EBFC2570_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Repeats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_m222CC0DCE6A2102FD4D2932D7F461E4364E3A51B (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationCalendarTrigger_get_Repeats_m222CC0DCE6A2102FD4D2932D7F461E4364E3A51B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	return iOSNotificationCalendarTrigger_get_Repeats_m222CC0DCE6A2102FD4D2932D7F461E4364E3A51B_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Repeats(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Repeats_mDC3A21089DDCD35B8439E40ED63BF80CF4A48DA7 (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRepeatsU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Repeats_mDC3A21089DDCD35B8439E40ED63BF80CF4A48DA7_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Repeats_mDC3A21089DDCD35B8439E40ED63BF80CF4A48DA7_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::add_OnNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_add_OnNotificationReceived_m978A791202FE895A476BFECBE8971FCB96442EA4 (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_add_OnNotificationReceived_m978A791202FE895A476BFECBE8971FCB96442EA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!s_OnNotificationReceivedCallbackSet)
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		bool L_0 = ((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->get_s_OnNotificationReceivedCallbackSet_1();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// iOSNotificationsWrapper.RegisterOnReceivedCallback();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper_RegisterOnReceivedCallback_mD39562B21E6DD6A95C1B106B1AB1CBD995597900(/*hidden argument*/NULL);
		// s_OnNotificationReceivedCallbackSet = true;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->set_s_OnNotificationReceivedCallbackSet_1((bool)1);
	}

IL_0012:
	{
		// s_OnNotificationReceived += value;
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		iOSNotificationCenter_add_s_OnNotificationReceived_m4344C4F6CFABAD3E43A5AFD65104995AEAFD6387(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::remove_OnNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_remove_OnNotificationReceived_mE1214E93F0FAE308CAB530FA1B858E90DA1F0BDB (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_remove_OnNotificationReceived_mE1214E93F0FAE308CAB530FA1B858E90DA1F0BDB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_OnNotificationReceived -= value;
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		iOSNotificationCenter_remove_s_OnNotificationReceived_mAFCF3BBFFE03628AF82617B73D91CEC20D0118A6(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::add_s_OnNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_add_s_OnNotificationReceived_m4344C4F6CFABAD3E43A5AFD65104995AEAFD6387 (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_add_s_OnNotificationReceived_m4344C4F6CFABAD3E43A5AFD65104995AEAFD6387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * V_0 = NULL;
	NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * V_1 = NULL;
	NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_0 = ((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->get_s_OnNotificationReceived_2();
		V_0 = L_0;
	}

IL_0006:
	{
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_1 = V_0;
		V_1 = L_1;
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_2 = V_1;
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 *)CastclassSealed((RuntimeObject*)L_4, NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_5 = V_2;
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_6 = V_1;
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_7 = InterlockedCompareExchangeImpl<NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 *>((NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 **)(((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->get_address_of_s_OnNotificationReceived_2()), L_5, L_6);
		V_0 = L_7;
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_8 = V_0;
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 *)L_8) == ((RuntimeObject*)(NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::remove_s_OnNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_remove_s_OnNotificationReceived_mAFCF3BBFFE03628AF82617B73D91CEC20D0118A6 (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_remove_s_OnNotificationReceived_mAFCF3BBFFE03628AF82617B73D91CEC20D0118A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * V_0 = NULL;
	NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * V_1 = NULL;
	NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_0 = ((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->get_s_OnNotificationReceived_2();
		V_0 = L_0;
	}

IL_0006:
	{
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_1 = V_0;
		V_1 = L_1;
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_2 = V_1;
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 *)CastclassSealed((RuntimeObject*)L_4, NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_5 = V_2;
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_6 = V_1;
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_7 = InterlockedCompareExchangeImpl<NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 *>((NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 **)(((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->get_address_of_s_OnNotificationReceived_2()), L_5, L_6);
		V_0 = L_7;
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_8 = V_0;
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 *)L_8) == ((RuntimeObject*)(NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::set_ApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_set_ApplicationBadge_m2ACF32475DA6FC7362A6BA391829230814083D3C (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_set_ApplicationBadge_m2ACF32475DA6FC7362A6BA391829230814083D3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { iOSNotificationsWrapper.SetApplicationBadge(value); }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper_SetApplicationBadge_m2B9781A9280B20BAF93C84C10360158948EF6DD9(L_0, /*hidden argument*/NULL);
		// set { iOSNotificationsWrapper.SetApplicationBadge(value); }
		return;
	}
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCenter_Initialize_m5D8DAE0D39DCCEC17D89AED4C0A0155842E5A66E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_Initialize_m5D8DAE0D39DCCEC17D89AED4C0A0155842E5A66E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Initialized)
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		bool L_0 = ((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->get_s_Initialized_0();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0009:
	{
		// iOSNotificationsWrapper.RegisterOnReceivedCallback();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper_RegisterOnReceivedCallback_mD39562B21E6DD6A95C1B106B1AB1CBD995597900(/*hidden argument*/NULL);
		// return s_Initialized = true;
		int32_t L_1 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->set_s_Initialized_0((bool)L_1);
		return (bool)L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::ScheduleNotification(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_ScheduleNotification_m38A670E80C13007915229879F2E4AEDE5F3E386D (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * ___notification0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_ScheduleNotification_m38A670E80C13007915229879F2E4AEDE5F3E386D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		bool L_0 = iOSNotificationCenter_Initialize_m5D8DAE0D39DCCEC17D89AED4C0A0155842E5A66E(/*hidden argument*/NULL);
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
		// notification.Verify();
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_1 = ___notification0;
		NullCheck(L_1);
		iOSNotification_Verify_m1AC69184FE3B34C45E921CECEE65CFD7AEA3B037(L_1, /*hidden argument*/NULL);
		// iOSNotificationsWrapper.ScheduleLocalNotification(notification.data);
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_2 = ___notification0;
		NullCheck(L_2);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_3 = L_2->get_data_0();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper_ScheduleLocalNotification_m6D11AC2A87A08FE4A282B02354F2041B49793607(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotification Unity.Notifications.iOS.iOSNotificationCenter::GetLastRespondedNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * iOSNotificationCenter_GetLastRespondedNotification_m0FA87E439B933EFA568B4BFED97CEE8B1C3094CC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_GetLastRespondedNotification_m0FA87E439B933EFA568B4BFED97CEE8B1C3094CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var data = iOSNotificationsWrapper.GetLastNotificationData();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D  L_0 = iOSNotificationsWrapper_GetLastNotificationData_mA15D919959941DAB58C4CF58C957FE250919C1F4(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (data == null)
		bool L_1 = Nullable_1_get_HasValue_mA8DDD3E8230E283F4AB52903C6D81B419EA5576A_inline((Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mA8DDD3E8230E283F4AB52903C6D81B419EA5576A_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		return (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *)NULL;
	}

IL_0011:
	{
		// var notification = new iOSNotification(data.Value.identifier);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_2 = Nullable_1_get_Value_m3B9AD42DC128717E71D419845B7007F003E220A8((Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m3B9AD42DC128717E71D419845B7007F003E220A8_RuntimeMethod_var);
		String_t* L_3 = L_2.get_identifier_0();
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_4 = (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *)il2cpp_codegen_object_new(iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152_il2cpp_TypeInfo_var);
		iOSNotification__ctor_m21013DC8C6A18663D37CA13467F3FD1553FED42E(L_4, L_3, /*hidden argument*/NULL);
		// notification.data = data.Value;
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_5 = L_4;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_6 = Nullable_1_get_Value_m3B9AD42DC128717E71D419845B7007F003E220A8((Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m3B9AD42DC128717E71D419845B7007F003E220A8_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->set_data_0(L_6);
		// return notification;
		return L_5;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::RemoveScheduledNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_RemoveScheduledNotification_m4C73DC72140FA4FBF15199004948FADCDAB1EB7D (String_t* ___identifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_RemoveScheduledNotification_m4C73DC72140FA4FBF15199004948FADCDAB1EB7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		bool L_0 = iOSNotificationCenter_Initialize_m5D8DAE0D39DCCEC17D89AED4C0A0155842E5A66E(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// iOSNotificationsWrapper._RemoveScheduledNotification(identifier);
		String_t* L_1 = ___identifier0;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper__RemoveScheduledNotification_m097B0FA4E2EA84C89378923546AF919C2A647AAB(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::RemoveDeliveredNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_RemoveDeliveredNotification_mC4EEB0CADDF9B181BC3E58EA569E0D0A342F03A6 (String_t* ___identifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_RemoveDeliveredNotification_mC4EEB0CADDF9B181BC3E58EA569E0D0A342F03A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		bool L_0 = iOSNotificationCenter_Initialize_m5D8DAE0D39DCCEC17D89AED4C0A0155842E5A66E(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// iOSNotificationsWrapper._RemoveDeliveredNotification(identifier);
		String_t* L_1 = ___identifier0;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper__RemoveDeliveredNotification_m22B6DB909C0353FA88B7E3AC704E24A9BED456DE(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::RemoveAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_RemoveAllScheduledNotifications_mFC4EFDA8F6DA0F0ED442E36FC22E614E69D3A45D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_RemoveAllScheduledNotifications_mFC4EFDA8F6DA0F0ED442E36FC22E614E69D3A45D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		bool L_0 = iOSNotificationCenter_Initialize_m5D8DAE0D39DCCEC17D89AED4C0A0155842E5A66E(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// iOSNotificationsWrapper._RemoveAllScheduledNotifications();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper__RemoveAllScheduledNotifications_m5756666E06D8A8563E9D54393CCFCD649F159E23(/*hidden argument*/NULL);
	}

IL_000c:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::RemoveAllDeliveredNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_RemoveAllDeliveredNotifications_mD94C4A4AA639C1DF34B9B76E521012C169EBDF36 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_RemoveAllDeliveredNotifications_mD94C4A4AA639C1DF34B9B76E521012C169EBDF36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		bool L_0 = iOSNotificationCenter_Initialize_m5D8DAE0D39DCCEC17D89AED4C0A0155842E5A66E(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// iOSNotificationsWrapper._RemoveAllDeliveredNotifications();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper__RemoveAllDeliveredNotifications_mE6F7B5312775E5FD75EBE47533CF49CDB8D40AC3(/*hidden argument*/NULL);
	}

IL_000c:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnReceivedRemoteNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnReceivedRemoteNotification_mF618D4C4BF6CC24854F7A5E319D225B48C6667F0 (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_OnReceivedRemoteNotification_mF618D4C4BF6CC24854F7A5E319D225B48C6667F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * V_0 = NULL;
	{
		// var notification = new iOSNotification(data.identifier);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_0 = ___data0;
		String_t* L_1 = L_0.get_identifier_0();
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_2 = (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *)il2cpp_codegen_object_new(iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152_il2cpp_TypeInfo_var);
		iOSNotification__ctor_m21013DC8C6A18663D37CA13467F3FD1553FED42E(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// notification.data = data;
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_3 = V_0;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_4 = ___data0;
		NullCheck(L_3);
		L_3->set_data_0(L_4);
		// s_OnRemoteNotificationReceived(notification);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_5 = ((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->get_s_OnRemoteNotificationReceived_3();
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_6 = V_0;
		NullCheck(L_5);
		NotificationReceivedCallback_Invoke_mFC51E9029899DCCAB5ACA44A2AAF49785E8F4F88(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnSentNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnSentNotification_m643A50BA43CFAE9E890279AA63C2D923919DC12C (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_OnSentNotification_m643A50BA43CFAE9E890279AA63C2D923919DC12C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * V_0 = NULL;
	{
		// var notification = new iOSNotification(data.identifier);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_0 = ___data0;
		String_t* L_1 = L_0.get_identifier_0();
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_2 = (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *)il2cpp_codegen_object_new(iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152_il2cpp_TypeInfo_var);
		iOSNotification__ctor_m21013DC8C6A18663D37CA13467F3FD1553FED42E(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// notification.data = data;
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_3 = V_0;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_4 = ___data0;
		NullCheck(L_3);
		L_3->set_data_0(L_4);
		// s_OnNotificationReceived(notification);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_5 = ((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->get_s_OnNotificationReceived_2();
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_6 = V_0;
		NullCheck(L_5);
		NotificationReceivedCallback_Invoke_mFC51E9029899DCCAB5ACA44A2AAF49785E8F4F88(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnFinishedAuthorizationRequest(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnFinishedAuthorizationRequest_m27E8E4AD441434D0F04CA34298E404DC9717B695 (iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_OnFinishedAuthorizationRequest_m27E8E4AD441434D0F04CA34298E404DC9717B695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnAuthorizationRequestCompleted(data);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * L_0 = ((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->get_OnAuthorizationRequestCompleted_4();
		iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  L_1 = ___data0;
		NullCheck(L_0);
		AuthorizationRequestCompletedCallback_Invoke_m9CC178BB8B90D1A6B5BFF27DC4884518F19E1465(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter__cctor_m45F7D43BD95952A6914EB672CD23455160C8ABC9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter__cctor_m45F7D43BD95952A6914EB672CD23455160C8ABC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static event NotificationReceivedCallback s_OnNotificationReceived = delegate {};
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_il2cpp_TypeInfo_var);
		U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * L_0 = ((U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_1 = (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 *)il2cpp_codegen_object_new(NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_mAA0FD92B0E5812D2D10D8C8EB9F7E2C7CAB54078(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__37_0_m2FE04AD3D2CCA28AA222F2D768C8D368BC40F01B_RuntimeMethod_var), /*hidden argument*/NULL);
		((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->set_s_OnNotificationReceived_2(L_1);
		// private static event NotificationReceivedCallback s_OnRemoteNotificationReceived = delegate {};
		U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * L_2 = ((U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_3 = (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 *)il2cpp_codegen_object_new(NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_mAA0FD92B0E5812D2D10D8C8EB9F7E2C7CAB54078(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__37_1_m6666052569C9BAA2D0304FEF45DFFB6E2B4EB17B_RuntimeMethod_var), /*hidden argument*/NULL);
		((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->set_s_OnRemoteNotificationReceived_3(L_3);
		// internal static event AuthorizationRequestCompletedCallback OnAuthorizationRequestCompleted = delegate {};
		U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * L_4 = ((U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * L_5 = (AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 *)il2cpp_codegen_object_new(AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189_il2cpp_TypeInfo_var);
		AuthorizationRequestCompletedCallback__ctor_m6318A6FBC740D20DE248F0C5A1F7EDBD8CAEA690(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__37_2_mEA60AEE2306CB5C7F289877DFCABD3911A692043_RuntimeMethod_var), /*hidden argument*/NULL);
		((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->set_OnAuthorizationRequestCompleted_4(L_5);
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
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC8583156570205A418B0B51868CAD998942DCA1C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mC8583156570205A418B0B51868CAD998942DCA1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * L_0 = (U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 *)il2cpp_codegen_object_new(U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5DD4F2C2F53F8C30ED8C993EDCF1831CD92261DE(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5DD4F2C2F53F8C30ED8C993EDCF1831CD92261DE (U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_<>c::<.cctor>b__37_0(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__37_0_m2FE04AD3D2CCA28AA222F2D768C8D368BC40F01B (U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * __this, iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// private static event NotificationReceivedCallback s_OnNotificationReceived = delegate {};
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_<>c::<.cctor>b__37_1(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__37_1_m6666052569C9BAA2D0304FEF45DFFB6E2B4EB17B (U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * __this, iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// private static event NotificationReceivedCallback s_OnRemoteNotificationReceived = delegate {};
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_<>c::<.cctor>b__37_2(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__37_2_mEA60AEE2306CB5C7F289877DFCABD3911A692043 (U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * __this, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// internal static event AuthorizationRequestCompletedCallback OnAuthorizationRequestCompleted = delegate {};
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 (AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * __this, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  ___data0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___data0' to native representation
	iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke ____data0_marshaled = {};
	iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_pinvoke(___data0, ____data0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

	// Marshaling cleanup of parameter '___data0' native representation
	iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_pinvoke_cleanup(____data0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_AuthorizationRequestCompletedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback__ctor_m6318A6FBC740D20DE248F0C5A1F7EDBD8CAEA690 (AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_AuthorizationRequestCompletedCallback::Invoke(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback_Invoke_m9CC178BB8B90D1A6B5BFF27DC4884518F19E1465 (AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * __this, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  ___data0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  >::Invoke(targetMethod, targetThis, ___data0);
					else
						GenericVirtActionInvoker1< iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  >::Invoke(targetMethod, targetThis, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
					else
						VirtActionInvoker1< iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___data0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___data0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationCenter_AuthorizationRequestCompletedCallback::BeginInvoke(Unity.Notifications.iOS.iOSAuthorizationRequestData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthorizationRequestCompletedCallback_BeginInvoke_m45A610D08166DA55E4123E6F124C5FE8F08AD132 (AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * __this, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  ___data0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthorizationRequestCompletedCallback_BeginInvoke_m45A610D08166DA55E4123E6F124C5FE8F08AD132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_il2cpp_TypeInfo_var, &___data0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_AuthorizationRequestCompletedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback_EndInvoke_mA67939DD6850B39422A7283D9A441F3135FEA380 (AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_mAA0FD92B0E5812D2D10D8C8EB9F7E2C7CAB54078 (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback::Invoke(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_mFC51E9029899DCCAB5ACA44A2AAF49785E8F4F88 (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * __this, iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * ___notification0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___notification0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___notification0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___notification0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___notification0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___notification0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * >::Invoke(targetMethod, targetThis, ___notification0);
					else
						GenericVirtActionInvoker1< iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * >::Invoke(targetMethod, targetThis, ___notification0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___notification0);
					else
						VirtActionInvoker1< iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___notification0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___notification0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___notification0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback::BeginInvoke(Unity.Notifications.iOS.iOSNotification,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationReceivedCallback_BeginInvoke_m36DE626229E185F5A46626B3B976D314B2AD46A1 (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * __this, iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * ___notification0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___notification0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_EndInvoke_m94BF0A4A1ACFA7BD74A7BD2BF2D4DCEC8C135B2F (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshal_pinvoke(const iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F& unmarshaled, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshaled_pinvoke& marshaled)
{
	marshaled.___identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.get_identifier_0());
	marshaled.___title_1 = il2cpp_codegen_marshal_string(unmarshaled.get_title_1());
	marshaled.___body_2 = il2cpp_codegen_marshal_string(unmarshaled.get_body_2());
	marshaled.___badge_3 = unmarshaled.get_badge_3();
	marshaled.___subtitle_4 = il2cpp_codegen_marshal_string(unmarshaled.get_subtitle_4());
	marshaled.___categoryIdentifier_5 = il2cpp_codegen_marshal_string(unmarshaled.get_categoryIdentifier_5());
	marshaled.___threadIdentifier_6 = il2cpp_codegen_marshal_string(unmarshaled.get_threadIdentifier_6());
	marshaled.___data_7 = il2cpp_codegen_marshal_string(unmarshaled.get_data_7());
	marshaled.___showInForeground_8 = static_cast<int32_t>(unmarshaled.get_showInForeground_8());
	marshaled.___showInForegroundPresentationOptions_9 = unmarshaled.get_showInForegroundPresentationOptions_9();
	marshaled.___triggerType_10 = unmarshaled.get_triggerType_10();
	marshaled.___repeats_11 = static_cast<int32_t>(unmarshaled.get_repeats_11());
	marshaled.___timeTriggerInterval_12 = unmarshaled.get_timeTriggerInterval_12();
	marshaled.___calendarTriggerYear_13 = unmarshaled.get_calendarTriggerYear_13();
	marshaled.___calendarTriggerMonth_14 = unmarshaled.get_calendarTriggerMonth_14();
	marshaled.___calendarTriggerDay_15 = unmarshaled.get_calendarTriggerDay_15();
	marshaled.___calendarTriggerHour_16 = unmarshaled.get_calendarTriggerHour_16();
	marshaled.___calendarTriggerMinute_17 = unmarshaled.get_calendarTriggerMinute_17();
	marshaled.___calendarTriggerSecond_18 = unmarshaled.get_calendarTriggerSecond_18();
	marshaled.___locationTriggerCenterX_19 = unmarshaled.get_locationTriggerCenterX_19();
	marshaled.___locationTriggerCenterY_20 = unmarshaled.get_locationTriggerCenterY_20();
	marshaled.___locationTriggerRadius_21 = unmarshaled.get_locationTriggerRadius_21();
	marshaled.___locationTriggerNotifyOnEntry_22 = static_cast<int32_t>(unmarshaled.get_locationTriggerNotifyOnEntry_22());
	marshaled.___locationTriggerNotifyOnExit_23 = static_cast<int32_t>(unmarshaled.get_locationTriggerNotifyOnExit_23());
}
IL2CPP_EXTERN_C void iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshal_pinvoke_back(const iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshaled_pinvoke& marshaled, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F& unmarshaled)
{
	unmarshaled.set_identifier_0(il2cpp_codegen_marshal_string_result(marshaled.___identifier_0));
	unmarshaled.set_title_1(il2cpp_codegen_marshal_string_result(marshaled.___title_1));
	unmarshaled.set_body_2(il2cpp_codegen_marshal_string_result(marshaled.___body_2));
	int32_t unmarshaled_badge_temp_3 = 0;
	unmarshaled_badge_temp_3 = marshaled.___badge_3;
	unmarshaled.set_badge_3(unmarshaled_badge_temp_3);
	unmarshaled.set_subtitle_4(il2cpp_codegen_marshal_string_result(marshaled.___subtitle_4));
	unmarshaled.set_categoryIdentifier_5(il2cpp_codegen_marshal_string_result(marshaled.___categoryIdentifier_5));
	unmarshaled.set_threadIdentifier_6(il2cpp_codegen_marshal_string_result(marshaled.___threadIdentifier_6));
	unmarshaled.set_data_7(il2cpp_codegen_marshal_string_result(marshaled.___data_7));
	bool unmarshaled_showInForeground_temp_8 = false;
	unmarshaled_showInForeground_temp_8 = static_cast<bool>(marshaled.___showInForeground_8);
	unmarshaled.set_showInForeground_8(unmarshaled_showInForeground_temp_8);
	int32_t unmarshaled_showInForegroundPresentationOptions_temp_9 = 0;
	unmarshaled_showInForegroundPresentationOptions_temp_9 = marshaled.___showInForegroundPresentationOptions_9;
	unmarshaled.set_showInForegroundPresentationOptions_9(unmarshaled_showInForegroundPresentationOptions_temp_9);
	int32_t unmarshaled_triggerType_temp_10 = 0;
	unmarshaled_triggerType_temp_10 = marshaled.___triggerType_10;
	unmarshaled.set_triggerType_10(unmarshaled_triggerType_temp_10);
	bool unmarshaled_repeats_temp_11 = false;
	unmarshaled_repeats_temp_11 = static_cast<bool>(marshaled.___repeats_11);
	unmarshaled.set_repeats_11(unmarshaled_repeats_temp_11);
	int32_t unmarshaled_timeTriggerInterval_temp_12 = 0;
	unmarshaled_timeTriggerInterval_temp_12 = marshaled.___timeTriggerInterval_12;
	unmarshaled.set_timeTriggerInterval_12(unmarshaled_timeTriggerInterval_temp_12);
	int32_t unmarshaled_calendarTriggerYear_temp_13 = 0;
	unmarshaled_calendarTriggerYear_temp_13 = marshaled.___calendarTriggerYear_13;
	unmarshaled.set_calendarTriggerYear_13(unmarshaled_calendarTriggerYear_temp_13);
	int32_t unmarshaled_calendarTriggerMonth_temp_14 = 0;
	unmarshaled_calendarTriggerMonth_temp_14 = marshaled.___calendarTriggerMonth_14;
	unmarshaled.set_calendarTriggerMonth_14(unmarshaled_calendarTriggerMonth_temp_14);
	int32_t unmarshaled_calendarTriggerDay_temp_15 = 0;
	unmarshaled_calendarTriggerDay_temp_15 = marshaled.___calendarTriggerDay_15;
	unmarshaled.set_calendarTriggerDay_15(unmarshaled_calendarTriggerDay_temp_15);
	int32_t unmarshaled_calendarTriggerHour_temp_16 = 0;
	unmarshaled_calendarTriggerHour_temp_16 = marshaled.___calendarTriggerHour_16;
	unmarshaled.set_calendarTriggerHour_16(unmarshaled_calendarTriggerHour_temp_16);
	int32_t unmarshaled_calendarTriggerMinute_temp_17 = 0;
	unmarshaled_calendarTriggerMinute_temp_17 = marshaled.___calendarTriggerMinute_17;
	unmarshaled.set_calendarTriggerMinute_17(unmarshaled_calendarTriggerMinute_temp_17);
	int32_t unmarshaled_calendarTriggerSecond_temp_18 = 0;
	unmarshaled_calendarTriggerSecond_temp_18 = marshaled.___calendarTriggerSecond_18;
	unmarshaled.set_calendarTriggerSecond_18(unmarshaled_calendarTriggerSecond_temp_18);
	float unmarshaled_locationTriggerCenterX_temp_19 = 0.0f;
	unmarshaled_locationTriggerCenterX_temp_19 = marshaled.___locationTriggerCenterX_19;
	unmarshaled.set_locationTriggerCenterX_19(unmarshaled_locationTriggerCenterX_temp_19);
	float unmarshaled_locationTriggerCenterY_temp_20 = 0.0f;
	unmarshaled_locationTriggerCenterY_temp_20 = marshaled.___locationTriggerCenterY_20;
	unmarshaled.set_locationTriggerCenterY_20(unmarshaled_locationTriggerCenterY_temp_20);
	float unmarshaled_locationTriggerRadius_temp_21 = 0.0f;
	unmarshaled_locationTriggerRadius_temp_21 = marshaled.___locationTriggerRadius_21;
	unmarshaled.set_locationTriggerRadius_21(unmarshaled_locationTriggerRadius_temp_21);
	bool unmarshaled_locationTriggerNotifyOnEntry_temp_22 = false;
	unmarshaled_locationTriggerNotifyOnEntry_temp_22 = static_cast<bool>(marshaled.___locationTriggerNotifyOnEntry_22);
	unmarshaled.set_locationTriggerNotifyOnEntry_22(unmarshaled_locationTriggerNotifyOnEntry_temp_22);
	bool unmarshaled_locationTriggerNotifyOnExit_temp_23 = false;
	unmarshaled_locationTriggerNotifyOnExit_temp_23 = static_cast<bool>(marshaled.___locationTriggerNotifyOnExit_23);
	unmarshaled.set_locationTriggerNotifyOnExit_23(unmarshaled_locationTriggerNotifyOnExit_temp_23);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshal_pinvoke_cleanup(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___identifier_0);
	marshaled.___identifier_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___title_1);
	marshaled.___title_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___body_2);
	marshaled.___body_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___subtitle_4);
	marshaled.___subtitle_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___categoryIdentifier_5);
	marshaled.___categoryIdentifier_5 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___threadIdentifier_6);
	marshaled.___threadIdentifier_6 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___data_7);
	marshaled.___data_7 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshal_com(const iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F& unmarshaled, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshaled_com& marshaled)
{
	marshaled.___identifier_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_identifier_0());
	marshaled.___title_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_title_1());
	marshaled.___body_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_body_2());
	marshaled.___badge_3 = unmarshaled.get_badge_3();
	marshaled.___subtitle_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_subtitle_4());
	marshaled.___categoryIdentifier_5 = il2cpp_codegen_marshal_bstring(unmarshaled.get_categoryIdentifier_5());
	marshaled.___threadIdentifier_6 = il2cpp_codegen_marshal_bstring(unmarshaled.get_threadIdentifier_6());
	marshaled.___data_7 = il2cpp_codegen_marshal_bstring(unmarshaled.get_data_7());
	marshaled.___showInForeground_8 = static_cast<int32_t>(unmarshaled.get_showInForeground_8());
	marshaled.___showInForegroundPresentationOptions_9 = unmarshaled.get_showInForegroundPresentationOptions_9();
	marshaled.___triggerType_10 = unmarshaled.get_triggerType_10();
	marshaled.___repeats_11 = static_cast<int32_t>(unmarshaled.get_repeats_11());
	marshaled.___timeTriggerInterval_12 = unmarshaled.get_timeTriggerInterval_12();
	marshaled.___calendarTriggerYear_13 = unmarshaled.get_calendarTriggerYear_13();
	marshaled.___calendarTriggerMonth_14 = unmarshaled.get_calendarTriggerMonth_14();
	marshaled.___calendarTriggerDay_15 = unmarshaled.get_calendarTriggerDay_15();
	marshaled.___calendarTriggerHour_16 = unmarshaled.get_calendarTriggerHour_16();
	marshaled.___calendarTriggerMinute_17 = unmarshaled.get_calendarTriggerMinute_17();
	marshaled.___calendarTriggerSecond_18 = unmarshaled.get_calendarTriggerSecond_18();
	marshaled.___locationTriggerCenterX_19 = unmarshaled.get_locationTriggerCenterX_19();
	marshaled.___locationTriggerCenterY_20 = unmarshaled.get_locationTriggerCenterY_20();
	marshaled.___locationTriggerRadius_21 = unmarshaled.get_locationTriggerRadius_21();
	marshaled.___locationTriggerNotifyOnEntry_22 = static_cast<int32_t>(unmarshaled.get_locationTriggerNotifyOnEntry_22());
	marshaled.___locationTriggerNotifyOnExit_23 = static_cast<int32_t>(unmarshaled.get_locationTriggerNotifyOnExit_23());
}
IL2CPP_EXTERN_C void iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshal_com_back(const iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshaled_com& marshaled, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F& unmarshaled)
{
	unmarshaled.set_identifier_0(il2cpp_codegen_marshal_bstring_result(marshaled.___identifier_0));
	unmarshaled.set_title_1(il2cpp_codegen_marshal_bstring_result(marshaled.___title_1));
	unmarshaled.set_body_2(il2cpp_codegen_marshal_bstring_result(marshaled.___body_2));
	int32_t unmarshaled_badge_temp_3 = 0;
	unmarshaled_badge_temp_3 = marshaled.___badge_3;
	unmarshaled.set_badge_3(unmarshaled_badge_temp_3);
	unmarshaled.set_subtitle_4(il2cpp_codegen_marshal_bstring_result(marshaled.___subtitle_4));
	unmarshaled.set_categoryIdentifier_5(il2cpp_codegen_marshal_bstring_result(marshaled.___categoryIdentifier_5));
	unmarshaled.set_threadIdentifier_6(il2cpp_codegen_marshal_bstring_result(marshaled.___threadIdentifier_6));
	unmarshaled.set_data_7(il2cpp_codegen_marshal_bstring_result(marshaled.___data_7));
	bool unmarshaled_showInForeground_temp_8 = false;
	unmarshaled_showInForeground_temp_8 = static_cast<bool>(marshaled.___showInForeground_8);
	unmarshaled.set_showInForeground_8(unmarshaled_showInForeground_temp_8);
	int32_t unmarshaled_showInForegroundPresentationOptions_temp_9 = 0;
	unmarshaled_showInForegroundPresentationOptions_temp_9 = marshaled.___showInForegroundPresentationOptions_9;
	unmarshaled.set_showInForegroundPresentationOptions_9(unmarshaled_showInForegroundPresentationOptions_temp_9);
	int32_t unmarshaled_triggerType_temp_10 = 0;
	unmarshaled_triggerType_temp_10 = marshaled.___triggerType_10;
	unmarshaled.set_triggerType_10(unmarshaled_triggerType_temp_10);
	bool unmarshaled_repeats_temp_11 = false;
	unmarshaled_repeats_temp_11 = static_cast<bool>(marshaled.___repeats_11);
	unmarshaled.set_repeats_11(unmarshaled_repeats_temp_11);
	int32_t unmarshaled_timeTriggerInterval_temp_12 = 0;
	unmarshaled_timeTriggerInterval_temp_12 = marshaled.___timeTriggerInterval_12;
	unmarshaled.set_timeTriggerInterval_12(unmarshaled_timeTriggerInterval_temp_12);
	int32_t unmarshaled_calendarTriggerYear_temp_13 = 0;
	unmarshaled_calendarTriggerYear_temp_13 = marshaled.___calendarTriggerYear_13;
	unmarshaled.set_calendarTriggerYear_13(unmarshaled_calendarTriggerYear_temp_13);
	int32_t unmarshaled_calendarTriggerMonth_temp_14 = 0;
	unmarshaled_calendarTriggerMonth_temp_14 = marshaled.___calendarTriggerMonth_14;
	unmarshaled.set_calendarTriggerMonth_14(unmarshaled_calendarTriggerMonth_temp_14);
	int32_t unmarshaled_calendarTriggerDay_temp_15 = 0;
	unmarshaled_calendarTriggerDay_temp_15 = marshaled.___calendarTriggerDay_15;
	unmarshaled.set_calendarTriggerDay_15(unmarshaled_calendarTriggerDay_temp_15);
	int32_t unmarshaled_calendarTriggerHour_temp_16 = 0;
	unmarshaled_calendarTriggerHour_temp_16 = marshaled.___calendarTriggerHour_16;
	unmarshaled.set_calendarTriggerHour_16(unmarshaled_calendarTriggerHour_temp_16);
	int32_t unmarshaled_calendarTriggerMinute_temp_17 = 0;
	unmarshaled_calendarTriggerMinute_temp_17 = marshaled.___calendarTriggerMinute_17;
	unmarshaled.set_calendarTriggerMinute_17(unmarshaled_calendarTriggerMinute_temp_17);
	int32_t unmarshaled_calendarTriggerSecond_temp_18 = 0;
	unmarshaled_calendarTriggerSecond_temp_18 = marshaled.___calendarTriggerSecond_18;
	unmarshaled.set_calendarTriggerSecond_18(unmarshaled_calendarTriggerSecond_temp_18);
	float unmarshaled_locationTriggerCenterX_temp_19 = 0.0f;
	unmarshaled_locationTriggerCenterX_temp_19 = marshaled.___locationTriggerCenterX_19;
	unmarshaled.set_locationTriggerCenterX_19(unmarshaled_locationTriggerCenterX_temp_19);
	float unmarshaled_locationTriggerCenterY_temp_20 = 0.0f;
	unmarshaled_locationTriggerCenterY_temp_20 = marshaled.___locationTriggerCenterY_20;
	unmarshaled.set_locationTriggerCenterY_20(unmarshaled_locationTriggerCenterY_temp_20);
	float unmarshaled_locationTriggerRadius_temp_21 = 0.0f;
	unmarshaled_locationTriggerRadius_temp_21 = marshaled.___locationTriggerRadius_21;
	unmarshaled.set_locationTriggerRadius_21(unmarshaled_locationTriggerRadius_temp_21);
	bool unmarshaled_locationTriggerNotifyOnEntry_temp_22 = false;
	unmarshaled_locationTriggerNotifyOnEntry_temp_22 = static_cast<bool>(marshaled.___locationTriggerNotifyOnEntry_22);
	unmarshaled.set_locationTriggerNotifyOnEntry_22(unmarshaled_locationTriggerNotifyOnEntry_temp_22);
	bool unmarshaled_locationTriggerNotifyOnExit_temp_23 = false;
	unmarshaled_locationTriggerNotifyOnExit_temp_23 = static_cast<bool>(marshaled.___locationTriggerNotifyOnExit_23);
	unmarshaled.set_locationTriggerNotifyOnExit_23(unmarshaled_locationTriggerNotifyOnExit_temp_23);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshal_com_cleanup(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___identifier_0);
	marshaled.___identifier_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___title_1);
	marshaled.___title_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___body_2);
	marshaled.___body_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___subtitle_4);
	marshaled.___subtitle_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___categoryIdentifier_5);
	marshaled.___categoryIdentifier_5 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___threadIdentifier_6);
	marshaled.___threadIdentifier_6 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___data_7);
	marshaled.___data_7 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshal_pinvoke(const iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B& unmarshaled, iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CCenterU3Ek__BackingField_0 = unmarshaled.get_U3CCenterU3Ek__BackingField_0();
	marshaled.___U3CRadiusU3Ek__BackingField_1 = unmarshaled.get_U3CRadiusU3Ek__BackingField_1();
	marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnEntryU3Ek__BackingField_2());
	marshaled.___U3CNotifyOnExitU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnExitU3Ek__BackingField_3());
}
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshal_pinvoke_back(const iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshaled_pinvoke& marshaled, iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B& unmarshaled)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  unmarshaled_U3CCenterU3Ek__BackingField_temp_0;
	memset((&unmarshaled_U3CCenterU3Ek__BackingField_temp_0), 0, sizeof(unmarshaled_U3CCenterU3Ek__BackingField_temp_0));
	unmarshaled_U3CCenterU3Ek__BackingField_temp_0 = marshaled.___U3CCenterU3Ek__BackingField_0;
	unmarshaled.set_U3CCenterU3Ek__BackingField_0(unmarshaled_U3CCenterU3Ek__BackingField_temp_0);
	float unmarshaled_U3CRadiusU3Ek__BackingField_temp_1 = 0.0f;
	unmarshaled_U3CRadiusU3Ek__BackingField_temp_1 = marshaled.___U3CRadiusU3Ek__BackingField_1;
	unmarshaled.set_U3CRadiusU3Ek__BackingField_1(unmarshaled_U3CRadiusU3Ek__BackingField_temp_1);
	bool unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2 = false;
	unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2);
	unmarshaled.set_U3CNotifyOnEntryU3Ek__BackingField_2(unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2);
	bool unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3 = false;
	unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CNotifyOnExitU3Ek__BackingField_3);
	unmarshaled.set_U3CNotifyOnExitU3Ek__BackingField_3(unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshal_pinvoke_cleanup(iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshal_com(const iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B& unmarshaled, iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshaled_com& marshaled)
{
	marshaled.___U3CCenterU3Ek__BackingField_0 = unmarshaled.get_U3CCenterU3Ek__BackingField_0();
	marshaled.___U3CRadiusU3Ek__BackingField_1 = unmarshaled.get_U3CRadiusU3Ek__BackingField_1();
	marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnEntryU3Ek__BackingField_2());
	marshaled.___U3CNotifyOnExitU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnExitU3Ek__BackingField_3());
}
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshal_com_back(const iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshaled_com& marshaled, iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B& unmarshaled)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  unmarshaled_U3CCenterU3Ek__BackingField_temp_0;
	memset((&unmarshaled_U3CCenterU3Ek__BackingField_temp_0), 0, sizeof(unmarshaled_U3CCenterU3Ek__BackingField_temp_0));
	unmarshaled_U3CCenterU3Ek__BackingField_temp_0 = marshaled.___U3CCenterU3Ek__BackingField_0;
	unmarshaled.set_U3CCenterU3Ek__BackingField_0(unmarshaled_U3CCenterU3Ek__BackingField_temp_0);
	float unmarshaled_U3CRadiusU3Ek__BackingField_temp_1 = 0.0f;
	unmarshaled_U3CRadiusU3Ek__BackingField_temp_1 = marshaled.___U3CRadiusU3Ek__BackingField_1;
	unmarshaled.set_U3CRadiusU3Ek__BackingField_1(unmarshaled_U3CRadiusU3Ek__BackingField_temp_1);
	bool unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2 = false;
	unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2);
	unmarshaled.set_U3CNotifyOnEntryU3Ek__BackingField_2(unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2);
	bool unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3 = false;
	unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CNotifyOnExitU3Ek__BackingField_3);
	unmarshaled.set_U3CNotifyOnExitU3Ek__BackingField_3(unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshal_com_cleanup(iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshaled_com& marshaled)
{
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationLocationTrigger_get_Type_m61CA7CFA5959BAC4ECA26B18FB930A15DAA5C673 (const RuntimeMethod* method)
{
	{
		// public static int Type { get { return (int)NotificationTriggerType.LocationTrigger; } }
		return ((int32_t)20);
	}
}
// UnityEngine.Vector2 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  iOSNotificationLocationTrigger_get_Center_m4D05E6A08ACB04CB28161C053FD8F44264231912 (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 Center { get; set; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_U3CCenterU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  iOSNotificationLocationTrigger_get_Center_m4D05E6A08ACB04CB28161C053FD8F44264231912_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *>(__this + _offset);
	return iOSNotificationLocationTrigger_get_Center_m4D05E6A08ACB04CB28161C053FD8F44264231912_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationLocationTrigger::set_Center(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_Center_m6F15FBD9C1F80E458374DE4FBEEBEFCC4A8AC4F5 (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 Center { get; set; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_U3CCenterU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationLocationTrigger_set_Center_m6F15FBD9C1F80E458374DE4FBEEBEFCC4A8AC4F5_AdjustorThunk (RuntimeObject * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *>(__this + _offset);
	iOSNotificationLocationTrigger_set_Center_m6F15FBD9C1F80E458374DE4FBEEBEFCC4A8AC4F5_inline(_thisAdjusted, ___value0, method);
}
// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_m3A82BB3EC05917AB00B333AFACBEA418E958ECD2 (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method)
{
	{
		// public float Radius { get; set; }
		float L_0 = __this->get_U3CRadiusU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float iOSNotificationLocationTrigger_get_Radius_m3A82BB3EC05917AB00B333AFACBEA418E958ECD2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *>(__this + _offset);
	return iOSNotificationLocationTrigger_get_Radius_m3A82BB3EC05917AB00B333AFACBEA418E958ECD2_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationLocationTrigger::set_Radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_Radius_m402D36A5CB29B7E4555391D8DEB9B3D046DF9806 (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Radius { get; set; }
		float L_0 = ___value0;
		__this->set_U3CRadiusU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationLocationTrigger_set_Radius_m402D36A5CB29B7E4555391D8DEB9B3D046DF9806_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *>(__this + _offset);
	iOSNotificationLocationTrigger_set_Radius_m402D36A5CB29B7E4555391D8DEB9B3D046DF9806_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_m27A346EACD7DAA83BA26277B434FF7D29724748B (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnEntry { get; set; }
		bool L_0 = __this->get_U3CNotifyOnEntryU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationLocationTrigger_get_NotifyOnEntry_m27A346EACD7DAA83BA26277B434FF7D29724748B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *>(__this + _offset);
	return iOSNotificationLocationTrigger_get_NotifyOnEntry_m27A346EACD7DAA83BA26277B434FF7D29724748B_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationLocationTrigger::set_NotifyOnEntry(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_NotifyOnEntry_m380F16268DBC03C9FAAC68E8266F9C79D3EF807C (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnEntry { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CNotifyOnEntryU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationLocationTrigger_set_NotifyOnEntry_m380F16268DBC03C9FAAC68E8266F9C79D3EF807C_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *>(__this + _offset);
	iOSNotificationLocationTrigger_set_NotifyOnEntry_m380F16268DBC03C9FAAC68E8266F9C79D3EF807C_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_mEC495935D398A1BB7D8FBBA2E1974CAFE5871B2E (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnExit { get; set; }
		bool L_0 = __this->get_U3CNotifyOnExitU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationLocationTrigger_get_NotifyOnExit_mEC495935D398A1BB7D8FBBA2E1974CAFE5871B2E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *>(__this + _offset);
	return iOSNotificationLocationTrigger_get_NotifyOnExit_mEC495935D398A1BB7D8FBBA2E1974CAFE5871B2E_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationLocationTrigger::set_NotifyOnExit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_NotifyOnExit_mFD27788A506E149251F8878BB3E13C61D3797E76 (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnExit { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CNotifyOnExitU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationLocationTrigger_set_NotifyOnExit_mFD27788A506E149251F8878BB3E13C61D3797E76_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *>(__this + _offset);
	iOSNotificationLocationTrigger_set_NotifyOnExit_mFD27788A506E149251F8878BB3E13C61D3797E76_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshal_pinvoke(const iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880& unmarshaled, iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshaled_pinvoke& marshaled)
{
	marshaled.___timeInterval_0 = unmarshaled.get_timeInterval_0();
	marshaled.___U3CRepeatsU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.get_U3CRepeatsU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshal_pinvoke_back(const iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshaled_pinvoke& marshaled, iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880& unmarshaled)
{
	int32_t unmarshaled_timeInterval_temp_0 = 0;
	unmarshaled_timeInterval_temp_0 = marshaled.___timeInterval_0;
	unmarshaled.set_timeInterval_0(unmarshaled_timeInterval_temp_0);
	bool unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = false;
	unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CRepeatsU3Ek__BackingField_1);
	unmarshaled.set_U3CRepeatsU3Ek__BackingField_1(unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshal_pinvoke_cleanup(iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshal_com(const iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880& unmarshaled, iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshaled_com& marshaled)
{
	marshaled.___timeInterval_0 = unmarshaled.get_timeInterval_0();
	marshaled.___U3CRepeatsU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.get_U3CRepeatsU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshal_com_back(const iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshaled_com& marshaled, iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880& unmarshaled)
{
	int32_t unmarshaled_timeInterval_temp_0 = 0;
	unmarshaled_timeInterval_temp_0 = marshaled.___timeInterval_0;
	unmarshaled.set_timeInterval_0(unmarshaled_timeInterval_temp_0);
	bool unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = false;
	unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CRepeatsU3Ek__BackingField_1);
	unmarshaled.set_U3CRepeatsU3Ek__BackingField_1(unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshal_com_cleanup(iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshaled_com& marshaled)
{
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationTimeIntervalTrigger_get_Type_mA894BD36E9678962F7730E775C311D7D64BBF741 (const RuntimeMethod* method)
{
	{
		// public static int Type { get { return (int)NotificationTriggerType.TimeTrigger; } }
		return 0;
	}
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Repeats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_m553B7BA7CB3EC71AC52B595CABC7E28C6C3B6785 (iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationTimeIntervalTrigger_get_Repeats_m553B7BA7CB3EC71AC52B595CABC7E28C6C3B6785_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * _thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 *>(__this + _offset);
	return iOSNotificationTimeIntervalTrigger_get_Repeats_m553B7BA7CB3EC71AC52B595CABC7E28C6C3B6785_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_Repeats(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_Repeats_m71EC709D73254781134CFDC74D50AB32D45FD6E6 (iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRepeatsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationTimeIntervalTrigger_set_Repeats_m71EC709D73254781134CFDC74D50AB32D45FD6E6_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * _thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 *>(__this + _offset);
	iOSNotificationTimeIntervalTrigger_set_Repeats_m71EC709D73254781134CFDC74D50AB32D45FD6E6_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_AuthorizationRequestReceived_m7F2E5560B9F9BE57CDA06FCAFEE18C307C485AB0(intptr_t ___authRequestDataPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	iOSNotificationsWrapper_AuthorizationRequestReceived_m7F2E5560B9F9BE57CDA06FCAFEE18C307C485AB0(___authRequestDataPtr0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_RemoteNotificationReceived_m631F99C037407B7D5D646444F7612E710930A1F4(intptr_t ___notificationDataPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	iOSNotificationsWrapper_RemoteNotificationReceived_m631F99C037407B7D5D646444F7612E710930A1F4(___notificationDataPtr0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_NotificationReceived_mC2D919DE6267392194C686717D7C804D08644A12(intptr_t ___notificationDataPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	iOSNotificationsWrapper_NotificationReceived_mC2D919DE6267392194C686717D7C804D08644A12(___notificationDataPtr0, NULL);

}
IL2CPP_EXTERN_C void DEFAULT_CALL _RequestAuthorization(int32_t, int32_t);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RequestAuthorization(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RequestAuthorization_m8DF46B9A6080C8FBFF02ECAB676CBAF7D4D82151 (int32_t ___options0, bool ___registerForRemote1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RequestAuthorization)(___options0, static_cast<int32_t>(___registerForRemote1));

}
IL2CPP_EXTERN_C void DEFAULT_CALL _ScheduleLocalNotification(intptr_t);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ScheduleLocalNotification(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ScheduleLocalNotification_m462F1830356A8BA69660AB55D93480F3A105CE10 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ScheduleLocalNotification)(___ptr0);

}
IL2CPP_EXTERN_C void DEFAULT_CALL _SetNotificationReceivedDelegate(Il2CppMethodPointer);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetNotificationReceivedDelegate_m1C85EF0F0D9B458164770D439C9EB9D879DBD75D (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetNotificationReceivedDelegate)(____callback0_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL _SetRemoteNotificationReceivedDelegate(Il2CppMethodPointer);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetRemoteNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_m0C181C556508C1765607E19BA745BA9C42E30238 (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetRemoteNotificationReceivedDelegate)(____callback0_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL _SetAuthorizationRequestReceivedDelegate(Il2CppMethodPointer);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetAuthorizationRequestReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper_AuthorizationRequestCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_m7C9734970A76C95B94B430D3761A44BECFD2C0C1 (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetAuthorizationRequestReceivedDelegate)(____callback0_marshaled);

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetNotificationSettings();
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetNotificationSettings_mF2235DE6CB20FAFC84D8B1C8EE950D2E12438BB8 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetNotificationSettings)();

	return returnValue;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetScheduledNotificationDataCount();
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetScheduledNotificationDataCount_m2EFD36D7DE8D23F9E93878A2A3C2D8BBBBB682D5 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetScheduledNotificationDataCount)();

	return returnValue;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetScheduledNotificationDataAt(int32_t);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetScheduledNotificationDataAt_m4060614F439799024B12356E234D1FD40FB4165D (int32_t ___index0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetScheduledNotificationDataAt)(___index0);

	return returnValue;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetDeliveredNotificationDataCount();
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetDeliveredNotificationDataCount_m872EAAB29C5F413B0BD2CA28DC967DFB0C5760BC (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetDeliveredNotificationDataCount)();

	return returnValue;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetDeliveredNotificationDataAt(int32_t);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetDeliveredNotificationDataAt_m1BB836C8E81AA0F97F973230E91BF27AF9685434 (int32_t ___index0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetDeliveredNotificationDataAt)(___index0);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveScheduledNotification(char*);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveScheduledNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveScheduledNotification_m097B0FA4E2EA84C89378923546AF919C2A647AAB (String_t* ___identifier0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___identifier0' to native representation
	char* ____identifier0_marshaled = NULL;
	____identifier0_marshaled = il2cpp_codegen_marshal_string(___identifier0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveScheduledNotification)(____identifier0_marshaled);

	// Marshaling cleanup of parameter '___identifier0' native representation
	il2cpp_codegen_marshal_free(____identifier0_marshaled);
	____identifier0_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveAllScheduledNotifications();
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllScheduledNotifications_m5756666E06D8A8563E9D54393CCFCD649F159E23 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveAllScheduledNotifications)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveDeliveredNotification(char*);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveDeliveredNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveDeliveredNotification_m22B6DB909C0353FA88B7E3AC704E24A9BED456DE (String_t* ___identifier0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___identifier0' to native representation
	char* ____identifier0_marshaled = NULL;
	____identifier0_marshaled = il2cpp_codegen_marshal_string(___identifier0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveDeliveredNotification)(____identifier0_marshaled);

	// Marshaling cleanup of parameter '___identifier0' native representation
	il2cpp_codegen_marshal_free(____identifier0_marshaled);
	____identifier0_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL _SetApplicationBadge(int32_t);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetApplicationBadge_m7F83AC24BDB131F88C24235DCFFAD3D0308D3ED6 (int32_t ___badge0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetApplicationBadge)(___badge0);

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetApplicationBadge();
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetApplicationBadge_m54921F73B902FD66F4728D24221A23EA4EE5CBE2 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetApplicationBadge)();

	return returnValue;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetAppOpenedUsingNotification();
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::_GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper__GetAppOpenedUsingNotification_m837C105BA7E5119BDBFA6D5B6E057F36C0801FF6 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetAppOpenedUsingNotification)();

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveAllDeliveredNotifications();
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllDeliveredNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllDeliveredNotifications_mE6F7B5312775E5FD75EBE47533CF49CDB8D40AC3 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveAllDeliveredNotifications)();

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetLastNotificationData();
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetLastNotificationData_mC2B1CE929E33E5B1DE5F10D196477C6086E36FA6 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetLastNotificationData)();

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL _FreeUnmanagedMemory(intptr_t);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_FreeUnmanagedMemory(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__FreeUnmanagedMemory_mCE7F5B006A7189E45E69CBC5BD565946EFDDBEBD (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_FreeUnmanagedMemory)(___ptr0);

}
IL2CPP_EXTERN_C void DEFAULT_CALL _FreeUnmanagediOSNotificationData(intptr_t);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_FreeUnmanagediOSNotificationData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__FreeUnmanagediOSNotificationData_mDDA7B640AE47E22B1CDCEAF38CCD584389A84391 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_FreeUnmanagediOSNotificationData)(___ptr0);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterAuthorizationRequestCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_m43EF54AE21C110C96BAA663A55B1AB9D0DC05A50 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_m43EF54AE21C110C96BAA663A55B1AB9D0DC05A50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_OnAuthenticationRequestFinished = new AuthorizationRequestCallback(AuthorizationRequestReceived);
		AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * L_0 = (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA *)il2cpp_codegen_object_new(AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA_il2cpp_TypeInfo_var);
		AuthorizationRequestCallback__ctor_mDCF725389FF9BD835D0CD2B4FEFE940221045C62(L_0, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_AuthorizationRequestReceived_m7F2E5560B9F9BE57CDA06FCAFEE18C307C485AB0_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		((iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var))->set_s_OnAuthenticationRequestFinished_4(L_0);
		// _SetAuthorizationRequestReceivedDelegate(s_OnAuthenticationRequestFinished);
		AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * L_1 = ((iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var))->get_s_OnAuthenticationRequestFinished_4();
		iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_m7C9734970A76C95B94B430D3761A44BECFD2C0C1(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedRemoteNotificationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedRemoteNotificationCallback_mDDF1C0EFD9CCA00E67BD0157BED6FE83AA298886 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_RegisterOnReceivedRemoteNotificationCallback_mDDF1C0EFD9CCA00E67BD0157BED6FE83AA298886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_OnRemoteNotificationReceived = new NotificationReceivedCallback(RemoteNotificationReceived);
		NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * L_0 = (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 *)il2cpp_codegen_object_new(NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_m7ADF7B8AC2EE11962C4ECA1A70B0EA7C2660A1CD(L_0, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_RemoteNotificationReceived_m631F99C037407B7D5D646444F7612E710930A1F4_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		((iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var))->set_s_OnRemoteNotificationReceived_6(L_0);
		// _SetRemoteNotificationReceivedDelegate(s_OnRemoteNotificationReceived);
		NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * L_1 = ((iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var))->get_s_OnRemoteNotificationReceived_6();
		iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_m0C181C556508C1765607E19BA745BA9C42E30238(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedCallback_mD39562B21E6DD6A95C1B106B1AB1CBD995597900 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_RegisterOnReceivedCallback_mD39562B21E6DD6A95C1B106B1AB1CBD995597900_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_OnNotificationReceived = new NotificationReceivedCallback(NotificationReceived);
		NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * L_0 = (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 *)il2cpp_codegen_object_new(NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_m7ADF7B8AC2EE11962C4ECA1A70B0EA7C2660A1CD(L_0, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_NotificationReceived_mC2D919DE6267392194C686717D7C804D08644A12_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		((iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var))->set_s_OnNotificationReceived_5(L_0);
		// _SetNotificationReceivedDelegate(s_OnNotificationReceived);
		NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * L_1 = ((iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var))->get_s_OnNotificationReceived_5();
		iOSNotificationsWrapper__SetNotificationReceivedDelegate_m1C85EF0F0D9B458164770D439C9EB9D879DBD75D(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::AuthorizationRequestReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_AuthorizationRequestReceived_m7F2E5560B9F9BE57CDA06FCAFEE18C307C485AB0 (intptr_t ___authRequestDataPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_AuthorizationRequestReceived_m7F2E5560B9F9BE57CDA06FCAFEE18C307C485AB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// data = (iOSAuthorizationRequestData)Marshal.PtrToStructure(authRequestDataPtr, typeof(iOSAuthorizationRequestData));
		intptr_t L_0 = ___authRequestDataPtr0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = Marshal_PtrToStructure_mE1821119EAFE83614B6A16D3F14996713502DF43((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// iOSNotificationCenter.OnFinishedAuthorizationRequest(data);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		iOSNotificationCenter_OnFinishedAuthorizationRequest_m27E8E4AD441434D0F04CA34298E404DC9717B695(((*(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6 *)((iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6 *)UnBox(L_3, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RemoteNotificationReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RemoteNotificationReceived_m631F99C037407B7D5D646444F7612E710930A1F4 (intptr_t ___notificationDataPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_RemoteNotificationReceived_m631F99C037407B7D5D646444F7612E710930A1F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// data = (iOSNotificationData)Marshal.PtrToStructure(notificationDataPtr, typeof(iOSNotificationData));
		intptr_t L_0 = ___notificationDataPtr0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = Marshal_PtrToStructure_mE1821119EAFE83614B6A16D3F14996713502DF43((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// iOSNotificationCenter.OnReceivedRemoteNotification(data);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		iOSNotificationCenter_OnReceivedRemoteNotification_mF618D4C4BF6CC24854F7A5E319D225B48C6667F0(((*(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)((iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)UnBox(L_3, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_NotificationReceived_mC2D919DE6267392194C686717D7C804D08644A12 (intptr_t ___notificationDataPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_NotificationReceived_mC2D919DE6267392194C686717D7C804D08644A12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// data = (iOSNotificationData)Marshal.PtrToStructure(notificationDataPtr, typeof(iOSNotificationData));
		intptr_t L_0 = ___notificationDataPtr0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = Marshal_PtrToStructure_mE1821119EAFE83614B6A16D3F14996713502DF43((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// iOSNotificationCenter.OnSentNotification(data);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		iOSNotificationCenter_OnSentNotification_m643A50BA43CFAE9E890279AA63C2D923919DC12C(((*(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)((iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)UnBox(L_3, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RequestAuthorization(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RequestAuthorization_m17C4DA43EFBCA21F606E918B8311DC810511EB2E (int32_t ___options0, bool ___registerRemote1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_RequestAuthorization_m17C4DA43EFBCA21F606E918B8311DC810511EB2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _RequestAuthorization(options, registerRemote);
		int32_t L_0 = ___options0;
		bool L_1 = ___registerRemote1;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper__RequestAuthorization_m8DF46B9A6080C8FBFF02ECAB676CBAF7D4D82151(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationSettings Unity.Notifications.iOS.iOSNotificationsWrapper::GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0  iOSNotificationsWrapper_GetNotificationSettings_m2EF48F45F4214C512AB7B831E235E43E3D45EEB7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_GetNotificationSettings_m2EF48F45F4214C512AB7B831E235E43E3D45EEB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// IntPtr ptr = _GetNotificationSettings();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		intptr_t L_0 = iOSNotificationsWrapper__GetNotificationSettings_mF2235DE6CB20FAFC84D8B1C8EE950D2E12438BB8(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		// settings = (iOSNotificationSettings)Marshal.PtrToStructure(ptr, typeof(iOSNotificationSettings));
		intptr_t L_1 = V_0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_4 = Marshal_PtrToStructure_mE1821119EAFE83614B6A16D3F14996713502DF43((intptr_t)L_1, L_3, /*hidden argument*/NULL);
		// _FreeUnmanagedMemory(ptr);
		intptr_t L_5 = V_0;
		iOSNotificationsWrapper__FreeUnmanagedMemory_mCE7F5B006A7189E45E69CBC5BD565946EFDDBEBD((intptr_t)L_5, /*hidden argument*/NULL);
		// return settings;
		return ((*(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0 *)((iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0 *)UnBox(L_4, iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0_il2cpp_TypeInfo_var))));
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ScheduleLocalNotification_m6D11AC2A87A08FE4A282B02354F2041B49793607 (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_ScheduleLocalNotification_m6D11AC2A87A08FE4A282B02354F2041B49793607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// IntPtr ptr = Marshal.AllocHGlobal(Marshal.SizeOf(data));
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_0 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_1 = Marshal_SizeOf_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_m06C18A11B6253261325A4EC6C30A68F9EC8521FC(L_0, /*hidden argument*/Marshal_SizeOf_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_m06C18A11B6253261325A4EC6C30A68F9EC8521FC_RuntimeMethod_var);
		intptr_t L_2 = Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58(L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		// Marshal.StructureToPtr(data, ptr, false);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_3 = ___data0;
		intptr_t L_4 = V_0;
		Marshal_StructureToPtr_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_m2F3A206D37954311DCFFBC6D6161A56EFAE6B8C7(L_3, (intptr_t)L_4, (bool)0, /*hidden argument*/Marshal_StructureToPtr_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_m2F3A206D37954311DCFFBC6D6161A56EFAE6B8C7_RuntimeMethod_var);
		// _ScheduleLocalNotification(ptr);
		intptr_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper__ScheduleLocalNotification_m462F1830356A8BA69660AB55D93480F3A105CE10((intptr_t)L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationData[] Unity.Notifications.iOS.iOSNotificationsWrapper::GetDeliveredNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* iOSNotificationsWrapper_GetDeliveredNotificationData_m6CD497233458F93AD76535CD43409084B75FBB60 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_GetDeliveredNotificationData_m6CD497233458F93AD76535CD43409084B75FBB60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t74490A14DE1B801705191886C6038E212F513DF3 * V_1 = NULL;
	int32_t V_2 = 0;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var size = _GetDeliveredNotificationDataCount();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		int32_t L_0 = iOSNotificationsWrapper__GetDeliveredNotificationDataCount_m872EAAB29C5F413B0BD2CA28DC967DFB0C5760BC(/*hidden argument*/NULL);
		V_0 = L_0;
		// var dataList = new List<iOSNotificationData>();
		List_1_t74490A14DE1B801705191886C6038E212F513DF3 * L_1 = (List_1_t74490A14DE1B801705191886C6038E212F513DF3 *)il2cpp_codegen_object_new(List_1_t74490A14DE1B801705191886C6038E212F513DF3_il2cpp_TypeInfo_var);
		List_1__ctor_mE3332C8E2419FA39E7D4F53A9C45F538FF8B7739(L_1, /*hidden argument*/List_1__ctor_mE3332C8E2419FA39E7D4F53A9C45F538FF8B7739_RuntimeMethod_var);
		V_1 = L_1;
		// for (var i = 0; i < size; i++)
		V_2 = 0;
		goto IL_004f;
	}

IL_0010:
	{
		// IntPtr ptr = _GetDeliveredNotificationDataAt(i);
		int32_t L_2 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		intptr_t L_3 = iOSNotificationsWrapper__GetDeliveredNotificationDataAt_m1BB836C8E81AA0F97F973230E91BF27AF9685434(L_2, /*hidden argument*/NULL);
		V_4 = (intptr_t)L_3;
		// if (ptr != IntPtr.Zero)
		intptr_t L_4 = V_4;
		bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// data = (iOSNotificationData)Marshal.PtrToStructure(ptr, typeof(iOSNotificationData));
		intptr_t L_6 = V_4;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_9 = Marshal_PtrToStructure_mE1821119EAFE83614B6A16D3F14996713502DF43((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		V_3 = ((*(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)((iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)UnBox(L_9, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_il2cpp_TypeInfo_var))));
		// dataList.Add(data);
		List_1_t74490A14DE1B801705191886C6038E212F513DF3 * L_10 = V_1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_11 = V_3;
		NullCheck(L_10);
		List_1_Add_mEFE827AEC936B5E526A09D7EA8DDB88EDD49F974(L_10, L_11, /*hidden argument*/List_1_Add_mEFE827AEC936B5E526A09D7EA8DDB88EDD49F974_RuntimeMethod_var);
		// _FreeUnmanagediOSNotificationData(ptr);
		intptr_t L_12 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper__FreeUnmanagediOSNotificationData_mDDA7B640AE47E22B1CDCEAF38CCD584389A84391((intptr_t)L_12, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// for (var i = 0; i < size; i++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004f:
	{
		// for (var i = 0; i < size; i++)
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0010;
		}
	}
	{
		// return dataList.ToArray();
		List_1_t74490A14DE1B801705191886C6038E212F513DF3 * L_16 = V_1;
		NullCheck(L_16);
		iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* L_17 = List_1_ToArray_mD5E1662591170D0B2A4E53979AC955514765646A(L_16, /*hidden argument*/List_1_ToArray_mD5E1662591170D0B2A4E53979AC955514765646A_RuntimeMethod_var);
		return L_17;
	}
}
// Unity.Notifications.iOS.iOSNotificationData[] Unity.Notifications.iOS.iOSNotificationsWrapper::GetScheduledNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* iOSNotificationsWrapper_GetScheduledNotificationData_m9703F377E5207667BB79C5556B39BC734DECAF51 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_GetScheduledNotificationData_m9703F377E5207667BB79C5556B39BC734DECAF51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t74490A14DE1B801705191886C6038E212F513DF3 * V_1 = NULL;
	int32_t V_2 = 0;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var size = _GetScheduledNotificationDataCount();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		int32_t L_0 = iOSNotificationsWrapper__GetScheduledNotificationDataCount_m2EFD36D7DE8D23F9E93878A2A3C2D8BBBBB682D5(/*hidden argument*/NULL);
		V_0 = L_0;
		// var dataList = new List<iOSNotificationData>();
		List_1_t74490A14DE1B801705191886C6038E212F513DF3 * L_1 = (List_1_t74490A14DE1B801705191886C6038E212F513DF3 *)il2cpp_codegen_object_new(List_1_t74490A14DE1B801705191886C6038E212F513DF3_il2cpp_TypeInfo_var);
		List_1__ctor_mE3332C8E2419FA39E7D4F53A9C45F538FF8B7739(L_1, /*hidden argument*/List_1__ctor_mE3332C8E2419FA39E7D4F53A9C45F538FF8B7739_RuntimeMethod_var);
		V_1 = L_1;
		// for (var i = 0; i < size; i++)
		V_2 = 0;
		goto IL_004f;
	}

IL_0010:
	{
		// IntPtr ptr = _GetScheduledNotificationDataAt(i);
		int32_t L_2 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		intptr_t L_3 = iOSNotificationsWrapper__GetScheduledNotificationDataAt_m4060614F439799024B12356E234D1FD40FB4165D(L_2, /*hidden argument*/NULL);
		V_4 = (intptr_t)L_3;
		// if (ptr != IntPtr.Zero)
		intptr_t L_4 = V_4;
		bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// data = (iOSNotificationData)Marshal.PtrToStructure(ptr, typeof(iOSNotificationData));
		intptr_t L_6 = V_4;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_9 = Marshal_PtrToStructure_mE1821119EAFE83614B6A16D3F14996713502DF43((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		V_3 = ((*(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)((iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)UnBox(L_9, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_il2cpp_TypeInfo_var))));
		// dataList.Add(data);
		List_1_t74490A14DE1B801705191886C6038E212F513DF3 * L_10 = V_1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_11 = V_3;
		NullCheck(L_10);
		List_1_Add_mEFE827AEC936B5E526A09D7EA8DDB88EDD49F974(L_10, L_11, /*hidden argument*/List_1_Add_mEFE827AEC936B5E526A09D7EA8DDB88EDD49F974_RuntimeMethod_var);
		// _FreeUnmanagediOSNotificationData(ptr);
		intptr_t L_12 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper__FreeUnmanagediOSNotificationData_mDDA7B640AE47E22B1CDCEAF38CCD584389A84391((intptr_t)L_12, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// for (var i = 0; i < size; i++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004f:
	{
		// for (var i = 0; i < size; i++)
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0010;
		}
	}
	{
		// return dataList.ToArray();
		List_1_t74490A14DE1B801705191886C6038E212F513DF3 * L_16 = V_1;
		NullCheck(L_16);
		iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* L_17 = List_1_ToArray_mD5E1662591170D0B2A4E53979AC955514765646A(L_16, /*hidden argument*/List_1_ToArray_mD5E1662591170D0B2A4E53979AC955514765646A_RuntimeMethod_var);
		return L_17;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_SetApplicationBadge_m2B9781A9280B20BAF93C84C10360158948EF6DD9 (int32_t ___badge0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_SetApplicationBadge_m2B9781A9280B20BAF93C84C10360158948EF6DD9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _SetApplicationBadge(badge);
		int32_t L_0 = ___badge0;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper__SetApplicationBadge_m7F83AC24BDB131F88C24235DCFFAD3D0308D3ED6(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper_GetApplicationBadge_m14C281B1CE64821FF864959DCA59C11D24E9CFCA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_GetApplicationBadge_m14C281B1CE64821FF864959DCA59C11D24E9CFCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _GetApplicationBadge();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		int32_t L_0 = iOSNotificationsWrapper__GetApplicationBadge_m54921F73B902FD66F4728D24221A23EA4EE5CBE2(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper_GetAppOpenedUsingNotification_mE1A4A15076997D1F54E22DB720C141434BAB0075 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_GetAppOpenedUsingNotification_mE1A4A15076997D1F54E22DB720C141434BAB0075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _GetAppOpenedUsingNotification();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		bool L_0 = iOSNotificationsWrapper__GetAppOpenedUsingNotification_m837C105BA7E5119BDBFA6D5B6E057F36C0801FF6(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData> Unity.Notifications.iOS.iOSNotificationsWrapper::GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D  iOSNotificationsWrapper_GetLastNotificationData_mA15D919959941DAB58C4CF58C957FE250919C1F4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_GetLastNotificationData_mA15D919959941DAB58C4CF58C957FE250919C1F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (_GetAppOpenedUsingNotification())
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		bool L_0 = iOSNotificationsWrapper__GetAppOpenedUsingNotification_m837C105BA7E5119BDBFA6D5B6E057F36C0801FF6(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		// IntPtr ptr = _GetLastNotificationData();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		intptr_t L_1 = iOSNotificationsWrapper__GetLastNotificationData_mC2B1CE929E33E5B1DE5F10D196477C6086E36FA6(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		// if (ptr != IntPtr.Zero)
		intptr_t L_2 = V_0;
		bool L_3 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// data = (iOSNotificationData)Marshal.PtrToStructure(ptr, typeof(iOSNotificationData));
		intptr_t L_4 = V_0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_7 = Marshal_PtrToStructure_mE1821119EAFE83614B6A16D3F14996713502DF43((intptr_t)L_4, L_6, /*hidden argument*/NULL);
		// _FreeUnmanagediOSNotificationData(ptr);
		intptr_t L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper__FreeUnmanagediOSNotificationData_mDDA7B640AE47E22B1CDCEAF38CCD584389A84391((intptr_t)L_8, /*hidden argument*/NULL);
		// return data;
		Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m08DA7F41D7EC820C2C3C8F282BBE6F291E82EBAF((&L_9), ((*(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)((iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)UnBox(L_7, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_il2cpp_TypeInfo_var)))), /*hidden argument*/Nullable_1__ctor_m08DA7F41D7EC820C2C3C8F282BBE6F291E82EBAF_RuntimeMethod_var);
		return L_9;
	}

IL_003b:
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D ));
		Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D  L_10 = V_1;
		return L_10;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ctor_m68125E9972F47814821495471B29A521DE532EE6 (iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__cctor_m7042D592877A51DD1FF0C3CE1ACBCF66301D9CF2 (const RuntimeMethod* method)
{
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * __this, intptr_t ___authdata0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___authdata0);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper_AuthorizationRequestCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback__ctor_mDCF725389FF9BD835D0CD2B4FEFE940221045C62 (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper_AuthorizationRequestCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback_Invoke_m0B7A635CDF877F2BE5860809E8C51BCE3B00B661 (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * __this, intptr_t ___authdata0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___authdata0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___authdata0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___authdata0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___authdata0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___authdata0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___authdata0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___authdata0) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___authdata0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationsWrapper_AuthorizationRequestCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthorizationRequestCallback_BeginInvoke_m004394767BA4610AF82D9A667C1D8EF523A9A031 (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * __this, intptr_t ___authdata0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthorizationRequestCallback_BeginInvoke_m004394767BA4610AF82D9A667C1D8EF523A9A031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___authdata0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper_AuthorizationRequestCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback_EndInvoke_m84D1635F3FFF5547E4784BE864F82A87E0249657 (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * __this, intptr_t ___notificationData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___notificationData0);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m7ADF7B8AC2EE11962C4ECA1A70B0EA7C2660A1CD (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m9FB2CAE4F39228AD8C03DD0A0FC93984AB20A35E (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * __this, intptr_t ___notificationData0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notificationData0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___notificationData0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___notificationData0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___notificationData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___notificationData0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___notificationData0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___notificationData0) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___notificationData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationReceivedCallback_BeginInvoke_mC1BFA471F65747F19776BB85F231062859C040B7 (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * __this, intptr_t ___notificationData0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NotificationReceivedCallback_BeginInvoke_mC1BFA471F65747F19776BB85F231062859C040B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___notificationData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_EndInvoke_mF5FB197CF219B5D48E613C5C69EB9244FD3E94A7 (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_m553B7BA7CB3EC71AC52B595CABC7E28C6C3B6785_inline (iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Year_m412D54C7600F3B5E15210ED19760D5ECF1784B5A_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Year { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CYearU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Month_m0970922AF4050BC478C7F0947A2C07CB750BC672_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Month { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CMonthU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Day_mB86BB81DA1863B3325B582606433233DA381ED20_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Day { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CDayU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Hour_m7D8C898AA95C8C006DB5689CB1A0BD0A48296F14_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Hour { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CHourU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Minute_m9EAB1A013C605CFA791D72C2A38D29EF649DDB24_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Minute { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CMinuteU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Second_mA6B65A993AE13E363001AD9AAA03F82FDA4FDC2F_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Second { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CSecondU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_m222CC0DCE6A2102FD4D2932D7F461E4364E3A51B_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  iOSNotificationLocationTrigger_get_Center_m4D05E6A08ACB04CB28161C053FD8F44264231912_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 Center { get; set; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_U3CCenterU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_m27A346EACD7DAA83BA26277B434FF7D29724748B_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnEntry { get; set; }
		bool L_0 = __this->get_U3CNotifyOnEntryU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_mEC495935D398A1BB7D8FBBA2E1974CAFE5871B2E_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnExit { get; set; }
		bool L_0 = __this->get_U3CNotifyOnExitU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_m3A82BB3EC05917AB00B333AFACBEA418E958ECD2_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method)
{
	{
		// public float Radius { get; set; }
		float L_0 = __this->get_U3CRadiusU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_Repeats_m71EC709D73254781134CFDC74D50AB32D45FD6E6_inline (iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRepeatsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Year_m8994CC0B661584537B0C1EFED662931CB0FEC6B7_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Year { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = ___value0;
		__this->set_U3CYearU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Month_m36C3BE781E8EFC01E7B47ED412C8F3C452D0C814_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Month { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = ___value0;
		__this->set_U3CMonthU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Day_m19E9226FD018CFED98C939020FFC9E5CF485A1DF_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Day { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = ___value0;
		__this->set_U3CDayU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Hour_m27EB1ADD0D88D83D07710FE952ABB0599AABB125_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Hour { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = ___value0;
		__this->set_U3CHourU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Minute_mD26C58058E85ED21CED944F45F5D59BCBDCA04D8_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Minute { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = ___value0;
		__this->set_U3CMinuteU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Second_m4E9FA97F8D36DD7030729886BC544847EBFC2570_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Second { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = ___value0;
		__this->set_U3CSecondU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Repeats_mDC3A21089DDCD35B8439E40ED63BF80CF4A48DA7_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRepeatsU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_Center_m6F15FBD9C1F80E458374DE4FBEEBEFCC4A8AC4F5_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 Center { get; set; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_U3CCenterU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_Radius_m402D36A5CB29B7E4555391D8DEB9B3D046DF9806_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Radius { get; set; }
		float L_0 = ___value0;
		__this->set_U3CRadiusU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_NotifyOnEntry_m380F16268DBC03C9FAAC68E8266F9C79D3EF807C_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnEntry { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CNotifyOnEntryU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_NotifyOnExit_mFD27788A506E149251F8878BB3E13C61D3797E76_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnExit { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CNotifyOnExitU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mA8DDD3E8230E283F4AB52903C6D81B419EA5576A_gshared_inline (Nullable_1_t1838CEFF185E620EE1B0165419FEDEEE8CD5B74D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}

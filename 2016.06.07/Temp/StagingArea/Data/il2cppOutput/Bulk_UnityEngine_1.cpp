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

struct t2419026222;
struct String_t;
struct Il2CppObject;
struct t2735179568;
struct t15911466;
struct t2442207934;
struct t1053511764;
struct t2829571008;
struct t2829571008_marshaled_pinvoke;
struct t224878301;
struct t3037427797;
struct t3188879111;
struct t1558446791;
struct t1145979430;
struct t3632007997;
struct t2828800938;
struct t3011942582;
struct t1717981302;
struct t1717981302_marshaled_pinvoke;
struct t1871166592;
struct t379027929;
struct t1518686560;
struct t1518686560_marshaled_pinvoke;
struct t2532277353;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "Il2CppArray.h"
#include "t2419026222.h"
#include "t2419026222MD.h"
#include "t2799814243.h"
#include "t1145342165MD.h"
#include "t1424128202.h"
#include "t1424128202MD.h"
#include "String_t.h"
#include "t465617797.h"
#include "t465617797MD.h"
#include "t83606849.h"
#include "t83606849MD.h"
#include "t3948796098.h"
#include "t3948796098MD.h"
#include "String_tMD.h"
#include "t2735179568MD.h"
#include "t2735179568.h"
#include "t1448170597.h"
#include "t3143194569.h"
#include "Il2CppObject.h"
#include "t2320721629MD.h"
#include "t2393427626MD.h"
#include "t1145979430.h"
#include "t2393427626.h"
#include "t2320721629.h"
#include "t1145979430MD.h"
#include "Type_t.h"
#include "MemberInfo_tMD.h"
#include "MemberInfo_t.h"
#include "mscorlib_ArrayTypes.h"
#include "t3633234117.h"
#include "t1448170597MD.h"
#include "t121709228.h"
#include "t591550820.h"
#include "t1994030457.h"
#include "t121709228MD.h"
#include "Type_tMD.h"
#include "t591550820MD.h"
#include "t1994030457MD.h"
#include "t15911466.h"
#include "t15911466MD.h"
#include "t496496229MD.h"
#include "t2442207934.h"
#include "t3342076411.h"
#include "t1053511764.h"
#include "t465682066.h"
#include "t465682066MD.h"
#include "t2829571008.h"
#include "t2829571008MD.h"
#include "IntPtr_tMD.h"
#include "IntPtr_t.h"
#include "t224878301.h"
#include "t224878301MD.h"
#include "t3188879111MD.h"
#include "t3188879111.h"
#include "Il2CppObjectMD.h"
#include "t1558446791.h"
#include "t1558446791MD.h"
#include "t2421250917.h"
#include "t2421250917MD.h"
#include "t465617798.h"
#include "t465617798MD.h"
#include "t1791520093.h"
#include "t1791520093MD.h"
#include "t2828800938.h"
#include "t2828800938MD.h"
#include "t1518686560MD.h"
#include "t3011942582.h"
#include "t3011942582MD.h"
#include "t1717981302.h"
#include "t1717981302MD.h"
#include "t1871166592.h"
#include "t1871166592MD.h"
#include "t379027929.h"
#include "t379027929MD.h"
#include "t1518686560.h"
#include "t4176747441.h"
#include "t4176747441MD.h"
#include "t3531092197MD.h"
#include "t2532277353.h"
#include "t2532277353MD.h"
#include "t833924248.h"
#include "t285998070MD.h"
#include "t285998070.h"
#include "t833924248MD.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void m1221241062 (t2419026222 * __this, const MethodInfo* method)
{
	{
		m1730479323(__this, NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
extern "C" void t1424128202_marshal_pinvoke(const t1424128202& unmarshaled, t1424128202_marshaled_pinvoke& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.fg0());
	t465617797_marshal_pinvoke(unmarshaled.fg1(), marshaled.f1);
	t83606849_marshal_pinvoke(unmarshaled.fg2(), marshaled.f2);
	t465617797_marshal_pinvoke(unmarshaled.fg3(), marshaled.f3);
	marshaled.f4 = unmarshaled.fg4();
}
extern "C" void t1424128202_marshal_pinvoke_back(const t1424128202_marshaled_pinvoke& marshaled, t1424128202& unmarshaled)
{
	unmarshaled.fs0(il2cpp_codegen_marshal_string_result(marshaled.f0));
	t465617797  unmarshaled_position_temp;
	memset(&unmarshaled_position_temp, 0, sizeof(unmarshaled_position_temp));
	t465617797_marshal_pinvoke_back(marshaled.f1, unmarshaled_position_temp);
	unmarshaled.fs1(unmarshaled_position_temp);
	t83606849  unmarshaled_rotation_temp;
	memset(&unmarshaled_rotation_temp, 0, sizeof(unmarshaled_rotation_temp));
	t83606849_marshal_pinvoke_back(marshaled.f2, unmarshaled_rotation_temp);
	unmarshaled.fs2(unmarshaled_rotation_temp);
	t465617797  unmarshaled_scale_temp;
	memset(&unmarshaled_scale_temp, 0, sizeof(unmarshaled_scale_temp));
	t465617797_marshal_pinvoke_back(marshaled.f3, unmarshaled_scale_temp);
	unmarshaled.fs3(unmarshaled_scale_temp);
	int32_t unmarshaled_transformModified_temp = 0;
	unmarshaled_transformModified_temp = marshaled.f4;
	unmarshaled.fs4(unmarshaled_transformModified_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
extern "C" void t1424128202_marshal_pinvoke_cleanup(t1424128202_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
	t465617797_marshal_pinvoke_cleanup(marshaled.f1);
	t83606849_marshal_pinvoke_cleanup(marshaled.f2);
	t465617797_marshal_pinvoke_cleanup(marshaled.f3);
}
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
extern "C" void t1424128202_marshal_com(const t1424128202& unmarshaled, t1424128202_marshaled_com& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_bstring(unmarshaled.fg0());
	t465617797_marshal_com(unmarshaled.fg1(), marshaled.f1);
	t83606849_marshal_com(unmarshaled.fg2(), marshaled.f2);
	t465617797_marshal_com(unmarshaled.fg3(), marshaled.f3);
	marshaled.f4 = unmarshaled.fg4();
}
extern "C" void t1424128202_marshal_com_back(const t1424128202_marshaled_com& marshaled, t1424128202& unmarshaled)
{
	unmarshaled.fs0(il2cpp_codegen_marshal_bstring_result(marshaled.f0));
	t465617797  unmarshaled_position_temp;
	memset(&unmarshaled_position_temp, 0, sizeof(unmarshaled_position_temp));
	t465617797_marshal_com_back(marshaled.f1, unmarshaled_position_temp);
	unmarshaled.fs1(unmarshaled_position_temp);
	t83606849  unmarshaled_rotation_temp;
	memset(&unmarshaled_rotation_temp, 0, sizeof(unmarshaled_rotation_temp));
	t83606849_marshal_com_back(marshaled.f2, unmarshaled_rotation_temp);
	unmarshaled.fs2(unmarshaled_rotation_temp);
	t465617797  unmarshaled_scale_temp;
	memset(&unmarshaled_scale_temp, 0, sizeof(unmarshaled_scale_temp));
	t465617797_marshal_com_back(marshaled.f3, unmarshaled_scale_temp);
	unmarshaled.fs3(unmarshaled_scale_temp);
	int32_t unmarshaled_transformModified_temp = 0;
	unmarshaled_transformModified_temp = marshaled.f4;
	unmarshaled.fs4(unmarshaled_transformModified_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
extern "C" void t1424128202_marshal_com_cleanup(t1424128202_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.f0);
	marshaled.f0 = NULL;
	t465617797_marshal_com_cleanup(marshaled.f1);
	t83606849_marshal_com_cleanup(marshaled.f2);
	t465617797_marshal_com_cleanup(marshaled.f3);
}
extern TypeInfo* String_t_TI_var;
extern TypeInfo* t3948796098_TI_var;
extern const uint32_t m1132099289_MetadataUsageId;
extern "C"  void m1132099289 (Il2CppObject * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m1132099289_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		String_t* L_0 = ((String_t_SFs*)String_t_TI_var->static_fields)->fg2();
		((t3948796098_SFs*)t3948796098_TI_var->static_fields)->fs0(L_0);
		return;
	}
}
extern TypeInfo* t3948796098_TI_var;
extern const uint32_t m2154926761_MetadataUsageId;
extern "C"  void m2154926761 (Il2CppObject * __this , String_t* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m2154926761_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t3948796098_TI_var);
		((t3948796098_SFs*)t3948796098_TI_var->static_fields)->fs0(L_0);
		return;
	}
}
extern TypeInfo* t2735179568_TI_var;
extern TypeInfo* t3948796098_TI_var;
extern const uint32_t m1593581205_MetadataUsageId;
extern "C"  String_t* m1593581205 (Il2CppObject * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m1593581205_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	t2735179568 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		t2735179568 * L_0 = (t2735179568 *)il2cpp_codegen_object_new(t2735179568_TI_var);
		m1811467992(L_0, 1, (bool)1, NULL);
		V_0 = L_0;
		t2735179568 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t3948796098_TI_var);
		String_t* L_2 = m2242276521(NULL, L_1, NULL);
		String_t* L_3 = m3226660001(L_2, NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
extern TypeInfo* String_t_TI_var;
extern Il2CppCodeGenString* _stringLiteral3811889820;
extern Il2CppCodeGenString* _stringLiteral3686613043;
extern Il2CppCodeGenString* _stringLiteral1616342375;
extern Il2CppCodeGenString* _stringLiteral2018634576;
extern Il2CppCodeGenString* _stringLiteral3388201006;
extern Il2CppCodeGenString* _stringLiteral157888904;
extern const uint32_t m506502194_MetadataUsageId;
extern "C"  bool m506502194 (Il2CppObject * __this , Il2CppObject * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m506502194_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B7_0 = 0;
	{
		Il2CppObject * L_0 = p0;
		V_0 = ((String_t*)CastclassSealed(L_0, String_t_TI_var));
		String_t* L_1 = V_0;
		bool L_2 = m1841920685(L_1, _stringLiteral3811889820, NULL);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		bool L_4 = m1841920685(L_3, _stringLiteral3686613043, NULL);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6 = m1841920685(L_5, _stringLiteral1616342375, NULL);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8 = m1841920685(L_7, _stringLiteral2018634576, NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		bool L_10 = m1841920685(L_9, _stringLiteral3388201006, NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		bool L_12 = m1841920685(L_11, _stringLiteral157888904, NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return (bool)G_B7_0;
	}
}
extern TypeInfo* t2320721629_TI_var;
extern TypeInfo* t1145979430_TI_var;
extern TypeInfo* t2393427626_TI_var;
extern TypeInfo* String_t_TI_var;
extern TypeInfo* t2735179568_TI_var;
extern TypeInfo* t3948796098_TI_var;
extern Il2CppCodeGenString* _stringLiteral3698476383;
extern Il2CppCodeGenString* _stringLiteral267581099;
extern Il2CppCodeGenString* _stringLiteral372029352;
extern Il2CppCodeGenString* _stringLiteral811305496;
extern Il2CppCodeGenString* _stringLiteral4028943723;
extern const uint32_t m2568950546_MetadataUsageId;
extern "C"  void m2568950546 (Il2CppObject * __this , Il2CppObject * p0, String_t** p1, String_t** p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m2568950546_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	t1145979430 * V_0 = NULL;
	t2393427626 * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	t2735179568 * V_5 = NULL;
	int32_t G_B7_0 = 0;
	{
		Il2CppObject * L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t2320721629 * L_1 = (t2320721629 *)il2cpp_codegen_object_new(t2320721629_TI_var);
		m3739475201(L_1, _stringLiteral3698476383, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		Il2CppObject * L_2 = p0;
		V_0 = ((t1145979430 *)IsInstClass(L_2, t1145979430_TI_var));
		t1145979430 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		t2320721629 * L_4 = (t2320721629 *)il2cpp_codegen_object_new(t2320721629_TI_var);
		m3739475201(L_4, _stringLiteral267581099, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0029:
	{
		t1145979430 * L_5 = V_0;
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		t1145979430 * L_7 = V_0;
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
		int32_t L_9 = m1606060069(L_8, NULL);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		t2393427626 * L_10 = (t2393427626 *)il2cpp_codegen_object_new(t2393427626_TI_var);
		m536337337(L_10, G_B7_0, NULL);
		V_1 = L_10;
		String_t** L_11 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		String_t* L_12 = ((String_t_SFs*)String_t_TI_var->static_fields)->fg2();
		*((Il2CppObject **)(L_11)) = (Il2CppObject *)L_12;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_11), (Il2CppObject *)L_12);
		String_t* L_13 = ((String_t_SFs*)String_t_TI_var->static_fields)->fg2();
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		String_t* L_14 = V_2;
		int32_t L_15 = m1606060069(L_14, NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		t1145979430 * L_16 = V_0;
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		t1145979430 * L_18 = V_0;
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		String_t* L_21 = m612901809(NULL, L_19, _stringLiteral372029352, L_20, NULL);
		V_2 = L_21;
	}

IL_008c:
	{
		t1145979430 * L_22 = V_0;
		Type_t * L_23 = VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.Exception::GetType() */, L_22);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		String_t* L_25 = ((String_t_SFs*)String_t_TI_var->static_fields)->fg2();
		V_4 = L_25;
		t1145979430 * L_26 = V_0;
		String_t* L_27 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		t1145979430 * L_28 = V_0;
		String_t* L_29 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		String_t* L_31 = m2668767713(L_30, NULL);
		int32_t L_32 = m1606060069(L_31, NULL);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		String_t* L_34 = m2596409543(NULL, L_33, _stringLiteral811305496, NULL);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = m2596409543(NULL, L_35, L_36, NULL);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = p1;
		String_t* L_39 = V_3;
		*((Il2CppObject **)(L_38)) = (Il2CppObject *)L_39;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_38), (Il2CppObject *)L_39);
		t1145979430 * L_40 = V_0;
		t1145979430 * L_41 = VirtFuncInvoker0< t1145979430 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		String_t* L_44 = m1561703559(NULL, _stringLiteral4028943723, L_42, _stringLiteral372029352, L_43, NULL);
		V_2 = L_44;
	}

IL_00f8:
	{
		t1145979430 * L_45 = V_0;
		t1145979430 * L_46 = VirtFuncInvoker0< t1145979430 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		t1145979430 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		t2393427626 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		String_t* L_50 = m2596409543(NULL, L_49, _stringLiteral372029352, NULL);
		m3636508479(L_48, L_50, NULL);
		t2735179568 * L_51 = (t2735179568 *)il2cpp_codegen_object_new(t2735179568_TI_var);
		m1811467992(L_51, 1, (bool)1, NULL);
		V_5 = L_51;
		t2393427626 * L_52 = V_1;
		t2735179568 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(t3948796098_TI_var);
		String_t* L_54 = m2242276521(NULL, L_53, NULL);
		m3636508479(L_52, L_54, NULL);
		String_t** L_55 = p2;
		t2393427626 * L_56 = V_1;
		String_t* L_57 = m1507807375(L_56, NULL);
		*((Il2CppObject **)(L_55)) = (Il2CppObject *)L_57;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_55), (Il2CppObject *)L_57);
		return;
	}
}
extern TypeInfo* String_t_TI_var;
extern TypeInfo* t1685951112_TI_var;
extern TypeInfo* t2393427626_TI_var;
extern TypeInfo* t3948796098_TI_var;
extern Il2CppCodeGenString* _stringLiteral1422698174;
extern Il2CppCodeGenString* _stringLiteral953296755;
extern Il2CppCodeGenString* _stringLiteral2320793441;
extern Il2CppCodeGenString* _stringLiteral1869581409;
extern Il2CppCodeGenString* _stringLiteral3234713698;
extern Il2CppCodeGenString* _stringLiteral878136096;
extern Il2CppCodeGenString* _stringLiteral372029431;
extern Il2CppCodeGenString* _stringLiteral372029425;
extern Il2CppCodeGenString* _stringLiteral3875251417;
extern Il2CppCodeGenString* _stringLiteral104530063;
extern Il2CppCodeGenString* _stringLiteral641215582;
extern Il2CppCodeGenString* _stringLiteral572408963;
extern Il2CppCodeGenString* _stringLiteral2508277761;
extern Il2CppCodeGenString* _stringLiteral372029317;
extern Il2CppCodeGenString* _stringLiteral372029352;
extern const uint32_t m2866903298_MetadataUsageId;
extern "C"  String_t* m2866903298 (Il2CppObject * __this , String_t* p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m2866903298_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	t3764931161* V_0 = NULL;
	t2393427626 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = p0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		String_t* L_1 = ((String_t_SFs*)String_t_TI_var->static_fields)->fg2();
		return L_1;
	}

IL_000c:
	{
		String_t* L_2 = p0;
		t1685951112* L_3 = ((t1685951112*)SZArrayNew(t1685951112_TI_var, (uint32_t)1));
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)((int32_t)10));
		t3764931161* L_4 = m3326265864(L_2, L_3, NULL);
		V_0 = L_4;
		String_t* L_5 = p0;
		int32_t L_6 = m1606060069(L_5, NULL);
		t2393427626 * L_7 = (t2393427626 *)il2cpp_codegen_object_new(t2393427626_TI_var);
		m536337337(L_7, L_6, NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		t3764931161* L_8 = V_0;
		int32_t L_9 = V_2;
		t3764931161* L_10 = V_0;
		int32_t L_11 = V_2;
		int32_t L_12 = L_11;
		String_t* L_13 = m2668767713(((L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12))), NULL);
		ArrayElementTypeCheck (L_8, L_13);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (String_t*)L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		t3764931161* L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_16)->max_length)))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		t3764931161* L_17 = V_0;
		int32_t L_18 = V_3;
		int32_t L_19 = L_18;
		V_4 = ((L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19)));
		String_t* L_20 = V_4;
		int32_t L_21 = m1606060069(L_20, NULL);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		uint16_t L_23 = m4230566705(L_22, 0, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		String_t* L_24 = V_4;
		bool L_25 = m1841920685(L_24, _stringLiteral1422698174, NULL);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = p1;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_27 = V_4;
		bool L_28 = m1841920685(L_27, _stringLiteral953296755, NULL);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = p1;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		t3764931161* L_31 = V_0;
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_31)->max_length))))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(t3948796098_TI_var);
		bool L_33 = m506502194(NULL, L_32, NULL);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		t3764931161* L_34 = V_0;
		int32_t L_35 = V_3;
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(t3948796098_TI_var);
		bool L_37 = m506502194(NULL, ((L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36))), NULL);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		String_t* L_38 = V_4;
		int32_t L_39 = m4251815737(L_38, _stringLiteral2320793441, NULL);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_41 = V_4;
		int32_t L_42 = V_5;
		String_t* L_43 = m12482732(L_41, 0, L_42, NULL);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		int32_t L_45 = m4251815737(L_44, _stringLiteral1869581409, NULL);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		String_t* L_46 = V_4;
		int32_t L_47 = m4251815737(L_46, _stringLiteral3234713698, NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		String_t* L_48 = V_4;
		int32_t L_49 = m4251815737(L_48, _stringLiteral878136096, NULL);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = p1;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_51 = V_4;
		bool L_52 = m1841920685(L_51, _stringLiteral372029431, NULL);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		bool L_54 = m568509976(L_53, _stringLiteral372029425, NULL);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		String_t* L_55 = V_4;
		bool L_56 = m1841920685(L_55, _stringLiteral3875251417, NULL);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		String_t* L_58 = m3580114465(L_57, 0, 3, NULL);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		int32_t L_60 = m4251815737(L_59, _stringLiteral104530063, NULL);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		String_t* L_62 = V_4;
		int32_t L_63 = V_6;
		int32_t L_64 = m1887352430(L_62, _stringLiteral372029425, L_63, NULL);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		String_t* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		String_t* L_72 = m3580114465(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), NULL);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		String_t* L_74 = ((String_t_SFs*)String_t_TI_var->static_fields)->fg2();
		String_t* L_75 = m1941156251(L_73, _stringLiteral641215582, L_74, NULL);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(t3948796098_TI_var);
		String_t* L_77 = ((t3948796098_SFs*)t3948796098_TI_var->static_fields)->fg0();
		String_t* L_78 = ((String_t_SFs*)String_t_TI_var->static_fields)->fg2();
		String_t* L_79 = m1941156251(L_76, L_77, L_78, NULL);
		V_4 = L_79;
		String_t* L_80 = V_4;
		String_t* L_81 = m534438427(L_80, ((int32_t)92), ((int32_t)47), NULL);
		V_4 = L_81;
		String_t* L_82 = V_4;
		int32_t L_83 = m1975817115(L_82, _stringLiteral572408963, NULL);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		String_t* L_85 = V_4;
		int32_t L_86 = V_8;
		String_t* L_87 = m3580114465(L_85, L_86, 5, NULL);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		String_t* L_90 = m1649676359(L_88, L_89, _stringLiteral2508277761, NULL);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		int32_t L_93 = m1606060069(L_92, NULL);
		String_t* L_94 = m1649676359(L_91, L_93, _stringLiteral372029317, NULL);
		V_4 = L_94;
	}

IL_024e:
	{
		t2393427626 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		String_t* L_97 = m2596409543(NULL, L_96, _stringLiteral372029352, NULL);
		m3636508479(L_95, L_97, NULL);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		t3764931161* L_100 = V_0;
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_100)->max_length)))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		t2393427626 * L_101 = V_1;
		String_t* L_102 = m1507807375(L_101, NULL);
		return L_102;
	}
}
extern TypeInfo* t2393427626_TI_var;
extern TypeInfo* String_t_TI_var;
extern TypeInfo* t3948796098_TI_var;
extern Il2CppCodeGenString* _stringLiteral372029316;
extern Il2CppCodeGenString* _stringLiteral372029336;
extern Il2CppCodeGenString* _stringLiteral372029318;
extern Il2CppCodeGenString* _stringLiteral811305474;
extern Il2CppCodeGenString* _stringLiteral372029317;
extern Il2CppCodeGenString* _stringLiteral882462221;
extern Il2CppCodeGenString* _stringLiteral3379456769;
extern Il2CppCodeGenString* _stringLiteral1583069542;
extern Il2CppCodeGenString* _stringLiteral449688297;
extern Il2CppCodeGenString* _stringLiteral2468699112;
extern Il2CppCodeGenString* _stringLiteral1799027380;
extern Il2CppCodeGenString* _stringLiteral2508277761;
extern Il2CppCodeGenString* _stringLiteral372029352;
extern const uint32_t m2242276521_MetadataUsageId;
extern "C"  String_t* m2242276521 (Il2CppObject * __this , t2735179568 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m2242276521_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	t2393427626 * V_0 = NULL;
	int32_t V_1 = 0;
	t121709228 * V_2 = NULL;
	t591550820 * V_3 = NULL;
	Type_t * V_4 = NULL;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	t3027888260* V_7 = NULL;
	bool V_8 = false;
	String_t* V_9 = NULL;
	bool V_10 = false;
	int32_t V_11 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B26_0 = 0;
	{
		t2393427626 * L_0 = (t2393427626 *)il2cpp_codegen_object_new(t2393427626_TI_var);
		m536337337(L_0, ((int32_t)255), NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0257;
	}

IL_0012:
	{
		t2735179568 * L_1 = p0;
		int32_t L_2 = V_1;
		t121709228 * L_3 = VirtFuncInvoker1< t121709228 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		t121709228 * L_4 = V_2;
		t591550820 * L_5 = VirtFuncInvoker0< t591550820 * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_4);
		V_3 = L_5;
		t591550820 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0253;
	}

IL_002c:
	{
		t591550820 * L_7 = V_3;
		Type_t * L_8 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_0253;
	}

IL_0040:
	{
		Type_t * L_10 = V_4;
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_13 = V_5;
		int32_t L_14 = m1606060069(L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		t2393427626 * L_15 = V_0;
		String_t* L_16 = V_5;
		m3636508479(L_15, L_16, NULL);
		t2393427626 * L_17 = V_0;
		m3636508479(L_17, _stringLiteral372029316, NULL);
	}

IL_0071:
	{
		t2393427626 * L_18 = V_0;
		Type_t * L_19 = V_4;
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		m3636508479(L_18, L_20, NULL);
		t2393427626 * L_21 = V_0;
		m3636508479(L_21, _stringLiteral372029336, NULL);
		t2393427626 * L_22 = V_0;
		t591550820 * L_23 = V_3;
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		m3636508479(L_22, L_24, NULL);
		t2393427626 * L_25 = V_0;
		m3636508479(L_25, _stringLiteral372029318, NULL);
		V_6 = 0;
		t591550820 * L_26 = V_3;
		t3027888260* L_27 = VirtFuncInvoker0< t3027888260* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		V_7 = L_27;
		V_8 = (bool)1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		t2393427626 * L_29 = V_0;
		m3636508479(L_29, _stringLiteral811305474, NULL);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = (bool)0;
	}

IL_00d2:
	{
		t2393427626 * L_30 = V_0;
		t3027888260* L_31 = V_7;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		Type_t * L_34 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, ((L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33))));
		String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
		m3636508479(L_30, L_35, NULL);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		t3027888260* L_38 = V_7;
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_38)->max_length)))))))
		{
			goto IL_00b7;
		}
	}
	{
		t2393427626 * L_39 = V_0;
		m3636508479(L_39, _stringLiteral372029317, NULL);
		t121709228 * L_40 = V_2;
		String_t* L_41 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_40);
		V_9 = L_41;
		String_t* L_42 = V_9;
		if (!L_42)
		{
			goto IL_0247;
		}
	}
	{
		Type_t * L_43 = V_4;
		String_t* L_44 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_43);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		bool L_45 = m1790663636(NULL, L_44, _stringLiteral882462221, NULL);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_46 = V_4;
		String_t* L_47 = VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		bool L_48 = m1790663636(NULL, L_47, _stringLiteral3379456769, NULL);
		if (L_48)
		{
			goto IL_01c4;
		}
	}

IL_0140:
	{
		Type_t * L_49 = V_4;
		String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_49);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		bool L_51 = m1790663636(NULL, L_50, _stringLiteral1583069542, NULL);
		if (!L_51)
		{
			goto IL_016c;
		}
	}
	{
		Type_t * L_52 = V_4;
		String_t* L_53 = VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_52);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		bool L_54 = m1790663636(NULL, L_53, _stringLiteral3379456769, NULL);
		if (L_54)
		{
			goto IL_01c4;
		}
	}

IL_016c:
	{
		Type_t * L_55 = V_4;
		String_t* L_56 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_55);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		bool L_57 = m1790663636(NULL, L_56, _stringLiteral449688297, NULL);
		if (!L_57)
		{
			goto IL_0198;
		}
	}
	{
		Type_t * L_58 = V_4;
		String_t* L_59 = VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_58);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		bool L_60 = m1790663636(NULL, L_59, _stringLiteral3379456769, NULL);
		if (L_60)
		{
			goto IL_01c4;
		}
	}

IL_0198:
	{
		Type_t * L_61 = V_4;
		String_t* L_62 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_61);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		bool L_63 = m1790663636(NULL, L_62, _stringLiteral2468699112, NULL);
		if (!L_63)
		{
			goto IL_01c1;
		}
	}
	{
		Type_t * L_64 = V_4;
		String_t* L_65 = VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_64);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		bool L_66 = m1790663636(NULL, L_65, _stringLiteral1799027380, NULL);
		G_B24_0 = ((int32_t)(L_66));
		goto IL_01c2;
	}

IL_01c1:
	{
		G_B24_0 = 0;
	}

IL_01c2:
	{
		G_B26_0 = G_B24_0;
		goto IL_01c5;
	}

IL_01c4:
	{
		G_B26_0 = 1;
	}

IL_01c5:
	{
		V_10 = (bool)G_B26_0;
		bool L_67 = V_10;
		if (L_67)
		{
			goto IL_0247;
		}
	}
	{
		t2393427626 * L_68 = V_0;
		m3636508479(L_68, _stringLiteral2508277761, NULL);
		String_t* L_69 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(t3948796098_TI_var);
		String_t* L_70 = ((t3948796098_SFs*)t3948796098_TI_var->static_fields)->fg0();
		bool L_71 = m1841920685(L_69, L_70, NULL);
		if (!L_71)
		{
			goto IL_0210;
		}
	}
	{
		String_t* L_72 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(t3948796098_TI_var);
		String_t* L_73 = ((t3948796098_SFs*)t3948796098_TI_var->static_fields)->fg0();
		int32_t L_74 = m1606060069(L_73, NULL);
		String_t* L_75 = V_9;
		int32_t L_76 = m1606060069(L_75, NULL);
		String_t* L_77 = ((t3948796098_SFs*)t3948796098_TI_var->static_fields)->fg0();
		int32_t L_78 = m1606060069(L_77, NULL);
		String_t* L_79 = m12482732(L_72, L_74, ((int32_t)((int32_t)L_76-(int32_t)L_78)), NULL);
		V_9 = L_79;
	}

IL_0210:
	{
		t2393427626 * L_80 = V_0;
		String_t* L_81 = V_9;
		m3636508479(L_80, L_81, NULL);
		t2393427626 * L_82 = V_0;
		m3636508479(L_82, _stringLiteral372029336, NULL);
		t2393427626 * L_83 = V_0;
		t121709228 * L_84 = V_2;
		int32_t L_85 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_84);
		V_11 = L_85;
		String_t* L_86 = m2960866144((&V_11), NULL);
		m3636508479(L_83, L_86, NULL);
		t2393427626 * L_87 = V_0;
		m3636508479(L_87, _stringLiteral372029317, NULL);
	}

IL_0247:
	{
		t2393427626 * L_88 = V_0;
		m3636508479(L_88, _stringLiteral372029352, NULL);
	}

IL_0253:
	{
		int32_t L_89 = V_1;
		V_1 = ((int32_t)((int32_t)L_89+(int32_t)1));
	}

IL_0257:
	{
		int32_t L_90 = V_1;
		t2735179568 * L_91 = p0;
		int32_t L_92 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_91);
		if ((((int32_t)L_90) < ((int32_t)L_92)))
		{
			goto IL_0012;
		}
	}
	{
		t2393427626 * L_93 = V_0;
		String_t* L_94 = m1507807375(L_93, NULL);
		return L_94;
	}
}
extern "C"  void m153194 (t15911466 * __this, const MethodInfo* method)
{
	{
		m2671490429(__this, NULL);
		return;
	}
}
extern "C"  void m1095276890 (t15911466 * __this, t2442207934 * p0, t3342076411  p1, int32_t p2, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C"  void m2021794605 (t15911466 * __this, t2442207934 * p0, t3342076411  p1, int32_t p2, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C"  void m1490844990 (t15911466 * __this, t2442207934 * p0, t3342076411  p1, int32_t p2, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C"  void m3403753809 (t15911466 * __this, t2442207934 * p0, t3342076411  p1, int32_t p2, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C"  void m3200380538 (t15911466 * __this, t2442207934 * p0, t3342076411  p1, int32_t p2, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C"  void m1007088766 (t15911466 * __this, t2442207934 * p0, int32_t p1, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C"  void m526258580 (t15911466 * __this, t2442207934 * p0, int32_t p1, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C"  void m2847783286 (t15911466 * __this, t2442207934 * p0, t3342076411  p1, int32_t p2, t1053511764 * p3, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C"  void m811412975 (t15911466 * __this, t2442207934 * p0, t3342076411  p1, int32_t p2, t1053511764 * p3, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C"  void m4064436078 (t15911466 * __this, t2442207934 * p0, t3342076411  p1, int32_t p2, t1053511764 * p3, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C"  void m1941561287 (t15911466 * __this, t2442207934 * p0, t3342076411  p1, int32_t p2, t1053511764 * p3, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C"  void m726770682 (t15911466 * __this, t2442207934 * p0, t3342076411  p1, int32_t p2, t1053511764 * p3, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C"  void m1524239226 (t15911466 * __this, t2442207934 * p0, int32_t p1, t1053511764 * p2, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C"  void m2213014568 (t15911466 * __this, t2442207934 * p0, int32_t p1, t1053511764 * p2, const MethodInfo* method)
{
	{
		return;
	}
}
extern TypeInfo* t2829571008_TI_var;
extern const uint32_t m3153703389_MetadataUsageId;
extern "C"  bool m3153703389 (t2829571008 * __this, Il2CppObject * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m3153703389_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Il2CppObject * L_0 = p0;
		bool L_1 = m3491334086(NULL, ((t2829571008 *)IsInstClass(L_0, t2829571008_TI_var)), __this, NULL);
		return L_1;
	}
}
extern "C"  int32_t m811248179 (t2829571008 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = __this->fg0();
		int32_t L_1 = m1458664696(NULL, L_0, NULL);
		return L_1;
	}
}
extern TypeInfo* IntPtr_t_TI_var;
extern const uint32_t m3491334086_MetadataUsageId;
extern "C"  bool m3491334086 (Il2CppObject * __this , t2829571008 * p0, t2829571008 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m3491334086_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	{
		t2829571008 * L_0 = p0;
		V_0 = L_0;
		t2829571008 * L_1 = p1;
		V_1 = L_1;
		Il2CppObject * L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Il2CppObject * L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		Il2CppObject * L_4 = V_1;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		t2829571008 * L_5 = p0;
		IntPtr_t L_6 = L_5->fg0();
		IntPtr_t L_7 = ((IntPtr_t_SFs*)IntPtr_t_TI_var->static_fields)->fg1();
		bool L_8 = m1573482188(NULL, L_6, L_7, NULL);
		return L_8;
	}

IL_0029:
	{
		Il2CppObject * L_9 = V_0;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		t2829571008 * L_10 = p1;
		IntPtr_t L_11 = L_10->fg0();
		IntPtr_t L_12 = ((IntPtr_t_SFs*)IntPtr_t_TI_var->static_fields)->fg1();
		bool L_13 = m1573482188(NULL, L_11, L_12, NULL);
		return L_13;
	}

IL_0040:
	{
		t2829571008 * L_14 = p0;
		IntPtr_t L_15 = L_14->fg0();
		t2829571008 * L_16 = p1;
		IntPtr_t L_17 = L_16->fg0();
		bool L_18 = m1573482188(NULL, L_15, L_17, NULL);
		return L_18;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
extern "C" void t2829571008_marshal_pinvoke(const t2829571008& unmarshaled, t2829571008_marshaled_pinvoke& marshaled)
{
	marshaled.f0 = reinterpret_cast<intptr_t>((unmarshaled.fg0()).fg0());
}
extern "C" void t2829571008_marshal_pinvoke_back(const t2829571008_marshaled_pinvoke& marshaled, t2829571008& unmarshaled)
{
	IntPtr_t unmarshaled_m_Ptr_temp;
	memset(&unmarshaled_m_Ptr_temp, 0, sizeof(unmarshaled_m_Ptr_temp));
	IntPtr_t unmarshaled_m_Ptr_temp_temp;
	unmarshaled_m_Ptr_temp_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)marshaled.f0));
	unmarshaled_m_Ptr_temp = unmarshaled_m_Ptr_temp_temp;
	unmarshaled.fs0(unmarshaled_m_Ptr_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
extern "C" void t2829571008_marshal_pinvoke_cleanup(t2829571008_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
extern "C" void t2829571008_marshal_com(const t2829571008& unmarshaled, t2829571008_marshaled_com& marshaled)
{
	marshaled.f0 = reinterpret_cast<intptr_t>((unmarshaled.fg0()).fg0());
}
extern "C" void t2829571008_marshal_com_back(const t2829571008_marshaled_com& marshaled, t2829571008& unmarshaled)
{
	IntPtr_t unmarshaled_m_Ptr_temp;
	memset(&unmarshaled_m_Ptr_temp, 0, sizeof(unmarshaled_m_Ptr_temp));
	IntPtr_t unmarshaled_m_Ptr_temp_temp;
	unmarshaled_m_Ptr_temp_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)marshaled.f0));
	unmarshaled_m_Ptr_temp = unmarshaled_m_Ptr_temp_temp;
	unmarshaled.fs0(unmarshaled_m_Ptr_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
extern "C" void t2829571008_marshal_com_cleanup(t2829571008_marshaled_com& marshaled)
{
}
extern "C"  t465617797  m1104419803 (t224878301 * __this, const MethodInfo* method)
{
	t465617797  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		m1881704498(__this, (&V_0), NULL);
		t465617797  L_0 = V_0;
		return L_0;
	}
}
extern "C"  void m1881704498 (t224878301 * __this, t465617797 * p0, const MethodInfo* method)
{
	typedef void (*m1881704498_ftn) (t224878301 *, t465617797 *);
	static m1881704498_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1881704498_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C"  t465617797  m3074381503 (t224878301 * __this, const MethodInfo* method)
{
	t465617797  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		m2568549910(__this, (&V_0), NULL);
		t465617797  L_0 = V_0;
		return L_0;
	}
}
extern "C"  void m2325460848 (t224878301 * __this, t465617797  p0, const MethodInfo* method)
{
	{
		m3680777866(__this, (&p0), NULL);
		return;
	}
}
extern "C"  void m2568549910 (t224878301 * __this, t465617797 * p0, const MethodInfo* method)
{
	typedef void (*m2568549910_ftn) (t224878301 *, t465617797 *);
	static m2568549910_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2568549910_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C"  void m3680777866 (t224878301 * __this, t465617797 * p0, const MethodInfo* method)
{
	typedef void (*m3680777866_ftn) (t224878301 *, t465617797 *);
	static m3680777866_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3680777866_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C"  int32_t m881385315 (t224878301 * __this, const MethodInfo* method)
{
	typedef int32_t (*m881385315_ftn) (t224878301 *);
	static m881385315_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m881385315_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
extern TypeInfo* t3188879111_TI_var;
extern const uint32_t m3479720613_MetadataUsageId;
extern "C"  Il2CppObject * m3479720613 (t224878301 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m3479720613_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		t3188879111 * L_0 = (t3188879111 *)il2cpp_codegen_object_new(t3188879111_TI_var);
		m147705785(L_0, __this, NULL);
		return L_0;
	}
}
extern "C"  t224878301 * m3838588184 (t224878301 * __this, int32_t p0, const MethodInfo* method)
{
	typedef t224878301 * (*m3838588184_ftn) (t224878301 *, int32_t);
	static m3838588184_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3838588184_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C"  void m147705785 (t3188879111 * __this, t224878301 * p0, const MethodInfo* method)
{
	{
		__this->fs1((-1));
		m2551263788(__this, NULL);
		t224878301 * L_0 = p0;
		__this->fs0(L_0);
		return;
	}
}
extern "C"  Il2CppObject * m2520481711 (t3188879111 * __this, const MethodInfo* method)
{
	{
		t224878301 * L_0 = __this->fg0();
		int32_t L_1 = __this->fg1();
		t224878301 * L_2 = m3838588184(L_0, L_1, NULL);
		return L_2;
	}
}
extern "C"  bool m3980662062 (t3188879111 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t224878301 * L_0 = __this->fg0();
		int32_t L_1 = m881385315(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = __this->fg1();
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->fs1(L_3);
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
extern "C"  void m950879083 (t3188879111 * __this, const MethodInfo* method)
{
	{
		__this->fs1((-1));
		return;
	}
}
extern Il2CppCodeGenString* _stringLiteral386007604;
extern const uint32_t m3650417185_MetadataUsageId;
extern "C"  void m3650417185 (t1558446791 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m3650417185_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		m485833136(__this, _stringLiteral386007604, NULL);
		m2376998645(__this, ((int32_t)-2147467261), NULL);
		return;
	}
}
extern "C"  void m1554762831 (t1558446791 * __this, String_t* p0, const MethodInfo* method)
{
	{
		String_t* L_0 = p0;
		m485833136(__this, L_0, NULL);
		m2376998645(__this, ((int32_t)-2147467261), NULL);
		return;
	}
}
extern "C"  void m2835958127 (t1558446791 * __this, String_t* p0, t1145979430 * p1, const MethodInfo* method)
{
	{
		String_t* L_0 = p0;
		t1145979430 * L_1 = p1;
		m2453009240(__this, L_0, L_1, NULL);
		m2376998645(__this, ((int32_t)-2147467261), NULL);
		return;
	}
}
extern TypeInfo* String_t_TI_var;
extern const uint32_t m2949645127_MetadataUsageId;
extern "C"  String_t* m2949645127 (Il2CppObject * __this , String_t* p0, t3632007997* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m2949645127_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = p0;
		t3632007997* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		String_t* L_2 = m1263743648(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
extern "C"  void m3067419446 (t465617798 * __this, float p0, float p1, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->fs1(L_0);
		float L_1 = p1;
		__this->fs2(L_1);
		return;
	}
}
extern TypeInfo* t3632007997_TI_var;
extern TypeInfo* t1791520093_TI_var;
extern Il2CppCodeGenString* _stringLiteral2736546956;
extern const uint32_t m775491729_MetadataUsageId;
extern "C"  String_t* m775491729 (t465617798 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m775491729_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		t3632007997* L_0 = ((t3632007997*)SZArrayNew(t3632007997_TI_var, (uint32_t)2));
		float L_1 = __this->fg1();
		float L_2 = L_1;
		Il2CppObject * L_3 = Box(t1791520093_TI_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_3);
		t3632007997* L_4 = L_0;
		float L_5 = __this->fg2();
		float L_6 = L_5;
		Il2CppObject * L_7 = Box(t1791520093_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_7);
		String_t* L_8 = m2949645127(NULL, _stringLiteral2736546956, L_4, NULL);
		return L_8;
	}
}
extern "C"  int32_t m2353429373 (t465617798 * __this, const MethodInfo* method)
{
	{
		float* L_0 = __this->fag1();
		int32_t L_1 = m3102305584(L_0, NULL);
		float* L_2 = __this->fag2();
		int32_t L_3 = m3102305584(L_2, NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
extern TypeInfo* t465617798_TI_var;
extern const uint32_t m1405920279_MetadataUsageId;
extern "C"  bool m1405920279 (t465617798 * __this, Il2CppObject * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m1405920279_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	t465617798  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t G_B5_0 = 0;
	{
		Il2CppObject * L_0 = p0;
		if (((Il2CppObject *)IsInstSealed(L_0, t465617798_TI_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		Il2CppObject * L_1 = p0;
		V_0 = ((*(t465617798 *)((t465617798 *)UnBox (L_1, t465617798_TI_var))));
		float* L_2 = __this->fag1();
		float L_3 = (&V_0)->fg1();
		bool L_4 = m3359827399(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		float* L_5 = __this->fag2();
		float L_6 = (&V_0)->fg2();
		bool L_7 = m3359827399(L_5, L_6, NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
	}

IL_0040:
	{
		return (bool)G_B5_0;
	}
}
extern "C"  t465617798  m28012078 (Il2CppObject * __this , const MethodInfo* method)
{
	{
		t465617798  L_0;
		memset(&L_0, 0, sizeof(L_0));
		m3067419446(&L_0, (1.0f), (0.0f), NULL);
		return L_0;
	}
}
extern "C"  t465617798  m1389598521 (Il2CppObject * __this , t465617798  p0, t465617798  p1, const MethodInfo* method)
{
	{
		float L_0 = (&p0)->fg1();
		float L_1 = (&p1)->fg1();
		float L_2 = (&p0)->fg2();
		float L_3 = (&p1)->fg2();
		t465617798  L_4;
		memset(&L_4, 0, sizeof(L_4));
		m3067419446(&L_4, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), NULL);
		return L_4;
	}
}
extern "C"  t465617798  m4236139442 (Il2CppObject * __this , t465617798  p0, float p1, const MethodInfo* method)
{
	{
		float L_0 = (&p0)->fg1();
		float L_1 = p1;
		float L_2 = (&p0)->fg2();
		float L_3 = p1;
		t465617798  L_4;
		memset(&L_4, 0, sizeof(L_4));
		m3067419446(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), NULL);
		return L_4;
	}
}
extern "C"  t465617798  m1064335535 (Il2CppObject * __this , t465617797  p0, const MethodInfo* method)
{
	{
		float L_0 = (&p0)->fg0();
		float L_1 = (&p0)->fg1();
		t465617798  L_2;
		memset(&L_2, 0, sizeof(L_2));
		m3067419446(&L_2, L_0, L_1, NULL);
		return L_2;
	}
}
extern "C"  t465617797  m176791411 (Il2CppObject * __this , t465617798  p0, const MethodInfo* method)
{
	{
		float L_0 = (&p0)->fg1();
		float L_1 = (&p0)->fg2();
		t465617797  L_2;
		memset(&L_2, 0, sizeof(L_2));
		m2638739322(&L_2, L_0, L_1, (0.0f), NULL);
		return L_2;
	}
}
// Conversion methods for marshalling of: UnityEngine.Vector2
extern "C" void t465617798_marshal_pinvoke(const t465617798& unmarshaled, t465617798_marshaled_pinvoke& marshaled)
{
	marshaled.f1 = unmarshaled.fg1();
	marshaled.f2 = unmarshaled.fg2();
}
extern "C" void t465617798_marshal_pinvoke_back(const t465617798_marshaled_pinvoke& marshaled, t465617798& unmarshaled)
{
	float unmarshaled_x_temp = 0.0f;
	unmarshaled_x_temp = marshaled.f1;
	unmarshaled.fs1(unmarshaled_x_temp);
	float unmarshaled_y_temp = 0.0f;
	unmarshaled_y_temp = marshaled.f2;
	unmarshaled.fs2(unmarshaled_y_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.Vector2
extern "C" void t465617798_marshal_pinvoke_cleanup(t465617798_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Vector2
extern "C" void t465617798_marshal_com(const t465617798& unmarshaled, t465617798_marshaled_com& marshaled)
{
	marshaled.f1 = unmarshaled.fg1();
	marshaled.f2 = unmarshaled.fg2();
}
extern "C" void t465617798_marshal_com_back(const t465617798_marshaled_com& marshaled, t465617798& unmarshaled)
{
	float unmarshaled_x_temp = 0.0f;
	unmarshaled_x_temp = marshaled.f1;
	unmarshaled.fs1(unmarshaled_x_temp);
	float unmarshaled_y_temp = 0.0f;
	unmarshaled_y_temp = marshaled.f2;
	unmarshaled.fs2(unmarshaled_y_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.Vector2
extern "C" void t465617798_marshal_com_cleanup(t465617798_marshaled_com& marshaled)
{
}
extern "C"  void m2638739322 (t465617797 * __this, float p0, float p1, float p2, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->fs0(L_0);
		float L_1 = p1;
		__this->fs1(L_1);
		float L_2 = p2;
		__this->fs2(L_2);
		return;
	}
}
extern "C"  int32_t m1754570744 (t465617797 * __this, const MethodInfo* method)
{
	{
		float* L_0 = __this->fag0();
		int32_t L_1 = m3102305584(L_0, NULL);
		float* L_2 = __this->fag1();
		int32_t L_3 = m3102305584(L_2, NULL);
		float* L_4 = __this->fag2();
		int32_t L_5 = m3102305584(L_4, NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
	}
}
extern TypeInfo* t465617797_TI_var;
extern const uint32_t m2692262876_MetadataUsageId;
extern "C"  bool m2692262876 (t465617797 * __this, Il2CppObject * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m2692262876_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	t465617797  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t G_B6_0 = 0;
	{
		Il2CppObject * L_0 = p0;
		if (((Il2CppObject *)IsInstSealed(L_0, t465617797_TI_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		Il2CppObject * L_1 = p0;
		V_0 = ((*(t465617797 *)((t465617797 *)UnBox (L_1, t465617797_TI_var))));
		float* L_2 = __this->fag0();
		float L_3 = (&V_0)->fg0();
		bool L_4 = m3359827399(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		float* L_5 = __this->fag1();
		float L_6 = (&V_0)->fg1();
		bool L_7 = m3359827399(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		float* L_8 = __this->fag2();
		float L_9 = (&V_0)->fg2();
		bool L_10 = m3359827399(L_8, L_9, NULL);
		G_B6_0 = ((int32_t)(L_10));
		goto IL_0057;
	}

IL_0056:
	{
		G_B6_0 = 0;
	}

IL_0057:
	{
		return (bool)G_B6_0;
	}
}
extern TypeInfo* t3632007997_TI_var;
extern TypeInfo* t1791520093_TI_var;
extern Il2CppCodeGenString* _stringLiteral2889564913;
extern const uint32_t m3857189970_MetadataUsageId;
extern "C"  String_t* m3857189970 (t465617797 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m3857189970_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		t3632007997* L_0 = ((t3632007997*)SZArrayNew(t3632007997_TI_var, (uint32_t)3));
		float L_1 = __this->fg0();
		float L_2 = L_1;
		Il2CppObject * L_3 = Box(t1791520093_TI_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_3);
		t3632007997* L_4 = L_0;
		float L_5 = __this->fg1();
		float L_6 = L_5;
		Il2CppObject * L_7 = Box(t1791520093_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_7);
		t3632007997* L_8 = L_4;
		float L_9 = __this->fg2();
		float L_10 = L_9;
		Il2CppObject * L_11 = Box(t1791520093_TI_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)L_11);
		String_t* L_12 = m2949645127(NULL, _stringLiteral2889564913, L_8, NULL);
		return L_12;
	}
}
// Conversion methods for marshalling of: UnityEngine.Vector3
extern "C" void t465617797_marshal_pinvoke(const t465617797& unmarshaled, t465617797_marshaled_pinvoke& marshaled)
{
	marshaled.f0 = unmarshaled.fg0();
	marshaled.f1 = unmarshaled.fg1();
	marshaled.f2 = unmarshaled.fg2();
}
extern "C" void t465617797_marshal_pinvoke_back(const t465617797_marshaled_pinvoke& marshaled, t465617797& unmarshaled)
{
	float unmarshaled_x_temp = 0.0f;
	unmarshaled_x_temp = marshaled.f0;
	unmarshaled.fs0(unmarshaled_x_temp);
	float unmarshaled_y_temp = 0.0f;
	unmarshaled_y_temp = marshaled.f1;
	unmarshaled.fs1(unmarshaled_y_temp);
	float unmarshaled_z_temp = 0.0f;
	unmarshaled_z_temp = marshaled.f2;
	unmarshaled.fs2(unmarshaled_z_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.Vector3
extern "C" void t465617797_marshal_pinvoke_cleanup(t465617797_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Vector3
extern "C" void t465617797_marshal_com(const t465617797& unmarshaled, t465617797_marshaled_com& marshaled)
{
	marshaled.f0 = unmarshaled.fg0();
	marshaled.f1 = unmarshaled.fg1();
	marshaled.f2 = unmarshaled.fg2();
}
extern "C" void t465617797_marshal_com_back(const t465617797_marshaled_com& marshaled, t465617797& unmarshaled)
{
	float unmarshaled_x_temp = 0.0f;
	unmarshaled_x_temp = marshaled.f0;
	unmarshaled.fs0(unmarshaled_x_temp);
	float unmarshaled_y_temp = 0.0f;
	unmarshaled_y_temp = marshaled.f1;
	unmarshaled.fs1(unmarshaled_y_temp);
	float unmarshaled_z_temp = 0.0f;
	unmarshaled_z_temp = marshaled.f2;
	unmarshaled.fs2(unmarshaled_z_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.Vector3
extern "C" void t465617797_marshal_com_cleanup(t465617797_marshaled_com& marshaled)
{
}
extern "C"  void m3062480170 (t2828800938 * __this, const MethodInfo* method)
{
	{
		m2014522928(__this, NULL);
		return;
	}
}
extern "C"  void m3781413380 (t3011942582 * __this, const MethodInfo* method)
{
	{
		m2014522928(__this, NULL);
		return;
	}
}
extern "C"  void m1990515539 (t1717981302 * __this, float p0, const MethodInfo* method)
{
	{
		m2014522928(__this, NULL);
		float L_0 = p0;
		__this->fs0(L_0);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void t1717981302_marshal_pinvoke(const t1717981302& unmarshaled, t1717981302_marshaled_pinvoke& marshaled)
{
	marshaled.f0 = unmarshaled.fg0();
}
extern "C" void t1717981302_marshal_pinvoke_back(const t1717981302_marshaled_pinvoke& marshaled, t1717981302& unmarshaled)
{
	float unmarshaled_m_Seconds_temp = 0.0f;
	unmarshaled_m_Seconds_temp = marshaled.f0;
	unmarshaled.fs0(unmarshaled_m_Seconds_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void t1717981302_marshal_pinvoke_cleanup(t1717981302_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void t1717981302_marshal_com(const t1717981302& unmarshaled, t1717981302_marshaled_com& marshaled)
{
	marshaled.f0 = unmarshaled.fg0();
}
extern "C" void t1717981302_marshal_com_back(const t1717981302_marshaled_com& marshaled, t1717981302& unmarshaled)
{
	float unmarshaled_m_Seconds_temp = 0.0f;
	unmarshaled_m_Seconds_temp = marshaled.f0;
	unmarshaled.fs0(unmarshaled_m_Seconds_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void t1717981302_marshal_com_cleanup(t1717981302_marshaled_com& marshaled)
{
}
extern "C"  void m4149541650 (t1871166592 * __this, const MethodInfo* method)
{
	{
		m1730479323(__this, NULL);
		return;
	}
}
extern "C"  void m761932763 (t379027929 * __this, const MethodInfo* method)
{
	{
		m1730479323(__this, NULL);
		return;
	}
}
extern "C"  void m2014522928 (t1518686560 * __this, const MethodInfo* method)
{
	{
		m2551263788(__this, NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void t1518686560_marshal_pinvoke(const t1518686560& unmarshaled, t1518686560_marshaled_pinvoke& marshaled)
{
}
extern "C" void t1518686560_marshal_pinvoke_back(const t1518686560_marshaled_pinvoke& marshaled, t1518686560& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void t1518686560_marshal_pinvoke_cleanup(t1518686560_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void t1518686560_marshal_com(const t1518686560& unmarshaled, t1518686560_marshaled_com& marshaled)
{
}
extern "C" void t1518686560_marshal_com_back(const t1518686560_marshaled_com& marshaled, t1518686560& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void t1518686560_marshal_com_cleanup(t1518686560_marshaled_com& marshaled)
{
}
extern TypeInfo* t4176747441_TI_var;
extern const uint32_t m1836685460_MetadataUsageId;
extern "C"  void m1836685460 (Il2CppObject * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m1836685460_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((t4176747441_SFs*)t4176747441_TI_var->static_fields)->fs0((1.17549435E-38f));
		il2cpp_codegen_memory_barrier();
		((t4176747441_SFs*)t4176747441_TI_var->static_fields)->fs1((1.401298E-45f));
		float L_0 = ((t4176747441_SFs*)t4176747441_TI_var->static_fields)->fg1();
		il2cpp_codegen_memory_barrier();
		float L_1 = m3227034792(NULL, (((t4176747441_SFs*)t4176747441_TI_var->static_fields)->fag1()), L_0, (0.0f), NULL);
		((t4176747441_SFs*)t4176747441_TI_var->static_fields)->fs2((bool)((((float)L_1) == ((float)(0.0f)))? 1 : 0));
		return;
	}
}
// Conversion methods for marshalling of: UnityEngineInternal.MathfInternal
extern "C" void t4176747441_marshal_pinvoke(const t4176747441& unmarshaled, t4176747441_marshaled_pinvoke& marshaled)
{
}
extern "C" void t4176747441_marshal_pinvoke_back(const t4176747441_marshaled_pinvoke& marshaled, t4176747441& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.MathfInternal
extern "C" void t4176747441_marshal_pinvoke_cleanup(t4176747441_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngineInternal.MathfInternal
extern "C" void t4176747441_marshal_com(const t4176747441& unmarshaled, t4176747441_marshaled_com& marshaled)
{
}
extern "C" void t4176747441_marshal_com_back(const t4176747441_marshaled_com& marshaled, t4176747441& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.MathfInternal
extern "C" void t4176747441_marshal_com_cleanup(t4176747441_marshaled_com& marshaled)
{
}
extern TypeInfo* t833924248_TI_var;
extern const uint32_t m599630929_MetadataUsageId;
extern "C"  void m599630929 (t2532277353 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m599630929_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(t833924248_TI_var, &L_1);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (t285998070 *)L_2);
		m470566337(__this, L_3, NULL);
		return;
	}
}
extern "C"  void m470566337 (t2532277353 * __this, String_t* p0, const MethodInfo* method)
{
	{
		m1730479323(__this, NULL);
		String_t* L_0 = p0;
		__this->fs0(L_0);
		return;
	}
}
extern "C"  String_t* m3941510216 (t2532277353 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->fg0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

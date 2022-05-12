﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>

#include "icalls/System/System.Net.Sockets/SocketException.h"
#include "icalls/System/System.Diagnostics/Stopwatch.h"

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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.String,System.UriParser>
struct Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.ComponentModel.BaseNumberConverter
struct BaseNumberConverter_t6CA2001CE79249FCF74FC888710AAD5CA23B748C;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t8C098DB59DF7BA2C2A71369978F4225B92B2F59B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E;
// System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
struct RootDesignerSerializerAttribute_t94B45651ACD930D254222DF6CCE7443322C79BD6;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B;
// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45;
// Microsoft.Win32.SafeHandles.SafeProcessHandle
struct SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_tBDFCD14FA5A9ABB1BE70A69621349A23B402989C;
// System.ComponentModel.SettingsBindableAttribute
struct SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0;
// System.Net.Configuration.SettingsSection
struct SettingsSection_t711E6C3A32C96E69BF15E02FF55E58AF33EB95EB;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926;
// System.ComponentModel.SingleConverter
struct SingleConverter_t75FCE834B5B2A74CB252021292C9DC205B322391;
// System.Net.Configuration.SocketElement
struct SocketElement_t3A1494C40F44B3BE110D39607B00AE67C9962450;
// System.Net.Sockets.SocketException
struct SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// System.ComponentModel.StringConverter
struct StringConverter_tEC598B89E55C16F1669CFBC98F5C2308E2F232E5;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.ComponentModel.TimeSpanConverter
struct TimeSpanConverter_t5F2498D1A18C834B1F4B9E7A3CF59069D2B72D2E;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4;
// System.ComponentModel.TypeConverterAttribute
struct TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriFormatException
struct UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// System.ComponentModel.Win32Exception
struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950;
// System.Uri/MoreInfo
struct MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriComponents_tA599793722A9810EC23036FF1B1B02A905B4EA76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0____C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0____E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00ED444101CADBDD612603B145DC44E57F6FCA22;
IL2CPP_EXTERN_C String_t* _stringLiteral02158C33AAFC69461998755D511D2DD0C9BDBB59;
IL2CPP_EXTERN_C String_t* _stringLiteral0D714861C7EC595B0F134B25D51B6C3D17B97BE7;
IL2CPP_EXTERN_C String_t* _stringLiteral0ECCA26D6E6512BFFD6AC0372868F35B289A0AC9;
IL2CPP_EXTERN_C String_t* _stringLiteral10967EC4A6C481862CE1D9E400B88D2400A58495;
IL2CPP_EXTERN_C String_t* _stringLiteral19A73218F14885E4C839EDA68A1C1C791F7745AA;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24E3F48402E3AE0939BE896FBDE3DE4520C9893D;
IL2CPP_EXTERN_C String_t* _stringLiteral2548827C46E1449217FD7CD3DA9F653E7BC05534;
IL2CPP_EXTERN_C String_t* _stringLiteral2659A93A14DB81D09000B3E98CBB7FBD3940D067;
IL2CPP_EXTERN_C String_t* _stringLiteral279EA60C732ADCA7403A83C01015BDFB2C45ECA3;
IL2CPP_EXTERN_C String_t* _stringLiteral2972BFE844E63CD209338A1C5E5ADB3707E7B9B9;
IL2CPP_EXTERN_C String_t* _stringLiteral491588DC50F24F885876BF828F202716C7BE3803;
IL2CPP_EXTERN_C String_t* _stringLiteral4FB7CA16AB7B5A4F956554894A7222DF13F448AA;
IL2CPP_EXTERN_C String_t* _stringLiteral53CEBA286266000AA0D18A26DBE6FBE7714C8319;
IL2CPP_EXTERN_C String_t* _stringLiteral659F36F170A47067B1A80CD9B6619237197BD872;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
IL2CPP_EXTERN_C String_t* _stringLiteral6D153343DC0552ABAFC2B893F453DC72854A37BE;
IL2CPP_EXTERN_C String_t* _stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA;
IL2CPP_EXTERN_C String_t* _stringLiteral778DFAE29C280DA8F24CB36747AB3656B8220A6F;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral82F0E6BA3FD6F5AA7F9F5A798046A3B615F6D560;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral9A62305734B1A5D8C56B0791FEB96BCDDD1CD15E;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB856D5F930F0597377D1341A0C6F24DD74854667;
IL2CPP_EXTERN_C String_t* _stringLiteralC754689D33E77DA33A161FB7A06C164EDF02EE65;
IL2CPP_EXTERN_C String_t* _stringLiteralCAE6B383FC259C6D8E02FFF07CC62BD90BA58157;
IL2CPP_EXTERN_C String_t* _stringLiteralD90CDA62B9AE646096CCD287ACE999D2EFB8ADA5;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA0FEDECC3765A8D5F295C4B302D615D29F3483;
IL2CPP_EXTERN_C String_t* _stringLiteralE13258345AC5ED7FA38D641004219DBE3A3FB56C;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE610AFD3290809B1D62848F53491246DB230B5BB;
IL2CPP_EXTERN_C String_t* _stringLiteralE657126EBF76C06687ED6EAD2C714E37315C927F;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralE86F8F43B9D456F4E47ACD029ADCCE78BE9C9AA7;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF7C03E97995F6950303A46C204A216735E6B4582;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement__ctor_mA04F31D124B40258FE6673A2B7B0F7B2CE787615_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_Properties_mCB80284E347910A59F7B5A495D5862533E41907A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection__ctor_m09A6DF12BD56D2C0E0ABA8152004C486B1DE97E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_Properties_mE5337C4AF39EA0A1B2AEB842CDBB16B8C0C1C4A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement__ctor_m5D5BA302FD35A1D25BB3A596954F92AB26C3DEF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_get_Properties_m9A46DB832A9DA2A3E8F3B74D83DD96EC8A180984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringDictionary_Add_mA629D832E536EAF65C3FFB82D54954F7E025E38B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_mA667A039AC2AB853687594A68EFA90A799028D4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri_CreateHelper_m95C8DB174EFC0CB21C3A74160A1001C14D3EF6DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri_CreateHostStringHelper_m53D695F65E776AB98FD3359894C2C34109E08D00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri_CreateThis_m86E72577BCB9A6FDF5A0EC8EDFDD5F41AD3256FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri_FromHex_m16E5FED0B58BA0A603C6BDDE6AA90F3C3FC78977_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri_GetComponentsHelper_mAA39E421157735AAD7D93A187CCCAED5A122C8E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri_GetComponents_mA614A98C35F2E5D924A10A8018A46606AFB6133E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri_GetHostViaCustomSyntax_mF2DABFE767AB49B8F8E0C9E19937AF900A1E4BC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri_GetRelativeSerializationString_mBCE8CC99C746B18A9DE0B2C6084C5B90A192130D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri_ParseRemaining_m8C4350479C64906DDE464595F8BE5F8C14F2038D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri_ParseSchemeCheckImplicitFile_m5F6B3C184CF455ED80D78937F208EB8C10265395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri_UnescapeDataString_m52E242703F2842594B2B37D673CDD5465ABCC836_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri__ctor_m77D32DF0ABC88A040214913D87A07F2C522CCD18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri__ctor_m8AEBDC795304F6C78A02BC41BB4C6BF93C4DE53B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri_get_DnsSafeHost_m3A22E10619987FC8FED6CEDDCA5D9647AC5B6AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri_get_IsUnc_m74CE69038E37D7F868EF3EFD9DCCD08AA11877CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29_RuntimeMethod_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Configuration.ConfigurationElement
struct ConfigurationElement_t571C446CFDFF39CF17130653C433786BEFF25DFA  : public RuntimeObject
{
public:

public:
};


// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t8C098DB59DF7BA2C2A71369978F4225B92B2F59B  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.IO.Path
struct Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921  : public RuntimeObject
{
public:

public:
};

struct Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields
{
public:
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimEndCharsUnix_9;

public:
	inline static int32_t get_offset_of_InvalidPathChars_0() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___InvalidPathChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_InvalidPathChars_0() const { return ___InvalidPathChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_InvalidPathChars_0() { return &___InvalidPathChars_0; }
	inline void set_InvalidPathChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___InvalidPathChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvalidPathChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_AltDirectorySeparatorChar_1() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___AltDirectorySeparatorChar_1)); }
	inline Il2CppChar get_AltDirectorySeparatorChar_1() const { return ___AltDirectorySeparatorChar_1; }
	inline Il2CppChar* get_address_of_AltDirectorySeparatorChar_1() { return &___AltDirectorySeparatorChar_1; }
	inline void set_AltDirectorySeparatorChar_1(Il2CppChar value)
	{
		___AltDirectorySeparatorChar_1 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorChar_2() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___DirectorySeparatorChar_2)); }
	inline Il2CppChar get_DirectorySeparatorChar_2() const { return ___DirectorySeparatorChar_2; }
	inline Il2CppChar* get_address_of_DirectorySeparatorChar_2() { return &___DirectorySeparatorChar_2; }
	inline void set_DirectorySeparatorChar_2(Il2CppChar value)
	{
		___DirectorySeparatorChar_2 = value;
	}

	inline static int32_t get_offset_of_PathSeparator_3() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___PathSeparator_3)); }
	inline Il2CppChar get_PathSeparator_3() const { return ___PathSeparator_3; }
	inline Il2CppChar* get_address_of_PathSeparator_3() { return &___PathSeparator_3; }
	inline void set_PathSeparator_3(Il2CppChar value)
	{
		___PathSeparator_3 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorStr_4() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___DirectorySeparatorStr_4)); }
	inline String_t* get_DirectorySeparatorStr_4() const { return ___DirectorySeparatorStr_4; }
	inline String_t** get_address_of_DirectorySeparatorStr_4() { return &___DirectorySeparatorStr_4; }
	inline void set_DirectorySeparatorStr_4(String_t* value)
	{
		___DirectorySeparatorStr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DirectorySeparatorStr_4), (void*)value);
	}

	inline static int32_t get_offset_of_VolumeSeparatorChar_5() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___VolumeSeparatorChar_5)); }
	inline Il2CppChar get_VolumeSeparatorChar_5() const { return ___VolumeSeparatorChar_5; }
	inline Il2CppChar* get_address_of_VolumeSeparatorChar_5() { return &___VolumeSeparatorChar_5; }
	inline void set_VolumeSeparatorChar_5(Il2CppChar value)
	{
		___VolumeSeparatorChar_5 = value;
	}

	inline static int32_t get_offset_of_PathSeparatorChars_6() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___PathSeparatorChars_6)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_PathSeparatorChars_6() const { return ___PathSeparatorChars_6; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_PathSeparatorChars_6() { return &___PathSeparatorChars_6; }
	inline void set_PathSeparatorChars_6(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___PathSeparatorChars_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PathSeparatorChars_6), (void*)value);
	}

	inline static int32_t get_offset_of_dirEqualsVolume_7() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___dirEqualsVolume_7)); }
	inline bool get_dirEqualsVolume_7() const { return ___dirEqualsVolume_7; }
	inline bool* get_address_of_dirEqualsVolume_7() { return &___dirEqualsVolume_7; }
	inline void set_dirEqualsVolume_7(bool value)
	{
		___dirEqualsVolume_7 = value;
	}

	inline static int32_t get_offset_of_trimEndCharsWindows_8() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___trimEndCharsWindows_8)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_trimEndCharsWindows_8() const { return ___trimEndCharsWindows_8; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_trimEndCharsWindows_8() { return &___trimEndCharsWindows_8; }
	inline void set_trimEndCharsWindows_8(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___trimEndCharsWindows_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trimEndCharsWindows_8), (void*)value);
	}

	inline static int32_t get_offset_of_trimEndCharsUnix_9() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___trimEndCharsUnix_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_trimEndCharsUnix_9() const { return ___trimEndCharsUnix_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_trimEndCharsUnix_9() { return &___trimEndCharsUnix_9; }
	inline void set_trimEndCharsUnix_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___trimEndCharsUnix_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trimEndCharsUnix_9), (void*)value);
	}
};


// SR
struct SR_t7C9BB2906843BCE54155B2E99C05E0687AEB25FC  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_6)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
};


// System.Text.RegularExpressions.SharedReference
struct SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926  : public RuntimeObject
{
public:
	// System.WeakReference System.Text.RegularExpressions.SharedReference::_ref
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ____ref_0;
	// System.Int32 System.Text.RegularExpressions.SharedReference::_locked
	int32_t ____locked_1;

public:
	inline static int32_t get_offset_of__ref_0() { return static_cast<int32_t>(offsetof(SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926, ____ref_0)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get__ref_0() const { return ____ref_0; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of__ref_0() { return &____ref_0; }
	inline void set__ref_0(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		____ref_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ref_0), (void*)value);
	}

	inline static int32_t get_offset_of__locked_1() { return static_cast<int32_t>(offsetof(SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926, ____locked_1)); }
	inline int32_t get__locked_1() const { return ____locked_1; }
	inline int32_t* get_address_of__locked_1() { return &____locked_1; }
	inline void set__locked_1(int32_t value)
	{
		____locked_1 = value;
	}
};


// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
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


// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCulture_0), (void*)value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCultureIgnoreCase_1), (void*)value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinal_2)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinal_2), (void*)value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinalIgnoreCase_3), (void*)value);
	}
};


// System.Collections.Specialized.StringDictionary
struct StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79, ___contents_0)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contents_0), (void*)value);
	}
};


// System.UncNameHelper
struct UncNameHelper_t8588082B217370E41636ED5A9EF5A608858709E9  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Uri/MoreInfo
struct MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727  : public RuntimeObject
{
public:
	// System.String System.Uri/MoreInfo::AbsoluteUri
	String_t* ___AbsoluteUri_0;
	// System.Int32 System.Uri/MoreInfo::Hash
	int32_t ___Hash_1;
	// System.String System.Uri/MoreInfo::RemoteUrl
	String_t* ___RemoteUrl_2;

public:
	inline static int32_t get_offset_of_AbsoluteUri_0() { return static_cast<int32_t>(offsetof(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727, ___AbsoluteUri_0)); }
	inline String_t* get_AbsoluteUri_0() const { return ___AbsoluteUri_0; }
	inline String_t** get_address_of_AbsoluteUri_0() { return &___AbsoluteUri_0; }
	inline void set_AbsoluteUri_0(String_t* value)
	{
		___AbsoluteUri_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AbsoluteUri_0), (void*)value);
	}

	inline static int32_t get_offset_of_Hash_1() { return static_cast<int32_t>(offsetof(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727, ___Hash_1)); }
	inline int32_t get_Hash_1() const { return ___Hash_1; }
	inline int32_t* get_address_of_Hash_1() { return &___Hash_1; }
	inline void set_Hash_1(int32_t value)
	{
		___Hash_1 = value;
	}

	inline static int32_t get_offset_of_RemoteUrl_2() { return static_cast<int32_t>(offsetof(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727, ___RemoteUrl_2)); }
	inline String_t* get_RemoteUrl_2() const { return ___RemoteUrl_2; }
	inline String_t** get_address_of_RemoteUrl_2() { return &___RemoteUrl_2; }
	inline void set_RemoteUrl_2(String_t* value)
	{
		___RemoteUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteUrl_2), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Configuration.ConfigurationSection
struct ConfigurationSection_t0D68AA1EA007506253A4935DB9F357AF9B50C683  : public ConfigurationElement_t571C446CFDFF39CF17130653C433786BEFF25DFA
{
public:

public:
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
struct RootDesignerSerializerAttribute_t94B45651ACD930D254222DF6CCE7443322C79BD6  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::reloadable
	bool ___reloadable_0;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::serializerTypeName
	String_t* ___serializerTypeName_1;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::serializerBaseTypeName
	String_t* ___serializerBaseTypeName_2;

public:
	inline static int32_t get_offset_of_reloadable_0() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t94B45651ACD930D254222DF6CCE7443322C79BD6, ___reloadable_0)); }
	inline bool get_reloadable_0() const { return ___reloadable_0; }
	inline bool* get_address_of_reloadable_0() { return &___reloadable_0; }
	inline void set_reloadable_0(bool value)
	{
		___reloadable_0 = value;
	}

	inline static int32_t get_offset_of_serializerTypeName_1() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t94B45651ACD930D254222DF6CCE7443322C79BD6, ___serializerTypeName_1)); }
	inline String_t* get_serializerTypeName_1() const { return ___serializerTypeName_1; }
	inline String_t** get_address_of_serializerTypeName_1() { return &___serializerTypeName_1; }
	inline void set_serializerTypeName_1(String_t* value)
	{
		___serializerTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializerTypeName_1), (void*)value);
	}

	inline static int32_t get_offset_of_serializerBaseTypeName_2() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t94B45651ACD930D254222DF6CCE7443322C79BD6, ___serializerBaseTypeName_2)); }
	inline String_t* get_serializerBaseTypeName_2() const { return ___serializerBaseTypeName_2; }
	inline String_t** get_address_of_serializerBaseTypeName_2() { return &___serializerBaseTypeName_2; }
	inline void set_serializerBaseTypeName_2(String_t* value)
	{
		___serializerBaseTypeName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializerBaseTypeName_2), (void*)value);
	}
};


// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_tBDFCD14FA5A9ABB1BE70A69621349A23B402989C  : public ConfigurationElement_t571C446CFDFF39CF17130653C433786BEFF25DFA
{
public:

public:
};


// System.ComponentModel.SettingsBindableAttribute
struct SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.ComponentModel.SettingsBindableAttribute::_bindable
	bool ____bindable_2;

public:
	inline static int32_t get_offset_of__bindable_2() { return static_cast<int32_t>(offsetof(SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0, ____bindable_2)); }
	inline bool get__bindable_2() const { return ____bindable_2; }
	inline bool* get_address_of__bindable_2() { return &____bindable_2; }
	inline void set__bindable_2(bool value)
	{
		____bindable_2 = value;
	}
};

struct SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0_StaticFields
{
public:
	// System.ComponentModel.SettingsBindableAttribute System.ComponentModel.SettingsBindableAttribute::Yes
	SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 * ___Yes_0;
	// System.ComponentModel.SettingsBindableAttribute System.ComponentModel.SettingsBindableAttribute::No
	SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 * ___No_1;

public:
	inline static int32_t get_offset_of_Yes_0() { return static_cast<int32_t>(offsetof(SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0_StaticFields, ___Yes_0)); }
	inline SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 * get_Yes_0() const { return ___Yes_0; }
	inline SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 ** get_address_of_Yes_0() { return &___Yes_0; }
	inline void set_Yes_0(SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 * value)
	{
		___Yes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Yes_0), (void*)value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0_StaticFields, ___No_1)); }
	inline SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 * get_No_1() const { return ___No_1; }
	inline SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___No_1), (void*)value);
	}
};


// System.Net.Configuration.SocketElement
struct SocketElement_t3A1494C40F44B3BE110D39607B00AE67C9962450  : public ConfigurationElement_t571C446CFDFF39CF17130653C433786BEFF25DFA
{
public:

public:
};


// System.ComponentModel.TypeConverterAttribute
struct TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ComponentModel.TypeConverterAttribute::typeName
	String_t* ___typeName_0;

public:
	inline static int32_t get_offset_of_typeName_0() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83, ___typeName_0)); }
	inline String_t* get_typeName_0() const { return ___typeName_0; }
	inline String_t** get_address_of_typeName_0() { return &___typeName_0; }
	inline void set_typeName_0(String_t* value)
	{
		___typeName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_0), (void*)value);
	}
};

struct TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83_StaticFields
{
public:
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83_StaticFields, ___Default_1)); }
	inline TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 * get_Default_1() const { return ___Default_1; }
	inline TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_1), (void*)value);
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B__padding[128];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F__padding[32];
	};

public:
};


// System.Uri/Offset
#pragma pack(push, tp, 1)
struct Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 
{
public:
	// System.UInt16 System.Uri/Offset::Scheme
	uint16_t ___Scheme_0;
	// System.UInt16 System.Uri/Offset::User
	uint16_t ___User_1;
	// System.UInt16 System.Uri/Offset::Host
	uint16_t ___Host_2;
	// System.UInt16 System.Uri/Offset::PortValue
	uint16_t ___PortValue_3;
	// System.UInt16 System.Uri/Offset::Path
	uint16_t ___Path_4;
	// System.UInt16 System.Uri/Offset::Query
	uint16_t ___Query_5;
	// System.UInt16 System.Uri/Offset::Fragment
	uint16_t ___Fragment_6;
	// System.UInt16 System.Uri/Offset::End
	uint16_t ___End_7;

public:
	inline static int32_t get_offset_of_Scheme_0() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Scheme_0)); }
	inline uint16_t get_Scheme_0() const { return ___Scheme_0; }
	inline uint16_t* get_address_of_Scheme_0() { return &___Scheme_0; }
	inline void set_Scheme_0(uint16_t value)
	{
		___Scheme_0 = value;
	}

	inline static int32_t get_offset_of_User_1() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___User_1)); }
	inline uint16_t get_User_1() const { return ___User_1; }
	inline uint16_t* get_address_of_User_1() { return &___User_1; }
	inline void set_User_1(uint16_t value)
	{
		___User_1 = value;
	}

	inline static int32_t get_offset_of_Host_2() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Host_2)); }
	inline uint16_t get_Host_2() const { return ___Host_2; }
	inline uint16_t* get_address_of_Host_2() { return &___Host_2; }
	inline void set_Host_2(uint16_t value)
	{
		___Host_2 = value;
	}

	inline static int32_t get_offset_of_PortValue_3() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___PortValue_3)); }
	inline uint16_t get_PortValue_3() const { return ___PortValue_3; }
	inline uint16_t* get_address_of_PortValue_3() { return &___PortValue_3; }
	inline void set_PortValue_3(uint16_t value)
	{
		___PortValue_3 = value;
	}

	inline static int32_t get_offset_of_Path_4() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Path_4)); }
	inline uint16_t get_Path_4() const { return ___Path_4; }
	inline uint16_t* get_address_of_Path_4() { return &___Path_4; }
	inline void set_Path_4(uint16_t value)
	{
		___Path_4 = value;
	}

	inline static int32_t get_offset_of_Query_5() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Query_5)); }
	inline uint16_t get_Query_5() const { return ___Query_5; }
	inline uint16_t* get_address_of_Query_5() { return &___Query_5; }
	inline void set_Query_5(uint16_t value)
	{
		___Query_5 = value;
	}

	inline static int32_t get_offset_of_Fragment_6() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Fragment_6)); }
	inline uint16_t get_Fragment_6() const { return ___Fragment_6; }
	inline uint16_t* get_address_of_Fragment_6() { return &___Fragment_6; }
	inline void set_Fragment_6(uint16_t value)
	{
		___Fragment_6 = value;
	}

	inline static int32_t get_offset_of_End_7() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___End_7)); }
	inline uint16_t get_End_7() const { return ___End_7; }
	inline uint16_t* get_address_of_End_7() { return &___End_7; }
	inline void set_End_7(uint16_t value)
	{
		___End_7 = value;
	}
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::59F5BD34B6C013DEACC784F69C67E95150033A84
	__StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  ___59F5BD34B6C013DEACC784F69C67E95150033A84_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536
	__StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::CCEEADA43268372341F81AE0C9208C6856441C04
	__StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B  ___CCEEADA43268372341F81AE0C9208C6856441C04_2;
	// System.Int64 <PrivateImplementationDetails>::E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78
	int64_t ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3;

public:
	inline static int32_t get_offset_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0_StaticFields, ___59F5BD34B6C013DEACC784F69C67E95150033A84_0)); }
	inline __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  get_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() const { return ___59F5BD34B6C013DEACC784F69C67E95150033A84_0; }
	inline __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F * get_address_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() { return &___59F5BD34B6C013DEACC784F69C67E95150033A84_0; }
	inline void set_U359F5BD34B6C013DEACC784F69C67E95150033A84_0(__StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  value)
	{
		___59F5BD34B6C013DEACC784F69C67E95150033A84_0 = value;
	}

	inline static int32_t get_offset_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0_StaticFields, ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1)); }
	inline __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  get_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1() const { return ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1; }
	inline __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F * get_address_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1() { return &___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1; }
	inline void set_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1(__StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  value)
	{
		___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1 = value;
	}

	inline static int32_t get_offset_of_CCEEADA43268372341F81AE0C9208C6856441C04_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0_StaticFields, ___CCEEADA43268372341F81AE0C9208C6856441C04_2)); }
	inline __StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B  get_CCEEADA43268372341F81AE0C9208C6856441C04_2() const { return ___CCEEADA43268372341F81AE0C9208C6856441C04_2; }
	inline __StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B * get_address_of_CCEEADA43268372341F81AE0C9208C6856441C04_2() { return &___CCEEADA43268372341F81AE0C9208C6856441C04_2; }
	inline void set_CCEEADA43268372341F81AE0C9208C6856441C04_2(__StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B  value)
	{
		___CCEEADA43268372341F81AE0C9208C6856441C04_2 = value;
	}

	inline static int32_t get_offset_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0_StaticFields, ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3)); }
	inline int64_t get_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3() const { return ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3; }
	inline int64_t* get_address_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3() { return &___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3; }
	inline void set_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3(int64_t value)
	{
		___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* ___buckets_10;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_11;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_12;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_13;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_20;

public:
	inline static int32_t get_offset_of_buckets_10() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___buckets_10)); }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* get_buckets_10() const { return ___buckets_10; }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190** get_address_of_buckets_10() { return &___buckets_10; }
	inline void set_buckets_10(bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* value)
	{
		___buckets_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_10), (void*)value);
	}

	inline static int32_t get_offset_of_count_11() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___count_11)); }
	inline int32_t get_count_11() const { return ___count_11; }
	inline int32_t* get_address_of_count_11() { return &___count_11; }
	inline void set_count_11(int32_t value)
	{
		___count_11 = value;
	}

	inline static int32_t get_offset_of_occupancy_12() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___occupancy_12)); }
	inline int32_t get_occupancy_12() const { return ___occupancy_12; }
	inline int32_t* get_address_of_occupancy_12() { return &___occupancy_12; }
	inline void set_occupancy_12(int32_t value)
	{
		___occupancy_12 = value;
	}

	inline static int32_t get_offset_of_loadsize_13() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadsize_13)); }
	inline int32_t get_loadsize_13() const { return ___loadsize_13; }
	inline int32_t* get_address_of_loadsize_13() { return &___loadsize_13; }
	inline void set_loadsize_13(int32_t value)
	{
		___loadsize_13 = value;
	}

	inline static int32_t get_offset_of_loadFactor_14() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadFactor_14)); }
	inline float get_loadFactor_14() const { return ___loadFactor_14; }
	inline float* get_address_of_loadFactor_14() { return &___loadFactor_14; }
	inline void set_loadFactor_14(float value)
	{
		___loadFactor_14 = value;
	}

	inline static int32_t get_offset_of_version_15() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___version_15)); }
	inline int32_t get_version_15() const { return ___version_15; }
	inline int32_t* get_address_of_version_15() { return &___version_15; }
	inline void set_version_15(int32_t value)
	{
		___version_15 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_16() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___isWriterInProgress_16)); }
	inline bool get_isWriterInProgress_16() const { return ___isWriterInProgress_16; }
	inline bool* get_address_of_isWriterInProgress_16() { return &___isWriterInProgress_16; }
	inline void set_isWriterInProgress_16(bool value)
	{
		___isWriterInProgress_16 = value;
	}

	inline static int32_t get_offset_of_keys_17() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___keys_17)); }
	inline RuntimeObject* get_keys_17() const { return ___keys_17; }
	inline RuntimeObject** get_address_of_keys_17() { return &___keys_17; }
	inline void set_keys_17(RuntimeObject* value)
	{
		___keys_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_17), (void*)value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___values_18)); }
	inline RuntimeObject* get_values_18() const { return ___values_18; }
	inline RuntimeObject** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(RuntimeObject* value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_18), (void*)value);
	}

	inline static int32_t get_offset_of__keycomparer_19() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____keycomparer_19)); }
	inline RuntimeObject* get__keycomparer_19() const { return ____keycomparer_19; }
	inline RuntimeObject** get_address_of__keycomparer_19() { return &____keycomparer_19; }
	inline void set__keycomparer_19(RuntimeObject* value)
	{
		____keycomparer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keycomparer_19), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_20() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____syncRoot_20)); }
	inline RuntimeObject * get__syncRoot_20() const { return ____syncRoot_20; }
	inline RuntimeObject ** get_address_of__syncRoot_20() { return &____syncRoot_20; }
	inline void set__syncRoot_20(RuntimeObject * value)
	{
		____syncRoot_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_20), (void*)value);
	}
};


// System.Text.NormalizationForm
struct NormalizationForm_tCCA9D5E33FA919BB4CA5AC071CE95B428F1BC91E 
{
public:
	// System.Int32 System.Text.NormalizationForm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NormalizationForm_tCCA9D5E33FA919BB4CA5AC071CE95B428F1BC91E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.ParsingError
struct ParsingError_t206602C537093ABC8FD300E67B6B1A67115D24BA 
{
public:
	// System.Int32 System.ParsingError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParsingError_t206602C537093ABC8FD300E67B6B1A67115D24BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};


// System.Net.Configuration.SettingsSection
struct SettingsSection_t711E6C3A32C96E69BF15E02FF55E58AF33EB95EB  : public ConfigurationSection_t0D68AA1EA007506253A4935DB9F357AF9B50C683
{
public:

public:
};


// System.Net.Sockets.SocketError
struct SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80 
{
public:
	// System.Int32 System.Net.Sockets.SocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.ComponentModel.TypeConverter
struct TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4  : public RuntimeObject
{
public:

public:
};

struct TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4_StaticFields
{
public:
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;

public:
	inline static int32_t get_offset_of_useCompatibleTypeConversion_1() { return static_cast<int32_t>(offsetof(TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4_StaticFields, ___useCompatibleTypeConversion_1)); }
	inline bool get_useCompatibleTypeConversion_1() const { return ___useCompatibleTypeConversion_1; }
	inline bool* get_address_of_useCompatibleTypeConversion_1() { return &___useCompatibleTypeConversion_1; }
	inline void set_useCompatibleTypeConversion_1(bool value)
	{
		___useCompatibleTypeConversion_1 = value;
	}
};


// System.UnescapeMode
struct UnescapeMode_tAAD72A439A031D63DA366126306CC0DDB9312850 
{
public:
	// System.Int32 System.UnescapeMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnescapeMode_tAAD72A439A031D63DA366126306CC0DDB9312850, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriComponents
struct UriComponents_tA599793722A9810EC23036FF1B1B02A905B4EA76 
{
public:
	// System.Int32 System.UriComponents::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriComponents_tA599793722A9810EC23036FF1B1B02A905B4EA76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriSyntaxFlags
struct UriSyntaxFlags_t00ABF83A3AA06E5B670D3F73E3E87BC21F72044A 
{
public:
	// System.Int32 System.UriSyntaxFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriSyntaxFlags_t00ABF83A3AA06E5B670D3F73E3E87BC21F72044A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___gcHandle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gcHandle_1 = value;
	}
};


// System.Uri/Check
struct Check_tEDA05554030AFFE9920C7E4C2233599B26DA74E8 
{
public:
	// System.Int32 System.Uri/Check::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Check_tEDA05554030AFFE9920C7E4C2233599B26DA74E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45  : public RuntimeObject
{
public:
	// System.String System.Uri/UriInfo::Host
	String_t* ___Host_0;
	// System.String System.Uri/UriInfo::ScopeId
	String_t* ___ScopeId_1;
	// System.String System.Uri/UriInfo::String
	String_t* ___String_2;
	// System.Uri/Offset System.Uri/UriInfo::Offset
	Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5  ___Offset_3;
	// System.String System.Uri/UriInfo::DnsSafeHost
	String_t* ___DnsSafeHost_4;
	// System.Uri/MoreInfo System.Uri/UriInfo::MoreInfo
	MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * ___MoreInfo_5;

public:
	inline static int32_t get_offset_of_Host_0() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___Host_0)); }
	inline String_t* get_Host_0() const { return ___Host_0; }
	inline String_t** get_address_of_Host_0() { return &___Host_0; }
	inline void set_Host_0(String_t* value)
	{
		___Host_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Host_0), (void*)value);
	}

	inline static int32_t get_offset_of_ScopeId_1() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___ScopeId_1)); }
	inline String_t* get_ScopeId_1() const { return ___ScopeId_1; }
	inline String_t** get_address_of_ScopeId_1() { return &___ScopeId_1; }
	inline void set_ScopeId_1(String_t* value)
	{
		___ScopeId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScopeId_1), (void*)value);
	}

	inline static int32_t get_offset_of_String_2() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___String_2)); }
	inline String_t* get_String_2() const { return ___String_2; }
	inline String_t** get_address_of_String_2() { return &___String_2; }
	inline void set_String_2(String_t* value)
	{
		___String_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___String_2), (void*)value);
	}

	inline static int32_t get_offset_of_Offset_3() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___Offset_3)); }
	inline Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5  get_Offset_3() const { return ___Offset_3; }
	inline Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * get_address_of_Offset_3() { return &___Offset_3; }
	inline void set_Offset_3(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5  value)
	{
		___Offset_3 = value;
	}

	inline static int32_t get_offset_of_DnsSafeHost_4() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___DnsSafeHost_4)); }
	inline String_t* get_DnsSafeHost_4() const { return ___DnsSafeHost_4; }
	inline String_t** get_address_of_DnsSafeHost_4() { return &___DnsSafeHost_4; }
	inline void set_DnsSafeHost_4(String_t* value)
	{
		___DnsSafeHost_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DnsSafeHost_4), (void*)value);
	}

	inline static int32_t get_offset_of_MoreInfo_5() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___MoreInfo_5)); }
	inline MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * get_MoreInfo_5() const { return ___MoreInfo_5; }
	inline MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 ** get_address_of_MoreInfo_5() { return &___MoreInfo_5; }
	inline void set_MoreInfo_5(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * value)
	{
		___MoreInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MoreInfo_5), (void*)value);
	}
};


// System.UriParser/UriQuirksVersion
struct UriQuirksVersion_t5A2A88A1D01D0CBC52BC12C612CC1A7F714E79B6 
{
public:
	// System.Int32 System.UriParser/UriQuirksVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriQuirksVersion_t5A2A88A1D01D0CBC52BC12C612CC1A7F714E79B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.ComponentModel.BaseNumberConverter
struct BaseNumberConverter_t6CA2001CE79249FCF74FC888710AAD5CA23B748C  : public TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4
{
public:

public:
};


// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45  : public SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B
{
public:

public:
};


// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.ComponentModel.StringConverter
struct StringConverter_tEC598B89E55C16F1669CFBC98F5C2308E2F232E5  : public TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.ComponentModel.TimeSpanConverter
struct TimeSpanConverter_t5F2498D1A18C834B1F4B9E7A3CF59069D2B72D2E  : public TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
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
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_15)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_18)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A  : public RuntimeObject
{
public:
	// System.UriSyntaxFlags System.UriParser::m_Flags
	int32_t ___m_Flags_2;
	// System.UriSyntaxFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.UriParser::m_UpdatableFlags
	int32_t ___m_UpdatableFlags_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.UriParser::m_UpdatableFlagsUsed
	bool ___m_UpdatableFlagsUsed_4;
	// System.Int32 System.UriParser::m_Port
	int32_t ___m_Port_5;
	// System.String System.UriParser::m_Scheme
	String_t* ___m_Scheme_6;

public:
	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}

	inline static int32_t get_offset_of_m_UpdatableFlags_3() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_UpdatableFlags_3)); }
	inline int32_t get_m_UpdatableFlags_3() const { return ___m_UpdatableFlags_3; }
	inline int32_t* get_address_of_m_UpdatableFlags_3() { return &___m_UpdatableFlags_3; }
	inline void set_m_UpdatableFlags_3(int32_t value)
	{
		___m_UpdatableFlags_3 = value;
	}

	inline static int32_t get_offset_of_m_UpdatableFlagsUsed_4() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_UpdatableFlagsUsed_4)); }
	inline bool get_m_UpdatableFlagsUsed_4() const { return ___m_UpdatableFlagsUsed_4; }
	inline bool* get_address_of_m_UpdatableFlagsUsed_4() { return &___m_UpdatableFlagsUsed_4; }
	inline void set_m_UpdatableFlagsUsed_4(bool value)
	{
		___m_UpdatableFlagsUsed_4 = value;
	}

	inline static int32_t get_offset_of_m_Port_5() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_Port_5)); }
	inline int32_t get_m_Port_5() const { return ___m_Port_5; }
	inline int32_t* get_address_of_m_Port_5() { return &___m_Port_5; }
	inline void set_m_Port_5(int32_t value)
	{
		___m_Port_5 = value;
	}

	inline static int32_t get_offset_of_m_Scheme_6() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_Scheme_6)); }
	inline String_t* get_m_Scheme_6() const { return ___m_Scheme_6; }
	inline String_t** get_address_of_m_Scheme_6() { return &___m_Scheme_6; }
	inline void set_m_Scheme_6(String_t* value)
	{
		___m_Scheme_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scheme_6), (void*)value);
	}
};

struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.UriParser> System.UriParser::m_Table
	Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * ___m_Table_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.UriParser> System.UriParser::m_TempTable
	Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * ___m_TempTable_1;
	// System.UriParser System.UriParser::HttpUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___HttpUri_7;
	// System.UriParser System.UriParser::HttpsUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___HttpsUri_8;
	// System.UriParser System.UriParser::WsUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___WsUri_9;
	// System.UriParser System.UriParser::WssUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___WssUri_10;
	// System.UriParser System.UriParser::FtpUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___FtpUri_11;
	// System.UriParser System.UriParser::FileUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___FileUri_12;
	// System.UriParser System.UriParser::GopherUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___GopherUri_13;
	// System.UriParser System.UriParser::NntpUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___NntpUri_14;
	// System.UriParser System.UriParser::NewsUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___NewsUri_15;
	// System.UriParser System.UriParser::MailToUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___MailToUri_16;
	// System.UriParser System.UriParser::UuidUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___UuidUri_17;
	// System.UriParser System.UriParser::TelnetUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___TelnetUri_18;
	// System.UriParser System.UriParser::LdapUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___LdapUri_19;
	// System.UriParser System.UriParser::NetTcpUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___NetTcpUri_20;
	// System.UriParser System.UriParser::NetPipeUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___NetPipeUri_21;
	// System.UriParser System.UriParser::VsMacrosUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___VsMacrosUri_22;
	// System.UriParser/UriQuirksVersion System.UriParser::s_QuirksVersion
	int32_t ___s_QuirksVersion_23;
	// System.UriSyntaxFlags System.UriParser::HttpSyntaxFlags
	int32_t ___HttpSyntaxFlags_24;
	// System.UriSyntaxFlags System.UriParser::FileSyntaxFlags
	int32_t ___FileSyntaxFlags_25;

public:
	inline static int32_t get_offset_of_m_Table_0() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___m_Table_0)); }
	inline Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * get_m_Table_0() const { return ___m_Table_0; }
	inline Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 ** get_address_of_m_Table_0() { return &___m_Table_0; }
	inline void set_m_Table_0(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * value)
	{
		___m_Table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Table_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_TempTable_1() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___m_TempTable_1)); }
	inline Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * get_m_TempTable_1() const { return ___m_TempTable_1; }
	inline Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 ** get_address_of_m_TempTable_1() { return &___m_TempTable_1; }
	inline void set_m_TempTable_1(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * value)
	{
		___m_TempTable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempTable_1), (void*)value);
	}

	inline static int32_t get_offset_of_HttpUri_7() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___HttpUri_7)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_HttpUri_7() const { return ___HttpUri_7; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_HttpUri_7() { return &___HttpUri_7; }
	inline void set_HttpUri_7(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___HttpUri_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpUri_7), (void*)value);
	}

	inline static int32_t get_offset_of_HttpsUri_8() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___HttpsUri_8)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_HttpsUri_8() const { return ___HttpsUri_8; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_HttpsUri_8() { return &___HttpsUri_8; }
	inline void set_HttpsUri_8(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___HttpsUri_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpsUri_8), (void*)value);
	}

	inline static int32_t get_offset_of_WsUri_9() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___WsUri_9)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_WsUri_9() const { return ___WsUri_9; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_WsUri_9() { return &___WsUri_9; }
	inline void set_WsUri_9(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___WsUri_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WsUri_9), (void*)value);
	}

	inline static int32_t get_offset_of_WssUri_10() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___WssUri_10)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_WssUri_10() const { return ___WssUri_10; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_WssUri_10() { return &___WssUri_10; }
	inline void set_WssUri_10(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___WssUri_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WssUri_10), (void*)value);
	}

	inline static int32_t get_offset_of_FtpUri_11() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___FtpUri_11)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_FtpUri_11() const { return ___FtpUri_11; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_FtpUri_11() { return &___FtpUri_11; }
	inline void set_FtpUri_11(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___FtpUri_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FtpUri_11), (void*)value);
	}

	inline static int32_t get_offset_of_FileUri_12() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___FileUri_12)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_FileUri_12() const { return ___FileUri_12; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_FileUri_12() { return &___FileUri_12; }
	inline void set_FileUri_12(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___FileUri_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FileUri_12), (void*)value);
	}

	inline static int32_t get_offset_of_GopherUri_13() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___GopherUri_13)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_GopherUri_13() const { return ___GopherUri_13; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_GopherUri_13() { return &___GopherUri_13; }
	inline void set_GopherUri_13(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___GopherUri_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GopherUri_13), (void*)value);
	}

	inline static int32_t get_offset_of_NntpUri_14() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___NntpUri_14)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_NntpUri_14() const { return ___NntpUri_14; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_NntpUri_14() { return &___NntpUri_14; }
	inline void set_NntpUri_14(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___NntpUri_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NntpUri_14), (void*)value);
	}

	inline static int32_t get_offset_of_NewsUri_15() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___NewsUri_15)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_NewsUri_15() const { return ___NewsUri_15; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_NewsUri_15() { return &___NewsUri_15; }
	inline void set_NewsUri_15(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___NewsUri_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NewsUri_15), (void*)value);
	}

	inline static int32_t get_offset_of_MailToUri_16() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___MailToUri_16)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_MailToUri_16() const { return ___MailToUri_16; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_MailToUri_16() { return &___MailToUri_16; }
	inline void set_MailToUri_16(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___MailToUri_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MailToUri_16), (void*)value);
	}

	inline static int32_t get_offset_of_UuidUri_17() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___UuidUri_17)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_UuidUri_17() const { return ___UuidUri_17; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_UuidUri_17() { return &___UuidUri_17; }
	inline void set_UuidUri_17(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___UuidUri_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UuidUri_17), (void*)value);
	}

	inline static int32_t get_offset_of_TelnetUri_18() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___TelnetUri_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_TelnetUri_18() const { return ___TelnetUri_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_TelnetUri_18() { return &___TelnetUri_18; }
	inline void set_TelnetUri_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___TelnetUri_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TelnetUri_18), (void*)value);
	}

	inline static int32_t get_offset_of_LdapUri_19() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___LdapUri_19)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_LdapUri_19() const { return ___LdapUri_19; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_LdapUri_19() { return &___LdapUri_19; }
	inline void set_LdapUri_19(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___LdapUri_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LdapUri_19), (void*)value);
	}

	inline static int32_t get_offset_of_NetTcpUri_20() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___NetTcpUri_20)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_NetTcpUri_20() const { return ___NetTcpUri_20; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_NetTcpUri_20() { return &___NetTcpUri_20; }
	inline void set_NetTcpUri_20(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___NetTcpUri_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetTcpUri_20), (void*)value);
	}

	inline static int32_t get_offset_of_NetPipeUri_21() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___NetPipeUri_21)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_NetPipeUri_21() const { return ___NetPipeUri_21; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_NetPipeUri_21() { return &___NetPipeUri_21; }
	inline void set_NetPipeUri_21(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___NetPipeUri_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetPipeUri_21), (void*)value);
	}

	inline static int32_t get_offset_of_VsMacrosUri_22() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___VsMacrosUri_22)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_VsMacrosUri_22() const { return ___VsMacrosUri_22; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_VsMacrosUri_22() { return &___VsMacrosUri_22; }
	inline void set_VsMacrosUri_22(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___VsMacrosUri_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VsMacrosUri_22), (void*)value);
	}

	inline static int32_t get_offset_of_s_QuirksVersion_23() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___s_QuirksVersion_23)); }
	inline int32_t get_s_QuirksVersion_23() const { return ___s_QuirksVersion_23; }
	inline int32_t* get_address_of_s_QuirksVersion_23() { return &___s_QuirksVersion_23; }
	inline void set_s_QuirksVersion_23(int32_t value)
	{
		___s_QuirksVersion_23 = value;
	}

	inline static int32_t get_offset_of_HttpSyntaxFlags_24() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___HttpSyntaxFlags_24)); }
	inline int32_t get_HttpSyntaxFlags_24() const { return ___HttpSyntaxFlags_24; }
	inline int32_t* get_address_of_HttpSyntaxFlags_24() { return &___HttpSyntaxFlags_24; }
	inline void set_HttpSyntaxFlags_24(int32_t value)
	{
		___HttpSyntaxFlags_24 = value;
	}

	inline static int32_t get_offset_of_FileSyntaxFlags_25() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___FileSyntaxFlags_25)); }
	inline int32_t get_FileSyntaxFlags_25() const { return ___FileSyntaxFlags_25; }
	inline int32_t* get_address_of_FileSyntaxFlags_25() { return &___FileSyntaxFlags_25; }
	inline void set_FileSyntaxFlags_25(int32_t value)
	{
		___FileSyntaxFlags_25 = value;
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Runtime.InteropServices.ExternalException
struct ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Microsoft.Win32.SafeHandles.SafeProcessHandle
struct SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C  : public SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45
{
public:

public:
};

struct SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C_StaticFields
{
public:
	// Microsoft.Win32.SafeHandles.SafeProcessHandle Microsoft.Win32.SafeHandles.SafeProcessHandle::InvalidHandle
	SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * ___InvalidHandle_6;

public:
	inline static int32_t get_offset_of_InvalidHandle_6() { return static_cast<int32_t>(offsetof(SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C_StaticFields, ___InvalidHandle_6)); }
	inline SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * get_InvalidHandle_6() const { return ___InvalidHandle_6; }
	inline SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C ** get_address_of_InvalidHandle_6() { return &___InvalidHandle_6; }
	inline void set_InvalidHandle_6(SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * value)
	{
		___InvalidHandle_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvalidHandle_6), (void*)value);
	}
};


// System.ComponentModel.SingleConverter
struct SingleConverter_t75FCE834B5B2A74CB252021292C9DC205B322391  : public BaseNumberConverter_t6CA2001CE79249FCF74FC888710AAD5CA23B748C
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};


// System.PlatformNotSupportedException
struct PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E  : public NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339
{
public:

public:
};


// System.UriFormatException
struct UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D  : public FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759
{
public:

public:
};


// System.ComponentModel.Win32Exception
struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950  : public ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ErrorMessage_19), (void*)value);
	}
};


// System.Net.Sockets.SocketException
struct SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88  : public Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88, ___m_EndPoint_20)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EndPoint_20), (void*)value);
	}
};


// Unity.ThrowStub
struct ThrowStub_t5906D1D52FCD7EAE2537FC295143AFA9D7C05F67  : public ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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



// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String SR::GetString(System.Globalization.CultureInfo,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m410D5693D8F75264B62B781794F559446EC84B3B (CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___culture0, String_t* ___name1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.Void Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandleZeroOrMinusOneIsInvalid__ctor_m2F9172D39B936E24C9E1772C6DC583CC889A3312 (SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45 * __this, bool ___ownsHandle0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m3727BDA5C26E0220FA7BBE73C9E662774F5F1664_inline (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, intptr_t ___handle0, const RuntimeMethod* method);
// System.Boolean Microsoft.Win32.NativeMethods::CloseProcess(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_CloseProcess_mE1C1C32B6FF9CDC27C5A31993E821D3867C8980C (intptr_t ___handle0, const RuntimeMethod* method);
// System.Void Microsoft.Win32.SafeHandles.SafeProcessHandle::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeProcessHandle__ctor_m5DB75CFF0ADA421D934F475B9B757C8992CF7BC5 (SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * __this, intptr_t ___handle0, const RuntimeMethod* method);
// System.Boolean System.ComponentModel.SettingsBindableAttribute::get_Bindable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SettingsBindableAttribute_get_Bindable_mB64EAF5229EA9C4B0B9D0D1F769CAA50609CA83A_inline (SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 * __this, const RuntimeMethod* method);
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411 (bool* __this, const RuntimeMethod* method);
// System.Void System.ComponentModel.SettingsBindableAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsBindableAttribute__ctor_m4F5FE0964747B636D97EED9C6B13D62FBBEA3684 (SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 * __this, bool ___bindable0, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Exchange(System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794 (int32_t* ___location10, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13 (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ComponentModel.BaseNumberConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseNumberConverter__ctor_m18967D5B511402093936893A249438FB94D5BDA3 (BaseNumberConverter_t6CA2001CE79249FCF74FC888710AAD5CA23B748C * __this, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.SocketException::WSAGetLastError_internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketException_WSAGetLastError_internal_m99F586D3C14E2051DBB53BEF3716A740EA9223E2 (const RuntimeMethod* method);
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mF8FAD9681BA8B2EFBD1EDA7C690764FF60E85A6F (Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950 * __this, int32_t ___error0, const RuntimeMethod* method);
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_m712FC6079EE6F92FAB0B3DDAFD652B24FF163CC6 (Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method);
// System.String System.Exception::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exception_get_Message_mC7A96CEBF52567CEF612C8C75A99A735A83E883F (Exception_t * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedTicks_mEA2271BCCE37E6615EFC0B377D33C9DB63CA09E8 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TimeSpan_FromTicks_m25E4ADCCCC583B8D5A08B77577DE8E46CEBF7F9C (int64_t ___value0, const RuntimeMethod* method);
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_GetTimestamp_m8CAF46C3B4D7460B70C325D666B7F6470D2208DB (const RuntimeMethod* method);
// System.Void System.ComponentModel.TypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverter__ctor_mCD87E569A2C4CB1331A069396FFA98E65726A16C (TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91 (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.String System.String::ToLower(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m31AAE50F084C9F7ECE9201944F237D2310C79235 (String_t* __this, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___culture0, const RuntimeMethod* method);
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mF4122BD5C9FF6CF441C2A4BCECF012EEF603AE05 (PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E * __this, const RuntimeMethod* method);
// System.String System.String::ToUpper(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m32DE932B585A6584A6703B6603F955F2E4ED8986 (String_t* __this, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___culture0, const RuntimeMethod* method);
// System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_m699652BD16C42823BE283EA769647F676122EB6B_inline (TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_m23863863F742A02AA8914FB5527AFBC15DCAFA8A (TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 * __this, const RuntimeMethod* method);
// System.String System.DomainNameHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DomainNameHelper_ParseCanonicalName_m1C6E554993599045E72E090518D75FF532D2543E (String_t* ___str0, int32_t ___start1, int32_t ___end2, bool* ___loopback3, const RuntimeMethod* method);
// System.Boolean System.Char::IsLetter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsLetter_mF204E476D37A9EC10C965929AF16A362CBEA8950 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.UriParser::InFact(System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, const RuntimeMethod* method);
// System.UriSyntaxFlags System.UriParser::get_Flags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UriParser_get_Flags_mDAA0D828057CA2CA4493FD152D3760E975BAE7F0_inline (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::NotAny(System.Uri/Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, uint64_t ___flags0, const RuntimeMethod* method);
// System.Boolean System.Uri::StaticNotAny(System.Uri/Flags,System.Uri/Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_StaticNotAny_mA7DA612608D1C43837E3DC3E31C02F994746736C (uint64_t ___allFlags0, uint64_t ___checkFlags1, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsDosPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsDosPath_m3374B9D26D6B547862ACB2E617AB6F96CA31A5AF (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Uri::CreateUriInfo(System.Uri/Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_CreateUriInfo_mD8864BD45B6397D4C3AED68BA2D3EAEB520DB9E6 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, uint64_t ___cF0, const RuntimeMethod* method);
// System.Void System.Uri::ParseRemaining()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_ParseRemaining_m8C4350479C64906DDE464595F8BE5F8C14F2038D (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Uri/UriInfo System.Uri::EnsureUriInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * Uri_EnsureUriInfo_m5FA3DF1CD26867815CE1F247A47530E1D7E35F7E (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::InFact(System.Uri/Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, uint64_t ___flags0, const RuntimeMethod* method);
// System.Void System.Uri::CreateHostString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_CreateHostString_m2C549411869B57ADE6595800B6493BDB0A52F124 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Void System.Uri::CreateThis(System.String,System.Boolean,System.UriKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_CreateThis_m86E72577BCB9A6FDF5A0EC8EDFDD5F41AD3256FC (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uri0, bool ___dontEscape1, int32_t ___uriKind2, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsAbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Uri::CreateThisFromUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_CreateThisFromUri_mCD4CFC7C223ADB909C634DA7EAE279DCD9BF5C14 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___otherUri0, const RuntimeMethod* method);
// System.UriParser System.Uri::get_Syntax()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.UriParser::get_IsSimple()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_get_IsSimple_m09BA6505FDD1AE0BF6C711AE9C2C3F9379B868F8 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method);
// System.Uri System.Uri::ResolveHelper(System.Uri,System.Uri,System.String&,System.Boolean&,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * Uri_ResolveHelper_m2C5CDF42841B464E75B3AA102A24BABA8B51698E (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri0, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___relativeUri1, String_t** ___newUriString2, bool* ___userEscaped3, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___e4, const RuntimeMethod* method);
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Inequality_m3B3733CAA19866A20EF76A772B368EFB5FC89A4F (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri10, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri21, const RuntimeMethod* method);
// System.String System.UriParser::InternalResolve(System.Uri,System.Uri,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UriParser_InternalResolve_m7EF249EAEFB9DDE866F9830E91CC61E09F1548E9 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___thisBaseUri0, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uriLink1, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___parsingError2, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42 (const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.ParsingError System.Uri::CheckSchemeSyntax(System.Char*,System.UInt16,System.UriParser&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_CheckSchemeSyntax_m2D8AE16F4A6A55E89603F7E9D675227302B53761 (Il2CppChar* ___ptr0, uint16_t ___length1, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** ___syntax2, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String System.Uri::get_OriginalString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::CombineUri(System.Uri,System.String,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_CombineUri_m25D4A53B7535EA10C7DA7835E16961BBD5895EB0 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___basePart0, String_t* ___relativePart1, int32_t ___uriFormat2, const RuntimeMethod* method);
// System.String SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462 (String_t* ___name0, const RuntimeMethod* method);
// System.Void System.UriFormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * __this, String_t* ___textString0, const RuntimeMethod* method);
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationInfo_GetString_m50298DCBCD07D858EE19414052CB02EE4DDD3C2C (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Uri::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_GetObjectData_mB720AACE3C54C5B104A7DF0658369C7F7914E895 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___serializationInfo0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___streamingContext1, const RuntimeMethod* method);
// System.String System.Uri::GetParts(System.UriComponents,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___uriParts0, int32_t ___formatAs1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Uri/MoreInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoreInfo__ctor_mF8515B2BCCB5E7DC008164794946ADE7ADBCD2BD (MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsNotAbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsNotAbsoluteUri_m7394FF83375B299BA634518D3104903AFEAE3177 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsUncPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsUncPath_m1004A84C83F38F40A4AD1334F22BDDE658EF8E99 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Object System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Interlocked_CompareExchange_mFAD09589A5DAFDBABB05C62A2D35CD5B92BC6961 (RuntimeObject ** ___location10, RuntimeObject * ___value1, RuntimeObject * ___comparand2, const RuntimeMethod* method);
// System.Object System.Uri::get_InitializeLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Uri_get_InitializeLock_mAE613B41FE88D4D6BC8D943F2A75B6BC00861B0E (const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Uri::EnsureHostString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_EnsureHostString_m47897EC94F83DFE1CA16CE71167DDD3CC986C22A (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, bool ___allowDnsOptimization0, const RuntimeMethod* method);
// System.Int32 System.UriParser::get_DefaultPort()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UriParser_get_DefaultPort_m7ECA5BE839D36C7FF854FEA0795D8DE701487D33_inline (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method);
// System.String System.UriParser::get_SchemeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::get_AllowIdn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_AllowIdn_m4031E81D7D0E44FC81C6951D78B2C836EC8270D7 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::get_OriginalStringSwitched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_OriginalStringSwitched_m405404D361D84E268AED978DCE114F5E43583987 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Uri/Flags System.Uri::get_HostType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Uri_get_HostType_m6C142BC37D44CF1F53D80627455BC6B1CB747820 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Char[] System.UriHelper::UnescapeString(System.String,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300 (String_t* ___input0, int32_t ___start1, int32_t ___end2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest3, int32_t* ___destPosition4, Il2CppChar ___rsvd15, Il2CppChar ___rsvd26, Il2CppChar ___rsvd37, int32_t ___unescapeMode8, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax9, bool ___isQuery10, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Uri::CalculateCaseInsensitiveHashCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_CalculateCaseInsensitiveHashCode_m3C1409D3BEC3AEDC2880109BF1755CF68263DD7A (String_t* ___text0, const RuntimeMethod* method);
// System.String System.Uri::GetComponentsHelper(System.UriComponents,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_GetComponentsHelper_mAA39E421157735AAD7D93A187CCCAED5A122C8E8 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___uriComponents0, int32_t ___uriFormat1, const RuntimeMethod* method);
// System.Boolean System.Uri::TryCreate(System.String,System.UriKind,System.Uri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_TryCreate_m44277635BB8291BC0AADD85B9C9A015C1C21EF92 (String_t* ___uriString0, int32_t ___uriKind1, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** ___result2, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsUncOrDosPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsUncOrDosPath_mF197920D1C1DBDE10A3478855D89D36210D8CE94 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD (String_t* ___strA0, String_t* ___strB1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Boolean System.Uri::get_UserDrivenParsing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_UserDrivenParsing_mF09087D4DE9A0823EBF1FC0C14101335D01393F2 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Int32 System.Uri::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.UInt16 System.Uri::ParseSchemeCheckImplicitFile(System.Char*,System.UInt16,System.ParsingError&,System.Uri/Flags&,System.UriParser&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Uri_ParseSchemeCheckImplicitFile_m5F6B3C184CF455ED80D78937F208EB8C10265395 (Il2CppChar* ___uriString0, uint16_t ___length1, int32_t* ___err2, uint64_t* ___flags3, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** ___syntax4, const RuntimeMethod* method);
// System.ParsingError System.Uri::PrivateParseMinimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_PrivateParseMinimal_m154A67FFA2FA8E2D9215163B56DF1BB88576A369 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.UriFormatException System.Uri::GetException(System.ParsingError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * Uri_GetException_m6A158C16E69136DF56BCF19CC4C7DCCC2601CF84 (int32_t ___err0, const RuntimeMethod* method);
// System.Boolean System.Uri::IsLWS(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IsLWS_m4A41E0157130C65E6768C4F5CFEE2219DAE773B4 (Il2CppChar ___ch0, const RuntimeMethod* method);
// System.Boolean System.UriParser::IsAllSet(System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_IsAllSet_m356BD044D8A53560B6A7AA9B81A20A364E015C18 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, const RuntimeMethod* method);
// System.Boolean System.Uri::IsAsciiLetter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IsAsciiLetter_mBEE6BD837C66CBB199E8A9FAB14A85744368F0FC (Il2CppChar ___character0, const RuntimeMethod* method);
// System.Boolean System.UriParser::NotAny(System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_NotAny_m6A42FAC623F0EBDE441782DAC3E3B2ED34756D91 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, const RuntimeMethod* method);
// System.UInt16 System.Uri::CheckAuthorityHelper(System.Char*,System.UInt16,System.UInt16,System.ParsingError&,System.Uri/Flags&,System.UriParser,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Uri_CheckAuthorityHelper_mC5010AEC19EED1968EDE7CB52C92AC0AC0869503 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Il2CppChar* ___pString0, uint16_t ___idx1, uint16_t ___length2, int32_t* ___err3, uint64_t* ___flags4, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax5, String_t** ___newHost6, const RuntimeMethod* method);
// System.Void System.Uri::PrivateParseMinimalIri(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_PrivateParseMinimalIri_m1A23B409BC4FE17A66599BFE0E0CD62C06D45E2B (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___newHost0, uint16_t ___idx1, const RuntimeMethod* method);
// System.Void System.Uri/UriInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriInfo__ctor_m990C9CA368096AFE12B92F3605FAA70EC0C69BB8 (UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::StaticInFact(System.Uri/Flags,System.Uri/Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_StaticInFact_m6B17A3B95B81DABD390B643ABD9ADAA316D5EF98 (uint64_t ___allFlags0, uint64_t ___checkFlags1, const RuntimeMethod* method);
// System.Void System.Uri::GetHostViaCustomSyntax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_GetHostViaCustomSyntax_mF2DABFE767AB49B8F8E0C9E19937AF900A1E4BC7 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::CreateHostStringHelper(System.String,System.UInt16,System.UInt16,System.Uri/Flags&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_CreateHostStringHelper_m53D695F65E776AB98FD3359894C2C34109E08D00 (String_t* ___str0, uint16_t ___idx1, uint16_t ___end2, uint64_t* ___flags3, String_t** ___scopeId4, const RuntimeMethod* method);
// System.Uri/Check System.Uri::CheckCanonical(System.Char*,System.UInt16&,System.UInt16,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_CheckCanonical_mFD937A06DC3885481C374ACDD190A3B3E40152F3 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Il2CppChar* ___str0, uint16_t* ___idx1, uint16_t ___end2, Il2CppChar ___delim3, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsImplicitFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Char[] System.UriHelper::EscapeString(System.String,System.Int32,System.Int32,System.Char[],System.Int32&,System.Boolean,System.Char,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* UriHelper_EscapeString_m322E8737F58BBAF891A75032EC1800BE548F84D7 (String_t* ___input0, int32_t ___start1, int32_t ___end2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest3, int32_t* ___destPos4, bool ___isUriString5, Il2CppChar ___force16, Il2CppChar ___force27, Il2CppChar ___rsvd8, const RuntimeMethod* method);
// System.String System.IPv6AddressHelper::ParseCanonicalName(System.String,System.Int32,System.Boolean&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPv6AddressHelper_ParseCanonicalName_mAC7315CCA0517C9B95D33C4114E90A8B94EC1E2C (String_t* ___str0, int32_t ___start1, bool* ___isLoopback2, String_t** ___scopeId3, const RuntimeMethod* method);
// System.String System.IPv4AddressHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPv4AddressHelper_ParseCanonicalName_m4237845A3AFA554557BEC618AB11D5EF7A18C2BB (String_t* ___str0, int32_t ___start1, int32_t ___end2, bool* ___isLoopback3, const RuntimeMethod* method);
// System.String System.UncNameHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UncNameHelper_ParseCanonicalName_mAA1CF481E9789909F458A6C31A10DF991166F060 (String_t* ___str0, int32_t ___start1, int32_t ___end2, bool* ___loopback3, const RuntimeMethod* method);
// System.String System.UriParser::InternalGetComponents(System.Uri,System.UriComponents,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UriParser_InternalGetComponents_mAB0A54E462724FA417D0EF3A2AD0BD24BC66DFF8 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___thisUri0, int32_t ___uriComponents1, int32_t ___uriFormat2, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m4FFAF18248A54C5B67E4760C5ED4869A87BCAD7F (String_t* ___name0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String System.Uri::GetComponents(System.UriComponents,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_GetComponents_mA614A98C35F2E5D924A10A8018A46606AFB6133E (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___components0, int32_t ___format1, const RuntimeMethod* method);
// System.UInt16 System.Uri::get_SecuredPathIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Uri_get_SecuredPathIndex_m0BE7920E94AA002B4CD2D568BD6E0FD91F0D7F0B (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::GetUriPartsFromUserString(System.UriComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_GetUriPartsFromUserString_m81B60C6E31AB8EA51438E391F7990334B96ACD29 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___uriParts0, const RuntimeMethod* method);
// System.String System.Uri::ReCreateParts(System.UriComponents,System.UInt16,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_ReCreateParts_m3D0CD53477FBAB5E8988373B8D749E286399278E (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___parts0, uint16_t ___nonCanonical1, int32_t ___formatAs2, const RuntimeMethod* method);
// System.Void System.String::CopyTo(System.Int32,System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void String_CopyTo_mF77EF8D4E5ABBD2AB7F509FFE9C0C70DC15A27E1 (String_t* __this, int32_t ___sourceIndex0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___destination1, int32_t ___destinationIndex2, int32_t ___count3, const RuntimeMethod* method);
// System.String System.DomainNameHelper::UnicodeEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DomainNameHelper_UnicodeEquivalent_m3F187B69AA5313A516F863666C0A29292C8F07A3 (Il2CppChar* ___hostname0, int32_t ___start1, int32_t ___end2, bool* ___allAscii3, bool* ___atLeastOneValidIdn4, const RuntimeMethod* method);
// System.String System.UInt16::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_m960B640F8B0C181A9185FCD0921B2F85106FE336 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Char[] System.Uri::GetCanonicalPath(System.Char[],System.Int32&,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* Uri_GetCanonicalPath_mA187EAD590C890FE0623CF7B1EFF4364B57FAF10 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest0, int32_t* ___pos1, int32_t ___formatAs2, const RuntimeMethod* method);
// System.Boolean System.UriParser::get_ShouldUseLegacyV2Quirks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2 (const RuntimeMethod* method);
// System.Void System.Uri::FindEndOfComponent(System.String,System.UInt16&,System.UInt16,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_FindEndOfComponent_m82D6E67E45114D23F403807E6D711C2A4E574567 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___input0, uint16_t* ___idx1, uint16_t ___end2, Il2CppChar ___delim3, const RuntimeMethod* method);
// System.String System.Uri::EscapeUnescapeIri(System.String,System.Int32,System.Int32,System.UriComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_EscapeUnescapeIri_m606A69B7A76A131D0CA6F562E5DC0721C626E071 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___input0, int32_t ___start1, int32_t ___end2, int32_t ___component3, const RuntimeMethod* method);
// System.String System.String::Normalize(System.Text.NormalizationForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Normalize_m8CD42072C9F7B418990609EB63C5F7E1328321A9 (String_t* __this, int32_t ___normalizationForm0, const RuntimeMethod* method);
// System.Int32 System.IntPtr::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_mD8038A1C440DE87E685F4D879DC80A6704D9C77B (const RuntimeMethod* method);
// System.Boolean System.Uri::CheckKnownSchemes(System.Int64*,System.UInt16,System.UriParser&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_CheckKnownSchemes_mDA8F5B5A8A82B234F1212931F2E0F19146BAEAA6 (int64_t* ___lptr0, uint16_t ___nChars1, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** ___syntax2, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m854F19B67F5E1B63737E096BF53CC56AB12AF777 (String_t* __this, Il2CppChar* ___value0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.UriParser System.UriParser::FindOrFetchAsUnknownV1Syntax(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * UriParser_FindOrFetchAsUnknownV1Syntax_m7844992E6D0B5FD676AEE47EBD4806305418D6CC (String_t* ___lwrCaseScheme0, const RuntimeMethod* method);
// System.Boolean System.Uri::IriParsingStatic(System.UriParser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IriParsingStatic_m0F2797FEA328A2B1A72EE03F9BD88C577A7A0471 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax0, const RuntimeMethod* method);
// System.Boolean System.Uri::StaticIsFile(System.UriParser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_StaticIsFile_m3E03FC49813EF629A488CF3093AE0A5675210CED (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax0, const RuntimeMethod* method);
// System.String System.IriHelper::EscapeUnescapeIri(System.Char*,System.Int32,System.Int32,System.UriComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IriHelper_EscapeUnescapeIri_m6CABB7FC44037C0B5C18132AF5D8C55DB5C64444 (Il2CppChar* ___pInput0, int32_t ___start1, int32_t ___end2, int32_t ___component3, const RuntimeMethod* method);
// System.Boolean System.IPv6AddressHelper::IsValid(System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPv6AddressHelper_IsValid_m8090A11221F415591268CBE22105DEFB03CA0FFF (Il2CppChar* ___name0, int32_t ___start1, int32_t* ___end2, const RuntimeMethod* method);
// System.Void System.Uri::InitializeUriConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_InitializeUriConfig_m0DB8F34B6FAF361C0FE002FA800548608A03F8E5 (const RuntimeMethod* method);
// System.Boolean System.IPv4AddressHelper::IsValid(System.Char*,System.Int32,System.Int32&,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPv4AddressHelper_IsValid_m6CAD01230EC033CB8F4ABB645327065A56E2ED7D (Il2CppChar* ___name0, int32_t ___start1, int32_t* ___end2, bool ___allowIPv63, bool ___notImplicitFile4, bool ___unknownScheme5, const RuntimeMethod* method);
// System.Boolean System.DomainNameHelper::IsValid(System.Char*,System.UInt16,System.Int32&,System.Boolean&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DomainNameHelper_IsValid_m023973F3D85C0B74F55D6B7576911D4813685052 (Il2CppChar* ___name0, uint16_t ___pos1, int32_t* ___returnedEnd2, bool* ___notCanonical3, bool ___notImplicitFile4, const RuntimeMethod* method);
// System.Boolean System.Uri::IsIntranet(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IsIntranet_m89BF3C395C8D960B103DF056976B7C369231270C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___schemeHost0, const RuntimeMethod* method);
// System.Boolean System.Uri::AllowIdnStatic(System.UriParser,System.Uri/Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_AllowIdnStatic_mF38FDCA5248AA93F8823A192D61E2180FEC9C41C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax0, uint64_t ___flags1, const RuntimeMethod* method);
// System.Boolean System.DomainNameHelper::IsValidByIri(System.Char*,System.UInt16,System.Int32&,System.Boolean&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DomainNameHelper_IsValidByIri_m97F02F9CC9EEE94308F903936E1E5D4322364869 (Il2CppChar* ___name0, uint16_t ___pos1, int32_t* ___returnedEnd2, bool* ___notCanonical3, bool ___notImplicitFile4, const RuntimeMethod* method);
// System.Void System.Uri::CheckAuthorityHelperHandleDnsIri(System.Char*,System.UInt16,System.Int32,System.Int32,System.Boolean,System.Boolean,System.UriParser,System.String,System.Uri/Flags&,System.Boolean&,System.String&,System.ParsingError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_CheckAuthorityHelperHandleDnsIri_m495861D9EEE706767F37270F316951E292C60B7A (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Il2CppChar* ___pString0, uint16_t ___start1, int32_t ___end2, int32_t ___startInput3, bool ___iriParsing4, bool ___hasUnicode5, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax6, String_t* ___userInfoString7, uint64_t* ___flags8, bool* ___justNormalized9, String_t** ___newHost10, int32_t* ___err11, const RuntimeMethod* method);
// System.Boolean System.UncNameHelper::IsValid(System.Char*,System.UInt16,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UncNameHelper_IsValid_m7179761E2E8A1F136418B2E4FA00277A192CD38E (Il2CppChar* ___name0, uint16_t ___start1, int32_t* ___returnedEnd2, bool ___notImplicitFile3, const RuntimeMethod* method);
// System.Void System.Uri::CheckAuthorityHelperHandleAnyHostIri(System.Char*,System.Int32,System.Int32,System.Boolean,System.Boolean,System.UriParser,System.Uri/Flags&,System.String&,System.ParsingError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_CheckAuthorityHelperHandleAnyHostIri_m25D24DA750D1E2D025C22CF6D2BAD269AB3FA21B (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Il2CppChar* ___pString0, int32_t ___startInput1, int32_t ___end2, bool ___iriParsing3, bool ___hasUnicode4, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax5, uint64_t* ___flags6, String_t** ___newHost7, int32_t* ___err8, const RuntimeMethod* method);
// System.String System.DomainNameHelper::IdnEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DomainNameHelper_IdnEquivalent_mBA80E13A0C970D723F1A05F175F6B96E0DE3C974 (Il2CppChar* ___hostname0, int32_t ___start1, int32_t ___end2, bool* ___allAscii3, bool* ___atLeastOneValidIdn4, const RuntimeMethod* method);
// System.String System.DomainNameHelper::UnicodeEquivalent(System.String,System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DomainNameHelper_UnicodeEquivalent_m862F489809AFF128883F7E52A9B56D0169AE5168 (String_t* ___idnHost0, Il2CppChar* ___hostname1, int32_t ___start2, int32_t ___end3, const RuntimeMethod* method);
// System.String System.Uri::StripBidiControlCharacter(System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_StripBidiControlCharacter_m17F47758CA4DA1A5D21B3D39D00E8364DC2CAF50 (Il2CppChar* ___strToClean0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method);
// System.String System.DomainNameHelper::IdnEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DomainNameHelper_IdnEquivalent_mEF2BE28789962238A2B054639C82F8F711903CDC (Il2CppChar* ___hostname0, int32_t ___start1, int32_t ___end2, bool* ___allAscii3, String_t** ___bidiStrippedHost4, const RuntimeMethod* method);
// System.Void System.Uri::FindEndOfComponent(System.Char*,System.UInt16&,System.UInt16,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_FindEndOfComponent_mFFFB2266B9FDDB757E145586461BF46D26C509C9 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Il2CppChar* ___str0, uint16_t* ___idx1, uint16_t ___end2, Il2CppChar ___delim3, const RuntimeMethod* method);
// System.Boolean System.Char::IsHighSurrogate(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsHighSurrogate_m7BECD1C98C902946F069D8936F8A557F1F7DFF01 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Char,System.Boolean&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IriHelper_CheckIriUnicodeRange_m03144D55C396E2870F76F85B29852F8314346A1A (Il2CppChar ___highSurr0, Il2CppChar ___lowSurr1, bool* ___surrogatePair2, bool ___isQuery3, const RuntimeMethod* method);
// System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IriHelper_CheckIriUnicodeRange_m5E205B2F096045DE5259E0E98A062DD0813206F6 (Il2CppChar ___unicode0, bool ___isQuery1, const RuntimeMethod* method);
// System.Char System.UriHelper::EscapedAscii(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar UriHelper_EscapedAscii_m80D926F5C8B177B5D041BBFEADEAB2363A324461 (Il2CppChar ___digit0, Il2CppChar ___next1, const RuntimeMethod* method);
// System.Void System.Uri::UnescapeOnly(System.Char*,System.Int32,System.Int32&,System.Char,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_UnescapeOnly_m18532EEE1EFF1E8A802527ECC577BA815CC33B1B (Il2CppChar* ___pch0, int32_t ___start1, int32_t* ___end2, Il2CppChar ___ch13, Il2CppChar ___ch24, Il2CppChar ___ch35, const RuntimeMethod* method);
// System.String System.String::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_mA7DE3D6FE3344FD65108B33BD1DE8020D22ADAC0 (String_t* __this, int32_t ___startIndex0, int32_t ___count1, const RuntimeMethod* method);
// System.String System.String::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Insert_m6F5335C84ACB178D4141772E1D7F2EB7811990EB (String_t* __this, int32_t ___startIndex0, String_t* ___value1, const RuntimeMethod* method);
// System.Char[] System.Uri::Compress(System.Char[],System.UInt16,System.Int32&,System.UriParser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* Uri_Compress_mDF5924D464EB2CDA24C14D7448878C2DA46A9B8F (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest0, uint16_t ___start1, int32_t* ___destLength2, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax3, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Char[] System.UriHelper::UnescapeString(System.Char*,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* UriHelper_UnescapeString_m92E5C90E7DAE8DA5C7C1E6FB72B0F58321B6484C (Il2CppChar* ___pStr0, int32_t ___start1, int32_t ___end2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest3, int32_t* ___destPosition4, Il2CppChar ___rsvd15, Il2CppChar ___rsvd26, Il2CppChar ___rsvd37, int32_t ___unescapeMode8, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax9, bool ___isQuery10, const RuntimeMethod* method);
// System.StringComparer System.StringComparer::get_InvariantCultureIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_InvariantCultureIgnoreCase_m091360FF9FE3516559AFF706AF431E6FD4CCF2C2_inline (const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mAD7052CB25BA1D60A8F055AA89D09809F61233DB (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsUnc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsUnc_m74CE69038E37D7F868EF3EFD9DCCD08AA11877CC (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_DnsSafeHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_DnsSafeHost_m3A22E10619987FC8FED6CEDDCA5D9647AC5B6AC5 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Boolean System.Uri::IsBidiControlCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IsBidiControlCharacter_m36A30E0708EE0209208B23136C2BEC9C802C697B (Il2CppChar ___ch0, const RuntimeMethod* method);
// System.ParsingError System.Uri::ParseScheme(System.String,System.Uri/Flags&,System.UriParser&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_ParseScheme_m65694E4DA17BF0A8447ACE12EF444FE4D1E1AB16 (String_t* ___uriString0, uint64_t* ___flags1, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** ___syntax2, const RuntimeMethod* method);
// System.Void System.Uri::InitializeUri(System.ParsingError,System.UriKind,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_InitializeUri_m952665E18BE60CFAC5A6025FCD2A0BB9CCB5C567 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___err0, int32_t ___uriKind1, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___e2, const RuntimeMethod* method);
// System.Boolean System.Uri::CheckForConfigLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_CheckForConfigLoad_m4AF9D27B5F62A0D4269B23FB3BEF4846E8D0983D (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___data0, const RuntimeMethod* method);
// System.Boolean System.Uri::CheckForUnicode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_CheckForUnicode_m2A9DB97F3B384DADC1A274C8982404DDE17F6688 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___data0, const RuntimeMethod* method);
// System.Boolean System.Uri::CheckForEscapedUnreserved(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_CheckForEscapedUnreserved_m5EC5EFE77E30B08708B49086DF72A659454B1A2F (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___data0, const RuntimeMethod* method);
// System.Void System.Uri::EnsureParseRemaining()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_EnsureParseRemaining_m7BC86BEFE07F56D480C9ACBCE64983806F6789BB (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.UriParser System.UriParser::InternalOnNewUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * UriParser_InternalOnNewUri_m0AC629BCCA398E9A193AC16A5E91D445B9B70D79 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method);
// System.Void System.UriParser::InternalValidate(System.Uri,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriParser_InternalValidate_mB845C482B4B01EDFE012DD4C4CEF62C8F4FFE94F (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___thisUri0, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___parsingError1, const RuntimeMethod* method);
// System.Void System.Uri::SetUserDrivenParsing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_SetUserDrivenParsing_mDF0BFAFE946EAD9122ED2A542132902D7E47FD9C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::IsHexDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IsHexDigit_m87121EC1F62716CC681A4458BF2E6A6B844BD95F (Il2CppChar ___character0, const RuntimeMethod* method);
// System.Boolean System.UriHelper::Is3986Unreserved(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriHelper_Is3986Unreserved_m0532DF2A1577C475D0D83F10C6C5D91F125AC028 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Uri System.Uri::CreateHelper(System.String,System.Boolean,System.UriKind,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * Uri_CreateHelper_m95C8DB174EFC0CB21C3A74160A1001C14D3EF6DD (String_t* ___uriString0, bool ___dontEscape1, int32_t ___uriKind2, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___e3, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, RuntimeObject * ___actualValue1, String_t* ___message2, const RuntimeMethod* method);
// System.String System.Uri::GetRelativeSerializationString(System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_GetRelativeSerializationString_mBCE8CC99C746B18A9DE0B2C6084C5B90A192130D (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___format0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.Uri/Flags,System.UriParser,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m899122920EF2C3DE3E7A620B823D43BDB54D3406 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, uint64_t ___flags0, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___uriParser1, String_t* ___uri2, const RuntimeMethod* method);
// System.Boolean System.Uri::get_UserEscaped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_UserEscaped_m36B234B7081DFE3B3B6D7FCA2F9768C10DDD2807 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.String::Trim(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimChars0, const RuntimeMethod* method);
// System.ParsingError System.Uri::GetCombinedString(System.Uri,System.String,System.Boolean,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_GetCombinedString_mC6530D23E30E379E8991E52862B9B38489430743 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri0, String_t* ___relativeStr1, bool ___dontEscape2, String_t** ___result3, const RuntimeMethod* method);
// System.String System.Uri::UnescapeDataString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_UnescapeDataString_m52E242703F2842594B2B37D673CDD5465ABCC836 (String_t* ___stringToUnescape0, const RuntimeMethod* method);
// System.String System.Uri::GetEscapedParts(System.UriComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_GetEscapedParts_m61C2B2B898F8AA8B75AAEC38EF78C340BC1F5A20 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___uriParts0, const RuntimeMethod* method);
// System.String System.Uri::GetUnescapedParts(System.UriComponents,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_GetUnescapedParts_m6F106ECABBBAFA95C3F3CA86F540B9EE0B9D01D4 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___uriParts0, int32_t ___formatAs1, const RuntimeMethod* method);
// System.String System.Environment::GetEnvironmentVariable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetEnvironmentVariable_mBDE19BD883E2D01AEA6DD1667D5E97941558C7A3 (String_t* ___variable0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootDesignerSerializerAttribute__ctor_m2EA1453B85C10A3D2CFDB7F9802EB5525350B211 (RootDesignerSerializerAttribute_t94B45651ACD930D254222DF6CCE7443322C79BD6 * __this, String_t* ___serializerTypeName0, String_t* ___baseSerializerTypeName1, bool ___reloadable2, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___serializerTypeName0;
		__this->set_serializerTypeName_1(L_0);
		String_t* L_1 = ___baseSerializerTypeName1;
		__this->set_serializerBaseTypeName_2(L_1);
		bool L_2 = ___reloadable2;
		__this->set_reloadable_0(L_2);
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
// System.String SR::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m4FFAF18248A54C5B67E4760C5ED4869A87BCAD7F (String_t* ___name0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args1;
		String_t* L_3;
		L_3 = SR_GetString_m410D5693D8F75264B62B781794F559446EC84B3B(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String SR::GetString(System.Globalization.CultureInfo,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m410D5693D8F75264B62B781794F559446EC84B3B (CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___culture0, String_t* ___name1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method)
{
	{
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0 = ___culture0;
		String_t* L_1 = ___name1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462 (String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
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
// System.Void Microsoft.Win32.SafeHandles.SafeProcessHandle::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeProcessHandle__ctor_m5DB75CFF0ADA421D934F475B9B757C8992CF7BC5 (SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	{
		SafeHandleZeroOrMinusOneIsInvalid__ctor_m2F9172D39B936E24C9E1772C6DC583CC889A3312(__this, (bool)1, /*hidden argument*/NULL);
		intptr_t L_0 = ___handle0;
		SafeHandle_SetHandle_m3727BDA5C26E0220FA7BBE73C9E662774F5F1664_inline(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Win32.SafeHandles.SafeProcessHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeProcessHandle__ctor_m32FDC3151EE29F72A7EEBDDA5163EB791D77F402 (SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * __this, intptr_t ___existingHandle0, bool ___ownsHandle1, const RuntimeMethod* method)
{
	{
		bool L_0 = ___ownsHandle1;
		SafeHandleZeroOrMinusOneIsInvalid__ctor_m2F9172D39B936E24C9E1772C6DC583CC889A3312(__this, L_0, /*hidden argument*/NULL);
		intptr_t L_1 = ___existingHandle0;
		SafeHandle_SetHandle_m3727BDA5C26E0220FA7BBE73C9E662774F5F1664_inline(__this, (intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.Win32.SafeHandles.SafeProcessHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeProcessHandle_ReleaseHandle_m6318858205FBB5AADAB47E8E112FADAFC6E2193B (SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ((SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B *)__this)->get_handle_0();
		bool L_1;
		L_1 = NativeMethods_CloseProcess_mE1C1C32B6FF9CDC27C5A31993E821D3867C8980C((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Win32.SafeHandles.SafeProcessHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeProcessHandle__cctor_m58DA81AA3108FF498EBFFD22AC0753E1BD381730 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * L_0 = (SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C *)il2cpp_codegen_object_new(SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C_il2cpp_TypeInfo_var);
		SafeProcessHandle__ctor_m5DB75CFF0ADA421D934F475B9B757C8992CF7BC5(L_0, (intptr_t)(0), /*hidden argument*/NULL);
		((SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C_StaticFields*)il2cpp_codegen_static_fields_for(SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C_il2cpp_TypeInfo_var))->set_InvalidHandle_6(L_0);
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
// System.Void System.Net.Configuration.ServicePointManagerElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement__ctor_mA04F31D124B40258FE6673A2B7B0F7B2CE787615 (ServicePointManagerElement_tBDFCD14FA5A9ABB1BE70A69621349A23B402989C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement__ctor_mA04F31D124B40258FE6673A2B7B0F7B2CE787615_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement__ctor_mA04F31D124B40258FE6673A2B7B0F7B2CE787615_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t8C098DB59DF7BA2C2A71369978F4225B92B2F59B * ServicePointManagerElement_get_Properties_mCB80284E347910A59F7B5A495D5862533E41907A (ServicePointManagerElement_tBDFCD14FA5A9ABB1BE70A69621349A23B402989C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_Properties_mCB80284E347910A59F7B5A495D5862533E41907A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_Properties_mCB80284E347910A59F7B5A495D5862533E41907A_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t8C098DB59DF7BA2C2A71369978F4225B92B2F59B *)NULL;
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
// System.Void System.ComponentModel.SettingsBindableAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsBindableAttribute__ctor_m4F5FE0964747B636D97EED9C6B13D62FBBEA3684 (SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 * __this, bool ___bindable0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		bool L_0 = ___bindable0;
		__this->set__bindable_2(L_0);
		return;
	}
}
// System.Boolean System.ComponentModel.SettingsBindableAttribute::get_Bindable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SettingsBindableAttribute_get_Bindable_mB64EAF5229EA9C4B0B9D0D1F769CAA50609CA83A (SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__bindable_2();
		return L_0;
	}
}
// System.Boolean System.ComponentModel.SettingsBindableAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SettingsBindableAttribute_Equals_mF7BC58C8F680D5BCE8C87F7997F7FFC01A59B2E6 (SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 *)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject * L_1 = ___obj0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		if (!((SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 *)IsInstSealed((RuntimeObject*)L_2, SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		NullCheck(((SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 *)CastclassSealed((RuntimeObject*)L_3, SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0_il2cpp_TypeInfo_var)));
		bool L_4;
		L_4 = SettingsBindableAttribute_get_Bindable_mB64EAF5229EA9C4B0B9D0D1F769CAA50609CA83A_inline(((SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 *)CastclassSealed((RuntimeObject*)L_3, SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		bool L_5 = __this->get__bindable_2();
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.SettingsBindableAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SettingsBindableAttribute_GetHashCode_mF7117CA82F3599687FFCDC1B2A43A7D177B6874B (SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = __this->get_address_of__bindable_2();
		int32_t L_1;
		L_1 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.ComponentModel.SettingsBindableAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsBindableAttribute__cctor_m53A3674048E11F01AD677255FE817C50A650E4C6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 * L_0 = (SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 *)il2cpp_codegen_object_new(SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0_il2cpp_TypeInfo_var);
		SettingsBindableAttribute__ctor_m4F5FE0964747B636D97EED9C6B13D62FBBEA3684(L_0, (bool)1, /*hidden argument*/NULL);
		((SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0_StaticFields*)il2cpp_codegen_static_fields_for(SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0_il2cpp_TypeInfo_var))->set_Yes_0(L_0);
		SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 * L_1 = (SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 *)il2cpp_codegen_object_new(SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0_il2cpp_TypeInfo_var);
		SettingsBindableAttribute__ctor_m4F5FE0964747B636D97EED9C6B13D62FBBEA3684(L_1, (bool)0, /*hidden argument*/NULL);
		((SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0_StaticFields*)il2cpp_codegen_static_fields_for(SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0_il2cpp_TypeInfo_var))->set_No_1(L_1);
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
// System.Void System.Net.Configuration.SettingsSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsSection__ctor_m09A6DF12BD56D2C0E0ABA8152004C486B1DE97E3 (SettingsSection_t711E6C3A32C96E69BF15E02FF55E58AF33EB95EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection__ctor_m09A6DF12BD56D2C0E0ABA8152004C486B1DE97E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection__ctor_m09A6DF12BD56D2C0E0ABA8152004C486B1DE97E3_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t8C098DB59DF7BA2C2A71369978F4225B92B2F59B * SettingsSection_get_Properties_mE5337C4AF39EA0A1B2AEB842CDBB16B8C0C1C4A0 (SettingsSection_t711E6C3A32C96E69BF15E02FF55E58AF33EB95EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_Properties_mE5337C4AF39EA0A1B2AEB842CDBB16B8C0C1C4A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_Properties_mE5337C4AF39EA0A1B2AEB842CDBB16B8C0C1C4A0_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t8C098DB59DF7BA2C2A71369978F4225B92B2F59B *)NULL;
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
// System.Object System.Text.RegularExpressions.SharedReference::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SharedReference_Get_mABBA2F0DE65F82D90AAE425020F14676F313EB68 (SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * __this, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = __this->get_address_of__locked_1();
		int32_t L_1;
		L_1 = Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794((int32_t*)L_0, 1, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_2 = __this->get__ref_0();
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_2);
		__this->set__locked_1(0);
		return L_3;
	}

IL_0021:
	{
		return NULL;
	}
}
// System.Void System.Text.RegularExpressions.SharedReference::Cache(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedReference_Cache_mA43A19BCE25BC113C767B8C3531B7A096C3B6262 (SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = __this->get_address_of__locked_1();
		int32_t L_1;
		L_1 = Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794((int32_t*)L_0, 1, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_2 = __this->get__ref_0();
		RuntimeObject * L_3 = ___obj0;
		NullCheck(L_2);
		VirtualActionInvoker1< RuntimeObject * >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_2, L_3);
		__this->set__locked_1(0);
	}

IL_0021:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.SharedReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedReference__ctor_mCD9987FD08CB61180CE190A8DEF05E5AAF5C1087 (SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_0 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)il2cpp_codegen_object_new(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13(L_0, NULL, /*hidden argument*/NULL);
		__this->set__ref_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void System.ComponentModel.SingleConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleConverter__ctor_m497283A0BDBBBE713A71C8A2E4A89D2B58627365 (SingleConverter_t75FCE834B5B2A74CB252021292C9DC205B322391 * __this, const RuntimeMethod* method)
{
	{
		BaseNumberConverter__ctor_m18967D5B511402093936893A249438FB94D5BDA3(__this, /*hidden argument*/NULL);
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
// System.Void System.Net.Configuration.SocketElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketElement__ctor_m5D5BA302FD35A1D25BB3A596954F92AB26C3DEF6 (SocketElement_t3A1494C40F44B3BE110D39607B00AE67C9962450 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement__ctor_m5D5BA302FD35A1D25BB3A596954F92AB26C3DEF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement__ctor_m5D5BA302FD35A1D25BB3A596954F92AB26C3DEF6_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t8C098DB59DF7BA2C2A71369978F4225B92B2F59B * SocketElement_get_Properties_m9A46DB832A9DA2A3E8F3B74D83DD96EC8A180984 (SocketElement_t3A1494C40F44B3BE110D39607B00AE67C9962450 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_get_Properties_m9A46DB832A9DA2A3E8F3B74D83DD96EC8A180984_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_get_Properties_m9A46DB832A9DA2A3E8F3B74D83DD96EC8A180984_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t8C098DB59DF7BA2C2A71369978F4225B92B2F59B *)NULL;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.Net.Sockets.SocketException::WSAGetLastError_internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketException_WSAGetLastError_internal_m99F586D3C14E2051DBB53BEF3716A740EA9223E2 (const RuntimeMethod* method)
{
	typedef int32_t (*SocketException_WSAGetLastError_internal_m99F586D3C14E2051DBB53BEF3716A740EA9223E2_ftn) ();
	using namespace il2cpp::icalls;
	return ((SocketException_WSAGetLastError_internal_m99F586D3C14E2051DBB53BEF3716A740EA9223E2_ftn)System::System::Net::Sockets::SocketException::WSAGetLastError) ();
}
// System.Void System.Net.Sockets.SocketException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketException__ctor_mA4FA4C30962B1DD852904297C47EB05A9C97B7F9 (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = SocketException_WSAGetLastError_internal_m99F586D3C14E2051DBB53BEF3716A740EA9223E2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		Win32Exception__ctor_mF8FAD9681BA8B2EFBD1EDA7C690764FF60E85A6F(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketException::.ctor(System.Net.Sockets.SocketError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketException__ctor_m8625815C7AFB0F3BF9287520D8F64A69199D6DCA (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * __this, int32_t ___socketError0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___socketError0;
		IL2CPP_RUNTIME_CLASS_INIT(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		Win32Exception__ctor_mF8FAD9681BA8B2EFBD1EDA7C690764FF60E85A6F(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketException__ctor_m59175465D17AE63C1E18A1B25D80AD41708A51B5 (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___serializationInfo0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___streamingContext1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___serializationInfo0;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_1 = ___streamingContext1;
		IL2CPP_RUNTIME_CLASS_INIT(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		Win32Exception__ctor_m712FC6079EE6F92FAB0B3DDAFD652B24FF163CC6(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Net.Sockets.SocketException::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SocketException_get_Message_mAC33600C2CC211D3C5C6363DAE3A843FD3E366EE (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = __this->get_m_EndPoint_20();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1;
		L_1 = Exception_get_Message_mC7A96CEBF52567CEF612C8C75A99A735A83E883F(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2;
		L_2 = Exception_get_Message_mC7A96CEBF52567CEF612C8C75A99A735A83E883F(__this, /*hidden argument*/NULL);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_3 = __this->get_m_EndPoint_20();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_GetTimestamp_m8CAF46C3B4D7460B70C325D666B7F6470D2208DB (const RuntimeMethod* method)
{
	typedef int64_t (*Stopwatch_GetTimestamp_m8CAF46C3B4D7460B70C325D666B7F6470D2208DB_ftn) ();
	using namespace il2cpp::icalls;
	return ((Stopwatch_GetTimestamp_m8CAF46C3B4D7460B70C325D666B7F6470D2208DB_ftn)System::System::Diagnostics::Stopwatch::GetTimestamp) ();
}
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		bool L_0 = ((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var))->get_IsHighResolution_1();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int64_t L_1;
		L_1 = Stopwatch_get_ElapsedTicks_mEA2271BCCE37E6615EFC0B377D33C9DB63CA09E8(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		int64_t L_2 = ((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var))->get_Frequency_0();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_3;
		L_3 = TimeSpan_FromTicks_m25E4ADCCCC583B8D5A08B77577DE8E46CEBF7F9C(((int64_t)((int64_t)L_1/(int64_t)((int64_t)((int64_t)L_2/(int64_t)((int64_t)((int64_t)((int32_t)10000000))))))), /*hidden argument*/NULL);
		return L_3;
	}

IL_0020:
	{
		int64_t L_4;
		L_4 = Stopwatch_get_ElapsedTicks_mEA2271BCCE37E6615EFC0B377D33C9DB63CA09E8(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_5;
		L_5 = TimeSpan_FromTicks_m25E4ADCCCC583B8D5A08B77577DE8E46CEBF7F9C(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		bool L_0 = ((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var))->get_IsHighResolution_1();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int64_t L_1;
		L_1 = Stopwatch_get_ElapsedTicks_mEA2271BCCE37E6615EFC0B377D33C9DB63CA09E8(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		int64_t L_2 = ((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var))->get_Frequency_0();
		return ((int64_t)((int64_t)L_1/(int64_t)((int64_t)((int64_t)L_2/(int64_t)((int64_t)((int64_t)((int32_t)1000)))))));
	}

IL_001b:
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_3;
		L_3 = Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		double L_4;
		L_4 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		if (L_4 > (double)((std::numeric_limits<int64_t>::max)())) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5_RuntimeMethod_var);
		return il2cpp_codegen_cast_double_to_int<int64_t>(L_4);
	}
}
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedTicks_mEA2271BCCE37E6615EFC0B377D33C9DB63CA09E8 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_is_running_4();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		int64_t L_1 = __this->get_elapsed_2();
		return L_1;
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = Stopwatch_GetTimestamp_m8CAF46C3B4D7460B70C325D666B7F6470D2208DB(/*hidden argument*/NULL);
		int64_t L_3 = __this->get_started_3();
		int64_t L_4 = __this->get_elapsed_2();
		return ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_2, (int64_t)L_3)), (int64_t)L_4));
	}
}
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_is_running_4();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = Stopwatch_GetTimestamp_m8CAF46C3B4D7460B70C325D666B7F6470D2208DB(/*hidden argument*/NULL);
		__this->set_started_3(L_1);
		__this->set_is_running_4((bool)1);
		return;
	}
}
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_is_running_4();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int64_t L_1 = __this->get_elapsed_2();
		IL2CPP_RUNTIME_CLASS_INIT(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = Stopwatch_GetTimestamp_m8CAF46C3B4D7460B70C325D666B7F6470D2208DB(/*hidden argument*/NULL);
		int64_t L_3 = __this->get_started_3();
		__this->set_elapsed_2(((int64_t)il2cpp_codegen_add((int64_t)L_1, (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_2, (int64_t)L_3)))));
		int64_t L_4 = __this->get_elapsed_2();
		if ((((int64_t)L_4) >= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0034;
		}
	}
	{
		__this->set_elapsed_2(((int64_t)((int64_t)0)));
	}

IL_0034:
	{
		__this->set_is_running_4((bool)0);
		return;
	}
}
// System.Void System.Diagnostics.Stopwatch::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__cctor_mC828CB8602A28CFD9436192D5A47475B31D34766 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var))->set_Frequency_0(((int64_t)((int64_t)((int32_t)10000000))));
		((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var))->set_IsHighResolution_1((bool)1);
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
// System.Void System.ComponentModel.StringConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringConverter__ctor_m078D8E99B4F9B0F2EF7A2D3857A6F044B7A16118 (StringConverter_tEC598B89E55C16F1669CFBC98F5C2308E2F232E5 * __this, const RuntimeMethod* method)
{
	{
		TypeConverter__ctor_mCD87E569A2C4CB1331A069396FFA98E65726A16C(__this, /*hidden argument*/NULL);
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
// System.Void System.Collections.Specialized.StringDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringDictionary__ctor_mEA16941AB5C9CDBEE3B0572E3FA74DD1CC0C8637 (StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)il2cpp_codegen_object_new(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91(L_0, /*hidden argument*/NULL);
		__this->set_contents_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.StringDictionary::Add(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringDictionary_Add_mA629D832E536EAF65C3FFB82D54954F7E025E38B (StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringDictionary_Add_mA629D832E536EAF65C3FFB82D54954F7E025E38B_RuntimeMethod_var)));
	}

IL_000e:
	{
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_2 = __this->get_contents_0();
		String_t* L_3 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_5;
		L_5 = String_ToLower_m31AAE50F084C9F7ECE9201944F237D2310C79235(L_3, L_4, /*hidden argument*/NULL);
		String_t* L_6 = ___value1;
		NullCheck(L_2);
		VirtualActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_2, L_5, L_6);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.StringDictionary::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringDictionary_GetEnumerator_mCFDADD1EB7734E2A3F1A05C978594A3968986642 (StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * __this, const RuntimeMethod* method)
{
	{
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = __this->get_contents_0();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(31 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_0);
		return L_1;
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
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_mA667A039AC2AB853687594A68EFA90A799028D4F (const RuntimeMethod* method)
{
	{
		PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E * L_0 = (PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mF4122BD5C9FF6CF441C2A4BCECF012EEF603AE05(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_mA667A039AC2AB853687594A68EFA90A799028D4F_RuntimeMethod_var)));
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
// System.Void System.ComponentModel.TimeSpanConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanConverter__ctor_m8CCA5F7E15DAB96C97CF600394E637A9876AFB83 (TimeSpanConverter_t5F2498D1A18C834B1F4B9E7A3CF59069D2B72D2E * __this, const RuntimeMethod* method)
{
	{
		TypeConverter__ctor_mCD87E569A2C4CB1331A069396FFA98E65726A16C(__this, /*hidden argument*/NULL);
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
// System.Void System.ComponentModel.TypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverter__ctor_mCD87E569A2C4CB1331A069396FFA98E65726A16C (TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_m23863863F742A02AA8914FB5527AFBC15DCAFA8A (TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_typeName_0(L_0);
		return;
	}
}
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_mE0B270E39E657178B253AB6F56FCA24E644868F4 (TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->set_typeName_0(L_1);
		return;
	}
}
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_m0181244AF7864216BD33F5C9FDD1937D0F839E45 (TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 * __this, String_t* ___typeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___typeName0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_1;
		L_1 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = String_ToUpper_m32DE932B585A6584A6703B6603F955F2E4ED8986(L_0, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___typeName0;
		__this->set_typeName_0(L_3);
		return;
	}
}
// System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_m699652BD16C42823BE283EA769647F676122EB6B (TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_typeName_0();
		return L_0;
	}
}
// System.Boolean System.ComponentModel.TypeConverterAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConverterAttribute_Equals_mED3025C0A24E6809AA6E31FE5F498D18558584FB (TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 *)IsInstSealed((RuntimeObject*)L_0, TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83_il2cpp_TypeInfo_var));
		TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TypeConverterAttribute_get_ConverterTypeName_m699652BD16C42823BE283EA769647F676122EB6B_inline(L_2, /*hidden argument*/NULL);
		String_t* L_4 = __this->get_typeName_0();
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.TypeConverterAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeConverterAttribute_GetHashCode_mFBABA9E1D19DC64BAAF3C9D0F1B82E42B5F66769 (TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_typeName_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.ComponentModel.TypeConverterAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__cctor_mE6F51C034AACA4A5318CE3704E898113C49BA507 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 * L_0 = (TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 *)il2cpp_codegen_object_new(TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83_il2cpp_TypeInfo_var);
		TypeConverterAttribute__ctor_m23863863F742A02AA8914FB5527AFBC15DCAFA8A(L_0, /*hidden argument*/NULL);
		((TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83_StaticFields*)il2cpp_codegen_static_fields_for(TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83_il2cpp_TypeInfo_var))->set_Default_1(L_0);
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
// System.String System.UncNameHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UncNameHelper_ParseCanonicalName_mAA1CF481E9789909F458A6C31A10DF991166F060 (String_t* ___str0, int32_t ___start1, int32_t ___end2, bool* ___loopback3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___str0;
		int32_t L_1 = ___start1;
		int32_t L_2 = ___end2;
		bool* L_3 = ___loopback3;
		String_t* L_4;
		L_4 = DomainNameHelper_ParseCanonicalName_m1C6E554993599045E72E090518D75FF532D2543E(L_0, L_1, L_2, (bool*)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.UncNameHelper::IsValid(System.Char*,System.UInt16,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UncNameHelper_IsValid_m7179761E2E8A1F136418B2E4FA00277A192CD38E (Il2CppChar* ___name0, uint16_t ___start1, int32_t* ___returnedEnd2, bool ___notImplicitFile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	bool V_1 = false;
	uint16_t V_2 = 0;
	{
		int32_t* L_0 = ___returnedEnd2;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = (uint16_t)((int32_t)((uint16_t)L_1));
		uint16_t L_2 = ___start1;
		uint16_t L_3 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_1 = (bool)0;
		uint16_t L_4 = ___start1;
		V_2 = L_4;
		goto IL_00a8;
	}

IL_0013:
	{
		Il2CppChar* L_5 = ___name0;
		uint16_t L_6 = V_2;
		int32_t L_7 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)2)))));
		if ((((int32_t)L_7) == ((int32_t)((int32_t)47))))
		{
			goto IL_004d;
		}
	}
	{
		Il2CppChar* L_8 = ___name0;
		uint16_t L_9 = V_2;
		int32_t L_10 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_8, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_9), (int32_t)2)))));
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_004d;
		}
	}
	{
		bool L_11 = ___notImplicitFile3;
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		Il2CppChar* L_12 = ___name0;
		uint16_t L_13 = V_2;
		int32_t L_14 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_12, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_13), (int32_t)2)))));
		if ((((int32_t)L_14) == ((int32_t)((int32_t)58))))
		{
			goto IL_004d;
		}
	}
	{
		Il2CppChar* L_15 = ___name0;
		uint16_t L_16 = V_2;
		int32_t L_17 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_15, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_16), (int32_t)2)))));
		if ((((int32_t)L_17) == ((int32_t)((int32_t)63))))
		{
			goto IL_004d;
		}
	}
	{
		Il2CppChar* L_18 = ___name0;
		uint16_t L_19 = V_2;
		int32_t L_20 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_18, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_19), (int32_t)2)))));
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_0051;
		}
	}

IL_004d:
	{
		uint16_t L_21 = V_2;
		V_0 = L_21;
		goto IL_00af;
	}

IL_0051:
	{
		Il2CppChar* L_22 = ___name0;
		uint16_t L_23 = V_2;
		int32_t L_24 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_23), (int32_t)2)))));
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0063;
		}
	}
	{
		uint16_t L_25 = V_2;
		V_2 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1))));
		goto IL_00af;
	}

IL_0063:
	{
		Il2CppChar* L_26 = ___name0;
		uint16_t L_27 = V_2;
		int32_t L_28 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_26, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_27), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Char_IsLetter_mF204E476D37A9EC10C965929AF16A362CBEA8950(L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0087;
		}
	}
	{
		Il2CppChar* L_30 = ___name0;
		uint16_t L_31 = V_2;
		int32_t L_32 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_30, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_31), (int32_t)2)))));
		if ((((int32_t)L_32) == ((int32_t)((int32_t)45))))
		{
			goto IL_0087;
		}
	}
	{
		Il2CppChar* L_33 = ___name0;
		uint16_t L_34 = V_2;
		int32_t L_35 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_33, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_34), (int32_t)2)))));
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)95)))))
		{
			goto IL_008b;
		}
	}

IL_0087:
	{
		V_1 = (bool)1;
		goto IL_00a3;
	}

IL_008b:
	{
		Il2CppChar* L_36 = ___name0;
		uint16_t L_37 = V_2;
		int32_t L_38 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_36, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_37), (int32_t)2)))));
		if ((((int32_t)L_38) < ((int32_t)((int32_t)48))))
		{
			goto IL_00a1;
		}
	}
	{
		Il2CppChar* L_39 = ___name0;
		uint16_t L_40 = V_2;
		int32_t L_41 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_39, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_40), (int32_t)2)))));
		if ((((int32_t)L_41) <= ((int32_t)((int32_t)57))))
		{
			goto IL_00a3;
		}
	}

IL_00a1:
	{
		return (bool)0;
	}

IL_00a3:
	{
		uint16_t L_42 = V_2;
		V_2 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1))));
	}

IL_00a8:
	{
		uint16_t L_43 = V_2;
		uint16_t L_44 = V_0;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_0013;
		}
	}

IL_00af:
	{
		bool L_45 = V_1;
		if (L_45)
		{
			goto IL_0169;
		}
	}
	{
		return (bool)0;
	}

IL_00b7:
	{
		Il2CppChar* L_46 = ___name0;
		uint16_t L_47 = V_2;
		int32_t L_48 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_46, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_47), (int32_t)2)))));
		if ((((int32_t)L_48) == ((int32_t)((int32_t)47))))
		{
			goto IL_00f1;
		}
	}
	{
		Il2CppChar* L_49 = ___name0;
		uint16_t L_50 = V_2;
		int32_t L_51 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_49, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_50), (int32_t)2)))));
		if ((((int32_t)L_51) == ((int32_t)((int32_t)92))))
		{
			goto IL_00f1;
		}
	}
	{
		bool L_52 = ___notImplicitFile3;
		if (!L_52)
		{
			goto IL_00f5;
		}
	}
	{
		Il2CppChar* L_53 = ___name0;
		uint16_t L_54 = V_2;
		int32_t L_55 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_53, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_54), (int32_t)2)))));
		if ((((int32_t)L_55) == ((int32_t)((int32_t)58))))
		{
			goto IL_00f1;
		}
	}
	{
		Il2CppChar* L_56 = ___name0;
		uint16_t L_57 = V_2;
		int32_t L_58 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_56, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_57), (int32_t)2)))));
		if ((((int32_t)L_58) == ((int32_t)((int32_t)63))))
		{
			goto IL_00f1;
		}
	}
	{
		Il2CppChar* L_59 = ___name0;
		uint16_t L_60 = V_2;
		int32_t L_61 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_59, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_60), (int32_t)2)))));
		if ((!(((uint32_t)L_61) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_00f5;
		}
	}

IL_00f1:
	{
		uint16_t L_62 = V_2;
		V_0 = L_62;
		goto IL_0170;
	}

IL_00f5:
	{
		Il2CppChar* L_63 = ___name0;
		uint16_t L_64 = V_2;
		int32_t L_65 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_63, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_64), (int32_t)2)))));
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_011c;
		}
	}
	{
		bool L_66 = V_1;
		if (!L_66)
		{
			goto IL_0116;
		}
	}
	{
		uint16_t L_67 = V_2;
		uint16_t L_68 = ___start1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)1))) < ((int32_t)L_68)))
		{
			goto IL_0118;
		}
	}
	{
		Il2CppChar* L_69 = ___name0;
		uint16_t L_70 = V_2;
		int32_t L_71 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_69, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_70, (int32_t)1))), (int32_t)2)))));
		if ((!(((uint32_t)L_71) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0118;
		}
	}

IL_0116:
	{
		return (bool)0;
	}

IL_0118:
	{
		V_1 = (bool)0;
		goto IL_0164;
	}

IL_011c:
	{
		Il2CppChar* L_72 = ___name0;
		uint16_t L_73 = V_2;
		int32_t L_74 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_72, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_73), (int32_t)2)))));
		if ((((int32_t)L_74) == ((int32_t)((int32_t)45))))
		{
			goto IL_0132;
		}
	}
	{
		Il2CppChar* L_75 = ___name0;
		uint16_t L_76 = V_2;
		int32_t L_77 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_75, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_76), (int32_t)2)))));
		if ((!(((uint32_t)L_77) == ((uint32_t)((int32_t)95)))))
		{
			goto IL_0137;
		}
	}

IL_0132:
	{
		bool L_78 = V_1;
		if (L_78)
		{
			goto IL_0164;
		}
	}
	{
		return (bool)0;
	}

IL_0137:
	{
		Il2CppChar* L_79 = ___name0;
		uint16_t L_80 = V_2;
		int32_t L_81 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_79, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_80), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = Char_IsLetter_mF204E476D37A9EC10C965929AF16A362CBEA8950(L_81, /*hidden argument*/NULL);
		if (L_82)
		{
			goto IL_015b;
		}
	}
	{
		Il2CppChar* L_83 = ___name0;
		uint16_t L_84 = V_2;
		int32_t L_85 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_83, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_84), (int32_t)2)))));
		if ((((int32_t)L_85) < ((int32_t)((int32_t)48))))
		{
			goto IL_0162;
		}
	}
	{
		Il2CppChar* L_86 = ___name0;
		uint16_t L_87 = V_2;
		int32_t L_88 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_86, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_87), (int32_t)2)))));
		if ((((int32_t)L_88) > ((int32_t)((int32_t)57))))
		{
			goto IL_0162;
		}
	}

IL_015b:
	{
		bool L_89 = V_1;
		if (L_89)
		{
			goto IL_0164;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0164;
	}

IL_0162:
	{
		return (bool)0;
	}

IL_0164:
	{
		uint16_t L_90 = V_2;
		V_2 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1))));
	}

IL_0169:
	{
		uint16_t L_91 = V_2;
		uint16_t L_92 = V_0;
		if ((((int32_t)L_91) < ((int32_t)L_92)))
		{
			goto IL_00b7;
		}
	}

IL_0170:
	{
		uint16_t L_93 = V_2;
		uint16_t L_94 = ___start1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1))) < ((int32_t)L_94)))
		{
			goto IL_0185;
		}
	}
	{
		Il2CppChar* L_95 = ___name0;
		uint16_t L_96 = V_2;
		int32_t L_97 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_95, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_96, (int32_t)1))), (int32_t)2)))));
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0185;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_0185:
	{
		bool L_98 = V_1;
		if (L_98)
		{
			goto IL_018a;
		}
	}
	{
		return (bool)0;
	}

IL_018a:
	{
		int32_t* L_99 = ___returnedEnd2;
		uint16_t L_100 = V_0;
		*((int32_t*)L_99) = (int32_t)L_100;
		return (bool)1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Uri::get_IsImplicitFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_m_Flags_17();
		return (bool)((!(((uint64_t)((int64_t)((int64_t)L_0&(int64_t)((int64_t)((int64_t)((int32_t)536870912)))))) <= ((uint64_t)((int64_t)((int64_t)0)))))? 1 : 0);
	}
}
// System.Boolean System.Uri::get_IsUncOrDosPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsUncOrDosPath_mF197920D1C1DBDE10A3478855D89D36210D8CE94 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_m_Flags_17();
		return (bool)((!(((uint64_t)((int64_t)((int64_t)L_0&(int64_t)((int64_t)((int64_t)((int32_t)402653184)))))) <= ((uint64_t)((int64_t)((int64_t)0)))))? 1 : 0);
	}
}
// System.Boolean System.Uri::get_IsDosPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsDosPath_m3374B9D26D6B547862ACB2E617AB6F96CA31A5AF (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_m_Flags_17();
		return (bool)((!(((uint64_t)((int64_t)((int64_t)L_0&(int64_t)((int64_t)((int64_t)((int32_t)134217728)))))) <= ((uint64_t)((int64_t)((int64_t)0)))))? 1 : 0);
	}
}
// System.Boolean System.Uri::get_IsUncPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsUncPath_m1004A84C83F38F40A4AD1334F22BDDE658EF8E99 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_m_Flags_17();
		return (bool)((!(((uint64_t)((int64_t)((int64_t)L_0&(int64_t)((int64_t)((int64_t)((int32_t)268435456)))))) <= ((uint64_t)((int64_t)((int64_t)0)))))? 1 : 0);
	}
}
// System.Uri/Flags System.Uri::get_HostType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Uri_get_HostType_m6C142BC37D44CF1F53D80627455BC6B1CB747820 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_m_Flags_17();
		return (uint64_t)(((int64_t)((int64_t)L_0&(int64_t)((int64_t)((int64_t)((int32_t)458752))))));
	}
}
// System.UriParser System.Uri::get_Syntax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_0 = __this->get_m_Syntax_15();
		return L_0;
	}
}
// System.Boolean System.Uri::get_IsNotAbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsNotAbsoluteUri_m7394FF83375B299BA634518D3104903AFEAE3177 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_0 = __this->get_m_Syntax_15();
		return (bool)((((RuntimeObject*)(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}
}
// System.Boolean System.Uri::IriParsingStatic(System.UriParser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IriParsingStatic_m0F2797FEA328A2B1A72EE03F9BD88C577A7A0471 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_0 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_IriParsing_23();
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_1 = ___syntax0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_2 = ___syntax0;
		NullCheck(L_2);
		bool L_3;
		L_3 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_2, ((int32_t)268435456), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001e;
		}
	}

IL_0019:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_4 = ___syntax0;
		return (bool)((((RuntimeObject*)(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_001e:
	{
		return (bool)1;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Boolean System.Uri::get_AllowIdn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_AllowIdn_m4031E81D7D0E44FC81C6951D78B2C836EC8270D7 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_0 = __this->get_m_Syntax_15();
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_1 = __this->get_m_Syntax_15();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = UriParser_get_Flags_mDAA0D828057CA2CA4493FD152D3760E975BAE7F0_inline(L_1, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)67108864))))
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_IdnScope_22();
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_IdnScope_22();
		il2cpp_codegen_memory_barrier();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		bool L_5;
		L_5 = Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969(__this, ((int64_t)137438953472LL), /*hidden argument*/NULL);
		return L_5;
	}

IL_003f:
	{
		return (bool)0;
	}

IL_0041:
	{
		return (bool)1;
	}

IL_0043:
	{
		return (bool)0;
	}
}
// System.Boolean System.Uri::AllowIdnStatic(System.UriParser,System.Uri/Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_AllowIdnStatic_mF38FDCA5248AA93F8823A192D61E2180FEC9C41C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax0, uint64_t ___flags1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_0 = ___syntax0;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_1 = ___syntax0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = UriParser_get_Flags_mDAA0D828057CA2CA4493FD152D3760E975BAE7F0_inline(L_1, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)67108864))))
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_IdnScope_22();
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_IdnScope_22();
		il2cpp_codegen_memory_barrier();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0035;
		}
	}
	{
		uint64_t L_5 = ___flags1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Uri_StaticNotAny_mA7DA612608D1C43837E3DC3E31C02F994746736C(L_5, ((int64_t)137438953472LL), /*hidden argument*/NULL);
		return L_6;
	}

IL_0035:
	{
		return (bool)0;
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		return (bool)0;
	}
}
// System.Boolean System.Uri::IsIntranet(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IsIntranet_m89BF3C395C8D960B103DF056976B7C369231270C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___schemeHost0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Uri::get_UserDrivenParsing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_UserDrivenParsing_mF09087D4DE9A0823EBF1FC0C14101335D01393F2 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_m_Flags_17();
		return (bool)((!(((uint64_t)((int64_t)((int64_t)L_0&(int64_t)((int64_t)((int64_t)((int32_t)16777216)))))) <= ((uint64_t)((int64_t)((int64_t)0)))))? 1 : 0);
	}
}
// System.Void System.Uri::SetUserDrivenParsing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_SetUserDrivenParsing_mDF0BFAFE946EAD9122ED2A542132902D7E47FD9C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)((int64_t)((int64_t)((int32_t)16777216)))|(int64_t)((int64_t)((int64_t)L_0&(int64_t)((int64_t)((int64_t)((int32_t)524288))))))));
		return;
	}
}
// System.UInt16 System.Uri::get_SecuredPathIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Uri_get_SecuredPathIndex_m0BE7920E94AA002B4CD2D568BD6E0FD91F0D7F0B (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	int32_t G_B5_0 = 0;
	{
		bool L_0;
		L_0 = Uri_get_IsDosPath_m3374B9D26D6B547862ACB2E617AB6F96CA31A5AF(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_1 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_2 = __this->get_m_Info_18();
		NullCheck(L_2);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_3 = L_2->get_address_of_Offset_3();
		uint16_t L_4 = L_3->get_Path_4();
		NullCheck(L_1);
		Il2CppChar L_5;
		L_5 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)47))))
		{
			goto IL_0031;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_0031;
		}
	}
	{
		G_B5_0 = 2;
		goto IL_0032;
	}

IL_0031:
	{
		G_B5_0 = 3;
	}

IL_0032:
	{
		return (uint16_t)((int32_t)((uint16_t)G_B5_0));
	}

IL_0034:
	{
		return (uint16_t)0;
	}
}
// System.Boolean System.Uri::NotAny(System.Uri/Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, uint64_t ___flags0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_m_Flags_17();
		uint64_t L_1 = ___flags0;
		return (bool)((((int64_t)((int64_t)((int64_t)L_0&(int64_t)L_1))) == ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
	}
}
// System.Boolean System.Uri::InFact(System.Uri/Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, uint64_t ___flags0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_m_Flags_17();
		uint64_t L_1 = ___flags0;
		return (bool)((!(((uint64_t)((int64_t)((int64_t)L_0&(int64_t)L_1))) <= ((uint64_t)((int64_t)((int64_t)0)))))? 1 : 0);
	}
}
// System.Boolean System.Uri::StaticNotAny(System.Uri/Flags,System.Uri/Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_StaticNotAny_mA7DA612608D1C43837E3DC3E31C02F994746736C (uint64_t ___allFlags0, uint64_t ___checkFlags1, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___allFlags0;
		uint64_t L_1 = ___checkFlags1;
		return (bool)((((int64_t)((int64_t)((int64_t)L_0&(int64_t)L_1))) == ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
	}
}
// System.Boolean System.Uri::StaticInFact(System.Uri/Flags,System.Uri/Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_StaticInFact_m6B17A3B95B81DABD390B643ABD9ADAA316D5EF98 (uint64_t ___allFlags0, uint64_t ___checkFlags1, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___allFlags0;
		uint64_t L_1 = ___checkFlags1;
		return (bool)((!(((uint64_t)((int64_t)((int64_t)L_0&(int64_t)L_1))) <= ((uint64_t)((int64_t)((int64_t)0)))))? 1 : 0);
	}
}
// System.Uri/UriInfo System.Uri::EnsureUriInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * Uri_EnsureUriInfo_m5FA3DF1CD26867815CE1F247A47530E1D7E35F7E (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_m_Flags_17();
		V_0 = L_0;
		uint64_t L_1 = __this->get_m_Flags_17();
		if (((int64_t)((int64_t)L_1&(int64_t)((int64_t)((int64_t)((int32_t)1073741824))))))
		{
			goto IL_001d;
		}
	}
	{
		uint64_t L_2 = V_0;
		Uri_CreateUriInfo_mD8864BD45B6397D4C3AED68BA2D3EAEB520DB9E6(__this, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_3 = __this->get_m_Info_18();
		return L_3;
	}
}
// System.Void System.Uri::EnsureParseRemaining()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_EnsureParseRemaining_m7BC86BEFE07F56D480C9ACBCE64983806F6789BB (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_m_Flags_17();
		if (((int64_t)((int64_t)L_0&(int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)-2147483648LL))))))))
		{
			goto IL_0015;
		}
	}
	{
		Uri_ParseRemaining_m8C4350479C64906DDE464595F8BE5F8C14F2038D(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void System.Uri::EnsureHostString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_EnsureHostString_m47897EC94F83DFE1CA16CE71167DDD3CC986C22A (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, bool ___allowDnsOptimization0, const RuntimeMethod* method)
{
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_0;
		L_0 = Uri_EnsureUriInfo_m5FA3DF1CD26867815CE1F247A47530E1D7E35F7E(__this, /*hidden argument*/NULL);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_1 = __this->get_m_Info_18();
		NullCheck(L_1);
		String_t* L_2 = L_1->get_Host_0();
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		bool L_3 = ___allowDnsOptimization0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		bool L_4;
		L_4 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)33554432))), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		Uri_CreateHostString_m2C549411869B57ADE6595800B6493BDB0A52F124(__this, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uriString0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___uriString0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D153343DC0552ABAFC2B893F453DC72854A37BE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C_RuntimeMethod_var)));
	}

IL_0014:
	{
		String_t* L_2 = ___uriString0;
		Uri_CreateThis_m86E72577BCB9A6FDF5A0EC8EDFDD5F41AD3256FC(__this, L_2, (bool)0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.ctor(System.String,System.UriKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uriString0, int32_t ___uriKind1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___uriString0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D153343DC0552ABAFC2B893F453DC72854A37BE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF_RuntimeMethod_var)));
	}

IL_0014:
	{
		String_t* L_2 = ___uriString0;
		int32_t L_3 = ___uriKind1;
		Uri_CreateThis_m86E72577BCB9A6FDF5A0EC8EDFDD5F41AD3256FC(__this, L_2, (bool)0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m77D32DF0ABC88A040214913D87A07F2C522CCD18 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri0, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___relativeUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * V_1 = NULL;
	bool V_2 = false;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___baseUri0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53CEBA286266000AA0D18A26DBE6FBE7714C8319)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri__ctor_m77D32DF0ABC88A040214913D87A07F2C522CCD18_RuntimeMethod_var)));
	}

IL_0014:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_2 = ___baseUri0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_4 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53CEBA286266000AA0D18A26DBE6FBE7714C8319)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri__ctor_m77D32DF0ABC88A040214913D87A07F2C522CCD18_RuntimeMethod_var)));
	}

IL_0027:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_5 = ___relativeUri1;
		Uri_CreateThisFromUri_mCD4CFC7C223ADB909C634DA7EAE279DCD9BF5C14(__this, L_5, /*hidden argument*/NULL);
		V_0 = (String_t*)NULL;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_6 = ___baseUri0;
		NullCheck(L_6);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_7;
		L_7 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = UriParser_get_IsSimple_m09BA6505FDD1AE0BF6C711AE9C2C3F9379B868F8(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0073;
		}
	}
	{
		bool L_9;
		L_9 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)524288))), /*hidden argument*/NULL);
		V_2 = L_9;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_10 = ___baseUri0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_11;
		L_11 = Uri_ResolveHelper_m2C5CDF42841B464E75B3AA102A24BABA8B51698E(L_10, __this, (String_t**)(&V_0), (bool*)(&V_2), (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D **)(&V_1), /*hidden argument*/NULL);
		___relativeUri1 = L_11;
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_12 = V_1;
		if (!L_12)
		{
			goto IL_005e;
		}
	}
	{
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_13 = V_1;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri__ctor_m77D32DF0ABC88A040214913D87A07F2C522CCD18_RuntimeMethod_var)));
	}

IL_005e:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_14 = ___relativeUri1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Uri_op_Inequality_m3B3733CAA19866A20EF76A772B368EFB5FC89A4F(L_14, (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008a;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_16 = ___relativeUri1;
		if ((((RuntimeObject*)(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)L_16) == ((RuntimeObject*)(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)__this)))
		{
			goto IL_0072;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_17 = ___relativeUri1;
		Uri_CreateThisFromUri_mCD4CFC7C223ADB909C634DA7EAE279DCD9BF5C14(__this, L_17, /*hidden argument*/NULL);
	}

IL_0072:
	{
		return;
	}

IL_0073:
	{
		V_2 = (bool)0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_18 = ___baseUri0;
		NullCheck(L_18);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_19;
		L_19 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(L_18, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_20 = ___baseUri0;
		NullCheck(L_19);
		String_t* L_21;
		L_21 = UriParser_InternalResolve_m7EF249EAEFB9DDE866F9830E91CC61E09F1548E9(L_19, L_20, __this, (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D **)(&V_1), /*hidden argument*/NULL);
		V_0 = L_21;
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_22 = V_1;
		if (!L_22)
		{
			goto IL_008a;
		}
	}
	{
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_23 = V_1;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri__ctor_m77D32DF0ABC88A040214913D87A07F2C522CCD18_RuntimeMethod_var)));
	}

IL_008a:
	{
		__this->set_m_Flags_17(((int64_t)((int64_t)0)));
		__this->set_m_Info_18((UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 *)NULL);
		__this->set_m_Syntax_15((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)NULL);
		String_t* L_24 = V_0;
		bool L_25 = V_2;
		Uri_CreateThis_m86E72577BCB9A6FDF5A0EC8EDFDD5F41AD3256FC(__this, L_24, L_25, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.ParsingError System.Uri::GetCombinedString(System.Uri,System.String,System.Boolean,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_GetCombinedString_mC6530D23E30E379E8991E52862B9B38489430743 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri0, String_t* ___relativeStr1, bool ___dontEscape2, String_t** ___result3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	Il2CppChar* V_2 = NULL;
	String_t* V_3 = NULL;
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * V_4 = NULL;
	String_t* G_B22_0 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B22_1 = NULL;
	String_t** G_B22_2 = NULL;
	String_t* G_B21_0 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B21_1 = NULL;
	String_t** G_B21_2 = NULL;
	int32_t G_B23_0 = 0;
	String_t* G_B23_1 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B23_2 = NULL;
	String_t** G_B23_3 = NULL;
	{
		V_0 = 0;
		goto IL_00b3;
	}

IL_0007:
	{
		String_t* L_0 = ___relativeStr1;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_0, L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)47))))
		{
			goto IL_00bf;
		}
	}
	{
		String_t* L_3 = ___relativeStr1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_3, L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)92))))
		{
			goto IL_00bf;
		}
	}
	{
		String_t* L_6 = ___relativeStr1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_6, L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)63))))
		{
			goto IL_00bf;
		}
	}
	{
		String_t* L_9 = ___relativeStr1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Il2CppChar L_11;
		L_11 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_9, L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_11) == ((int32_t)((int32_t)35))))
		{
			goto IL_00bf;
		}
	}
	{
		String_t* L_12 = ___relativeStr1;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_12, L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)2)))
		{
			goto IL_00bf;
		}
	}
	{
		String_t* L_16 = ___relativeStr1;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_16, 0, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		String_t* L_19 = V_1;
		V_3 = L_19;
		String_t* L_20 = V_3;
		V_2 = (Il2CppChar*)((uintptr_t)L_20);
		Il2CppChar* L_21 = V_2;
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		Il2CppChar* L_22 = V_2;
		int32_t L_23;
		L_23 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_2 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_22, (int32_t)L_23));
	}

IL_0067:
	{
		V_4 = (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)NULL;
		Il2CppChar* L_24 = V_2;
		String_t* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = Uri_CheckSchemeSyntax_m2D8AE16F4A6A55E89603F7E9D675227302B53761((Il2CppChar*)(Il2CppChar*)L_24, (uint16_t)((int32_t)((uint16_t)L_26)), (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A **)(&V_4), /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00ab;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_28 = ___baseUri0;
		NullCheck(L_28);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_29;
		L_29 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(L_28, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_30 = V_4;
		if ((!(((RuntimeObject*)(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)L_29) == ((RuntimeObject*)(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)L_30))))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_31 = V_0;
		String_t* L_32 = ___relativeStr1;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_32, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1))) >= ((int32_t)L_33)))
		{
			goto IL_009d;
		}
	}
	{
		String_t* L_34 = ___relativeStr1;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		String_t* L_36;
		L_36 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_34, ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)), /*hidden argument*/NULL);
		___relativeStr1 = L_36;
		goto IL_00ab;
	}

IL_009d:
	{
		String_t* L_37 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		___relativeStr1 = L_37;
		goto IL_00ab;
	}

IL_00a6:
	{
		String_t** L_38 = ___result3;
		String_t* L_39 = ___relativeStr1;
		*((RuntimeObject **)L_38) = (RuntimeObject *)L_39;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_38, (void*)(RuntimeObject *)L_39);
		return (int32_t)(0);
	}

IL_00ab:
	{
		V_3 = (String_t*)NULL;
		goto IL_00bf;
	}

IL_00af:
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00b3:
	{
		int32_t L_41 = V_0;
		String_t* L_42 = ___relativeStr1;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_42, /*hidden argument*/NULL);
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0007;
		}
	}

IL_00bf:
	{
		String_t* L_44 = ___relativeStr1;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_00d1;
		}
	}
	{
		String_t** L_46 = ___result3;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_47 = ___baseUri0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(L_47, /*hidden argument*/NULL);
		*((RuntimeObject **)L_46) = (RuntimeObject *)L_48;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_46, (void*)(RuntimeObject *)L_48);
		return (int32_t)(0);
	}

IL_00d1:
	{
		String_t** L_49 = ___result3;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_50 = ___baseUri0;
		String_t* L_51 = ___relativeStr1;
		bool L_52 = ___dontEscape2;
		G_B21_0 = L_51;
		G_B21_1 = L_50;
		G_B21_2 = L_49;
		if (L_52)
		{
			G_B22_0 = L_51;
			G_B22_1 = L_50;
			G_B22_2 = L_49;
			goto IL_00da;
		}
	}
	{
		G_B23_0 = 3;
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		goto IL_00db;
	}

IL_00da:
	{
		G_B23_0 = 1;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
	}

IL_00db:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		String_t* L_53;
		L_53 = Uri_CombineUri_m25D4A53B7535EA10C7DA7835E16961BBD5895EB0(G_B23_2, G_B23_1, G_B23_0, /*hidden argument*/NULL);
		*((RuntimeObject **)G_B23_3) = (RuntimeObject *)L_53;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)G_B23_3, (void*)(RuntimeObject *)L_53);
		return (int32_t)(0);
	}
}
// System.UriFormatException System.Uri::GetException(System.ParsingError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * Uri_GetException_m6A158C16E69136DF56BCF19CC4C7DCCC2601CF84 (int32_t ___err0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D714861C7EC595B0F134B25D51B6C3D17B97BE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ECCA26D6E6512BFFD6AC0372868F35B289A0AC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10967EC4A6C481862CE1D9E400B88D2400A58495);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2548827C46E1449217FD7CD3DA9F653E7BC05534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2659A93A14DB81D09000B3E98CBB7FBD3940D067);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FB7CA16AB7B5A4F956554894A7222DF13F448AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral659F36F170A47067B1A80CD9B6619237197BD872);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82F0E6BA3FD6F5AA7F9F5A798046A3B615F6D560);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD90CDA62B9AE646096CCD287ACE999D2EFB8ADA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDA0FEDECC3765A8D5F295C4B302D615D29F3483);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE610AFD3290809B1D62848F53491246DB230B5BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___err0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_0051;
			}
			case 3:
			{
				goto IL_0061;
			}
			case 4:
			{
				goto IL_0071;
			}
			case 5:
			{
				goto IL_0081;
			}
			case 6:
			{
				goto IL_0091;
			}
			case 7:
			{
				goto IL_00a1;
			}
			case 8:
			{
				goto IL_00b1;
			}
			case 9:
			{
				goto IL_00c1;
			}
			case 10:
			{
				goto IL_00d1;
			}
			case 11:
			{
				goto IL_00e1;
			}
			case 12:
			{
				goto IL_00f1;
			}
		}
	}
	{
		goto IL_0101;
	}

IL_003f:
	{
		return (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)NULL;
	}

IL_0041:
	{
		String_t* L_1;
		L_1 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(_stringLiteral82F0E6BA3FD6F5AA7F9F5A798046A3B615F6D560, /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_2 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0051:
	{
		String_t* L_3;
		L_3 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(_stringLiteral0D714861C7EC595B0F134B25D51B6C3D17B97BE7, /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_4 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0061:
	{
		String_t* L_5;
		L_5 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(_stringLiteralE610AFD3290809B1D62848F53491246DB230B5BB, /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_6 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_6, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0071:
	{
		String_t* L_7;
		L_7 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(_stringLiteral659F36F170A47067B1A80CD9B6619237197BD872, /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_8 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_8, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0081:
	{
		String_t* L_9;
		L_9 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(_stringLiteralD90CDA62B9AE646096CCD287ACE999D2EFB8ADA5, /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_10 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_10, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0091:
	{
		String_t* L_11;
		L_11 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(_stringLiteralDDA0FEDECC3765A8D5F295C4B302D615D29F3483, /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_12 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_12, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_00a1:
	{
		String_t* L_13;
		L_13 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(_stringLiteral2548827C46E1449217FD7CD3DA9F653E7BC05534, /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_14 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_14, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_00b1:
	{
		String_t* L_15;
		L_15 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(_stringLiteral2659A93A14DB81D09000B3E98CBB7FBD3940D067, /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_16 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_16, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_00c1:
	{
		String_t* L_17;
		L_17 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(_stringLiteral82F0E6BA3FD6F5AA7F9F5A798046A3B615F6D560, /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_18 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_18, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_00d1:
	{
		String_t* L_19;
		L_19 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(_stringLiteral10967EC4A6C481862CE1D9E400B88D2400A58495, /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_20 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_20, L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_00e1:
	{
		String_t* L_21;
		L_21 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(_stringLiteral0ECCA26D6E6512BFFD6AC0372868F35B289A0AC9, /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_22 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_22, L_21, /*hidden argument*/NULL);
		return L_22;
	}

IL_00f1:
	{
		String_t* L_23;
		L_23 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(_stringLiteral4FB7CA16AB7B5A4F956554894A7222DF13F448AA, /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_24 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_24, L_23, /*hidden argument*/NULL);
		return L_24;
	}

IL_0101:
	{
		String_t* L_25;
		L_25 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(_stringLiteral82F0E6BA3FD6F5AA7F9F5A798046A3B615F6D560, /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_26 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_26, L_25, /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m8AEBDC795304F6C78A02BC41BB4C6BF93C4DE53B (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___serializationInfo0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___streamingContext1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02158C33AAFC69461998755D511D2DD0C9BDBB59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279EA60C732ADCA7403A83C01015BDFB2C45ECA3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___serializationInfo0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = SerializationInfo_GetString_m50298DCBCD07D858EE19414052CB02EE4DDD3C2C(L_0, _stringLiteral279EA60C732ADCA7403A83C01015BDFB2C45ECA3, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_4 = V_0;
		Uri_CreateThis_m86E72577BCB9A6FDF5A0EC8EDFDD5F41AD3256FC(__this, L_4, (bool)0, 1, /*hidden argument*/NULL);
		return;
	}

IL_0024:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_5 = ___serializationInfo0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = SerializationInfo_GetString_m50298DCBCD07D858EE19414052CB02EE4DDD3C2C(L_5, _stringLiteral02158C33AAFC69461998755D511D2DD0C9BDBB59, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		if (L_7)
		{
			goto IL_003e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_8 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D153343DC0552ABAFC2B893F453DC72854A37BE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri__ctor_m8AEBDC795304F6C78A02BC41BB4C6BF93C4DE53B_RuntimeMethod_var)));
	}

IL_003e:
	{
		String_t* L_9 = V_0;
		Uri_CreateThis_m86E72577BCB9A6FDF5A0EC8EDFDD5F41AD3256FC(__this, L_9, (bool)0, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m42AA79366787600D266604222086BD6BDD28A36A (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___serializationInfo0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___streamingContext1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___serializationInfo0;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_1 = ___streamingContext1;
		Uri_GetObjectData_mB720AACE3C54C5B104A7DF0658369C7F7914E895(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_GetObjectData_mB720AACE3C54C5B104A7DF0658369C7F7914E895 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___serializationInfo0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___streamingContext1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02158C33AAFC69461998755D511D2DD0C9BDBB59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279EA60C732ADCA7403A83C01015BDFB2C45ECA3);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_1 = ___serializationInfo0;
		String_t* L_2;
		L_2 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(__this, ((int32_t)-2147483648LL), 1, /*hidden argument*/NULL);
		NullCheck(L_1);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_1, _stringLiteral279EA60C732ADCA7403A83C01015BDFB2C45ECA3, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0020:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_3 = ___serializationInfo0;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_3);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_3, _stringLiteral279EA60C732ADCA7403A83C01015BDFB2C45ECA3, L_4, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_5 = ___serializationInfo0;
		String_t* L_6;
		L_6 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(__this, ((int32_t)-2147483648LL), 1, /*hidden argument*/NULL);
		NullCheck(L_5);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_5, _stringLiteral02158C33AAFC69461998755D511D2DD0C9BDBB59, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Uri::get_AbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_0 = __this->get_m_Syntax_15();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE657126EBF76C06687ED6EAD2C714E37315C927F)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA_RuntimeMethod_var)));
	}

IL_0018:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_3;
		L_3 = Uri_EnsureUriInfo_m5FA3DF1CD26867815CE1F247A47530E1D7E35F7E(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_4 = V_0;
		NullCheck(L_4);
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_5 = L_4->get_MoreInfo_5();
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_6 = V_0;
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_7 = (MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 *)il2cpp_codegen_object_new(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727_il2cpp_TypeInfo_var);
		MoreInfo__ctor_mF8515B2BCCB5E7DC008164794946ADE7ADBCD2BD(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_MoreInfo_5(L_7);
	}

IL_0032:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_8 = V_0;
		NullCheck(L_8);
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_9 = L_8->get_MoreInfo_5();
		NullCheck(L_9);
		String_t* L_10 = L_9->get_AbsoluteUri_0();
		V_1 = L_10;
		String_t* L_11 = V_1;
		if (L_11)
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_12;
		L_12 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(__this, ((int32_t)127), 1, /*hidden argument*/NULL);
		V_1 = L_12;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_13 = V_0;
		NullCheck(L_13);
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_14 = L_13->get_MoreInfo_5();
		String_t* L_15 = V_1;
		NullCheck(L_14);
		L_14->set_AbsoluteUri_0(L_15);
	}

IL_0057:
	{
		String_t* L_16 = V_1;
		return L_16;
	}
}
// System.Boolean System.Uri::get_IsUnc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsUnc_m74CE69038E37D7F868EF3EFD9DCCD08AA11877CC (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = Uri_get_IsNotAbsoluteUri_m7394FF83375B299BA634518D3104903AFEAE3177(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE657126EBF76C06687ED6EAD2C714E37315C927F)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_get_IsUnc_m74CE69038E37D7F868EF3EFD9DCCD08AA11877CC_RuntimeMethod_var)));
	}

IL_0018:
	{
		bool L_3;
		L_3 = Uri_get_IsUncPath_m1004A84C83F38F40A4AD1334F22BDDE658EF8E99(__this, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean System.Uri::StaticIsFile(System.UriParser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_StaticIsFile_m3E03FC49813EF629A488CF3093AE0A5675210CED (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax0, const RuntimeMethod* method)
{
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_0 = ___syntax0;
		NullCheck(L_0);
		bool L_1;
		L_1 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_0, ((int32_t)8192), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Uri::get_InitializeLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Uri_get_InitializeLock_mAE613B41FE88D4D6BC8D943F2A75B6BC00861B0E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_initLock_26();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = V_0;
		RuntimeObject * L_3;
		L_3 = Interlocked_CompareExchange_mFAD09589A5DAFDBABB05C62A2D35CD5B92BC6961((RuntimeObject **)(((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_address_of_s_initLock_26()), L_2, NULL, /*hidden argument*/NULL);
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		RuntimeObject * L_4 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_initLock_26();
		return L_4;
	}
}
// System.Void System.Uri::InitializeUriConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_InitializeUriConfig_m0DB8F34B6FAF361C0FE002FA800548608A03F8E5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_0 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_ConfigInitialized_20();
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		RuntimeObject * L_1;
		L_1 = Uri_get_InitializeLock_mAE613B41FE88D4D6BC8D943F2A75B6BC00861B0E(/*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_0011:
	try
	{// begin try (depth: 1)
		{
			RuntimeObject * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
			bool L_3 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_ConfigInitialized_20();
			il2cpp_codegen_memory_barrier();
			if (L_3)
			{
				goto IL_003b;
			}
		}

IL_0022:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
			bool L_4 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_ConfigInitializing_21();
			il2cpp_codegen_memory_barrier();
			if (L_4)
			{
				goto IL_003b;
			}
		}

IL_002b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
			il2cpp_codegen_memory_barrier();
			((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_s_ConfigInitialized_20(1);
			il2cpp_codegen_memory_barrier();
			((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_s_ConfigInitializing_21(0);
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x47, FINALLY_003d);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{// begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_0046;
			}
		}

IL_0040:
		{
			RuntimeObject * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(61)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
	}

IL_0047:
	{
		return;
	}
}
// System.Int32 System.Uri::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = Uri_get_IsNotAbsoluteUri_m7394FF83375B299BA634518D3104903AFEAE3177(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE657126EBF76C06687ED6EAD2C714E37315C927F)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C_RuntimeMethod_var)));
	}

IL_0018:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_3 = __this->get_m_Syntax_15();
		NullCheck(L_3);
		bool L_4;
		L_4 = UriParser_get_IsSimple_m09BA6505FDD1AE0BF6C711AE9C2C3F9379B868F8(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_5;
		L_5 = Uri_EnsureUriInfo_m5FA3DF1CD26867815CE1F247A47530E1D7E35F7E(__this, /*hidden argument*/NULL);
		goto IL_0035;
	}

IL_002e:
	{
		Uri_EnsureHostString_m47897EC94F83DFE1CA16CE71167DDD3CC986C22A(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0035:
	{
		bool L_6;
		L_6 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)8388608))), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_7 = __this->get_m_Info_18();
		NullCheck(L_7);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_8 = L_7->get_address_of_Offset_3();
		uint16_t L_9 = L_8->get_PortValue_3();
		return L_9;
	}

IL_0054:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_10 = __this->get_m_Syntax_15();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = UriParser_get_DefaultPort_m7ECA5BE839D36C7FF854FEA0795D8DE701487D33_inline(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = Uri_get_IsNotAbsoluteUri_m7394FF83375B299BA634518D3104903AFEAE3177(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE657126EBF76C06687ED6EAD2C714E37315C927F)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29_RuntimeMethod_var)));
	}

IL_0018:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_3 = __this->get_m_Syntax_15();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Uri::get_OriginalStringSwitched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_OriginalStringSwitched_m405404D361D84E268AED978DCE114F5E43583987 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_iriParsing_19();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		bool L_1;
		L_1 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)8589934592LL), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0046;
		}
	}

IL_0019:
	{
		bool L_2;
		L_2 = Uri_get_AllowIdn_m4031E81D7D0E44FC81C6951D78B2C836EC8270D7(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		bool L_3;
		L_3 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)4294967296LL), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0042;
		}
	}
	{
		bool L_4;
		L_4 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)68719476736LL), /*hidden argument*/NULL);
		return L_4;
	}

IL_0042:
	{
		return (bool)1;
	}

IL_0044:
	{
		return (bool)0;
	}

IL_0046:
	{
		return (bool)1;
	}
}
// System.String System.Uri::get_OriginalString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = Uri_get_OriginalStringSwitched_m405404D361D84E268AED978DCE114F5E43583987(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = __this->get_m_String_13();
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = __this->get_m_originalUnicodeString_14();
		return L_2;
	}
}
// System.String System.Uri::get_DnsSafeHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_DnsSafeHost_m3A22E10619987FC8FED6CEDDCA5D9647AC5B6AC5 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_1 = NULL;
	int32_t V_2 = 0;
	{
		bool L_0;
		L_0 = Uri_get_IsNotAbsoluteUri_m7394FF83375B299BA634518D3104903AFEAE3177(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE657126EBF76C06687ED6EAD2C714E37315C927F)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_get_DnsSafeHost_m3A22E10619987FC8FED6CEDDCA5D9647AC5B6AC5_RuntimeMethod_var)));
	}

IL_0018:
	{
		bool L_3;
		L_3 = Uri_get_AllowIdn_m4031E81D7D0E44FC81C6951D78B2C836EC8270D7(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		uint64_t L_4 = __this->get_m_Flags_17();
		if (((int64_t)((int64_t)L_4&(int64_t)((int64_t)4294967296LL))))
		{
			goto IL_0044;
		}
	}
	{
		uint64_t L_5 = __this->get_m_Flags_17();
		if (!((int64_t)((int64_t)L_5&(int64_t)((int64_t)68719476736LL))))
		{
			goto IL_0057;
		}
	}

IL_0044:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_6;
		L_6 = Uri_EnsureUriInfo_m5FA3DF1CD26867815CE1F247A47530E1D7E35F7E(__this, /*hidden argument*/NULL);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_7 = __this->get_m_Info_18();
		NullCheck(L_7);
		String_t* L_8 = L_7->get_DnsSafeHost_4();
		return L_8;
	}

IL_0057:
	{
		Uri_EnsureHostString_m47897EC94F83DFE1CA16CE71167DDD3CC986C22A(__this, (bool)0, /*hidden argument*/NULL);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_9 = __this->get_m_Info_18();
		NullCheck(L_9);
		String_t* L_10 = L_9->get_DnsSafeHost_4();
		bool L_11;
		L_11 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_007c;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_12 = __this->get_m_Info_18();
		NullCheck(L_12);
		String_t* L_13 = L_12->get_DnsSafeHost_4();
		return L_13;
	}

IL_007c:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_14 = __this->get_m_Info_18();
		NullCheck(L_14);
		String_t* L_15 = L_14->get_Host_0();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0094;
		}
	}
	{
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_17;
	}

IL_0094:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_18 = __this->get_m_Info_18();
		NullCheck(L_18);
		String_t* L_19 = L_18->get_Host_0();
		V_0 = L_19;
		uint64_t L_20;
		L_20 = Uri_get_HostType_m6C142BC37D44CF1F53D80627455BC6B1CB747820(__this, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_20) == ((uint64_t)((int64_t)((int64_t)((int32_t)65536)))))))
		{
			goto IL_00df;
		}
	}
	{
		String_t* L_21 = V_0;
		String_t* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_24;
		L_24 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_21, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_24;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_25 = __this->get_m_Info_18();
		NullCheck(L_25);
		String_t* L_26 = L_25->get_ScopeId_1();
		if (!L_26)
		{
			goto IL_013b;
		}
	}
	{
		String_t* L_27 = V_0;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_28 = __this->get_m_Info_18();
		NullCheck(L_28);
		String_t* L_29 = L_28->get_ScopeId_1();
		String_t* L_30;
		L_30 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_27, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_013b;
	}

IL_00df:
	{
		uint64_t L_31;
		L_31 = Uri_get_HostType_m6C142BC37D44CF1F53D80627455BC6B1CB747820(__this, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_31) == ((uint64_t)((int64_t)((int64_t)((int32_t)327680)))))))
		{
			goto IL_013b;
		}
	}
	{
		bool L_32;
		L_32 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)260))), /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_013b;
		}
	}
	{
		String_t* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_33, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_35 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_34);
		V_1 = L_35;
		V_2 = 0;
		String_t* L_36 = V_0;
		String_t* L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_37, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_39 = V_1;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_40 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_41;
		L_41 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(L_36, 0, L_38, L_39, (int32_t*)(&V_2), ((int32_t)65535), ((int32_t)65535), ((int32_t)65535), ((int32_t)10), L_40, (bool)0, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_42 = V_1;
		int32_t L_43 = V_2;
		String_t* L_44;
		L_44 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_42, 0, L_43, /*hidden argument*/NULL);
		V_0 = L_44;
	}

IL_013b:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_45 = __this->get_m_Info_18();
		String_t* L_46 = V_0;
		NullCheck(L_45);
		L_45->set_DnsSafeHost_4(L_46);
		String_t* L_47 = V_0;
		return L_47;
	}
}
// System.Boolean System.Uri::get_IsAbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_0 = __this->get_m_Syntax_15();
		return (bool)((!(((RuntimeObject*)(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Uri::get_UserEscaped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_UserEscaped_m36B234B7081DFE3B3B6D7FCA2F9768C10DDD2807 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)524288))), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Uri::IsGenDelim(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IsGenDelim_m93EB89B013A4AE8B5C5D792EB8BEAD2BF8EC5997 (Il2CppChar ___ch0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___ch0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)58))))
		{
			goto IL_0024;
		}
	}
	{
		Il2CppChar L_1 = ___ch0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)47))))
		{
			goto IL_0024;
		}
	}
	{
		Il2CppChar L_2 = ___ch0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)63))))
		{
			goto IL_0024;
		}
	}
	{
		Il2CppChar L_3 = ___ch0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)35))))
		{
			goto IL_0024;
		}
	}
	{
		Il2CppChar L_4 = ___ch0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)91))))
		{
			goto IL_0024;
		}
	}
	{
		Il2CppChar L_5 = ___ch0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)93))))
		{
			goto IL_0024;
		}
	}
	{
		Il2CppChar L_6 = ___ch0;
		return (bool)((((int32_t)L_6) == ((int32_t)((int32_t)64)))? 1 : 0);
	}

IL_0024:
	{
		return (bool)1;
	}
}
// System.Boolean System.Uri::IsHexDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IsHexDigit_m87121EC1F62716CC681A4458BF2E6A6B844BD95F (Il2CppChar ___character0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___character0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)48))))
		{
			goto IL_000a;
		}
	}
	{
		Il2CppChar L_1 = ___character0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0024;
		}
	}

IL_000a:
	{
		Il2CppChar L_2 = ___character0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65))))
		{
			goto IL_0014;
		}
	}
	{
		Il2CppChar L_3 = ___character0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0024;
		}
	}

IL_0014:
	{
		Il2CppChar L_4 = ___character0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)97))))
		{
			goto IL_0022;
		}
	}
	{
		Il2CppChar L_5 = ___character0;
		return (bool)((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)102)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}

IL_0024:
	{
		return (bool)1;
	}
}
// System.Int32 System.Uri::FromHex(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_FromHex_m16E5FED0B58BA0A603C6BDDE6AA90F3C3FC78977 (Il2CppChar ___digit0, const RuntimeMethod* method)
{
	int32_t G_B10_0 = 0;
	{
		Il2CppChar L_0 = ___digit0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)48))))
		{
			goto IL_000a;
		}
	}
	{
		Il2CppChar L_1 = ___digit0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)57))))
		{
			goto IL_001e;
		}
	}

IL_000a:
	{
		Il2CppChar L_2 = ___digit0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65))))
		{
			goto IL_0014;
		}
	}
	{
		Il2CppChar L_3 = ___digit0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)70))))
		{
			goto IL_001e;
		}
	}

IL_0014:
	{
		Il2CppChar L_4 = ___digit0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)97))))
		{
			goto IL_003b;
		}
	}
	{
		Il2CppChar L_5 = ___digit0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)102))))
		{
			goto IL_003b;
		}
	}

IL_001e:
	{
		Il2CppChar L_6 = ___digit0;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0036;
		}
	}
	{
		Il2CppChar L_7 = ___digit0;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)70))))
		{
			goto IL_002e;
		}
	}
	{
		Il2CppChar L_8 = ___digit0;
		G_B10_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)97)));
		goto IL_0032;
	}

IL_002e:
	{
		Il2CppChar L_9 = ___digit0;
		G_B10_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)65)));
	}

IL_0032:
	{
		return ((int32_t)il2cpp_codegen_add((int32_t)G_B10_0, (int32_t)((int32_t)10)));
	}

IL_0036:
	{
		Il2CppChar L_10 = ___digit0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)48)));
	}

IL_003b:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_11 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491588DC50F24F885876BF828F202716C7BE3803)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_FromHex_m16E5FED0B58BA0A603C6BDDE6AA90F3C3FC78977_RuntimeMethod_var)));
	}
}
// System.Int32 System.Uri::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_GetHashCode_mC0D119822A7E802B29C060B809048C5A1413E818 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		bool L_0;
		L_0 = Uri_get_IsNotAbsoluteUri_m7394FF83375B299BA634518D3104903AFEAE3177(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1;
		L_1 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Uri_CalculateCaseInsensitiveHashCode_m3C1409D3BEC3AEDC2880109BF1755CF68263DD7A(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_3;
		L_3 = Uri_EnsureUriInfo_m5FA3DF1CD26867815CE1F247A47530E1D7E35F7E(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_4 = V_0;
		NullCheck(L_4);
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_5 = L_4->get_MoreInfo_5();
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_6 = V_0;
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_7 = (MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 *)il2cpp_codegen_object_new(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727_il2cpp_TypeInfo_var);
		MoreInfo__ctor_mF8515B2BCCB5E7DC008164794946ADE7ADBCD2BD(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_MoreInfo_5(L_7);
	}

IL_002e:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_8 = V_0;
		NullCheck(L_8);
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_9 = L_8->get_MoreInfo_5();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_Hash_1();
		V_1 = L_10;
		int32_t L_11 = V_1;
		if (L_11)
		{
			goto IL_0072;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_12 = V_0;
		NullCheck(L_12);
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_13 = L_12->get_MoreInfo_5();
		NullCheck(L_13);
		String_t* L_14 = L_13->get_RemoteUrl_2();
		V_2 = L_14;
		String_t* L_15 = V_2;
		if (L_15)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_16;
		L_16 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(__this, ((int32_t)61), 3, /*hidden argument*/NULL);
		V_2 = L_16;
	}

IL_0056:
	{
		String_t* L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Uri_CalculateCaseInsensitiveHashCode_m3C1409D3BEC3AEDC2880109BF1755CF68263DD7A(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		int32_t L_19 = V_1;
		if (L_19)
		{
			goto IL_0066;
		}
	}
	{
		V_1 = ((int32_t)16777216);
	}

IL_0066:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_20 = V_0;
		NullCheck(L_20);
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_21 = L_20->get_MoreInfo_5();
		int32_t L_22 = V_1;
		NullCheck(L_21);
		L_21->set_Hash_1(L_22);
	}

IL_0072:
	{
		int32_t L_23 = V_1;
		return L_23;
	}
}
// System.String System.Uri::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_ToString_m477A204846385EC6FF1DA9043B81B11512C3962E (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_0 = __this->get_m_Syntax_15();
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		bool L_1 = __this->get_m_iriParsing_19();
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		bool L_2;
		L_2 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)8589934592LL), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}

IL_0021:
	{
		String_t* L_3;
		L_3 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_0028:
	{
		String_t* L_4 = __this->get_m_String_13();
		return L_4;
	}

IL_002f:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_5;
		L_5 = Uri_EnsureUriInfo_m5FA3DF1CD26867815CE1F247A47530E1D7E35F7E(__this, /*hidden argument*/NULL);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_6 = __this->get_m_Info_18();
		NullCheck(L_6);
		String_t* L_7 = L_6->get_String_2();
		if (L_7)
		{
			goto IL_007e;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_8;
		L_8 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = UriParser_get_IsSimple_m09BA6505FDD1AE0BF6C711AE9C2C3F9379B868F8(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_10 = __this->get_m_Info_18();
		String_t* L_11;
		L_11 = Uri_GetComponentsHelper_mAA39E421157735AAD7D93A187CCCAED5A122C8E8(__this, ((int32_t)127), ((int32_t)32767), /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_String_2(L_11);
		goto IL_007e;
	}

IL_006a:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_12 = __this->get_m_Info_18();
		String_t* L_13;
		L_13 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(__this, ((int32_t)127), 3, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_String_2(L_13);
	}

IL_007e:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_14 = __this->get_m_Info_18();
		NullCheck(L_14);
		String_t* L_15 = L_14->get_String_2();
		return L_15;
	}
}
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Inequality_m3B3733CAA19866A20EF76A772B368EFB5FC89A4F (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri10, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri21, const RuntimeMethod* method)
{
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___uri10;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = ___uri21;
		if ((!(((RuntimeObject*)(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)L_0) == ((RuntimeObject*)(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)0;
	}

IL_0006:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_2 = ___uri10;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_3 = ___uri21;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return (bool)1;
	}

IL_000e:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_4 = ___uri21;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_5 = ___uri10;
		NullCheck(L_4);
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_4, L_5);
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Uri::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_Equals_mB02B478FE0FB77C8D853B051F798C8D978531C1C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, RuntimeObject * ___comparand0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_0 = NULL;
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * V_1 = NULL;
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	Il2CppChar* V_6 = NULL;
	String_t* V_7 = NULL;
	Il2CppChar* V_8 = NULL;
	String_t* V_9 = NULL;
	int32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint16_t V_12 = 0;
	uint16_t V_13 = 0;
	uint16_t V_14 = 0;
	String_t* V_15 = NULL;
	Il2CppChar* V_16 = NULL;
	Il2CppChar* V_17 = NULL;
	Il2CppChar* V_18 = NULL;
	Il2CppChar* V_19 = NULL;
	String_t* G_B77_0 = NULL;
	String_t* G_B77_1 = NULL;
	String_t* G_B76_0 = NULL;
	String_t* G_B76_1 = NULL;
	int32_t G_B78_0 = 0;
	String_t* G_B78_1 = NULL;
	String_t* G_B78_2 = NULL;
	{
		RuntimeObject * L_0 = ___comparand0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___comparand0;
		if ((!(((RuntimeObject*)(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		RuntimeObject * L_2 = ___comparand0;
		V_0 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)IsInstClass((RuntimeObject*)L_2, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject * L_4 = ___comparand0;
		V_5 = ((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		String_t* L_5 = V_5;
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		String_t* L_6 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Uri_TryCreate_m44277635BB8291BC0AADD85B9C9A015C1C21EF92(L_6, 0, (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **)(&V_0), /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		String_t* L_8 = __this->get_m_String_13();
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_m_String_13();
		if ((!(((RuntimeObject*)(String_t*)L_8) == ((RuntimeObject*)(String_t*)L_10))))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)1;
	}

IL_0041:
	{
		bool L_11;
		L_11 = Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25(__this, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_12 = V_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) == ((int32_t)L_13)))
		{
			goto IL_0051;
		}
	}
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14;
		L_14 = Uri_get_IsNotAbsoluteUri_m7394FF83375B299BA634518D3104903AFEAE3177(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_15;
		L_15 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(__this, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		bool L_18;
		L_18 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_006b:
	{
		bool L_19;
		L_19 = Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969(__this, ((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)-2147483648LL))))), /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_008a;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_20 = V_0;
		NullCheck(L_20);
		bool L_21;
		L_21 = Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969(L_20, ((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)-2147483648LL))))), /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_013b;
		}
	}

IL_008a:
	{
		bool L_22;
		L_22 = Uri_get_IsUncOrDosPath_mF197920D1C1DBDE10A3478855D89D36210D8CE94(__this, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0125;
		}
	}
	{
		String_t* L_23 = __this->get_m_String_13();
		NullCheck(L_23);
		int32_t L_24;
		L_24 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_23, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_25 = V_0;
		NullCheck(L_25);
		String_t* L_26 = L_25->get_m_String_13();
		NullCheck(L_26);
		int32_t L_27;
		L_27 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_26, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)L_27))))
		{
			goto IL_013b;
		}
	}
	{
		String_t* L_28 = __this->get_m_String_13();
		V_7 = L_28;
		String_t* L_29 = V_7;
		V_6 = (Il2CppChar*)((uintptr_t)L_29);
		Il2CppChar* L_30 = V_6;
		if (!L_30)
		{
			goto IL_00cb;
		}
	}
	{
		Il2CppChar* L_31 = V_6;
		int32_t L_32;
		L_32 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_6 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_31, (int32_t)L_32));
	}

IL_00cb:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_33 = V_0;
		NullCheck(L_33);
		String_t* L_34 = L_33->get_m_String_13();
		V_9 = L_34;
		String_t* L_35 = V_9;
		V_8 = (Il2CppChar*)((uintptr_t)L_35);
		Il2CppChar* L_36 = V_8;
		if (!L_36)
		{
			goto IL_00e6;
		}
	}
	{
		Il2CppChar* L_37 = V_8;
		int32_t L_38;
		L_38 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_8 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_37, (int32_t)L_38));
	}

IL_00e6:
	{
		String_t* L_39 = __this->get_m_String_13();
		NullCheck(L_39);
		int32_t L_40;
		L_40 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_39, /*hidden argument*/NULL);
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1));
		goto IL_0111;
	}

IL_00f7:
	{
		Il2CppChar* L_41 = V_6;
		int32_t L_42 = V_10;
		int32_t L_43 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_41, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_42), (int32_t)2)))));
		Il2CppChar* L_44 = V_8;
		int32_t L_45 = V_10;
		int32_t L_46 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_44, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_45), (int32_t)2)))));
		if ((!(((uint32_t)L_43) == ((uint32_t)L_46))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_47 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)1));
	}

IL_0111:
	{
		int32_t L_48 = V_10;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_00f7;
		}
	}

IL_0116:
	{
		int32_t L_49 = V_10;
		if ((!(((uint32_t)L_49) == ((uint32_t)(-1)))))
		{
			goto IL_011d;
		}
	}
	{
		return (bool)1;
	}

IL_011d:
	{
		V_9 = (String_t*)NULL;
		V_7 = (String_t*)NULL;
		goto IL_013b;
	}

IL_0125:
	{
		String_t* L_50 = __this->get_m_String_13();
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_51 = V_0;
		NullCheck(L_51);
		String_t* L_52 = L_51->get_m_String_13();
		int32_t L_53;
		L_53 = String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD(L_50, L_52, 5, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_013b;
		}
	}
	{
		return (bool)1;
	}

IL_013b:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_54;
		L_54 = Uri_EnsureUriInfo_m5FA3DF1CD26867815CE1F247A47530E1D7E35F7E(__this, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_55 = V_0;
		NullCheck(L_55);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_56;
		L_56 = Uri_EnsureUriInfo_m5FA3DF1CD26867815CE1F247A47530E1D7E35F7E(L_55, /*hidden argument*/NULL);
		bool L_57;
		L_57 = Uri_get_UserDrivenParsing_mF09087D4DE9A0823EBF1FC0C14101335D01393F2(__this, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_02be;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_58 = V_0;
		NullCheck(L_58);
		bool L_59;
		L_59 = Uri_get_UserDrivenParsing_mF09087D4DE9A0823EBF1FC0C14101335D01393F2(L_58, /*hidden argument*/NULL);
		if (L_59)
		{
			goto IL_02be;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_60;
		L_60 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_60);
		bool L_61;
		L_61 = UriParser_get_IsSimple_m09BA6505FDD1AE0BF6C711AE9C2C3F9379B868F8(L_60, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_02be;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_62 = V_0;
		NullCheck(L_62);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_63;
		L_63 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		bool L_64;
		L_64 = UriParser_get_IsSimple_m09BA6505FDD1AE0BF6C711AE9C2C3F9379B868F8(L_63, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_02be;
		}
	}
	{
		bool L_65;
		L_65 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)33554432))), /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_0281;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_66 = V_0;
		NullCheck(L_66);
		bool L_67;
		L_67 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(L_66, ((int64_t)((int64_t)((int32_t)33554432))), /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_0281;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_68 = __this->get_m_Info_18();
		NullCheck(L_68);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_69 = L_68->get_address_of_Offset_3();
		uint16_t L_70 = L_69->get_Host_2();
		V_11 = L_70;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_71 = __this->get_m_Info_18();
		NullCheck(L_71);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_72 = L_71->get_address_of_Offset_3();
		uint16_t L_73 = L_72->get_Path_4();
		V_12 = L_73;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_74 = V_0;
		NullCheck(L_74);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_75 = L_74->get_m_Info_18();
		NullCheck(L_75);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_76 = L_75->get_address_of_Offset_3();
		uint16_t L_77 = L_76->get_Host_2();
		V_13 = L_77;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_78 = V_0;
		NullCheck(L_78);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_79 = L_78->get_m_Info_18();
		NullCheck(L_79);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_80 = L_79->get_address_of_Offset_3();
		uint16_t L_81 = L_80->get_Path_4();
		V_14 = L_81;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_82 = V_0;
		NullCheck(L_82);
		String_t* L_83 = L_82->get_m_String_13();
		V_15 = L_83;
		uint16_t L_84 = V_12;
		uint16_t L_85 = V_11;
		uint16_t L_86 = V_14;
		uint16_t L_87 = V_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_84, (int32_t)L_85))) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_86, (int32_t)L_87)))))
		{
			goto IL_023f;
		}
	}
	{
		uint16_t L_88 = V_11;
		uint16_t L_89 = V_14;
		uint16_t L_90 = V_13;
		V_12 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)L_89)), (int32_t)L_90))));
		goto IL_023f;
	}

IL_020a:
	{
		String_t* L_91 = __this->get_m_String_13();
		uint16_t L_92 = V_11;
		NullCheck(L_91);
		Il2CppChar L_93;
		L_93 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_91, L_92, /*hidden argument*/NULL);
		String_t* L_94 = V_15;
		uint16_t L_95 = V_13;
		NullCheck(L_94);
		Il2CppChar L_96;
		L_96 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_94, L_95, /*hidden argument*/NULL);
		if ((((int32_t)L_93) == ((int32_t)L_96)))
		{
			goto IL_0224;
		}
	}
	{
		return (bool)0;
	}

IL_0224:
	{
		String_t* L_97 = V_15;
		uint16_t L_98 = V_13;
		NullCheck(L_97);
		Il2CppChar L_99;
		L_99 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_97, L_98, /*hidden argument*/NULL);
		if ((((int32_t)L_99) == ((int32_t)((int32_t)58))))
		{
			goto IL_0245;
		}
	}
	{
		uint16_t L_100 = V_11;
		V_11 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1))));
		uint16_t L_101 = V_13;
		V_13 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1))));
	}

IL_023f:
	{
		uint16_t L_102 = V_11;
		uint16_t L_103 = V_12;
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_020a;
		}
	}

IL_0245:
	{
		uint16_t L_104 = V_11;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_105 = __this->get_m_Info_18();
		NullCheck(L_105);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_106 = L_105->get_address_of_Offset_3();
		uint16_t L_107 = L_106->get_Path_4();
		if ((((int32_t)L_104) >= ((int32_t)L_107)))
		{
			goto IL_026c;
		}
	}
	{
		String_t* L_108 = __this->get_m_String_13();
		uint16_t L_109 = V_11;
		NullCheck(L_108);
		Il2CppChar L_110;
		L_110 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_108, L_109, /*hidden argument*/NULL);
		if ((((int32_t)L_110) == ((int32_t)((int32_t)58))))
		{
			goto IL_026c;
		}
	}
	{
		return (bool)0;
	}

IL_026c:
	{
		uint16_t L_111 = V_13;
		uint16_t L_112 = V_14;
		if ((((int32_t)L_111) >= ((int32_t)L_112)))
		{
			goto IL_02ae;
		}
	}
	{
		String_t* L_113 = V_15;
		uint16_t L_114 = V_13;
		NullCheck(L_113);
		Il2CppChar L_115;
		L_115 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_113, L_114, /*hidden argument*/NULL);
		if ((((int32_t)L_115) == ((int32_t)((int32_t)58))))
		{
			goto IL_02ae;
		}
	}
	{
		return (bool)0;
	}

IL_0281:
	{
		Uri_EnsureHostString_m47897EC94F83DFE1CA16CE71167DDD3CC986C22A(__this, (bool)0, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_116 = V_0;
		NullCheck(L_116);
		Uri_EnsureHostString_m47897EC94F83DFE1CA16CE71167DDD3CC986C22A(L_116, (bool)0, /*hidden argument*/NULL);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_117 = __this->get_m_Info_18();
		NullCheck(L_117);
		String_t* L_118 = L_117->get_Host_0();
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_119 = V_0;
		NullCheck(L_119);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_120 = L_119->get_m_Info_18();
		NullCheck(L_120);
		String_t* L_121 = L_120->get_Host_0();
		NullCheck(L_118);
		bool L_122;
		L_122 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_118, L_121, /*hidden argument*/NULL);
		if (L_122)
		{
			goto IL_02ae;
		}
	}
	{
		return (bool)0;
	}

IL_02ae:
	{
		int32_t L_123;
		L_123 = Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C(__this, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_124 = V_0;
		NullCheck(L_124);
		int32_t L_125;
		L_125 = Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C(L_124, /*hidden argument*/NULL);
		if ((((int32_t)L_123) == ((int32_t)L_125)))
		{
			goto IL_02be;
		}
	}
	{
		return (bool)0;
	}

IL_02be:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_126 = __this->get_m_Info_18();
		V_1 = L_126;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_127 = V_0;
		NullCheck(L_127);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_128 = L_127->get_m_Info_18();
		V_2 = L_128;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_129 = V_1;
		NullCheck(L_129);
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_130 = L_129->get_MoreInfo_5();
		if (L_130)
		{
			goto IL_02df;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_131 = V_1;
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_132 = (MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 *)il2cpp_codegen_object_new(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727_il2cpp_TypeInfo_var);
		MoreInfo__ctor_mF8515B2BCCB5E7DC008164794946ADE7ADBCD2BD(L_132, /*hidden argument*/NULL);
		NullCheck(L_131);
		L_131->set_MoreInfo_5(L_132);
	}

IL_02df:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_133 = V_2;
		NullCheck(L_133);
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_134 = L_133->get_MoreInfo_5();
		if (L_134)
		{
			goto IL_02f2;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_135 = V_2;
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_136 = (MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 *)il2cpp_codegen_object_new(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727_il2cpp_TypeInfo_var);
		MoreInfo__ctor_mF8515B2BCCB5E7DC008164794946ADE7ADBCD2BD(L_136, /*hidden argument*/NULL);
		NullCheck(L_135);
		L_135->set_MoreInfo_5(L_136);
	}

IL_02f2:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_137 = V_1;
		NullCheck(L_137);
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_138 = L_137->get_MoreInfo_5();
		NullCheck(L_138);
		String_t* L_139 = L_138->get_RemoteUrl_2();
		V_3 = L_139;
		String_t* L_140 = V_3;
		if (L_140)
		{
			goto IL_0317;
		}
	}
	{
		String_t* L_141;
		L_141 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(__this, ((int32_t)61), 3, /*hidden argument*/NULL);
		V_3 = L_141;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_142 = V_1;
		NullCheck(L_142);
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_143 = L_142->get_MoreInfo_5();
		String_t* L_144 = V_3;
		NullCheck(L_143);
		L_143->set_RemoteUrl_2(L_144);
	}

IL_0317:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_145 = V_2;
		NullCheck(L_145);
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_146 = L_145->get_MoreInfo_5();
		NullCheck(L_146);
		String_t* L_147 = L_146->get_RemoteUrl_2();
		V_4 = L_147;
		String_t* L_148 = V_4;
		if (L_148)
		{
			goto IL_0340;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_149 = V_0;
		NullCheck(L_149);
		String_t* L_150;
		L_150 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(L_149, ((int32_t)61), 3, /*hidden argument*/NULL);
		V_4 = L_150;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_151 = V_2;
		NullCheck(L_151);
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_152 = L_151->get_MoreInfo_5();
		String_t* L_153 = V_4;
		NullCheck(L_152);
		L_152->set_RemoteUrl_2(L_153);
	}

IL_0340:
	{
		bool L_154;
		L_154 = Uri_get_IsUncOrDosPath_mF197920D1C1DBDE10A3478855D89D36210D8CE94(__this, /*hidden argument*/NULL);
		if (L_154)
		{
			goto IL_03c0;
		}
	}
	{
		String_t* L_155 = V_3;
		NullCheck(L_155);
		int32_t L_156;
		L_156 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_155, /*hidden argument*/NULL);
		String_t* L_157 = V_4;
		NullCheck(L_157);
		int32_t L_158;
		L_158 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_157, /*hidden argument*/NULL);
		if ((((int32_t)L_156) == ((int32_t)L_158)))
		{
			goto IL_0359;
		}
	}
	{
		return (bool)0;
	}

IL_0359:
	{
		String_t* L_159 = V_3;
		V_7 = L_159;
		String_t* L_160 = V_7;
		V_16 = (Il2CppChar*)((uintptr_t)L_160);
		Il2CppChar* L_161 = V_16;
		if (!L_161)
		{
			goto IL_036f;
		}
	}
	{
		Il2CppChar* L_162 = V_16;
		int32_t L_163;
		L_163 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_16 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_162, (int32_t)L_163));
	}

IL_036f:
	{
		String_t* L_164 = V_4;
		V_9 = L_164;
		String_t* L_165 = V_9;
		V_17 = (Il2CppChar*)((uintptr_t)L_165);
		Il2CppChar* L_166 = V_17;
		if (!L_166)
		{
			goto IL_0386;
		}
	}
	{
		Il2CppChar* L_167 = V_17;
		int32_t L_168;
		L_168 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_17 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_167, (int32_t)L_168));
	}

IL_0386:
	{
		Il2CppChar* L_169 = V_16;
		String_t* L_170 = V_3;
		NullCheck(L_170);
		int32_t L_171;
		L_171 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_170, /*hidden argument*/NULL);
		V_18 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_169, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_171), (int32_t)2))));
		Il2CppChar* L_172 = V_17;
		String_t* L_173 = V_3;
		NullCheck(L_173);
		int32_t L_174;
		L_174 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_173, /*hidden argument*/NULL);
		V_19 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_172, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_174), (int32_t)2))));
		goto IL_03b8;
	}

IL_03a4:
	{
		Il2CppChar* L_175 = V_18;
		Il2CppChar* L_176 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_175, (int32_t)2));
		V_18 = (Il2CppChar*)L_176;
		int32_t L_177 = *((uint16_t*)L_176);
		Il2CppChar* L_178 = V_19;
		Il2CppChar* L_179 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_178, (int32_t)2));
		V_19 = (Il2CppChar*)L_179;
		int32_t L_180 = *((uint16_t*)L_179);
		if ((((int32_t)L_177) == ((int32_t)L_180)))
		{
			goto IL_03b8;
		}
	}
	{
		return (bool)0;
	}

IL_03b8:
	{
		Il2CppChar* L_181 = V_18;
		Il2CppChar* L_182 = V_16;
		if ((!(((uintptr_t)L_181) == ((uintptr_t)L_182))))
		{
			goto IL_03a4;
		}
	}
	{
		return (bool)1;
	}

IL_03c0:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_183 = V_1;
		NullCheck(L_183);
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_184 = L_183->get_MoreInfo_5();
		NullCheck(L_184);
		String_t* L_185 = L_184->get_RemoteUrl_2();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_186 = V_2;
		NullCheck(L_186);
		MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * L_187 = L_186->get_MoreInfo_5();
		NullCheck(L_187);
		String_t* L_188 = L_187->get_RemoteUrl_2();
		bool L_189;
		L_189 = Uri_get_IsUncOrDosPath_mF197920D1C1DBDE10A3478855D89D36210D8CE94(__this, /*hidden argument*/NULL);
		G_B76_0 = L_188;
		G_B76_1 = L_185;
		if (L_189)
		{
			G_B77_0 = L_188;
			G_B77_1 = L_185;
			goto IL_03e1;
		}
	}
	{
		G_B78_0 = 4;
		G_B78_1 = G_B76_0;
		G_B78_2 = G_B76_1;
		goto IL_03e2;
	}

IL_03e1:
	{
		G_B78_0 = 5;
		G_B78_1 = G_B77_0;
		G_B78_2 = G_B77_1;
	}

IL_03e2:
	{
		int32_t L_190;
		L_190 = String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD(G_B78_2, G_B78_1, G_B78_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_190) == ((int32_t)0))? 1 : 0);
	}
}
// System.ParsingError System.Uri::ParseScheme(System.String,System.Uri/Flags&,System.UriParser&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_ParseScheme_m65694E4DA17BF0A8447ACE12EF444FE4D1E1AB16 (String_t* ___uriString0, uint64_t* ___flags1, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** ___syntax2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint16_t V_4 = 0;
	{
		String_t* L_0 = ___uriString0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		return (int32_t)(4);
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)65520))))
		{
			goto IL_0016;
		}
	}
	{
		return (int32_t)(6);
	}

IL_0016:
	{
		String_t* L_4 = ___uriString0;
		V_2 = L_4;
		String_t* L_5 = V_2;
		V_1 = (Il2CppChar*)((uintptr_t)L_5);
		Il2CppChar* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		Il2CppChar* L_7 = V_1;
		int32_t L_8;
		L_8 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8));
	}

IL_0026:
	{
		V_3 = 0;
		Il2CppChar* L_9 = V_1;
		int32_t L_10 = V_0;
		uint64_t* L_11 = ___flags1;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_12 = ___syntax2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		uint16_t L_13;
		L_13 = Uri_ParseSchemeCheckImplicitFile_m5F6B3C184CF455ED80D78937F208EB8C10265395((Il2CppChar*)(Il2CppChar*)L_9, (uint16_t)((int32_t)((uint16_t)L_10)), (int32_t*)(&V_3), (uint64_t*)L_11, (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A **)L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		int32_t L_14 = V_3;
		if (!L_14)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_15 = V_3;
		return L_15;
	}

IL_003b:
	{
		uint64_t* L_16 = ___flags1;
		uint64_t* L_17 = ___flags1;
		int64_t L_18 = *((int64_t*)L_17);
		uint16_t L_19 = V_4;
		*((int64_t*)L_16) = (int64_t)((int64_t)((int64_t)L_18|(int64_t)((int64_t)((uint64_t)L_19))));
		V_2 = (String_t*)NULL;
		return (int32_t)(0);
	}
}
// System.UriFormatException System.Uri::ParseMinimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * Uri_ParseMinimal_m47FF7ACAEB543DE87332F9DEA79F92ADC575107F (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Uri_PrivateParseMinimal_m154A67FFA2FA8E2D9215163B56DF1BB88576A369(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)NULL;
	}

IL_000c:
	{
		uint64_t L_2 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_2|(int64_t)((int64_t)((int64_t)((int32_t)67108864))))));
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_4;
		L_4 = Uri_GetException_m6A158C16E69136DF56BCF19CC4C7DCCC2601CF84(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.ParsingError System.Uri::PrivateParseMinimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_PrivateParseMinimal_m154A67FFA2FA8E2D9215163B56DF1BB88576A369 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	String_t* V_2 = NULL;
	Il2CppChar* V_3 = NULL;
	String_t* V_4 = NULL;
	Il2CppChar V_5 = 0x0;
	uint16_t V_6 = 0;
	Il2CppChar V_7 = 0x0;
	Il2CppChar V_8 = 0x0;
	int32_t V_9 = 0;
	String_t* G_B5_0 = NULL;
	uint64_t G_B79_0 = 0;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B79_1 = NULL;
	uint64_t G_B78_0 = 0;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B78_1 = NULL;
	int64_t G_B80_0 = 0;
	uint64_t G_B80_1 = 0;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B80_2 = NULL;
	{
		uint64_t L_0 = __this->get_m_Flags_17();
		V_0 = (uint16_t)((int32_t)((uint16_t)((int64_t)((int64_t)L_0&(int64_t)((int64_t)((int64_t)((int32_t)65535)))))));
		String_t* L_1 = __this->get_m_String_13();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		V_1 = (uint16_t)((int32_t)((uint16_t)L_2));
		V_2 = (String_t*)NULL;
		uint64_t L_3 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_3&(int64_t)((int64_t)((int64_t)((int32_t)-16842752))))));
		bool L_4 = __this->get_m_iriParsing_19();
		if (!L_4)
		{
			goto IL_005d;
		}
	}
	{
		uint64_t L_5 = __this->get_m_Flags_17();
		if (!((int64_t)((int64_t)L_5&(int64_t)((int64_t)8589934592LL))))
		{
			goto IL_005d;
		}
	}
	{
		uint64_t L_6 = __this->get_m_Flags_17();
		if (!((int64_t)((int64_t)L_6&(int64_t)((int64_t)17179869184LL))))
		{
			goto IL_0065;
		}
	}

IL_005d:
	{
		String_t* L_7 = __this->get_m_String_13();
		G_B5_0 = L_7;
		goto IL_006b;
	}

IL_0065:
	{
		String_t* L_8 = __this->get_m_originalUnicodeString_14();
		G_B5_0 = L_8;
	}

IL_006b:
	{
		V_4 = G_B5_0;
		String_t* L_9 = V_4;
		V_3 = (Il2CppChar*)((uintptr_t)L_9);
		Il2CppChar* L_10 = V_3;
		if (!L_10)
		{
			goto IL_007c;
		}
	}
	{
		Il2CppChar* L_11 = V_3;
		int32_t L_12;
		L_12 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_3 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_11, (int32_t)L_12));
	}

IL_007c:
	{
		uint16_t L_13 = V_1;
		uint16_t L_14 = V_0;
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_00b1;
		}
	}
	{
		Il2CppChar* L_15 = V_3;
		uint16_t L_16 = V_1;
		int32_t L_17 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_15, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1))), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Uri_IsLWS_m4A41E0157130C65E6768C4F5CFEE2219DAE773B4(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00b1;
		}
	}
	{
		uint16_t L_19 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1))));
	}

IL_0095:
	{
		uint16_t L_20 = V_1;
		uint16_t L_21 = V_0;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_00ac;
		}
	}
	{
		Il2CppChar* L_22 = V_3;
		uint16_t L_23 = V_1;
		int32_t L_24 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1))));
		V_1 = (uint16_t)L_24;
		int32_t L_25 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_24), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Uri_IsLWS_m4A41E0157130C65E6768C4F5CFEE2219DAE773B4(L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0095;
		}
	}

IL_00ac:
	{
		uint16_t L_27 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1))));
	}

IL_00b1:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_28 = __this->get_m_Syntax_15();
		NullCheck(L_28);
		bool L_29;
		L_29 = UriParser_IsAllSet_m356BD044D8A53560B6A7AA9B81A20A364E015C18(L_28, ((int32_t)1048704), /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0273;
		}
	}
	{
		bool L_30;
		L_30 = Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969(__this, ((int64_t)((int64_t)((int32_t)536870912))), /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0273;
		}
	}
	{
		uint16_t L_31 = V_0;
		uint16_t L_32 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1))) >= ((int32_t)L_32)))
		{
			goto IL_0273;
		}
	}
	{
		uint16_t L_33 = V_0;
		V_6 = L_33;
		goto IL_0101;
	}

IL_00e5:
	{
		Il2CppChar* L_34 = V_3;
		uint16_t L_35 = V_6;
		int32_t L_36 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_34, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_35), (int32_t)2)))));
		int32_t L_37 = L_36;
		V_5 = L_37;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)92))))
		{
			goto IL_00fa;
		}
	}
	{
		Il2CppChar L_38 = V_5;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0106;
		}
	}

IL_00fa:
	{
		uint16_t L_39 = V_6;
		V_6 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1))));
	}

IL_0101:
	{
		uint16_t L_40 = V_6;
		uint16_t L_41 = V_1;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_00e5;
		}
	}

IL_0106:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_42 = __this->get_m_Syntax_15();
		NullCheck(L_42);
		bool L_43;
		L_43 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_42, ((int32_t)8192), /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_0122;
		}
	}
	{
		uint16_t L_44 = V_6;
		uint16_t L_45 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)L_45))) > ((int32_t)3)))
		{
			goto IL_0273;
		}
	}

IL_0122:
	{
		uint16_t L_46 = V_6;
		uint16_t L_47 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)L_47))) < ((int32_t)2)))
		{
			goto IL_013c;
		}
	}
	{
		uint64_t L_48 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_48|(int64_t)((int64_t)((int64_t)((int32_t)1048576))))));
	}

IL_013c:
	{
		uint16_t L_49 = V_6;
		uint16_t L_50 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1))) >= ((int32_t)L_50)))
		{
			goto IL_01f7;
		}
	}
	{
		Il2CppChar* L_51 = V_3;
		uint16_t L_52 = V_6;
		int32_t L_53 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_51, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1))), (int32_t)2)))));
		int32_t L_54 = L_53;
		V_5 = L_54;
		if ((((int32_t)L_54) == ((int32_t)((int32_t)58))))
		{
			goto IL_0160;
		}
	}
	{
		Il2CppChar L_55 = V_5;
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)124)))))
		{
			goto IL_01f7;
		}
	}

IL_0160:
	{
		Il2CppChar* L_56 = V_3;
		uint16_t L_57 = V_6;
		int32_t L_58 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_56, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_57), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_59;
		L_59 = Uri_IsAsciiLetter_mBEE6BD837C66CBB199E8A9FAB14A85744368F0FC(L_58, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_01f7;
		}
	}
	{
		uint16_t L_60 = V_6;
		uint16_t L_61 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)2))) >= ((int32_t)L_61)))
		{
			goto IL_0190;
		}
	}
	{
		Il2CppChar* L_62 = V_3;
		uint16_t L_63 = V_6;
		int32_t L_64 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_62, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)2))), (int32_t)2)))));
		int32_t L_65 = L_64;
		V_5 = L_65;
		if ((((int32_t)L_65) == ((int32_t)((int32_t)92))))
		{
			goto IL_01a7;
		}
	}
	{
		Il2CppChar L_66 = V_5;
		if ((((int32_t)L_66) == ((int32_t)((int32_t)47))))
		{
			goto IL_01a7;
		}
	}

IL_0190:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_67 = __this->get_m_Syntax_15();
		NullCheck(L_67);
		bool L_68;
		L_68 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_67, ((int32_t)8192), /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_0273;
		}
	}
	{
		return (int32_t)(7);
	}

IL_01a7:
	{
		uint64_t L_69 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_69|(int64_t)((int64_t)((int64_t)((int32_t)134217728))))));
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_70 = __this->get_m_Syntax_15();
		NullCheck(L_70);
		bool L_71;
		L_71 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_70, 1, /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_01db;
		}
	}
	{
		uint64_t L_72 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_72|(int64_t)((int64_t)((int64_t)((int32_t)1048576))))));
	}

IL_01db:
	{
		uint16_t L_73 = V_6;
		uint16_t L_74 = V_0;
		if ((((int32_t)L_73) == ((int32_t)L_74)))
		{
			goto IL_01f2;
		}
	}
	{
		uint16_t L_75 = V_6;
		uint16_t L_76 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)L_76))) == ((int32_t)2)))
		{
			goto IL_01f2;
		}
	}
	{
		uint16_t L_77 = V_6;
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)1))));
		goto IL_0273;
	}

IL_01f2:
	{
		uint16_t L_78 = V_6;
		V_0 = L_78;
		goto IL_0273;
	}

IL_01f7:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_79 = __this->get_m_Syntax_15();
		NullCheck(L_79);
		bool L_80;
		L_80 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_79, ((int32_t)8192), /*hidden argument*/NULL);
		if (!L_80)
		{
			goto IL_0273;
		}
	}
	{
		uint16_t L_81 = V_6;
		uint16_t L_82 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)L_82))) < ((int32_t)2)))
		{
			goto IL_0273;
		}
	}
	{
		uint16_t L_83 = V_6;
		uint16_t L_84 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)L_84))) == ((int32_t)3)))
		{
			goto IL_0273;
		}
	}
	{
		uint16_t L_85 = V_6;
		uint16_t L_86 = V_1;
		if ((((int32_t)L_85) >= ((int32_t)L_86)))
		{
			goto IL_0273;
		}
	}
	{
		Il2CppChar* L_87 = V_3;
		uint16_t L_88 = V_6;
		int32_t L_89 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_87, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_88), (int32_t)2)))));
		if ((((int32_t)L_89) == ((int32_t)((int32_t)63))))
		{
			goto IL_0273;
		}
	}
	{
		Il2CppChar* L_90 = V_3;
		uint16_t L_91 = V_6;
		int32_t L_92 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_90, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_91), (int32_t)2)))));
		if ((((int32_t)L_92) == ((int32_t)((int32_t)35))))
		{
			goto IL_0273;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_93 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_IsWindowsFileSystem_25();
		if (L_93)
		{
			goto IL_025d;
		}
	}
	{
		uint16_t L_94 = V_6;
		uint16_t L_95 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_94, (int32_t)L_95))) <= ((int32_t)3)))
		{
			goto IL_0273;
		}
	}
	{
		uint64_t L_96 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_96|(int64_t)((int64_t)17592186044416LL))));
		uint16_t L_97 = V_6;
		V_0 = L_97;
		goto IL_0273;
	}

IL_025d:
	{
		uint64_t L_98 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_98|(int64_t)((int64_t)((int64_t)((int32_t)268435456))))));
		uint16_t L_99 = V_6;
		V_0 = L_99;
	}

IL_0273:
	{
		uint64_t L_100 = __this->get_m_Flags_17();
		if (((int64_t)((int64_t)L_100&(int64_t)((int64_t)((int64_t)((int32_t)402653184))))))
		{
			goto IL_03c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_101 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_IsWindowsFileSystem_25();
		if (L_101)
		{
			goto IL_02a1;
		}
	}
	{
		uint64_t L_102 = __this->get_m_Flags_17();
		if (((int64_t)((int64_t)L_102&(int64_t)((int64_t)17592722915328LL))))
		{
			goto IL_03c3;
		}
	}

IL_02a1:
	{
		uint16_t L_103 = V_0;
		uint16_t L_104 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)2))) > ((int32_t)L_104)))
		{
			goto IL_0389;
		}
	}
	{
		Il2CppChar* L_105 = V_3;
		uint16_t L_106 = V_0;
		int32_t L_107 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_105, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_106), (int32_t)2)))));
		V_7 = L_107;
		Il2CppChar* L_108 = V_3;
		uint16_t L_109 = V_0;
		int32_t L_110 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_108, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1))), (int32_t)2)))));
		V_8 = L_110;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_111 = __this->get_m_Syntax_15();
		NullCheck(L_111);
		bool L_112;
		L_112 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_111, 1, /*hidden argument*/NULL);
		if (!L_112)
		{
			goto IL_031d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_113 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_IsWindowsFileSystem_25();
		if (!L_113)
		{
			goto IL_02eb;
		}
	}
	{
		Il2CppChar L_114 = V_7;
		if ((((int32_t)L_114) == ((int32_t)((int32_t)47))))
		{
			goto IL_02df;
		}
	}
	{
		Il2CppChar L_115 = V_7;
		if ((!(((uint32_t)L_115) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_02eb;
		}
	}

IL_02df:
	{
		Il2CppChar L_116 = V_8;
		if ((((int32_t)L_116) == ((int32_t)((int32_t)47))))
		{
			goto IL_02fe;
		}
	}
	{
		Il2CppChar L_117 = V_8;
		if ((((int32_t)L_117) == ((int32_t)((int32_t)92))))
		{
			goto IL_02fe;
		}
	}

IL_02eb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_118 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_IsWindowsFileSystem_25();
		if (L_118)
		{
			goto IL_031b;
		}
	}
	{
		Il2CppChar L_119 = V_7;
		if ((!(((uint32_t)L_119) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_031b;
		}
	}
	{
		Il2CppChar L_120 = V_8;
		if ((!(((uint32_t)L_120) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_031b;
		}
	}

IL_02fe:
	{
		uint64_t L_121 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_121|(int64_t)((int64_t)((int64_t)((int32_t)1048576))))));
		uint16_t L_122 = V_0;
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)2))));
		goto IL_03c3;
	}

IL_031b:
	{
		return (int32_t)(3);
	}

IL_031d:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_123 = __this->get_m_Syntax_15();
		NullCheck(L_123);
		bool L_124;
		L_124 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_123, 2, /*hidden argument*/NULL);
		if (!L_124)
		{
			goto IL_035f;
		}
	}
	{
		bool L_125;
		L_125 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)1048576))), /*hidden argument*/NULL);
		if (L_125)
		{
			goto IL_0345;
		}
	}
	{
		Il2CppChar L_126 = V_7;
		if ((!(((uint32_t)L_126) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_035f;
		}
	}
	{
		Il2CppChar L_127 = V_8;
		if ((!(((uint32_t)L_127) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_035f;
		}
	}

IL_0345:
	{
		uint64_t L_128 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_128|(int64_t)((int64_t)((int64_t)((int32_t)1048576))))));
		uint16_t L_129 = V_0;
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)2))));
		goto IL_03c3;
	}

IL_035f:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_130 = __this->get_m_Syntax_15();
		NullCheck(L_130);
		bool L_131;
		L_131 = UriParser_NotAny_m6A42FAC623F0EBDE441782DAC3E3B2ED34756D91(L_130, ((int32_t)16384), /*hidden argument*/NULL);
		if (!L_131)
		{
			goto IL_03c3;
		}
	}
	{
		uint64_t L_132 = __this->get_m_Flags_17();
		uint16_t L_133 = V_0;
		__this->set_m_Flags_17(((int64_t)((int64_t)L_132|(int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_133))|(int64_t)((int64_t)((int64_t)((int32_t)458752))))))));
		return (int32_t)(0);
	}

IL_0389:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_134 = __this->get_m_Syntax_15();
		NullCheck(L_134);
		bool L_135;
		L_135 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_134, 1, /*hidden argument*/NULL);
		if (!L_135)
		{
			goto IL_0399;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0399:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_136 = __this->get_m_Syntax_15();
		NullCheck(L_136);
		bool L_137;
		L_137 = UriParser_NotAny_m6A42FAC623F0EBDE441782DAC3E3B2ED34756D91(L_136, ((int32_t)16384), /*hidden argument*/NULL);
		if (!L_137)
		{
			goto IL_03c3;
		}
	}
	{
		uint64_t L_138 = __this->get_m_Flags_17();
		uint16_t L_139 = V_0;
		__this->set_m_Flags_17(((int64_t)((int64_t)L_138|(int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_139))|(int64_t)((int64_t)((int64_t)((int32_t)458752))))))));
		return (int32_t)(0);
	}

IL_03c3:
	{
		bool L_140;
		L_140 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)134217728))), /*hidden argument*/NULL);
		if (!L_140)
		{
			goto IL_040c;
		}
	}
	{
		uint64_t L_141 = __this->get_m_Flags_17();
		uint64_t L_142 = __this->get_m_Flags_17();
		G_B78_0 = L_141;
		G_B78_1 = __this;
		if (((int64_t)((int64_t)L_142&(int64_t)((int64_t)((int64_t)((int32_t)1048576))))))
		{
			G_B79_0 = L_141;
			G_B79_1 = __this;
			goto IL_03ef;
		}
	}
	{
		G_B80_0 = ((int64_t)((int64_t)((int32_t)458752)));
		G_B80_1 = G_B78_0;
		G_B80_2 = G_B78_1;
		goto IL_03f5;
	}

IL_03ef:
	{
		G_B80_0 = ((int64_t)((int64_t)((int32_t)327680)));
		G_B80_1 = G_B79_0;
		G_B80_2 = G_B79_1;
	}

IL_03f5:
	{
		NullCheck(G_B80_2);
		G_B80_2->set_m_Flags_17(((int64_t)((int64_t)G_B80_1|(int64_t)G_B80_0)));
		uint64_t L_143 = __this->get_m_Flags_17();
		uint16_t L_144 = V_0;
		__this->set_m_Flags_17(((int64_t)((int64_t)L_143|(int64_t)((int64_t)((uint64_t)L_144)))));
		return (int32_t)(0);
	}

IL_040c:
	{
		V_9 = 0;
		Il2CppChar* L_145 = V_3;
		uint16_t L_146 = V_0;
		uint16_t L_147 = V_1;
		uint64_t* L_148 = __this->get_address_of_m_Flags_17();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_149 = __this->get_m_Syntax_15();
		uint16_t L_150;
		L_150 = Uri_CheckAuthorityHelper_mC5010AEC19EED1968EDE7CB52C92AC0AC0869503(__this, (Il2CppChar*)(Il2CppChar*)L_145, L_146, L_147, (int32_t*)(&V_9), (uint64_t*)L_148, L_149, (String_t**)(&V_2), /*hidden argument*/NULL);
		V_0 = L_150;
		int32_t L_151 = V_9;
		if (!L_151)
		{
			goto IL_0430;
		}
	}
	{
		int32_t L_152 = V_9;
		return L_152;
	}

IL_0430:
	{
		uint16_t L_153 = V_0;
		uint16_t L_154 = V_1;
		if ((((int32_t)L_153) >= ((int32_t)L_154)))
		{
			goto IL_0462;
		}
	}
	{
		Il2CppChar* L_155 = V_3;
		uint16_t L_156 = V_0;
		int32_t L_157 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_155, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_156), (int32_t)2)))));
		if ((!(((uint32_t)L_157) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0462;
		}
	}
	{
		bool L_158;
		L_158 = Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969(__this, ((int64_t)((int64_t)((int32_t)536870912))), /*hidden argument*/NULL);
		if (!L_158)
		{
			goto IL_0462;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_159 = __this->get_m_Syntax_15();
		NullCheck(L_159);
		bool L_160;
		L_160 = UriParser_NotAny_m6A42FAC623F0EBDE441782DAC3E3B2ED34756D91(L_159, ((int32_t)1048576), /*hidden argument*/NULL);
		if (!L_160)
		{
			goto IL_0462;
		}
	}
	{
		return (int32_t)(((int32_t)11));
	}

IL_0462:
	{
		uint64_t L_161 = __this->get_m_Flags_17();
		uint16_t L_162 = V_0;
		__this->set_m_Flags_17(((int64_t)((int64_t)L_161|(int64_t)((int64_t)((uint64_t)L_162)))));
		V_4 = (String_t*)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		int32_t L_163 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_IdnScope_22();
		il2cpp_codegen_memory_barrier();
		if (L_163)
		{
			goto IL_0485;
		}
	}
	{
		bool L_164 = __this->get_m_iriParsing_19();
		if (!L_164)
		{
			goto IL_048d;
		}
	}

IL_0485:
	{
		String_t* L_165 = V_2;
		uint16_t L_166 = V_0;
		Uri_PrivateParseMinimalIri_m1A23B409BC4FE17A66599BFE0E0CD62C06D45E2B(__this, L_165, L_166, /*hidden argument*/NULL);
	}

IL_048d:
	{
		return (int32_t)(0);
	}
}
// System.Void System.Uri::PrivateParseMinimalIri(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_PrivateParseMinimalIri_m1A23B409BC4FE17A66599BFE0E0CD62C06D45E2B (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___newHost0, uint16_t ___idx1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___newHost0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___newHost0;
		__this->set_m_String_13(L_1);
	}

IL_000a:
	{
		bool L_2 = __this->get_m_iriParsing_19();
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		bool L_3;
		L_3 = Uri_get_AllowIdn_m4031E81D7D0E44FC81C6951D78B2C836EC8270D7(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		uint64_t L_4 = __this->get_m_Flags_17();
		if (((int64_t)((int64_t)L_4&(int64_t)((int64_t)4294967296LL))))
		{
			goto IL_0075;
		}
	}
	{
		uint64_t L_5 = __this->get_m_Flags_17();
		if (((int64_t)((int64_t)L_5&(int64_t)((int64_t)68719476736LL))))
		{
			goto IL_0075;
		}
	}

IL_003e:
	{
		bool L_6 = __this->get_m_iriParsing_19();
		if (!L_6)
		{
			goto IL_00cb;
		}
	}
	{
		uint64_t L_7 = __this->get_m_Flags_17();
		if (((int64_t)((int64_t)L_7&(int64_t)((int64_t)8589934592LL))))
		{
			goto IL_00cb;
		}
	}
	{
		bool L_8;
		L_8 = Uri_get_AllowIdn_m4031E81D7D0E44FC81C6951D78B2C836EC8270D7(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00cb;
		}
	}
	{
		uint64_t L_9 = __this->get_m_Flags_17();
		if (!((int64_t)((int64_t)L_9&(int64_t)((int64_t)4294967296LL))))
		{
			goto IL_00cb;
		}
	}

IL_0075:
	{
		uint64_t L_10 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_10&(int64_t)((int64_t)((int64_t)((int32_t)-65536))))));
		uint64_t L_11 = __this->get_m_Flags_17();
		String_t* L_12 = __this->get_m_String_13();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_12, /*hidden argument*/NULL);
		__this->set_m_Flags_17(((int64_t)((int64_t)L_11|(int64_t)((int64_t)((int64_t)L_13)))));
		String_t* L_14 = __this->get_m_String_13();
		String_t* L_15 = __this->get_m_originalUnicodeString_14();
		uint16_t L_16 = ___idx1;
		String_t* L_17 = __this->get_m_originalUnicodeString_14();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_17, /*hidden argument*/NULL);
		uint16_t L_19 = ___idx1;
		NullCheck(L_15);
		String_t* L_20;
		L_20 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_15, L_16, ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19)), /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_14, L_20, /*hidden argument*/NULL);
		__this->set_m_String_13(L_21);
	}

IL_00cb:
	{
		bool L_22 = __this->get_m_iriParsing_19();
		if (!L_22)
		{
			goto IL_00fb;
		}
	}
	{
		uint64_t L_23 = __this->get_m_Flags_17();
		if (!((int64_t)((int64_t)L_23&(int64_t)((int64_t)8589934592LL))))
		{
			goto IL_00fb;
		}
	}
	{
		uint64_t L_24 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_24|(int64_t)((int64_t)274877906944LL))));
	}

IL_00fb:
	{
		return;
	}
}
// System.Void System.Uri::CreateUriInfo(System.Uri/Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_CreateUriInfo_mD8864BD45B6397D4C3AED68BA2D3EAEB520DB9E6 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, uint64_t ___cF0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * V_0 = NULL;
	uint16_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Il2CppChar* V_5 = NULL;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint16_t V_8 = 0;
	String_t* V_9 = NULL;
	bool V_10 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	String_t* G_B48_0 = NULL;
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_0 = (UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 *)il2cpp_codegen_object_new(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45_il2cpp_TypeInfo_var);
		UriInfo__ctor_m990C9CA368096AFE12B92F3605FAA70EC0C69BB8(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_1 = V_0;
		NullCheck(L_1);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_2 = L_1->get_address_of_Offset_3();
		String_t* L_3 = __this->get_m_String_13();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		L_2->set_End_7((uint16_t)((int32_t)((uint16_t)L_4)));
		bool L_5;
		L_5 = Uri_get_UserDrivenParsing_mF09087D4DE9A0823EBF1FC0C14101335D01393F2(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0423;
		}
	}
	{
		V_2 = (bool)0;
		uint64_t L_6 = ___cF0;
		if (!((int64_t)((int64_t)L_6&(int64_t)((int64_t)((int64_t)((int32_t)536870912))))))
		{
			goto IL_00c3;
		}
	}
	{
		V_1 = (uint16_t)0;
		goto IL_0051;
	}

IL_003b:
	{
		uint16_t L_7 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1))));
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_8 = V_0;
		NullCheck(L_8);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_9 = L_8->get_address_of_Offset_3();
		uint16_t* L_10 = L_9->get_address_of_Scheme_0();
		uint16_t* L_11 = L_10;
		int32_t L_12 = *((uint16_t*)L_11);
		*((int16_t*)L_11) = (int16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1))));
	}

IL_0051:
	{
		uint16_t L_13 = V_1;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_14 = V_0;
		NullCheck(L_14);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_15 = L_14->get_address_of_Offset_3();
		uint16_t L_16 = L_15->get_End_7();
		if ((((int32_t)L_13) >= ((int32_t)L_16)))
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_17 = __this->get_m_String_13();
		uint16_t L_18 = V_1;
		NullCheck(L_17);
		Il2CppChar L_19;
		L_19 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Uri_IsLWS_m4A41E0157130C65E6768C4F5CFEE2219DAE773B4(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_003b;
		}
	}

IL_0072:
	{
		uint64_t L_21 = ___cF0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Uri_StaticInFact_m6B17A3B95B81DABD390B643ABD9ADAA316D5EF98(L_21, ((int64_t)((int64_t)((int32_t)268435456))), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0172;
		}
	}
	{
		uint16_t L_23 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)2))));
		goto IL_008f;
	}

IL_008a:
	{
		uint16_t L_24 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1))));
	}

IL_008f:
	{
		uint16_t L_25 = V_1;
		uint64_t L_26 = ___cF0;
		if ((((int32_t)L_25) >= ((int32_t)((int32_t)((uint16_t)((int64_t)((int64_t)L_26&(int64_t)((int64_t)((int64_t)((int32_t)65535))))))))))
		{
			goto IL_0172;
		}
	}
	{
		String_t* L_27 = __this->get_m_String_13();
		uint16_t L_28 = V_1;
		NullCheck(L_27);
		Il2CppChar L_29;
		L_29 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_27, L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_29) == ((int32_t)((int32_t)47))))
		{
			goto IL_008a;
		}
	}
	{
		String_t* L_30 = __this->get_m_String_13();
		uint16_t L_31 = V_1;
		NullCheck(L_30);
		Il2CppChar L_32;
		L_32 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_30, L_31, /*hidden argument*/NULL);
		if ((((int32_t)L_32) == ((int32_t)((int32_t)92))))
		{
			goto IL_008a;
		}
	}
	{
		goto IL_0172;
	}

IL_00c3:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_33 = __this->get_m_Syntax_15();
		NullCheck(L_33);
		String_t* L_34;
		L_34 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		int32_t L_35;
		L_35 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_34, /*hidden argument*/NULL);
		V_1 = (uint16_t)((int32_t)((uint16_t)L_35));
		goto IL_00e8;
	}

IL_00d7:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_36 = V_0;
		NullCheck(L_36);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_37 = L_36->get_address_of_Offset_3();
		uint16_t* L_38 = L_37->get_address_of_Scheme_0();
		uint16_t* L_39 = L_38;
		int32_t L_40 = *((uint16_t*)L_39);
		*((int16_t*)L_39) = (int16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1))));
	}

IL_00e8:
	{
		String_t* L_41 = __this->get_m_String_13();
		uint16_t L_42 = V_1;
		uint16_t L_43 = L_42;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1))));
		NullCheck(L_41);
		Il2CppChar L_44;
		L_44 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_41, L_43, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_00d7;
		}
	}
	{
		uint64_t L_45 = ___cF0;
		if (!((int64_t)((int64_t)L_45&(int64_t)((int64_t)((int64_t)((int32_t)1048576))))))
		{
			goto IL_0172;
		}
	}
	{
		String_t* L_46 = __this->get_m_String_13();
		uint16_t L_47 = V_1;
		NullCheck(L_46);
		Il2CppChar L_48;
		L_48 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_46, L_47, /*hidden argument*/NULL);
		if ((((int32_t)L_48) == ((int32_t)((int32_t)92))))
		{
			goto IL_0129;
		}
	}
	{
		String_t* L_49 = __this->get_m_String_13();
		uint16_t L_50 = V_1;
		NullCheck(L_49);
		Il2CppChar L_51;
		L_51 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_49, ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_012b;
		}
	}

IL_0129:
	{
		V_2 = (bool)1;
	}

IL_012b:
	{
		uint16_t L_52 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)2))));
		uint64_t L_53 = ___cF0;
		if (!((int64_t)((int64_t)L_53&(int64_t)((int64_t)17592588697600LL))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0146;
	}

IL_013f:
	{
		V_2 = (bool)1;
		uint16_t L_54 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1))));
	}

IL_0146:
	{
		uint16_t L_55 = V_1;
		uint64_t L_56 = ___cF0;
		if ((((int32_t)L_55) >= ((int32_t)((int32_t)((uint16_t)((int64_t)((int64_t)L_56&(int64_t)((int64_t)((int64_t)((int32_t)65535))))))))))
		{
			goto IL_0172;
		}
	}
	{
		String_t* L_57 = __this->get_m_String_13();
		uint16_t L_58 = V_1;
		NullCheck(L_57);
		Il2CppChar L_59;
		L_59 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_57, L_58, /*hidden argument*/NULL);
		if ((((int32_t)L_59) == ((int32_t)((int32_t)47))))
		{
			goto IL_013f;
		}
	}
	{
		String_t* L_60 = __this->get_m_String_13();
		uint16_t L_61 = V_1;
		NullCheck(L_60);
		Il2CppChar L_62;
		L_62 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_60, L_61, /*hidden argument*/NULL);
		if ((((int32_t)L_62) == ((int32_t)((int32_t)92))))
		{
			goto IL_013f;
		}
	}

IL_0172:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_63 = __this->get_m_Syntax_15();
		NullCheck(L_63);
		int32_t L_64;
		L_64 = UriParser_get_DefaultPort_m7ECA5BE839D36C7FF854FEA0795D8DE701487D33_inline(L_63, /*hidden argument*/NULL);
		if ((((int32_t)L_64) == ((int32_t)(-1))))
		{
			goto IL_0197;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_65 = V_0;
		NullCheck(L_65);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_66 = L_65->get_address_of_Offset_3();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_67 = __this->get_m_Syntax_15();
		NullCheck(L_67);
		int32_t L_68;
		L_68 = UriParser_get_DefaultPort_m7ECA5BE839D36C7FF854FEA0795D8DE701487D33_inline(L_67, /*hidden argument*/NULL);
		L_66->set_PortValue_3((uint16_t)((int32_t)((uint16_t)L_68)));
	}

IL_0197:
	{
		uint64_t L_69 = ___cF0;
		if ((((int64_t)((int64_t)((int64_t)L_69&(int64_t)((int64_t)((int64_t)((int32_t)458752)))))) == ((int64_t)((int64_t)((int64_t)((int32_t)458752))))))
		{
			goto IL_01b5;
		}
	}
	{
		uint64_t L_70 = ___cF0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_71;
		L_71 = Uri_StaticInFact_m6B17A3B95B81DABD390B643ABD9ADAA316D5EF98(L_70, ((int64_t)((int64_t)((int32_t)134217728))), /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_0210;
		}
	}

IL_01b5:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_72 = V_0;
		NullCheck(L_72);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_73 = L_72->get_address_of_Offset_3();
		uint64_t L_74 = ___cF0;
		L_73->set_User_1((uint16_t)((int32_t)((uint16_t)((int64_t)((int64_t)L_74&(int64_t)((int64_t)((int64_t)((int32_t)65535))))))));
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_75 = V_0;
		NullCheck(L_75);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_76 = L_75->get_address_of_Offset_3();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_77 = V_0;
		NullCheck(L_77);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_78 = L_77->get_address_of_Offset_3();
		uint16_t L_79 = L_78->get_User_1();
		L_76->set_Host_2(L_79);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_80 = V_0;
		NullCheck(L_80);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_81 = L_80->get_address_of_Offset_3();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_82 = V_0;
		NullCheck(L_82);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_83 = L_82->get_address_of_Offset_3();
		uint16_t L_84 = L_83->get_User_1();
		L_81->set_Path_4(L_84);
		uint64_t L_85 = ___cF0;
		___cF0 = ((int64_t)((int64_t)L_85&(int64_t)((int64_t)((int64_t)((int32_t)-65536)))));
		bool L_86 = V_2;
		if (!L_86)
		{
			goto IL_0423;
		}
	}
	{
		uint64_t L_87 = ___cF0;
		___cF0 = ((int64_t)((int64_t)L_87|(int64_t)((int64_t)((int64_t)1))));
		goto IL_0423;
	}

IL_0210:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_88 = V_0;
		NullCheck(L_88);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_89 = L_88->get_address_of_Offset_3();
		uint16_t L_90 = V_1;
		L_89->set_User_1(L_90);
		uint64_t L_91;
		L_91 = Uri_get_HostType_m6C142BC37D44CF1F53D80627455BC6B1CB747820(__this, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_91) == ((uint64_t)((int64_t)((int64_t)((int32_t)327680)))))))
		{
			goto IL_0259;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_92 = V_0;
		NullCheck(L_92);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_93 = L_92->get_address_of_Offset_3();
		uint16_t L_94 = V_1;
		L_93->set_Host_2(L_94);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_95 = V_0;
		NullCheck(L_95);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_96 = L_95->get_address_of_Offset_3();
		uint64_t L_97 = ___cF0;
		L_96->set_Path_4((uint16_t)((int32_t)((uint16_t)((int64_t)((int64_t)L_97&(int64_t)((int64_t)((int64_t)((int32_t)65535))))))));
		uint64_t L_98 = ___cF0;
		___cF0 = ((int64_t)((int64_t)L_98&(int64_t)((int64_t)((int64_t)((int32_t)-65536)))));
		goto IL_0423;
	}

IL_0259:
	{
		uint64_t L_99 = ___cF0;
		if (!((int64_t)((int64_t)L_99&(int64_t)((int64_t)((int64_t)((int32_t)2097152))))))
		{
			goto IL_028d;
		}
	}
	{
		goto IL_026a;
	}

IL_0265:
	{
		uint16_t L_100 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1))));
	}

IL_026a:
	{
		String_t* L_101 = __this->get_m_String_13();
		uint16_t L_102 = V_1;
		NullCheck(L_101);
		Il2CppChar L_103;
		L_103 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_101, L_102, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_103) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_0265;
		}
	}
	{
		uint16_t L_104 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1))));
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_105 = V_0;
		NullCheck(L_105);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_106 = L_105->get_address_of_Offset_3();
		uint16_t L_107 = V_1;
		L_106->set_Host_2(L_107);
		goto IL_0299;
	}

IL_028d:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_108 = V_0;
		NullCheck(L_108);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_109 = L_108->get_address_of_Offset_3();
		uint16_t L_110 = V_1;
		L_109->set_Host_2(L_110);
	}

IL_0299:
	{
		uint64_t L_111 = ___cF0;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int64_t)((int64_t)L_111&(int64_t)((int64_t)((int64_t)((int32_t)65535)))))));
		uint64_t L_112 = ___cF0;
		___cF0 = ((int64_t)((int64_t)L_112&(int64_t)((int64_t)((int64_t)((int32_t)-65536)))));
		bool L_113 = V_2;
		if (!L_113)
		{
			goto IL_02b6;
		}
	}
	{
		uint64_t L_114 = ___cF0;
		___cF0 = ((int64_t)((int64_t)L_114|(int64_t)((int64_t)((int64_t)1))));
	}

IL_02b6:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_115 = V_0;
		NullCheck(L_115);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_116 = L_115->get_address_of_Offset_3();
		uint16_t L_117 = V_1;
		L_116->set_Path_4(L_117);
		V_3 = (bool)0;
		uint64_t L_118 = ___cF0;
		V_4 = (bool)((!(((uint64_t)((int64_t)((int64_t)L_118&(int64_t)((int64_t)274877906944LL)))) <= ((uint64_t)((int64_t)((int64_t)0)))))? 1 : 0);
		uint64_t L_119 = ___cF0;
		___cF0 = ((int64_t)((int64_t)L_119&(int64_t)((int64_t)-274877906945LL)));
		bool L_120 = V_4;
		if (!L_120)
		{
			goto IL_02fd;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_121 = V_0;
		NullCheck(L_121);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_122 = L_121->get_address_of_Offset_3();
		String_t* L_123 = __this->get_m_originalUnicodeString_14();
		NullCheck(L_123);
		int32_t L_124;
		L_124 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_123, /*hidden argument*/NULL);
		L_122->set_End_7((uint16_t)((int32_t)((uint16_t)L_124)));
	}

IL_02fd:
	{
		uint16_t L_125 = V_1;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_126 = V_0;
		NullCheck(L_126);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_127 = L_126->get_address_of_Offset_3();
		uint16_t L_128 = L_127->get_End_7();
		if ((((int32_t)L_125) >= ((int32_t)L_128)))
		{
			goto IL_0423;
		}
	}
	{
		bool L_129 = V_4;
		if (L_129)
		{
			goto IL_031a;
		}
	}
	{
		String_t* L_130 = __this->get_m_String_13();
		G_B48_0 = L_130;
		goto IL_0320;
	}

IL_031a:
	{
		String_t* L_131 = __this->get_m_originalUnicodeString_14();
		G_B48_0 = L_131;
	}

IL_0320:
	{
		V_6 = G_B48_0;
		String_t* L_132 = V_6;
		V_5 = (Il2CppChar*)((uintptr_t)L_132);
		Il2CppChar* L_133 = V_5;
		if (!L_133)
		{
			goto IL_0335;
		}
	}
	{
		Il2CppChar* L_134 = V_5;
		int32_t L_135;
		L_135 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_5 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_134, (int32_t)L_135));
	}

IL_0335:
	{
		Il2CppChar* L_136 = V_5;
		uint16_t L_137 = V_1;
		int32_t L_138 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_136, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_137), (int32_t)2)))));
		if ((!(((uint32_t)L_138) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0420;
		}
	}
	{
		V_7 = 0;
		uint16_t L_139 = V_1;
		int32_t L_140 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1))));
		V_1 = (uint16_t)L_140;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_141 = V_0;
		NullCheck(L_141);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_142 = L_141->get_address_of_Offset_3();
		uint16_t L_143 = L_142->get_End_7();
		if ((((int32_t)L_140) >= ((int32_t)L_143)))
		{
			goto IL_03dd;
		}
	}
	{
		Il2CppChar* L_144 = V_5;
		uint16_t L_145 = V_1;
		int32_t L_146 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_144, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_145), (int32_t)2)))));
		V_7 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_146, (int32_t)((int32_t)48)))));
		int32_t L_147 = V_7;
		if ((((int32_t)L_147) == ((int32_t)((int32_t)65535))))
		{
			goto IL_03dd;
		}
	}
	{
		int32_t L_148 = V_7;
		if ((((int32_t)L_148) == ((int32_t)((int32_t)15))))
		{
			goto IL_03dd;
		}
	}
	{
		int32_t L_149 = V_7;
		if ((((int32_t)L_149) == ((int32_t)((int32_t)65523))))
		{
			goto IL_03dd;
		}
	}
	{
		V_3 = (bool)1;
		int32_t L_150 = V_7;
		if (L_150)
		{
			goto IL_0393;
		}
	}
	{
		uint64_t L_151 = ___cF0;
		___cF0 = ((int64_t)((int64_t)L_151|(int64_t)((int64_t)((int64_t)((int32_t)520)))));
	}

IL_0393:
	{
		uint16_t L_152 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)1))));
		goto IL_03cf;
	}

IL_039a:
	{
		Il2CppChar* L_153 = V_5;
		uint16_t L_154 = V_1;
		int32_t L_155 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_153, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_154), (int32_t)2)))));
		V_8 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_155, (int32_t)((int32_t)48)))));
		uint16_t L_156 = V_8;
		if ((((int32_t)L_156) == ((int32_t)((int32_t)65535))))
		{
			goto IL_03dd;
		}
	}
	{
		uint16_t L_157 = V_8;
		if ((((int32_t)L_157) == ((int32_t)((int32_t)15))))
		{
			goto IL_03dd;
		}
	}
	{
		uint16_t L_158 = V_8;
		if ((((int32_t)L_158) == ((int32_t)((int32_t)65523))))
		{
			goto IL_03dd;
		}
	}
	{
		int32_t L_159 = V_7;
		uint16_t L_160 = V_8;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_159, (int32_t)((int32_t)10))), (int32_t)L_160));
		uint16_t L_161 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_161, (int32_t)1))));
	}

IL_03cf:
	{
		uint16_t L_162 = V_1;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_163 = V_0;
		NullCheck(L_163);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_164 = L_163->get_address_of_Offset_3();
		uint16_t L_165 = L_164->get_End_7();
		if ((((int32_t)L_162) < ((int32_t)L_165)))
		{
			goto IL_039a;
		}
	}

IL_03dd:
	{
		bool L_166 = V_3;
		if (!L_166)
		{
			goto IL_040a;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_167 = V_0;
		NullCheck(L_167);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_168 = L_167->get_address_of_Offset_3();
		uint16_t L_169 = L_168->get_PortValue_3();
		int32_t L_170 = V_7;
		if ((((int32_t)L_169) == ((int32_t)((int32_t)((uint16_t)L_170)))))
		{
			goto IL_040a;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_171 = V_0;
		NullCheck(L_171);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_172 = L_171->get_address_of_Offset_3();
		int32_t L_173 = V_7;
		L_172->set_PortValue_3((uint16_t)((int32_t)((uint16_t)L_173)));
		uint64_t L_174 = ___cF0;
		___cF0 = ((int64_t)((int64_t)L_174|(int64_t)((int64_t)((int64_t)((int32_t)8388608)))));
		goto IL_0414;
	}

IL_040a:
	{
		uint64_t L_175 = ___cF0;
		___cF0 = ((int64_t)((int64_t)L_175|(int64_t)((int64_t)((int64_t)((int32_t)520)))));
	}

IL_0414:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_176 = V_0;
		NullCheck(L_176);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_177 = L_176->get_address_of_Offset_3();
		uint16_t L_178 = V_1;
		L_177->set_Path_4(L_178);
	}

IL_0420:
	{
		V_6 = (String_t*)NULL;
	}

IL_0423:
	{
		uint64_t L_179 = ___cF0;
		___cF0 = ((int64_t)((int64_t)L_179|(int64_t)((int64_t)((int64_t)((int32_t)1073741824)))));
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_180 = V_0;
		String_t* L_181 = __this->get_m_DnsSafeHost_16();
		NullCheck(L_180);
		L_180->set_DnsSafeHost_4(L_181);
		String_t* L_182 = __this->get_m_String_13();
		V_9 = L_182;
		V_10 = (bool)0;
	}

IL_0444:
	try
	{// begin try (depth: 1)
		{
			String_t* L_183 = V_9;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_183, (bool*)(&V_10), /*hidden argument*/NULL);
			uint64_t L_184 = __this->get_m_Flags_17();
			if (((int64_t)((int64_t)L_184&(int64_t)((int64_t)((int64_t)((int32_t)1073741824))))))
			{
				goto IL_0478;
			}
		}

IL_045c:
		{
			UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_185 = V_0;
			__this->set_m_Info_18(L_185);
			uint64_t L_186 = __this->get_m_Flags_17();
			uint64_t L_187 = ___cF0;
			__this->set_m_Flags_17(((int64_t)((int64_t)((int64_t)((int64_t)L_186&(int64_t)((int64_t)((int64_t)((int32_t)-65536)))))|(int64_t)L_187)));
		}

IL_0478:
		{
			IL2CPP_LEAVE(0x486, FINALLY_047a);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_047a;
	}

FINALLY_047a:
	{// begin finally (depth: 1)
		{
			bool L_188 = V_10;
			if (!L_188)
			{
				goto IL_0485;
			}
		}

IL_047e:
		{
			String_t* L_189 = V_9;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_189, /*hidden argument*/NULL);
		}

IL_0485:
		{
			IL2CPP_END_FINALLY(1146)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(1146)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x486, IL_0486)
	}

IL_0486:
	{
		return;
	}
}
// System.Void System.Uri::CreateHostString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_CreateHostString_m2C549411869B57ADE6595800B6493BDB0A52F124 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	String_t* V_1 = NULL;
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * V_2 = NULL;
	bool V_3 = false;
	uint16_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppChar* V_6 = NULL;
	String_t* V_7 = NULL;
	int32_t V_8 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_9 = NULL;
	uint16_t V_10 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	int32_t G_B23_2 = 0;
	int32_t* G_B23_3 = NULL;
	RuntimeObject * G_B23_4 = NULL;
	int32_t G_B23_5 = 0;
	int32_t G_B23_6 = 0;
	String_t* G_B23_7 = NULL;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	int32_t G_B22_2 = 0;
	int32_t* G_B22_3 = NULL;
	RuntimeObject * G_B22_4 = NULL;
	int32_t G_B22_5 = 0;
	int32_t G_B22_6 = 0;
	String_t* G_B22_7 = NULL;
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	int32_t G_B24_2 = 0;
	int32_t G_B24_3 = 0;
	int32_t* G_B24_4 = NULL;
	RuntimeObject * G_B24_5 = NULL;
	int32_t G_B24_6 = 0;
	int32_t G_B24_7 = 0;
	String_t* G_B24_8 = NULL;
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_0 = __this->get_m_Syntax_15();
		NullCheck(L_0);
		bool L_1;
		L_1 = UriParser_get_IsSimple_m09BA6505FDD1AE0BF6C711AE9C2C3F9379B868F8(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0069;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_2 = __this->get_m_Info_18();
		V_2 = L_2;
		V_3 = (bool)0;
	}

IL_0016:
	try
	{// begin try (depth: 1)
		{
			UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_3 = V_2;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_3), /*hidden argument*/NULL);
			bool L_4;
			L_4 = Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969(__this, ((int64_t)((int64_t)((int32_t)67108864))), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_005d;
			}
		}

IL_002c:
		{
			uint64_t L_5 = __this->get_m_Flags_17();
			__this->set_m_Flags_17(((int64_t)((int64_t)L_5|(int64_t)((int64_t)((int64_t)((int32_t)67108864))))));
			Uri_GetHostViaCustomSyntax_mF2DABFE767AB49B8F8E0C9E19937AF900A1E4BC7(__this, /*hidden argument*/NULL);
			uint64_t L_6 = __this->get_m_Flags_17();
			__this->set_m_Flags_17(((int64_t)((int64_t)L_6&(int64_t)((int64_t)((int64_t)((int32_t)-67108865))))));
			IL2CPP_LEAVE(0x26A, FINALLY_005f);
		}

IL_005d:
		{
			IL2CPP_LEAVE(0x69, FINALLY_005f);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{// begin finally (depth: 1)
		{
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_0068;
			}
		}

IL_0062:
		{
			UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_8 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0068:
		{
			IL2CPP_END_FINALLY(95)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x26A, IL_026a)
		IL2CPP_JUMP_TBL(0x69, IL_0069)
	}

IL_0069:
	{
		uint64_t L_9 = __this->get_m_Flags_17();
		V_0 = L_9;
		String_t* L_10 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_11 = __this->get_m_Info_18();
		NullCheck(L_11);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_12 = L_11->get_address_of_Offset_3();
		uint16_t L_13 = L_12->get_Host_2();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_14 = __this->get_m_Info_18();
		NullCheck(L_14);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_15 = L_14->get_address_of_Offset_3();
		uint16_t L_16 = L_15->get_Path_4();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_17 = __this->get_m_Info_18();
		NullCheck(L_17);
		String_t** L_18 = L_17->get_address_of_ScopeId_1();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = Uri_CreateHostStringHelper_m53D695F65E776AB98FD3359894C2C34109E08D00(L_10, L_13, L_16, (uint64_t*)(&V_0), (String_t**)L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		String_t* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0233;
		}
	}
	{
		uint64_t L_22;
		L_22 = Uri_get_HostType_m6C142BC37D44CF1F53D80627455BC6B1CB747820(__this, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_22) == ((uint64_t)((int64_t)((int64_t)((int32_t)327680)))))))
		{
			goto IL_019c;
		}
	}
	{
		V_4 = (uint16_t)0;
		String_t* L_23 = V_1;
		V_7 = L_23;
		String_t* L_24 = V_7;
		V_6 = (Il2CppChar*)((uintptr_t)L_24);
		Il2CppChar* L_25 = V_6;
		if (!L_25)
		{
			goto IL_00de;
		}
	}
	{
		Il2CppChar* L_26 = V_6;
		int32_t L_27;
		L_27 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_6 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_26, (int32_t)L_27));
	}

IL_00de:
	{
		Il2CppChar* L_28 = V_6;
		String_t* L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_29, /*hidden argument*/NULL);
		int32_t L_31;
		L_31 = Uri_CheckCanonical_mFD937A06DC3885481C374ACDD190A3B3E40152F3(__this, (Il2CppChar*)(Il2CppChar*)L_28, (uint16_t*)(&V_4), (uint16_t)((int32_t)((uint16_t)L_30)), ((int32_t)65535), /*hidden argument*/NULL);
		V_5 = L_31;
		V_7 = (String_t*)NULL;
		int32_t L_32 = V_5;
		if (((int32_t)((int32_t)L_32&(int32_t)2)))
		{
			goto IL_0119;
		}
	}
	{
		bool L_33;
		L_33 = Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969(__this, ((int64_t)((int64_t)((int32_t)536870912))), /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_0114;
		}
	}
	{
		int32_t L_34 = V_5;
		if (!((int32_t)((int32_t)L_34&(int32_t)((int32_t)32))))
		{
			goto IL_0119;
		}
	}

IL_0114:
	{
		uint64_t L_35 = V_0;
		V_0 = ((int64_t)((int64_t)L_35|(int64_t)((int64_t)((int64_t)4))));
	}

IL_0119:
	{
		bool L_36;
		L_36 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)536870912))), /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_37 = V_5;
		if (!((int32_t)((int32_t)L_37&(int32_t)((int32_t)33))))
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)((int32_t)L_38&(int32_t)((int32_t)-2)));
	}

IL_0135:
	{
		int32_t L_39 = V_5;
		if ((((int32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)17)))) == ((int32_t)1)))
		{
			goto IL_0233;
		}
	}
	{
		uint64_t L_40 = V_0;
		V_0 = ((int64_t)((int64_t)L_40|(int64_t)((int64_t)((int64_t)((int32_t)256)))));
		bool L_41;
		L_41 = Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969(__this, ((int64_t)((int64_t)((int32_t)524288))), /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0233;
		}
	}
	{
		V_8 = 0;
		String_t* L_42 = V_1;
		String_t* L_43 = V_1;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_43, /*hidden argument*/NULL);
		bool L_45;
		L_45 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(__this, /*hidden argument*/NULL);
		G_B22_0 = ((int32_t)35);
		G_B22_1 = ((int32_t)63);
		G_B22_2 = 1;
		G_B22_3 = (&V_8);
		G_B22_4 = NULL;
		G_B22_5 = L_44;
		G_B22_6 = 0;
		G_B22_7 = L_42;
		if (L_45)
		{
			G_B23_0 = ((int32_t)35);
			G_B23_1 = ((int32_t)63);
			G_B23_2 = 1;
			G_B23_3 = (&V_8);
			G_B23_4 = NULL;
			G_B23_5 = L_44;
			G_B23_6 = 0;
			G_B23_7 = L_42;
			goto IL_0179;
		}
	}
	{
		G_B24_0 = ((int32_t)37);
		G_B24_1 = G_B22_0;
		G_B24_2 = G_B22_1;
		G_B24_3 = G_B22_2;
		G_B24_4 = G_B22_3;
		G_B24_5 = G_B22_4;
		G_B24_6 = G_B22_5;
		G_B24_7 = G_B22_6;
		G_B24_8 = G_B22_7;
		goto IL_017e;
	}

IL_0179:
	{
		G_B24_0 = ((int32_t)65535);
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
		G_B24_3 = G_B23_2;
		G_B24_4 = G_B23_3;
		G_B24_5 = G_B23_4;
		G_B24_6 = G_B23_5;
		G_B24_7 = G_B23_6;
		G_B24_8 = G_B23_7;
	}

IL_017e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_46;
		L_46 = UriHelper_EscapeString_m322E8737F58BBAF891A75032EC1800BE548F84D7(G_B24_8, G_B24_7, G_B24_6, (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)G_B24_5, (int32_t*)G_B24_4, (bool)G_B24_3, G_B24_2, G_B24_1, G_B24_0, /*hidden argument*/NULL);
		V_9 = L_46;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_47 = V_9;
		if (!L_47)
		{
			goto IL_0233;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_48 = V_9;
		int32_t L_49 = V_8;
		String_t* L_50;
		L_50 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_48, 0, L_49, /*hidden argument*/NULL);
		V_1 = L_50;
		goto IL_0233;
	}

IL_019c:
	{
		bool L_51;
		L_51 = Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969(__this, ((int64_t)((int64_t)((int32_t)33554432))), /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_0233;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_52 = __this->get_m_Info_18();
		NullCheck(L_52);
		String_t* L_53 = L_52->get_ScopeId_1();
		if (!L_53)
		{
			goto IL_01c5;
		}
	}
	{
		uint64_t L_54 = V_0;
		V_0 = ((int64_t)((int64_t)L_54|(int64_t)((int64_t)((int64_t)((int32_t)260)))));
		goto IL_0233;
	}

IL_01c5:
	{
		V_10 = (uint16_t)0;
		goto IL_0229;
	}

IL_01ca:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_55 = __this->get_m_Info_18();
		NullCheck(L_55);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_56 = L_55->get_address_of_Offset_3();
		uint16_t L_57 = L_56->get_Host_2();
		uint16_t L_58 = V_10;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_59 = __this->get_m_Info_18();
		NullCheck(L_59);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_60 = L_59->get_address_of_Offset_3();
		uint16_t L_61 = L_60->get_End_7();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)L_58))) >= ((int32_t)L_61)))
		{
			goto IL_0217;
		}
	}
	{
		String_t* L_62 = V_1;
		uint16_t L_63 = V_10;
		NullCheck(L_62);
		Il2CppChar L_64;
		L_64 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_62, L_63, /*hidden argument*/NULL);
		String_t* L_65 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_66 = __this->get_m_Info_18();
		NullCheck(L_66);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_67 = L_66->get_address_of_Offset_3();
		uint16_t L_68 = L_67->get_Host_2();
		uint16_t L_69 = V_10;
		NullCheck(L_65);
		Il2CppChar L_70;
		L_70 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_65, ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)L_69)), /*hidden argument*/NULL);
		if ((((int32_t)L_64) == ((int32_t)L_70)))
		{
			goto IL_0222;
		}
	}

IL_0217:
	{
		uint64_t L_71 = V_0;
		V_0 = ((int64_t)((int64_t)L_71|(int64_t)((int64_t)((int64_t)((int32_t)260)))));
		goto IL_0233;
	}

IL_0222:
	{
		uint16_t L_72 = V_10;
		V_10 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1))));
	}

IL_0229:
	{
		uint16_t L_73 = V_10;
		String_t* L_74 = V_1;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_74, /*hidden argument*/NULL);
		if ((((int32_t)L_73) < ((int32_t)L_75)))
		{
			goto IL_01ca;
		}
	}

IL_0233:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_76 = __this->get_m_Info_18();
		String_t* L_77 = V_1;
		NullCheck(L_76);
		L_76->set_Host_0(L_77);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_78 = __this->get_m_Info_18();
		V_2 = L_78;
		V_3 = (bool)0;
	}

IL_0248:
	try
	{// begin try (depth: 1)
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_79 = V_2;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_79, (bool*)(&V_3), /*hidden argument*/NULL);
		uint64_t L_80 = __this->get_m_Flags_17();
		uint64_t L_81 = V_0;
		__this->set_m_Flags_17(((int64_t)((int64_t)L_80|(int64_t)L_81)));
		IL2CPP_LEAVE(0x26A, FINALLY_0260);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0260;
	}

FINALLY_0260:
	{// begin finally (depth: 1)
		{
			bool L_82 = V_3;
			if (!L_82)
			{
				goto IL_0269;
			}
		}

IL_0263:
		{
			UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_83 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_83, /*hidden argument*/NULL);
		}

IL_0269:
		{
			IL2CPP_END_FINALLY(608)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(608)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x26A, IL_026a)
	}

IL_026a:
	{
		return;
	}
}
// System.String System.Uri::CreateHostStringHelper(System.String,System.UInt16,System.UInt16,System.Uri/Flags&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_CreateHostStringHelper_m53D695F65E776AB98FD3359894C2C34109E08D00 (String_t* ___str0, uint16_t ___idx1, uint16_t ___end2, uint64_t* ___flags3, String_t** ___scopeId4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	uint64_t V_2 = 0;
	{
		V_0 = (bool)0;
		uint64_t* L_0 = ___flags3;
		int64_t L_1 = *((int64_t*)L_0);
		V_2 = ((int64_t)((int64_t)L_1&(int64_t)((int64_t)((int64_t)((int32_t)458752)))));
		uint64_t L_2 = V_2;
		if ((!(((uint64_t)L_2) <= ((uint64_t)((int64_t)((int64_t)((int32_t)196608)))))))
		{
			goto IL_0035;
		}
	}
	{
		uint64_t L_3 = V_2;
		if ((((int64_t)L_3) == ((int64_t)((int64_t)((int64_t)((int32_t)65536))))))
		{
			goto IL_005f;
		}
	}
	{
		uint64_t L_4 = V_2;
		if ((((int64_t)L_4) == ((int64_t)((int64_t)((int64_t)((int32_t)131072))))))
		{
			goto IL_006d;
		}
	}
	{
		uint64_t L_5 = V_2;
		if ((((int64_t)L_5) == ((int64_t)((int64_t)((int64_t)((int32_t)196608))))))
		{
			goto IL_0052;
		}
	}
	{
		goto IL_00bd;
	}

IL_0035:
	{
		uint64_t L_6 = V_2;
		if ((((int64_t)L_6) == ((int64_t)((int64_t)((int64_t)((int32_t)262144))))))
		{
			goto IL_007a;
		}
	}
	{
		uint64_t L_7 = V_2;
		if ((((int64_t)L_7) == ((int64_t)((int64_t)((int64_t)((int32_t)327680))))))
		{
			goto IL_0087;
		}
	}
	{
		uint64_t L_8 = V_2;
		if ((((int64_t)L_8) == ((int64_t)((int64_t)((int64_t)((int32_t)458752))))))
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00bd;
	}

IL_0052:
	{
		String_t* L_9 = ___str0;
		uint16_t L_10 = ___idx1;
		uint16_t L_11 = ___end2;
		String_t* L_12;
		L_12 = DomainNameHelper_ParseCanonicalName_m1C6E554993599045E72E090518D75FF532D2543E(L_9, L_10, L_11, (bool*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_12;
		goto IL_00c4;
	}

IL_005f:
	{
		String_t* L_13 = ___str0;
		uint16_t L_14 = ___idx1;
		String_t** L_15 = ___scopeId4;
		String_t* L_16;
		L_16 = IPv6AddressHelper_ParseCanonicalName_mAC7315CCA0517C9B95D33C4114E90A8B94EC1E2C(L_13, L_14, (bool*)(&V_0), (String_t**)L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_00c4;
	}

IL_006d:
	{
		String_t* L_17 = ___str0;
		uint16_t L_18 = ___idx1;
		uint16_t L_19 = ___end2;
		String_t* L_20;
		L_20 = IPv4AddressHelper_ParseCanonicalName_m4237845A3AFA554557BEC618AB11D5EF7A18C2BB(L_17, L_18, L_19, (bool*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_20;
		goto IL_00c4;
	}

IL_007a:
	{
		String_t* L_21 = ___str0;
		uint16_t L_22 = ___idx1;
		uint16_t L_23 = ___end2;
		String_t* L_24;
		L_24 = UncNameHelper_ParseCanonicalName_mAA1CF481E9789909F458A6C31A10DF991166F060(L_21, L_22, L_23, (bool*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_24;
		goto IL_00c4;
	}

IL_0087:
	{
		uint64_t* L_25 = ___flags3;
		int64_t L_26 = *((int64_t*)L_25);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Uri_StaticInFact_m6B17A3B95B81DABD390B643ABD9ADAA316D5EF98(L_26, ((int64_t)((int64_t)((int32_t)134217728))), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_009e;
		}
	}
	{
		String_t* L_28 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_28;
		goto IL_00a9;
	}

IL_009e:
	{
		String_t* L_29 = ___str0;
		uint16_t L_30 = ___idx1;
		uint16_t L_31 = ___end2;
		uint16_t L_32 = ___idx1;
		NullCheck(L_29);
		String_t* L_33;
		L_33 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_29, L_30, ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)L_32)), /*hidden argument*/NULL);
		V_1 = L_33;
	}

IL_00a9:
	{
		String_t* L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_00c4;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_00c4;
	}

IL_00b5:
	{
		String_t* L_36 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_36;
		goto IL_00c4;
	}

IL_00bd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var)));
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_37;
		L_37 = Uri_GetException_m6A158C16E69136DF56BCF19CC4C7DCCC2601CF84(8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_CreateHostStringHelper_m53D695F65E776AB98FD3359894C2C34109E08D00_RuntimeMethod_var)));
	}

IL_00c4:
	{
		bool L_38 = V_0;
		if (!L_38)
		{
			goto IL_00d2;
		}
	}
	{
		uint64_t* L_39 = ___flags3;
		uint64_t* L_40 = ___flags3;
		int64_t L_41 = *((int64_t*)L_40);
		*((int64_t*)L_39) = (int64_t)((int64_t)((int64_t)L_41|(int64_t)((int64_t)((int64_t)((int32_t)4194304)))));
	}

IL_00d2:
	{
		String_t* L_42 = V_1;
		return L_42;
	}
}
// System.Void System.Uri::GetHostViaCustomSyntax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_GetHostViaCustomSyntax_mF2DABFE767AB49B8F8E0C9E19937AF900A1E4BC7 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	Il2CppChar* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	uint16_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_0 = __this->get_m_Info_18();
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Host_0();
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_2 = __this->get_m_Syntax_15();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UriParser_InternalGetComponents_mAB0A54E462724FA417D0EF3A2AD0BD24BC66DFF8(L_2, __this, 4, 1, /*hidden argument*/NULL);
		V_0 = L_3;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_4 = __this->get_m_Info_18();
		NullCheck(L_4);
		String_t* L_5 = L_4->get_Host_0();
		if (L_5)
		{
			goto IL_018d;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)65520))))
		{
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var)));
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_8;
		L_8 = Uri_GetException_m6A158C16E69136DF56BCF19CC4C7DCCC2601CF84(6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_GetHostViaCustomSyntax_mF2DABFE767AB49B8F8E0C9E19937AF900A1E4BC7_RuntimeMethod_var)));
	}

IL_0041:
	{
		V_3 = 0;
		uint64_t L_9 = __this->get_m_Flags_17();
		V_4 = ((int64_t)((int64_t)L_9&(int64_t)((int64_t)((int64_t)((int32_t)-458753)))));
		String_t* L_10 = V_0;
		V_6 = L_10;
		String_t* L_11 = V_6;
		V_5 = (Il2CppChar*)((uintptr_t)L_11);
		Il2CppChar* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0068;
		}
	}
	{
		Il2CppChar* L_13 = V_5;
		int32_t L_14;
		L_14 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_5 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_13, (int32_t)L_14));
	}

IL_0068:
	{
		V_7 = (String_t*)NULL;
		Il2CppChar* L_15 = V_5;
		String_t* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_18 = __this->get_m_Syntax_15();
		uint16_t L_19;
		L_19 = Uri_CheckAuthorityHelper_mC5010AEC19EED1968EDE7CB52C92AC0AC0869503(__this, (Il2CppChar*)(Il2CppChar*)L_15, (uint16_t)0, (uint16_t)((int32_t)((uint16_t)L_17)), (int32_t*)(&V_3), (uint64_t*)(&V_4), L_18, (String_t**)(&V_7), /*hidden argument*/NULL);
		String_t* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_19) == ((int32_t)((int32_t)((uint16_t)L_21)))))
		{
			goto IL_00a6;
		}
	}
	{
		uint64_t L_22 = V_4;
		V_4 = ((int64_t)((int64_t)L_22&(int64_t)((int64_t)((int64_t)((int32_t)-458753)))));
		uint64_t L_23 = V_4;
		V_4 = ((int64_t)((int64_t)L_23|(int64_t)((int64_t)((int64_t)((int32_t)458752)))));
	}

IL_00a6:
	{
		V_6 = (String_t*)NULL;
		int32_t L_24 = V_3;
		if (L_24)
		{
			goto IL_00bd;
		}
	}
	{
		uint64_t L_25 = V_4;
		if ((!(((uint64_t)((int64_t)((int64_t)L_25&(int64_t)((int64_t)((int64_t)((int32_t)458752)))))) == ((uint64_t)((int64_t)((int64_t)((int32_t)458752)))))))
		{
			goto IL_00dc;
		}
	}

IL_00bd:
	{
		uint64_t L_26 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)((int64_t)((int64_t)L_26&(int64_t)((int64_t)((int64_t)((int32_t)-458753)))))|(int64_t)((int64_t)((int64_t)((int32_t)327680))))));
		goto IL_018d;
	}

IL_00dc:
	{
		String_t* L_27 = V_0;
		String_t* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_28, /*hidden argument*/NULL);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_30 = __this->get_m_Info_18();
		NullCheck(L_30);
		String_t** L_31 = L_30->get_address_of_ScopeId_1();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		String_t* L_32;
		L_32 = Uri_CreateHostStringHelper_m53D695F65E776AB98FD3359894C2C34109E08D00(L_27, (uint16_t)0, (uint16_t)((int32_t)((uint16_t)L_29)), (uint64_t*)(&V_4), (String_t**)L_31, /*hidden argument*/NULL);
		V_0 = L_32;
		V_8 = (uint16_t)0;
		goto IL_0166;
	}

IL_00fd:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_33 = __this->get_m_Info_18();
		NullCheck(L_33);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_34 = L_33->get_address_of_Offset_3();
		uint16_t L_35 = L_34->get_Host_2();
		uint16_t L_36 = V_8;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_37 = __this->get_m_Info_18();
		NullCheck(L_37);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_38 = L_37->get_address_of_Offset_3();
		uint16_t L_39 = L_38->get_End_7();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36))) >= ((int32_t)L_39)))
		{
			goto IL_014a;
		}
	}
	{
		String_t* L_40 = V_0;
		uint16_t L_41 = V_8;
		NullCheck(L_40);
		Il2CppChar L_42;
		L_42 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_40, L_41, /*hidden argument*/NULL);
		String_t* L_43 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_44 = __this->get_m_Info_18();
		NullCheck(L_44);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_45 = L_44->get_address_of_Offset_3();
		uint16_t L_46 = L_45->get_Host_2();
		uint16_t L_47 = V_8;
		NullCheck(L_43);
		Il2CppChar L_48;
		L_48 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_43, ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47)), /*hidden argument*/NULL);
		if ((((int32_t)L_42) == ((int32_t)L_48)))
		{
			goto IL_015f;
		}
	}

IL_014a:
	{
		uint64_t L_49 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_49|(int64_t)((int64_t)((int64_t)((int32_t)260))))));
		goto IL_0170;
	}

IL_015f:
	{
		uint16_t L_50 = V_8;
		V_8 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1))));
	}

IL_0166:
	{
		uint16_t L_51 = V_8;
		String_t* L_52 = V_0;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_52, /*hidden argument*/NULL);
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_00fd;
		}
	}

IL_0170:
	{
		uint64_t L_54 = __this->get_m_Flags_17();
		uint64_t L_55 = V_4;
		__this->set_m_Flags_17(((int64_t)((int64_t)((int64_t)((int64_t)L_54&(int64_t)((int64_t)((int64_t)((int32_t)-458753)))))|(int64_t)((int64_t)((int64_t)L_55&(int64_t)((int64_t)((int64_t)((int32_t)458752))))))));
	}

IL_018d:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_56 = __this->get_m_Syntax_15();
		NullCheck(L_56);
		String_t* L_57;
		L_57 = UriParser_InternalGetComponents_mAB0A54E462724FA417D0EF3A2AD0BD24BC66DFF8(L_56, __this, ((int32_t)128), 1, /*hidden argument*/NULL);
		V_1 = L_57;
		V_2 = 0;
		String_t* L_58 = V_1;
		if (!L_58)
		{
			goto IL_01ad;
		}
	}
	{
		String_t* L_59 = V_1;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_59, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_01e9;
		}
	}

IL_01ad:
	{
		uint64_t L_61 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_61&(int64_t)((int64_t)((int64_t)((int32_t)-8388609))))));
		uint64_t L_62 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_62|(int64_t)((int64_t)((int64_t)((int32_t)520))))));
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_63 = __this->get_m_Info_18();
		NullCheck(L_63);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_64 = L_63->get_address_of_Offset_3();
		L_64->set_PortValue_3((uint16_t)0);
		goto IL_02c1;
	}

IL_01e9:
	{
		V_9 = 0;
		goto IL_0249;
	}

IL_01ee:
	{
		String_t* L_65 = V_1;
		int32_t L_66 = V_9;
		NullCheck(L_65);
		Il2CppChar L_67;
		L_67 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_65, L_66, /*hidden argument*/NULL);
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)((int32_t)48)));
		int32_t L_68 = V_10;
		if ((((int32_t)L_68) < ((int32_t)0)))
		{
			goto IL_0216;
		}
	}
	{
		int32_t L_69 = V_10;
		if ((((int32_t)L_69) > ((int32_t)((int32_t)9))))
		{
			goto IL_0216;
		}
	}
	{
		int32_t L_70 = V_2;
		int32_t L_71 = V_10;
		int32_t L_72 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_70, (int32_t)((int32_t)10))), (int32_t)L_71));
		V_2 = L_72;
		if ((((int32_t)L_72) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0243;
		}
	}

IL_0216:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_73 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_74 = L_73;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_75 = __this->get_m_Syntax_15();
		NullCheck(L_75);
		Type_t * L_76;
		L_76 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_75, /*hidden argument*/NULL);
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_76);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_77);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_77);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_78 = L_74;
		String_t* L_79 = V_1;
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_79);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_79);
		String_t* L_80;
		L_80 = SR_GetString_m4FFAF18248A54C5B67E4760C5ED4869A87BCAD7F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24E3F48402E3AE0939BE896FBDE3DE4520C9893D)), L_78, /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_81 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var)));
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_81, L_80, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_81, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_GetHostViaCustomSyntax_mF2DABFE767AB49B8F8E0C9E19937AF900A1E4BC7_RuntimeMethod_var)));
	}

IL_0243:
	{
		int32_t L_82 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
	}

IL_0249:
	{
		int32_t L_83 = V_9;
		String_t* L_84 = V_1;
		NullCheck(L_84);
		int32_t L_85;
		L_85 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_84, /*hidden argument*/NULL);
		if ((((int32_t)L_83) < ((int32_t)L_85)))
		{
			goto IL_01ee;
		}
	}
	{
		int32_t L_86 = V_2;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_87 = __this->get_m_Info_18();
		NullCheck(L_87);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_88 = L_87->get_address_of_Offset_3();
		uint16_t L_89 = L_88->get_PortValue_3();
		if ((((int32_t)L_86) == ((int32_t)L_89)))
		{
			goto IL_02c1;
		}
	}
	{
		int32_t L_90 = V_2;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_91 = __this->get_m_Syntax_15();
		NullCheck(L_91);
		int32_t L_92;
		L_92 = UriParser_get_DefaultPort_m7ECA5BE839D36C7FF854FEA0795D8DE701487D33_inline(L_91, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_90) == ((uint32_t)L_92))))
		{
			goto IL_0289;
		}
	}
	{
		uint64_t L_93 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_93&(int64_t)((int64_t)((int64_t)((int32_t)-8388609))))));
		goto IL_029c;
	}

IL_0289:
	{
		uint64_t L_94 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_94|(int64_t)((int64_t)((int64_t)((int32_t)8388608))))));
	}

IL_029c:
	{
		uint64_t L_95 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_95|(int64_t)((int64_t)((int64_t)((int32_t)520))))));
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_96 = __this->get_m_Info_18();
		NullCheck(L_96);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_97 = L_96->get_address_of_Offset_3();
		int32_t L_98 = V_2;
		L_97->set_PortValue_3((uint16_t)((int32_t)((uint16_t)L_98)));
	}

IL_02c1:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_99 = __this->get_m_Info_18();
		String_t* L_100 = V_0;
		NullCheck(L_99);
		L_99->set_Host_0(L_100);
		return;
	}
}
// System.String System.Uri::GetParts(System.UriComponents,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___uriParts0, int32_t ___formatAs1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___uriParts0;
		int32_t L_1 = ___formatAs1;
		String_t* L_2;
		L_2 = Uri_GetComponents_mA614A98C35F2E5D924A10A8018A46606AFB6133E(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Uri::GetEscapedParts(System.UriComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_GetEscapedParts_m61C2B2B898F8AA8B75AAEC38EF78C340BC1F5A20 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___uriParts0, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		uint64_t L_0 = __this->get_m_Flags_17();
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((uint16_t)L_0))&(int32_t)((int32_t)16256)))>>(int32_t)6))));
		bool L_1;
		L_1 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)1)), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		uint16_t L_2 = V_0;
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_2|(int32_t)1))));
	}

IL_0020:
	{
		int32_t L_3 = ___uriParts0;
		if (!((int32_t)((int32_t)L_3&(int32_t)((int32_t)16))))
		{
			goto IL_0072;
		}
	}
	{
		bool L_4;
		L_4 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)57344))), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		uint16_t L_5 = V_0;
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)16)))));
		goto IL_0072;
	}

IL_003c:
	{
		bool L_6;
		L_6 = Uri_get_IsDosPath_m3374B9D26D6B547862ACB2E617AB6F96CA31A5AF(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_7 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_8 = __this->get_m_Info_18();
		NullCheck(L_8);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_9 = L_8->get_address_of_Offset_3();
		uint16_t L_10 = L_9->get_Path_4();
		uint16_t L_11;
		L_11 = Uri_get_SecuredPathIndex_m0BE7920E94AA002B4CD2D568BD6E0FD91F0D7F0B(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Il2CppChar L_12;
		L_12 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_7, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)), (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)124)))))
		{
			goto IL_0072;
		}
	}
	{
		uint16_t L_13 = V_0;
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)16)))));
	}

IL_0072:
	{
		int32_t L_14 = ___uriParts0;
		uint16_t L_15 = V_0;
		if (((int32_t)((int32_t)((int32_t)((uint16_t)L_14))&(int32_t)L_15)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_16 = ___uriParts0;
		String_t* L_17;
		L_17 = Uri_GetUriPartsFromUserString_m81B60C6E31AB8EA51438E391F7990334B96ACD29(__this, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		String_t* L_18 = V_1;
		if (!L_18)
		{
			goto IL_0085;
		}
	}
	{
		String_t* L_19 = V_1;
		return L_19;
	}

IL_0085:
	{
		int32_t L_20 = ___uriParts0;
		uint16_t L_21 = V_0;
		String_t* L_22;
		L_22 = Uri_ReCreateParts_m3D0CD53477FBAB5E8988373B8D749E286399278E(__this, L_20, L_21, 1, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String System.Uri::GetUnescapedParts(System.UriComponents,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_GetUnescapedParts_m6F106ECABBBAFA95C3F3CA86F540B9EE0B9D01D4 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___uriParts0, int32_t ___formatAs1, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		uint64_t L_0 = __this->get_m_Flags_17();
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((uint16_t)L_0))&(int32_t)((int32_t)127)))));
		int32_t L_1 = ___uriParts0;
		if (!((int32_t)((int32_t)L_1&(int32_t)((int32_t)16))))
		{
			goto IL_005f;
		}
	}
	{
		uint64_t L_2 = __this->get_m_Flags_17();
		if (!((int64_t)((int64_t)L_2&(int64_t)((int64_t)((int64_t)((int32_t)57344))))))
		{
			goto IL_0029;
		}
	}
	{
		uint16_t L_3 = V_0;
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_3|(int32_t)((int32_t)16)))));
		goto IL_005f;
	}

IL_0029:
	{
		bool L_4;
		L_4 = Uri_get_IsDosPath_m3374B9D26D6B547862ACB2E617AB6F96CA31A5AF(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_5 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_6 = __this->get_m_Info_18();
		NullCheck(L_6);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_7 = L_6->get_address_of_Offset_3();
		uint16_t L_8 = L_7->get_Path_4();
		uint16_t L_9;
		L_9 = Uri_get_SecuredPathIndex_m0BE7920E94AA002B4CD2D568BD6E0FD91F0D7F0B(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Il2CppChar L_10;
		L_10 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)124)))))
		{
			goto IL_005f;
		}
	}
	{
		uint16_t L_11 = V_0;
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_11|(int32_t)((int32_t)16)))));
	}

IL_005f:
	{
		int32_t L_12 = ___uriParts0;
		uint16_t L_13 = V_0;
		if (((int32_t)((int32_t)((int32_t)((uint16_t)L_12))&(int32_t)L_13)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_14 = ___uriParts0;
		String_t* L_15;
		L_15 = Uri_GetUriPartsFromUserString_m81B60C6E31AB8EA51438E391F7990334B96ACD29(__this, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		String_t* L_16 = V_1;
		if (!L_16)
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_17 = V_1;
		return L_17;
	}

IL_0072:
	{
		int32_t L_18 = ___uriParts0;
		uint16_t L_19 = V_0;
		int32_t L_20 = ___formatAs1;
		String_t* L_21;
		L_21 = Uri_ReCreateParts_m3D0CD53477FBAB5E8988373B8D749E286399278E(__this, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.String System.Uri::ReCreateParts(System.UriComponents,System.UInt16,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_ReCreateParts_m3D0CD53477FBAB5E8988373B8D749E286399278E (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___parts0, uint16_t ___nonCanonical1, int32_t ___formatAs2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_2 = NULL;
	uint16_t V_3 = 0;
	int32_t V_4 = 0;
	Il2CppChar* V_5 = NULL;
	String_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	uint16_t V_9 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	String_t* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t* G_B20_3 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B20_4 = NULL;
	int32_t G_B20_5 = 0;
	uint16_t G_B20_6 = 0;
	String_t* G_B20_7 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t* G_B19_3 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B19_4 = NULL;
	int32_t G_B19_5 = 0;
	uint16_t G_B19_6 = 0;
	String_t* G_B19_7 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	int32_t G_B21_2 = 0;
	int32_t G_B21_3 = 0;
	int32_t* G_B21_4 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B21_5 = NULL;
	int32_t G_B21_6 = 0;
	uint16_t G_B21_7 = 0;
	String_t* G_B21_8 = NULL;
	int32_t G_B37_0 = 0;
	int32_t G_B87_0 = 0;
	int32_t G_B87_1 = 0;
	int32_t G_B87_2 = 0;
	int32_t* G_B87_3 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B87_4 = NULL;
	uint16_t G_B87_5 = 0;
	uint16_t G_B87_6 = 0;
	String_t* G_B87_7 = NULL;
	int32_t G_B86_0 = 0;
	int32_t G_B86_1 = 0;
	int32_t G_B86_2 = 0;
	int32_t* G_B86_3 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B86_4 = NULL;
	uint16_t G_B86_5 = 0;
	uint16_t G_B86_6 = 0;
	String_t* G_B86_7 = NULL;
	int32_t G_B88_0 = 0;
	int32_t G_B88_1 = 0;
	int32_t G_B88_2 = 0;
	int32_t G_B88_3 = 0;
	int32_t* G_B88_4 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B88_5 = NULL;
	uint16_t G_B88_6 = 0;
	uint16_t G_B88_7 = 0;
	String_t* G_B88_8 = NULL;
	int32_t G_B92_0 = 0;
	int32_t G_B92_1 = 0;
	int32_t G_B92_2 = 0;
	int32_t* G_B92_3 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B92_4 = NULL;
	uint16_t G_B92_5 = 0;
	uint16_t G_B92_6 = 0;
	String_t* G_B92_7 = NULL;
	int32_t G_B91_0 = 0;
	int32_t G_B91_1 = 0;
	int32_t G_B91_2 = 0;
	int32_t* G_B91_3 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B91_4 = NULL;
	uint16_t G_B91_5 = 0;
	uint16_t G_B91_6 = 0;
	String_t* G_B91_7 = NULL;
	int32_t G_B93_0 = 0;
	int32_t G_B93_1 = 0;
	int32_t G_B93_2 = 0;
	int32_t G_B93_3 = 0;
	int32_t* G_B93_4 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B93_5 = NULL;
	uint16_t G_B93_6 = 0;
	uint16_t G_B93_7 = 0;
	String_t* G_B93_8 = NULL;
	int32_t G_B107_0 = 0;
	int32_t* G_B107_1 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B107_2 = NULL;
	uint16_t G_B107_3 = 0;
	uint16_t G_B107_4 = 0;
	String_t* G_B107_5 = NULL;
	int32_t G_B106_0 = 0;
	int32_t* G_B106_1 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B106_2 = NULL;
	uint16_t G_B106_3 = 0;
	uint16_t G_B106_4 = 0;
	String_t* G_B106_5 = NULL;
	int32_t G_B108_0 = 0;
	int32_t G_B108_1 = 0;
	int32_t* G_B108_2 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B108_3 = NULL;
	uint16_t G_B108_4 = 0;
	uint16_t G_B108_5 = 0;
	String_t* G_B108_6 = NULL;
	int32_t G_B112_0 = 0;
	int32_t G_B112_1 = 0;
	int32_t G_B112_2 = 0;
	int32_t* G_B112_3 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B112_4 = NULL;
	uint16_t G_B112_5 = 0;
	uint16_t G_B112_6 = 0;
	String_t* G_B112_7 = NULL;
	int32_t G_B111_0 = 0;
	int32_t G_B111_1 = 0;
	int32_t G_B111_2 = 0;
	int32_t* G_B111_3 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B111_4 = NULL;
	uint16_t G_B111_5 = 0;
	uint16_t G_B111_6 = 0;
	String_t* G_B111_7 = NULL;
	int32_t G_B113_0 = 0;
	int32_t G_B113_1 = 0;
	int32_t G_B113_2 = 0;
	int32_t G_B113_3 = 0;
	int32_t* G_B113_4 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B113_5 = NULL;
	uint16_t G_B113_6 = 0;
	uint16_t G_B113_7 = 0;
	String_t* G_B113_8 = NULL;
	int32_t G_B117_0 = 0;
	int32_t G_B117_1 = 0;
	int32_t G_B117_2 = 0;
	int32_t* G_B117_3 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B117_4 = NULL;
	uint16_t G_B117_5 = 0;
	uint16_t G_B117_6 = 0;
	String_t* G_B117_7 = NULL;
	int32_t G_B116_0 = 0;
	int32_t G_B116_1 = 0;
	int32_t G_B116_2 = 0;
	int32_t* G_B116_3 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B116_4 = NULL;
	uint16_t G_B116_5 = 0;
	uint16_t G_B116_6 = 0;
	String_t* G_B116_7 = NULL;
	int32_t G_B118_0 = 0;
	int32_t G_B118_1 = 0;
	int32_t G_B118_2 = 0;
	int32_t G_B118_3 = 0;
	int32_t* G_B118_4 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B118_5 = NULL;
	uint16_t G_B118_6 = 0;
	uint16_t G_B118_7 = 0;
	String_t* G_B118_8 = NULL;
	{
		Uri_EnsureHostString_m47897EC94F83DFE1CA16CE71167DDD3CC986C22A(__this, (bool)0, /*hidden argument*/NULL);
		int32_t L_0 = ___parts0;
		if (!((int32_t)((int32_t)L_0&(int32_t)4)))
		{
			goto IL_0019;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_1 = __this->get_m_Info_18();
		NullCheck(L_1);
		String_t* L_2 = L_1->get_Host_0();
		G_B3_0 = L_2;
		goto IL_001e;
	}

IL_0019:
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B3_0 = L_3;
	}

IL_001e:
	{
		V_0 = G_B3_0;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_4 = __this->get_m_Info_18();
		NullCheck(L_4);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_5 = L_4->get_address_of_Offset_3();
		uint16_t L_6 = L_5->get_End_7();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_7 = __this->get_m_Info_18();
		NullCheck(L_7);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_8 = L_7->get_address_of_Offset_3();
		uint16_t L_9 = L_8->get_User_1();
		int32_t L_10 = ___formatAs2;
		G_B4_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_9));
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_9));
			goto IL_0047;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_0049;
	}

IL_0047:
	{
		G_B6_0 = ((int32_t)12);
		G_B6_1 = G_B5_0;
	}

IL_0049:
	{
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B6_1, (int32_t)G_B6_0));
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_14 = __this->get_m_Syntax_15();
		NullCheck(L_14);
		String_t* L_15;
		L_15 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_15, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_17 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13)), (int32_t)L_16)), (int32_t)3)), (int32_t)1)));
		V_2 = L_17;
		V_1 = 0;
		int32_t L_18 = ___parts0;
		if (!((int32_t)((int32_t)L_18&(int32_t)1)))
		{
			goto IL_00d8;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_19 = __this->get_m_Syntax_15();
		NullCheck(L_19);
		String_t* L_20;
		L_20 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_19, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_21 = V_2;
		int32_t L_22 = V_1;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_23 = __this->get_m_Syntax_15();
		NullCheck(L_23);
		String_t* L_24;
		L_24 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25;
		L_25 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_24, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_CopyTo_mF77EF8D4E5ABBD2AB7F509FFE9C0C70DC15A27E1(L_20, 0, L_21, L_22, L_25, /*hidden argument*/NULL);
		int32_t L_26 = V_1;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_27 = __this->get_m_Syntax_15();
		NullCheck(L_27);
		String_t* L_28;
		L_28 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		int32_t L_29;
		L_29 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_28, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_29));
		int32_t L_30 = ___parts0;
		if ((((int32_t)L_30) == ((int32_t)1)))
		{
			goto IL_00d8;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_31 = V_2;
		int32_t L_32 = V_1;
		int32_t L_33 = L_32;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (Il2CppChar)((int32_t)58));
		bool L_34;
		L_34 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)1048576))), /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00d8;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_35 = V_2;
		int32_t L_36 = V_1;
		int32_t L_37 = L_36;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (Il2CppChar)((int32_t)47));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_38 = V_2;
		int32_t L_39 = V_1;
		int32_t L_40 = L_39;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (Il2CppChar)((int32_t)47));
	}

IL_00d8:
	{
		int32_t L_41 = ___parts0;
		if (!((int32_t)((int32_t)L_41&(int32_t)2)))
		{
			goto IL_030f;
		}
	}
	{
		bool L_42;
		L_42 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)2097152))), /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_030f;
		}
	}
	{
		uint16_t L_43 = ___nonCanonical1;
		if (!((int32_t)((int32_t)L_43&(int32_t)2)))
		{
			goto IL_02c1;
		}
	}
	{
		int32_t L_44 = ___formatAs2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0112;
			}
			case 1:
			{
				goto IL_022d;
			}
			case 2:
			{
				goto IL_01cf;
			}
		}
	}
	{
		goto IL_0279;
	}

IL_0112:
	{
		bool L_45;
		L_45 = Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969(__this, ((int64_t)((int64_t)((int32_t)524288))), /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_015b;
		}
	}
	{
		String_t* L_46 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_47 = __this->get_m_Info_18();
		NullCheck(L_47);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_48 = L_47->get_address_of_Offset_3();
		uint16_t L_49 = L_48->get_User_1();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_50 = __this->get_m_Info_18();
		NullCheck(L_50);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_51 = L_50->get_address_of_Offset_3();
		uint16_t L_52 = L_51->get_Host_2();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_53 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_54;
		L_54 = UriHelper_EscapeString_m322E8737F58BBAF891A75032EC1800BE548F84D7(L_46, L_49, L_52, L_53, (int32_t*)(&V_1), (bool)1, ((int32_t)63), ((int32_t)35), ((int32_t)37), /*hidden argument*/NULL);
		V_2 = L_54;
		goto IL_0307;
	}

IL_015b:
	{
		bool L_55;
		L_55 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)128))), /*hidden argument*/NULL);
		String_t* L_56 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_57 = __this->get_m_Info_18();
		NullCheck(L_57);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_58 = L_57->get_address_of_Offset_3();
		uint16_t L_59 = L_58->get_User_1();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_60 = V_2;
		int32_t L_61 = V_1;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_62 = __this->get_m_Info_18();
		NullCheck(L_62);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_63 = L_62->get_address_of_Offset_3();
		uint16_t L_64 = L_63->get_Host_2();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_65 = __this->get_m_Info_18();
		NullCheck(L_65);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_66 = L_65->get_address_of_Offset_3();
		uint16_t L_67 = L_66->get_User_1();
		NullCheck(L_56);
		String_CopyTo_mF77EF8D4E5ABBD2AB7F509FFE9C0C70DC15A27E1(L_56, L_59, L_60, L_61, ((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)L_67)), /*hidden argument*/NULL);
		int32_t L_68 = V_1;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_69 = __this->get_m_Info_18();
		NullCheck(L_69);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_70 = L_69->get_address_of_Offset_3();
		uint16_t L_71 = L_70->get_Host_2();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_72 = __this->get_m_Info_18();
		NullCheck(L_72);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_73 = L_72->get_address_of_Offset_3();
		uint16_t L_74 = L_73->get_User_1();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_71, (int32_t)L_74))));
		goto IL_0307;
	}

IL_01cf:
	{
		String_t* L_75 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_76 = __this->get_m_Info_18();
		NullCheck(L_76);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_77 = L_76->get_address_of_Offset_3();
		uint16_t L_78 = L_77->get_User_1();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_79 = __this->get_m_Info_18();
		NullCheck(L_79);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_80 = L_79->get_address_of_Offset_3();
		uint16_t L_81 = L_80->get_Host_2();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_82 = V_2;
		bool L_83;
		L_83 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)524288))), /*hidden argument*/NULL);
		G_B19_0 = ((int32_t)92);
		G_B19_1 = ((int32_t)47);
		G_B19_2 = ((int32_t)64);
		G_B19_3 = (&V_1);
		G_B19_4 = L_82;
		G_B19_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)1));
		G_B19_6 = L_78;
		G_B19_7 = L_75;
		if (L_83)
		{
			G_B20_0 = ((int32_t)92);
			G_B20_1 = ((int32_t)47);
			G_B20_2 = ((int32_t)64);
			G_B20_3 = (&V_1);
			G_B20_4 = L_82;
			G_B20_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)1));
			G_B20_6 = L_78;
			G_B20_7 = L_75;
			goto IL_0211;
		}
	}
	{
		G_B21_0 = 3;
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		G_B21_3 = G_B19_2;
		G_B21_4 = G_B19_3;
		G_B21_5 = G_B19_4;
		G_B21_6 = G_B19_5;
		G_B21_7 = G_B19_6;
		G_B21_8 = G_B19_7;
		goto IL_0212;
	}

IL_0211:
	{
		G_B21_0 = 2;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		G_B21_3 = G_B20_2;
		G_B21_4 = G_B20_3;
		G_B21_5 = G_B20_4;
		G_B21_6 = G_B20_5;
		G_B21_7 = G_B20_6;
		G_B21_8 = G_B20_7;
	}

IL_0212:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_84 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_85;
		L_85 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(G_B21_8, G_B21_7, G_B21_6, G_B21_5, (int32_t*)G_B21_4, G_B21_3, G_B21_2, G_B21_1, G_B21_0, L_84, (bool)0, /*hidden argument*/NULL);
		V_2 = L_85;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_86 = V_2;
		int32_t L_87 = V_1;
		int32_t L_88 = L_87;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (Il2CppChar)((int32_t)64));
		goto IL_0307;
	}

IL_022d:
	{
		String_t* L_89 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_90 = __this->get_m_Info_18();
		NullCheck(L_90);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_91 = L_90->get_address_of_Offset_3();
		uint16_t L_92 = L_91->get_User_1();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_93 = __this->get_m_Info_18();
		NullCheck(L_93);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_94 = L_93->get_address_of_Offset_3();
		uint16_t L_95 = L_94->get_Host_2();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_96 = V_2;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_97 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_98;
		L_98 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(L_89, L_92, L_95, L_96, (int32_t*)(&V_1), ((int32_t)65535), ((int32_t)65535), ((int32_t)65535), ((int32_t)10), L_97, (bool)0, /*hidden argument*/NULL);
		V_2 = L_98;
		goto IL_0307;
	}

IL_0279:
	{
		String_t* L_99 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_100 = __this->get_m_Info_18();
		NullCheck(L_100);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_101 = L_100->get_address_of_Offset_3();
		uint16_t L_102 = L_101->get_User_1();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_103 = __this->get_m_Info_18();
		NullCheck(L_103);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_104 = L_103->get_address_of_Offset_3();
		uint16_t L_105 = L_104->get_Host_2();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_106 = V_2;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_107 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_108;
		L_108 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(L_99, L_102, L_105, L_106, (int32_t*)(&V_1), ((int32_t)65535), ((int32_t)65535), ((int32_t)65535), 0, L_107, (bool)0, /*hidden argument*/NULL);
		V_2 = L_108;
		goto IL_0307;
	}

IL_02c1:
	{
		String_t* L_109 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_110 = __this->get_m_Info_18();
		NullCheck(L_110);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_111 = L_110->get_address_of_Offset_3();
		uint16_t L_112 = L_111->get_User_1();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_113 = __this->get_m_Info_18();
		NullCheck(L_113);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_114 = L_113->get_address_of_Offset_3();
		uint16_t L_115 = L_114->get_Host_2();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_116 = V_2;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_117 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_118;
		L_118 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(L_109, L_112, L_115, L_116, (int32_t*)(&V_1), ((int32_t)65535), ((int32_t)65535), ((int32_t)65535), 0, L_117, (bool)0, /*hidden argument*/NULL);
	}

IL_0307:
	{
		int32_t L_119 = ___parts0;
		if ((!(((uint32_t)L_119) == ((uint32_t)2))))
		{
			goto IL_030f;
		}
	}
	{
		int32_t L_120 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_120, (int32_t)1));
	}

IL_030f:
	{
		int32_t L_121 = ___parts0;
		if (!((int32_t)((int32_t)L_121&(int32_t)4)))
		{
			goto IL_041d;
		}
	}
	{
		String_t* L_122 = V_0;
		NullCheck(L_122);
		int32_t L_123;
		L_123 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_122, /*hidden argument*/NULL);
		if (!L_123)
		{
			goto IL_041d;
		}
	}
	{
		int32_t L_124 = ___formatAs2;
		if ((((int32_t)L_124) == ((int32_t)1)))
		{
			goto IL_0357;
		}
	}
	{
		uint64_t L_125;
		L_125 = Uri_get_HostType_m6C142BC37D44CF1F53D80627455BC6B1CB747820(__this, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_125) == ((uint64_t)((int64_t)((int64_t)((int32_t)327680)))))))
		{
			goto IL_0357;
		}
	}
	{
		uint16_t L_126 = ___nonCanonical1;
		if (!((int32_t)((int32_t)L_126&(int32_t)4)))
		{
			goto IL_0357;
		}
	}
	{
		int32_t L_127 = ___formatAs2;
		if ((((int32_t)L_127) == ((int32_t)2)))
		{
			goto IL_0351;
		}
	}
	{
		bool L_128;
		L_128 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)524288))), /*hidden argument*/NULL);
		if (L_128)
		{
			goto IL_034e;
		}
	}
	{
		G_B37_0 = 3;
		goto IL_0353;
	}

IL_034e:
	{
		G_B37_0 = 2;
		goto IL_0353;
	}

IL_0351:
	{
		G_B37_0 = ((int32_t)10);
	}

IL_0353:
	{
		V_4 = G_B37_0;
		goto IL_035a;
	}

IL_0357:
	{
		V_4 = 0;
	}

IL_035a:
	{
		int32_t L_129 = ___parts0;
		if (!((int32_t)((int32_t)L_129&(int32_t)((int32_t)256))))
		{
			goto IL_039a;
		}
	}
	{
		String_t* L_130 = V_0;
		V_6 = L_130;
		String_t* L_131 = V_6;
		V_5 = (Il2CppChar*)((uintptr_t)L_131);
		Il2CppChar* L_132 = V_5;
		if (!L_132)
		{
			goto IL_0379;
		}
	}
	{
		Il2CppChar* L_133 = V_5;
		int32_t L_134;
		L_134 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_5 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_133, (int32_t)L_134));
	}

IL_0379:
	{
		V_7 = (bool)0;
		V_8 = (bool)0;
	}

IL_037f:
	try
	{// begin try (depth: 1)
		Il2CppChar* L_135 = V_5;
		String_t* L_136 = V_0;
		NullCheck(L_136);
		int32_t L_137;
		L_137 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_136, /*hidden argument*/NULL);
		String_t* L_138;
		L_138 = DomainNameHelper_UnicodeEquivalent_m3F187B69AA5313A516F863666C0A29292C8F07A3((Il2CppChar*)(Il2CppChar*)L_135, 0, L_137, (bool*)(&V_7), (bool*)(&V_8), /*hidden argument*/NULL);
		V_0 = L_138;
		goto IL_0397;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0394;
		}
		throw e;
	}

CATCH_0394:
	{// begin catch(System.UriFormatException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0397;
	}// end catch (depth: 1)

IL_0397:
	{
		V_6 = (String_t*)NULL;
	}

IL_039a:
	{
		String_t* L_139 = V_0;
		String_t* L_140 = V_0;
		NullCheck(L_140);
		int32_t L_141;
		L_141 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_140, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_142 = V_2;
		int32_t L_143 = V_4;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_144 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_145;
		L_145 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(L_139, 0, L_141, L_142, (int32_t*)(&V_1), ((int32_t)47), ((int32_t)63), ((int32_t)35), L_143, L_144, (bool)0, /*hidden argument*/NULL);
		V_2 = L_145;
		int32_t L_146 = ___parts0;
		if (!((int32_t)((int32_t)L_146&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_041d;
		}
	}
	{
		uint64_t L_147;
		L_147 = Uri_get_HostType_m6C142BC37D44CF1F53D80627455BC6B1CB747820(__this, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_147) == ((uint64_t)((int64_t)((int64_t)((int32_t)65536)))))))
		{
			goto IL_041d;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_148 = __this->get_m_Info_18();
		NullCheck(L_148);
		String_t* L_149 = L_148->get_ScopeId_1();
		if (!L_149)
		{
			goto IL_041d;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_150 = __this->get_m_Info_18();
		NullCheck(L_150);
		String_t* L_151 = L_150->get_ScopeId_1();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_152 = V_2;
		int32_t L_153 = V_1;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_154 = __this->get_m_Info_18();
		NullCheck(L_154);
		String_t* L_155 = L_154->get_ScopeId_1();
		NullCheck(L_155);
		int32_t L_156;
		L_156 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_155, /*hidden argument*/NULL);
		NullCheck(L_151);
		String_CopyTo_mF77EF8D4E5ABBD2AB7F509FFE9C0C70DC15A27E1(L_151, 0, L_152, ((int32_t)il2cpp_codegen_subtract((int32_t)L_153, (int32_t)1)), L_156, /*hidden argument*/NULL);
		int32_t L_157 = V_1;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_158 = __this->get_m_Info_18();
		NullCheck(L_158);
		String_t* L_159 = L_158->get_ScopeId_1();
		NullCheck(L_159);
		int32_t L_160;
		L_160 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_159, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_157, (int32_t)L_160));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_161 = V_2;
		int32_t L_162 = V_1;
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_162, (int32_t)1))), (Il2CppChar)((int32_t)93));
	}

IL_041d:
	{
		int32_t L_163 = ___parts0;
		if (!((int32_t)((int32_t)L_163&(int32_t)8)))
		{
			goto IL_055d;
		}
	}
	{
		uint16_t L_164 = ___nonCanonical1;
		if (((int32_t)((int32_t)L_164&(int32_t)8)))
		{
			goto IL_04fc;
		}
	}
	{
		bool L_165;
		L_165 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)8388608))), /*hidden argument*/NULL);
		if (!L_165)
		{
			goto IL_04a1;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_166 = __this->get_m_Info_18();
		NullCheck(L_166);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_167 = L_166->get_address_of_Offset_3();
		uint16_t L_168 = L_167->get_Path_4();
		V_9 = L_168;
	}

IL_044d:
	{
		String_t* L_169 = __this->get_m_String_13();
		uint16_t L_170 = V_9;
		int32_t L_171 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_170, (int32_t)1))));
		V_9 = (uint16_t)L_171;
		NullCheck(L_169);
		Il2CppChar L_172;
		L_172 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_169, L_171, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_172) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_044d;
		}
	}
	{
		String_t* L_173 = __this->get_m_String_13();
		uint16_t L_174 = V_9;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_175 = V_2;
		int32_t L_176 = V_1;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_177 = __this->get_m_Info_18();
		NullCheck(L_177);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_178 = L_177->get_address_of_Offset_3();
		uint16_t L_179 = L_178->get_Path_4();
		uint16_t L_180 = V_9;
		NullCheck(L_173);
		String_CopyTo_mF77EF8D4E5ABBD2AB7F509FFE9C0C70DC15A27E1(L_173, L_174, L_175, L_176, ((int32_t)il2cpp_codegen_subtract((int32_t)L_179, (int32_t)L_180)), /*hidden argument*/NULL);
		int32_t L_181 = V_1;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_182 = __this->get_m_Info_18();
		NullCheck(L_182);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_183 = L_182->get_address_of_Offset_3();
		uint16_t L_184 = L_183->get_Path_4();
		uint16_t L_185 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_181, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_184, (int32_t)L_185))));
		goto IL_055d;
	}

IL_04a1:
	{
		int32_t L_186 = ___parts0;
		if (!((int32_t)((int32_t)L_186&(int32_t)((int32_t)128))))
		{
			goto IL_055d;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_187 = __this->get_m_Syntax_15();
		NullCheck(L_187);
		int32_t L_188;
		L_188 = UriParser_get_DefaultPort_m7ECA5BE839D36C7FF854FEA0795D8DE701487D33_inline(L_187, /*hidden argument*/NULL);
		if ((((int32_t)L_188) == ((int32_t)(-1))))
		{
			goto IL_055d;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_189 = V_2;
		int32_t L_190 = V_1;
		int32_t L_191 = L_190;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_191, (int32_t)1));
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(L_191), (Il2CppChar)((int32_t)58));
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_192 = __this->get_m_Info_18();
		NullCheck(L_192);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_193 = L_192->get_address_of_Offset_3();
		uint16_t* L_194 = L_193->get_address_of_PortValue_3();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_195;
		L_195 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_196;
		L_196 = UInt16_ToString_m960B640F8B0C181A9185FCD0921B2F85106FE336((uint16_t*)L_194, L_195, /*hidden argument*/NULL);
		V_0 = L_196;
		String_t* L_197 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_198 = V_2;
		int32_t L_199 = V_1;
		String_t* L_200 = V_0;
		NullCheck(L_200);
		int32_t L_201;
		L_201 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_200, /*hidden argument*/NULL);
		NullCheck(L_197);
		String_CopyTo_mF77EF8D4E5ABBD2AB7F509FFE9C0C70DC15A27E1(L_197, 0, L_198, L_199, L_201, /*hidden argument*/NULL);
		int32_t L_202 = V_1;
		String_t* L_203 = V_0;
		NullCheck(L_203);
		int32_t L_204;
		L_204 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_203, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_202, (int32_t)L_204));
		goto IL_055d;
	}

IL_04fc:
	{
		bool L_205;
		L_205 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)8388608))), /*hidden argument*/NULL);
		if (L_205)
		{
			goto IL_0521;
		}
	}
	{
		int32_t L_206 = ___parts0;
		if (!((int32_t)((int32_t)L_206&(int32_t)((int32_t)128))))
		{
			goto IL_055d;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_207 = __this->get_m_Syntax_15();
		NullCheck(L_207);
		int32_t L_208;
		L_208 = UriParser_get_DefaultPort_m7ECA5BE839D36C7FF854FEA0795D8DE701487D33_inline(L_207, /*hidden argument*/NULL);
		if ((((int32_t)L_208) == ((int32_t)(-1))))
		{
			goto IL_055d;
		}
	}

IL_0521:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_209 = V_2;
		int32_t L_210 = V_1;
		int32_t L_211 = L_210;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_211, (int32_t)1));
		NullCheck(L_209);
		(L_209)->SetAt(static_cast<il2cpp_array_size_t>(L_211), (Il2CppChar)((int32_t)58));
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_212 = __this->get_m_Info_18();
		NullCheck(L_212);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_213 = L_212->get_address_of_Offset_3();
		uint16_t* L_214 = L_213->get_address_of_PortValue_3();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_215;
		L_215 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_216;
		L_216 = UInt16_ToString_m960B640F8B0C181A9185FCD0921B2F85106FE336((uint16_t*)L_214, L_215, /*hidden argument*/NULL);
		V_0 = L_216;
		String_t* L_217 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_218 = V_2;
		int32_t L_219 = V_1;
		String_t* L_220 = V_0;
		NullCheck(L_220);
		int32_t L_221;
		L_221 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_220, /*hidden argument*/NULL);
		NullCheck(L_217);
		String_CopyTo_mF77EF8D4E5ABBD2AB7F509FFE9C0C70DC15A27E1(L_217, 0, L_218, L_219, L_221, /*hidden argument*/NULL);
		int32_t L_222 = V_1;
		String_t* L_223 = V_0;
		NullCheck(L_223);
		int32_t L_224;
		L_224 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_223, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_222, (int32_t)L_224));
	}

IL_055d:
	{
		int32_t L_225 = ___parts0;
		if (!((int32_t)((int32_t)L_225&(int32_t)((int32_t)16))))
		{
			goto IL_05a7;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_226 = V_2;
		int32_t L_227 = ___formatAs2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_228;
		L_228 = Uri_GetCanonicalPath_mA187EAD590C890FE0623CF7B1EFF4364B57FAF10(__this, L_226, (int32_t*)(&V_1), L_227, /*hidden argument*/NULL);
		V_2 = L_228;
		int32_t L_229 = ___parts0;
		if ((!(((uint32_t)L_229) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_05a7;
		}
	}
	{
		bool L_230;
		L_230 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)1048576))), /*hidden argument*/NULL);
		if (!L_230)
		{
			goto IL_0593;
		}
	}
	{
		int32_t L_231 = V_1;
		if (!L_231)
		{
			goto IL_0593;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_232 = V_2;
		NullCheck(L_232);
		int32_t L_233 = 0;
		uint16_t L_234 = (uint16_t)(L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		if ((!(((uint32_t)L_234) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0593;
		}
	}
	{
		V_3 = (uint16_t)1;
		int32_t L_235 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_235, (int32_t)1));
		goto IL_0595;
	}

IL_0593:
	{
		V_3 = (uint16_t)0;
	}

IL_0595:
	{
		int32_t L_236 = V_1;
		if (!L_236)
		{
			goto IL_05a1;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_237 = V_2;
		uint16_t L_238 = V_3;
		int32_t L_239 = V_1;
		String_t* L_240;
		L_240 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_237, L_238, L_239, /*hidden argument*/NULL);
		return L_240;
	}

IL_05a1:
	{
		String_t* L_241 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_241;
	}

IL_05a7:
	{
		int32_t L_242 = ___parts0;
		if (!((int32_t)((int32_t)L_242&(int32_t)((int32_t)32))))
		{
			goto IL_0792;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_243 = __this->get_m_Info_18();
		NullCheck(L_243);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_244 = L_243->get_address_of_Offset_3();
		uint16_t L_245 = L_244->get_Query_5();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_246 = __this->get_m_Info_18();
		NullCheck(L_246);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_247 = L_246->get_address_of_Offset_3();
		uint16_t L_248 = L_247->get_Fragment_6();
		if ((((int32_t)L_245) >= ((int32_t)L_248)))
		{
			goto IL_0792;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_249 = __this->get_m_Info_18();
		NullCheck(L_249);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_250 = L_249->get_address_of_Offset_3();
		uint16_t L_251 = L_250->get_Query_5();
		V_3 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_251, (int32_t)1))));
		int32_t L_252 = ___parts0;
		if ((((int32_t)L_252) == ((int32_t)((int32_t)32))))
		{
			goto IL_05f7;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_253 = V_2;
		int32_t L_254 = V_1;
		int32_t L_255 = L_254;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_255, (int32_t)1));
		NullCheck(L_253);
		(L_253)->SetAt(static_cast<il2cpp_array_size_t>(L_255), (Il2CppChar)((int32_t)63));
	}

IL_05f7:
	{
		uint16_t L_256 = ___nonCanonical1;
		if (!((int32_t)((int32_t)L_256&(int32_t)((int32_t)32))))
		{
			goto IL_075b;
		}
	}
	{
		int32_t L_257 = ___formatAs2;
		if ((((int32_t)L_257) == ((int32_t)1)))
		{
			goto IL_0618;
		}
	}
	{
		int32_t L_258 = ___formatAs2;
		if ((((int32_t)L_258) == ((int32_t)2)))
		{
			goto IL_06dd;
		}
	}
	{
		int32_t L_259 = ___formatAs2;
		if ((((int32_t)L_259) == ((int32_t)((int32_t)32767))))
		{
			goto IL_0691;
		}
	}
	{
		goto IL_0714;
	}

IL_0618:
	{
		bool L_260;
		L_260 = Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969(__this, ((int64_t)((int64_t)((int32_t)524288))), /*hidden argument*/NULL);
		if (!L_260)
		{
			goto IL_0655;
		}
	}
	{
		String_t* L_261 = __this->get_m_String_13();
		uint16_t L_262 = V_3;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_263 = __this->get_m_Info_18();
		NullCheck(L_263);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_264 = L_263->get_address_of_Offset_3();
		uint16_t L_265 = L_264->get_Fragment_6();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_266 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_267;
		L_267 = UriHelper_EscapeString_m322E8737F58BBAF891A75032EC1800BE548F84D7(L_261, L_262, L_265, L_266, (int32_t*)(&V_1), (bool)1, ((int32_t)35), ((int32_t)65535), ((int32_t)37), /*hidden argument*/NULL);
		V_2 = L_267;
		goto IL_0792;
	}

IL_0655:
	{
		String_t* L_268 = __this->get_m_String_13();
		uint16_t L_269 = V_3;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_270 = __this->get_m_Info_18();
		NullCheck(L_270);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_271 = L_270->get_address_of_Offset_3();
		uint16_t L_272 = L_271->get_Fragment_6();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_273 = V_2;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_274 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_275;
		L_275 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(L_268, L_269, L_272, L_273, (int32_t*)(&V_1), ((int32_t)65535), ((int32_t)65535), ((int32_t)65535), 0, L_274, (bool)1, /*hidden argument*/NULL);
		goto IL_0792;
	}

IL_0691:
	{
		String_t* L_276 = __this->get_m_String_13();
		uint16_t L_277 = V_3;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_278 = __this->get_m_Info_18();
		NullCheck(L_278);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_279 = L_278->get_address_of_Offset_3();
		uint16_t L_280 = L_279->get_Fragment_6();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_281 = V_2;
		bool L_282;
		L_282 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)524288))), /*hidden argument*/NULL);
		G_B86_0 = ((int32_t)65535);
		G_B86_1 = ((int32_t)65535);
		G_B86_2 = ((int32_t)35);
		G_B86_3 = (&V_1);
		G_B86_4 = L_281;
		G_B86_5 = L_280;
		G_B86_6 = L_277;
		G_B86_7 = L_276;
		if (L_282)
		{
			G_B87_0 = ((int32_t)65535);
			G_B87_1 = ((int32_t)65535);
			G_B87_2 = ((int32_t)35);
			G_B87_3 = (&V_1);
			G_B87_4 = L_281;
			G_B87_5 = L_280;
			G_B87_6 = L_277;
			G_B87_7 = L_276;
			goto IL_06c8;
		}
	}
	{
		G_B88_0 = 3;
		G_B88_1 = G_B86_0;
		G_B88_2 = G_B86_1;
		G_B88_3 = G_B86_2;
		G_B88_4 = G_B86_3;
		G_B88_5 = G_B86_4;
		G_B88_6 = G_B86_5;
		G_B88_7 = G_B86_6;
		G_B88_8 = G_B86_7;
		goto IL_06c9;
	}

IL_06c8:
	{
		G_B88_0 = 2;
		G_B88_1 = G_B87_0;
		G_B88_2 = G_B87_1;
		G_B88_3 = G_B87_2;
		G_B88_4 = G_B87_3;
		G_B88_5 = G_B87_4;
		G_B88_6 = G_B87_5;
		G_B88_7 = G_B87_6;
		G_B88_8 = G_B87_7;
	}

IL_06c9:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_283 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_284;
		L_284 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(G_B88_8, G_B88_7, G_B88_6, G_B88_5, (int32_t*)G_B88_4, G_B88_3, G_B88_2, G_B88_1, ((int32_t)((int32_t)G_B88_0|(int32_t)4)), L_283, (bool)1, /*hidden argument*/NULL);
		V_2 = L_284;
		goto IL_0792;
	}

IL_06dd:
	{
		String_t* L_285 = __this->get_m_String_13();
		uint16_t L_286 = V_3;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_287 = __this->get_m_Info_18();
		NullCheck(L_287);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_288 = L_287->get_address_of_Offset_3();
		uint16_t L_289 = L_288->get_Fragment_6();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_290 = V_2;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_291 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_292;
		L_292 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(L_285, L_286, L_289, L_290, (int32_t*)(&V_1), ((int32_t)35), ((int32_t)65535), ((int32_t)65535), ((int32_t)10), L_291, (bool)1, /*hidden argument*/NULL);
		V_2 = L_292;
		goto IL_0792;
	}

IL_0714:
	{
		String_t* L_293 = __this->get_m_String_13();
		uint16_t L_294 = V_3;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_295 = __this->get_m_Info_18();
		NullCheck(L_295);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_296 = L_295->get_address_of_Offset_3();
		uint16_t L_297 = L_296->get_Fragment_6();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_298 = V_2;
		bool L_299;
		L_299 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)524288))), /*hidden argument*/NULL);
		G_B91_0 = ((int32_t)65535);
		G_B91_1 = ((int32_t)65535);
		G_B91_2 = ((int32_t)35);
		G_B91_3 = (&V_1);
		G_B91_4 = L_298;
		G_B91_5 = L_297;
		G_B91_6 = L_294;
		G_B91_7 = L_293;
		if (L_299)
		{
			G_B92_0 = ((int32_t)65535);
			G_B92_1 = ((int32_t)65535);
			G_B92_2 = ((int32_t)35);
			G_B92_3 = (&V_1);
			G_B92_4 = L_298;
			G_B92_5 = L_297;
			G_B92_6 = L_294;
			G_B92_7 = L_293;
			goto IL_074b;
		}
	}
	{
		G_B93_0 = 3;
		G_B93_1 = G_B91_0;
		G_B93_2 = G_B91_1;
		G_B93_3 = G_B91_2;
		G_B93_4 = G_B91_3;
		G_B93_5 = G_B91_4;
		G_B93_6 = G_B91_5;
		G_B93_7 = G_B91_6;
		G_B93_8 = G_B91_7;
		goto IL_074c;
	}

IL_074b:
	{
		G_B93_0 = 2;
		G_B93_1 = G_B92_0;
		G_B93_2 = G_B92_1;
		G_B93_3 = G_B92_2;
		G_B93_4 = G_B92_3;
		G_B93_5 = G_B92_4;
		G_B93_6 = G_B92_5;
		G_B93_7 = G_B92_6;
		G_B93_8 = G_B92_7;
	}

IL_074c:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_300 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_301;
		L_301 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(G_B93_8, G_B93_7, G_B93_6, G_B93_5, (int32_t*)G_B93_4, G_B93_3, G_B93_2, G_B93_1, G_B93_0, L_300, (bool)1, /*hidden argument*/NULL);
		V_2 = L_301;
		goto IL_0792;
	}

IL_075b:
	{
		String_t* L_302 = __this->get_m_String_13();
		uint16_t L_303 = V_3;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_304 = __this->get_m_Info_18();
		NullCheck(L_304);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_305 = L_304->get_address_of_Offset_3();
		uint16_t L_306 = L_305->get_Fragment_6();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_307 = V_2;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_308 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_309;
		L_309 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(L_302, L_303, L_306, L_307, (int32_t*)(&V_1), ((int32_t)65535), ((int32_t)65535), ((int32_t)65535), 0, L_308, (bool)1, /*hidden argument*/NULL);
	}

IL_0792:
	{
		int32_t L_310 = ___parts0;
		if (!((int32_t)((int32_t)L_310&(int32_t)((int32_t)64))))
		{
			goto IL_098e;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_311 = __this->get_m_Info_18();
		NullCheck(L_311);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_312 = L_311->get_address_of_Offset_3();
		uint16_t L_313 = L_312->get_Fragment_6();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_314 = __this->get_m_Info_18();
		NullCheck(L_314);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_315 = L_314->get_address_of_Offset_3();
		uint16_t L_316 = L_315->get_End_7();
		if ((((int32_t)L_313) >= ((int32_t)L_316)))
		{
			goto IL_098e;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_317 = __this->get_m_Info_18();
		NullCheck(L_317);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_318 = L_317->get_address_of_Offset_3();
		uint16_t L_319 = L_318->get_Fragment_6();
		V_3 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_319, (int32_t)1))));
		int32_t L_320 = ___parts0;
		if ((((int32_t)L_320) == ((int32_t)((int32_t)64))))
		{
			goto IL_07e2;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_321 = V_2;
		int32_t L_322 = V_1;
		int32_t L_323 = L_322;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_323, (int32_t)1));
		NullCheck(L_321);
		(L_321)->SetAt(static_cast<il2cpp_array_size_t>(L_323), (Il2CppChar)((int32_t)35));
	}

IL_07e2:
	{
		uint16_t L_324 = ___nonCanonical1;
		if (!((int32_t)((int32_t)L_324&(int32_t)((int32_t)64))))
		{
			goto IL_0957;
		}
	}
	{
		int32_t L_325 = ___formatAs2;
		if ((((int32_t)L_325) == ((int32_t)1)))
		{
			goto IL_0806;
		}
	}
	{
		int32_t L_326 = ___formatAs2;
		if ((((int32_t)L_326) == ((int32_t)2)))
		{
			goto IL_08d9;
		}
	}
	{
		int32_t L_327 = ___formatAs2;
		if ((((int32_t)L_327) == ((int32_t)((int32_t)32767))))
		{
			goto IL_088d;
		}
	}
	{
		goto IL_0910;
	}

IL_0806:
	{
		bool L_328;
		L_328 = Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969(__this, ((int64_t)((int64_t)((int32_t)524288))), /*hidden argument*/NULL);
		if (!L_328)
		{
			goto IL_0851;
		}
	}
	{
		String_t* L_329 = __this->get_m_String_13();
		uint16_t L_330 = V_3;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_331 = __this->get_m_Info_18();
		NullCheck(L_331);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_332 = L_331->get_address_of_Offset_3();
		uint16_t L_333 = L_332->get_End_7();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_334 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		bool L_335;
		L_335 = UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2(/*hidden argument*/NULL);
		G_B106_0 = 1;
		G_B106_1 = (&V_1);
		G_B106_2 = L_334;
		G_B106_3 = L_333;
		G_B106_4 = L_330;
		G_B106_5 = L_329;
		if (L_335)
		{
			G_B107_0 = 1;
			G_B107_1 = (&V_1);
			G_B107_2 = L_334;
			G_B107_3 = L_333;
			G_B107_4 = L_330;
			G_B107_5 = L_329;
			goto IL_083d;
		}
	}
	{
		G_B108_0 = ((int32_t)65535);
		G_B108_1 = G_B106_0;
		G_B108_2 = G_B106_1;
		G_B108_3 = G_B106_2;
		G_B108_4 = G_B106_3;
		G_B108_5 = G_B106_4;
		G_B108_6 = G_B106_5;
		goto IL_083f;
	}

IL_083d:
	{
		G_B108_0 = ((int32_t)35);
		G_B108_1 = G_B107_0;
		G_B108_2 = G_B107_1;
		G_B108_3 = G_B107_2;
		G_B108_4 = G_B107_3;
		G_B108_5 = G_B107_4;
		G_B108_6 = G_B107_5;
	}

IL_083f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_336;
		L_336 = UriHelper_EscapeString_m322E8737F58BBAF891A75032EC1800BE548F84D7(G_B108_6, G_B108_5, G_B108_4, G_B108_3, (int32_t*)G_B108_2, (bool)G_B108_1, G_B108_0, ((int32_t)65535), ((int32_t)37), /*hidden argument*/NULL);
		V_2 = L_336;
		goto IL_098e;
	}

IL_0851:
	{
		String_t* L_337 = __this->get_m_String_13();
		uint16_t L_338 = V_3;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_339 = __this->get_m_Info_18();
		NullCheck(L_339);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_340 = L_339->get_address_of_Offset_3();
		uint16_t L_341 = L_340->get_End_7();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_342 = V_2;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_343 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_344;
		L_344 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(L_337, L_338, L_341, L_342, (int32_t*)(&V_1), ((int32_t)65535), ((int32_t)65535), ((int32_t)65535), 0, L_343, (bool)0, /*hidden argument*/NULL);
		goto IL_098e;
	}

IL_088d:
	{
		String_t* L_345 = __this->get_m_String_13();
		uint16_t L_346 = V_3;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_347 = __this->get_m_Info_18();
		NullCheck(L_347);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_348 = L_347->get_address_of_Offset_3();
		uint16_t L_349 = L_348->get_End_7();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_350 = V_2;
		bool L_351;
		L_351 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)524288))), /*hidden argument*/NULL);
		G_B111_0 = ((int32_t)65535);
		G_B111_1 = ((int32_t)65535);
		G_B111_2 = ((int32_t)35);
		G_B111_3 = (&V_1);
		G_B111_4 = L_350;
		G_B111_5 = L_349;
		G_B111_6 = L_346;
		G_B111_7 = L_345;
		if (L_351)
		{
			G_B112_0 = ((int32_t)65535);
			G_B112_1 = ((int32_t)65535);
			G_B112_2 = ((int32_t)35);
			G_B112_3 = (&V_1);
			G_B112_4 = L_350;
			G_B112_5 = L_349;
			G_B112_6 = L_346;
			G_B112_7 = L_345;
			goto IL_08c4;
		}
	}
	{
		G_B113_0 = 3;
		G_B113_1 = G_B111_0;
		G_B113_2 = G_B111_1;
		G_B113_3 = G_B111_2;
		G_B113_4 = G_B111_3;
		G_B113_5 = G_B111_4;
		G_B113_6 = G_B111_5;
		G_B113_7 = G_B111_6;
		G_B113_8 = G_B111_7;
		goto IL_08c5;
	}

IL_08c4:
	{
		G_B113_0 = 2;
		G_B113_1 = G_B112_0;
		G_B113_2 = G_B112_1;
		G_B113_3 = G_B112_2;
		G_B113_4 = G_B112_3;
		G_B113_5 = G_B112_4;
		G_B113_6 = G_B112_5;
		G_B113_7 = G_B112_6;
		G_B113_8 = G_B112_7;
	}

IL_08c5:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_352 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_353;
		L_353 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(G_B113_8, G_B113_7, G_B113_6, G_B113_5, (int32_t*)G_B113_4, G_B113_3, G_B113_2, G_B113_1, ((int32_t)((int32_t)G_B113_0|(int32_t)4)), L_352, (bool)0, /*hidden argument*/NULL);
		V_2 = L_353;
		goto IL_098e;
	}

IL_08d9:
	{
		String_t* L_354 = __this->get_m_String_13();
		uint16_t L_355 = V_3;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_356 = __this->get_m_Info_18();
		NullCheck(L_356);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_357 = L_356->get_address_of_Offset_3();
		uint16_t L_358 = L_357->get_End_7();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_359 = V_2;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_360 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_361;
		L_361 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(L_354, L_355, L_358, L_359, (int32_t*)(&V_1), ((int32_t)35), ((int32_t)65535), ((int32_t)65535), ((int32_t)10), L_360, (bool)0, /*hidden argument*/NULL);
		V_2 = L_361;
		goto IL_098e;
	}

IL_0910:
	{
		String_t* L_362 = __this->get_m_String_13();
		uint16_t L_363 = V_3;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_364 = __this->get_m_Info_18();
		NullCheck(L_364);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_365 = L_364->get_address_of_Offset_3();
		uint16_t L_366 = L_365->get_End_7();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_367 = V_2;
		bool L_368;
		L_368 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)524288))), /*hidden argument*/NULL);
		G_B116_0 = ((int32_t)65535);
		G_B116_1 = ((int32_t)65535);
		G_B116_2 = ((int32_t)35);
		G_B116_3 = (&V_1);
		G_B116_4 = L_367;
		G_B116_5 = L_366;
		G_B116_6 = L_363;
		G_B116_7 = L_362;
		if (L_368)
		{
			G_B117_0 = ((int32_t)65535);
			G_B117_1 = ((int32_t)65535);
			G_B117_2 = ((int32_t)35);
			G_B117_3 = (&V_1);
			G_B117_4 = L_367;
			G_B117_5 = L_366;
			G_B117_6 = L_363;
			G_B117_7 = L_362;
			goto IL_0947;
		}
	}
	{
		G_B118_0 = 3;
		G_B118_1 = G_B116_0;
		G_B118_2 = G_B116_1;
		G_B118_3 = G_B116_2;
		G_B118_4 = G_B116_3;
		G_B118_5 = G_B116_4;
		G_B118_6 = G_B116_5;
		G_B118_7 = G_B116_6;
		G_B118_8 = G_B116_7;
		goto IL_0948;
	}

IL_0947:
	{
		G_B118_0 = 2;
		G_B118_1 = G_B117_0;
		G_B118_2 = G_B117_1;
		G_B118_3 = G_B117_2;
		G_B118_4 = G_B117_3;
		G_B118_5 = G_B117_4;
		G_B118_6 = G_B117_5;
		G_B118_7 = G_B117_6;
		G_B118_8 = G_B117_7;
	}

IL_0948:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_369 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_370;
		L_370 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(G_B118_8, G_B118_7, G_B118_6, G_B118_5, (int32_t*)G_B118_4, G_B118_3, G_B118_2, G_B118_1, G_B118_0, L_369, (bool)0, /*hidden argument*/NULL);
		V_2 = L_370;
		goto IL_098e;
	}

IL_0957:
	{
		String_t* L_371 = __this->get_m_String_13();
		uint16_t L_372 = V_3;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_373 = __this->get_m_Info_18();
		NullCheck(L_373);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_374 = L_373->get_address_of_Offset_3();
		uint16_t L_375 = L_374->get_End_7();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_376 = V_2;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_377 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_378;
		L_378 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(L_371, L_372, L_375, L_376, (int32_t*)(&V_1), ((int32_t)65535), ((int32_t)65535), ((int32_t)65535), 0, L_377, (bool)0, /*hidden argument*/NULL);
	}

IL_098e:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_379 = V_2;
		int32_t L_380 = V_1;
		String_t* L_381;
		L_381 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_379, 0, L_380, /*hidden argument*/NULL);
		return L_381;
	}
}
// System.String System.Uri::GetUriPartsFromUserString(System.UriComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_GetUriPartsFromUserString_m81B60C6E31AB8EA51438E391F7990334B96ACD29 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___uriParts0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	{
		int32_t L_0 = ___uriParts0;
		V_1 = ((int32_t)((int32_t)L_0&(int32_t)((int32_t)-1073741825)));
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)64))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_3 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0469;
			}
			case 1:
			{
				goto IL_090c;
			}
			case 2:
			{
				goto IL_0992;
			}
			case 3:
			{
				goto IL_04b6;
			}
		}
	}
	{
		int32_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)13))))
		{
			case 0:
			{
				goto IL_00b3;
			}
			case 1:
			{
				goto IL_06ad;
			}
			case 2:
			{
				goto IL_03b9;
			}
			case 3:
			{
				goto IL_0532;
			}
		}
	}
	{
		goto IL_0992;
	}

IL_0048:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)32))))
		{
			goto IL_05e5;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)48))))
		{
			goto IL_0793;
		}
	}
	{
		int32_t L_7 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)61))))
		{
			case 0:
			{
				goto IL_02ba;
			}
			case 1:
			{
				goto IL_0992;
			}
			case 2:
			{
				goto IL_03f6;
			}
			case 3:
			{
				goto IL_0649;
			}
		}
	}
	{
		goto IL_0992;
	}

IL_0076:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)125))))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)112))))
		{
			goto IL_08cf;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)125))))
		{
			goto IL_07d0;
		}
	}
	{
		goto IL_0992;
	}

IL_0090:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)127))))
		{
			goto IL_0247;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)132))))
		{
			goto IL_017c;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)134))))
		{
			goto IL_0713;
		}
	}
	{
		goto IL_0992;
	}

IL_00b3:
	{
		bool L_14;
		L_14 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)2097152))), /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00fe;
		}
	}
	{
		String_t* L_15 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_16 = __this->get_m_Info_18();
		NullCheck(L_16);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_17 = L_16->get_address_of_Offset_3();
		uint16_t L_18 = L_17->get_Scheme_0();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_19 = __this->get_m_Info_18();
		NullCheck(L_19);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_20 = L_19->get_address_of_Offset_3();
		uint16_t L_21 = L_20->get_Path_4();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_22 = __this->get_m_Info_18();
		NullCheck(L_22);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_23 = L_22->get_address_of_Offset_3();
		uint16_t L_24 = L_23->get_Scheme_0();
		NullCheck(L_15);
		String_t* L_25;
		L_25 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_15, L_18, ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_24)), /*hidden argument*/NULL);
		return L_25;
	}

IL_00fe:
	{
		String_t* L_26 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_27 = __this->get_m_Info_18();
		NullCheck(L_27);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_28 = L_27->get_address_of_Offset_3();
		uint16_t L_29 = L_28->get_Scheme_0();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_30 = __this->get_m_Info_18();
		NullCheck(L_30);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_31 = L_30->get_address_of_Offset_3();
		uint16_t L_32 = L_31->get_User_1();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_33 = __this->get_m_Info_18();
		NullCheck(L_33);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_34 = L_33->get_address_of_Offset_3();
		uint16_t L_35 = L_34->get_Scheme_0();
		NullCheck(L_26);
		String_t* L_36;
		L_36 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_26, L_29, ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_35)), /*hidden argument*/NULL);
		String_t* L_37 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_38 = __this->get_m_Info_18();
		NullCheck(L_38);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_39 = L_38->get_address_of_Offset_3();
		uint16_t L_40 = L_39->get_Host_2();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_41 = __this->get_m_Info_18();
		NullCheck(L_41);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_42 = L_41->get_address_of_Offset_3();
		uint16_t L_43 = L_42->get_Path_4();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_44 = __this->get_m_Info_18();
		NullCheck(L_44);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_45 = L_44->get_address_of_Offset_3();
		uint16_t L_46 = L_45->get_Host_2();
		NullCheck(L_37);
		String_t* L_47;
		L_47 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_37, L_40, ((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)L_46)), /*hidden argument*/NULL);
		String_t* L_48;
		L_48 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_36, L_47, /*hidden argument*/NULL);
		return L_48;
	}

IL_017c:
	{
		bool L_49;
		L_49 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)2097152))), /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_0713;
		}
	}
	{
		bool L_50;
		L_50 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)8388608))), /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_01a9;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_51 = __this->get_m_Syntax_15();
		NullCheck(L_51);
		int32_t L_52;
		L_52 = UriParser_get_DefaultPort_m7ECA5BE839D36C7FF854FEA0795D8DE701487D33_inline(L_51, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_52) == ((uint32_t)(-1)))))
		{
			goto IL_01e6;
		}
	}

IL_01a9:
	{
		String_t* L_53 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_54 = __this->get_m_Info_18();
		NullCheck(L_54);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_55 = L_54->get_address_of_Offset_3();
		uint16_t L_56 = L_55->get_Host_2();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_57 = __this->get_m_Info_18();
		NullCheck(L_57);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_58 = L_57->get_address_of_Offset_3();
		uint16_t L_59 = L_58->get_Path_4();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_60 = __this->get_m_Info_18();
		NullCheck(L_60);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_61 = L_60->get_address_of_Offset_3();
		uint16_t L_62 = L_61->get_Host_2();
		NullCheck(L_53);
		String_t* L_63;
		L_63 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_53, L_56, ((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)L_62)), /*hidden argument*/NULL);
		return L_63;
	}

IL_01e6:
	{
		String_t* L_64 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_65 = __this->get_m_Info_18();
		NullCheck(L_65);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_66 = L_65->get_address_of_Offset_3();
		uint16_t L_67 = L_66->get_Host_2();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_68 = __this->get_m_Info_18();
		NullCheck(L_68);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_69 = L_68->get_address_of_Offset_3();
		uint16_t L_70 = L_69->get_Path_4();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_71 = __this->get_m_Info_18();
		NullCheck(L_71);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_72 = L_71->get_address_of_Offset_3();
		uint16_t L_73 = L_72->get_Host_2();
		NullCheck(L_64);
		String_t* L_74;
		L_74 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_64, L_67, ((int32_t)il2cpp_codegen_subtract((int32_t)L_70, (int32_t)L_73)), /*hidden argument*/NULL);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_75 = __this->get_m_Info_18();
		NullCheck(L_75);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_76 = L_75->get_address_of_Offset_3();
		uint16_t* L_77 = L_76->get_address_of_PortValue_3();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_78;
		L_78 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_79;
		L_79 = UInt16_ToString_m960B640F8B0C181A9185FCD0921B2F85106FE336((uint16_t*)L_77, L_78, /*hidden argument*/NULL);
		String_t* L_80;
		L_80 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_74, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_79, /*hidden argument*/NULL);
		return L_80;
	}

IL_0247:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_81 = __this->get_m_Info_18();
		NullCheck(L_81);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_82 = L_81->get_address_of_Offset_3();
		uint16_t L_83 = L_82->get_Scheme_0();
		if (L_83)
		{
			goto IL_027d;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_84 = __this->get_m_Info_18();
		NullCheck(L_84);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_85 = L_84->get_address_of_Offset_3();
		uint16_t L_86 = L_85->get_End_7();
		String_t* L_87 = __this->get_m_String_13();
		NullCheck(L_87);
		int32_t L_88;
		L_88 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_87, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_86) == ((uint32_t)L_88))))
		{
			goto IL_027d;
		}
	}
	{
		String_t* L_89 = __this->get_m_String_13();
		return L_89;
	}

IL_027d:
	{
		String_t* L_90 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_91 = __this->get_m_Info_18();
		NullCheck(L_91);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_92 = L_91->get_address_of_Offset_3();
		uint16_t L_93 = L_92->get_Scheme_0();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_94 = __this->get_m_Info_18();
		NullCheck(L_94);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_95 = L_94->get_address_of_Offset_3();
		uint16_t L_96 = L_95->get_End_7();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_97 = __this->get_m_Info_18();
		NullCheck(L_97);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_98 = L_97->get_address_of_Offset_3();
		uint16_t L_99 = L_98->get_Scheme_0();
		NullCheck(L_90);
		String_t* L_100;
		L_100 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_90, L_93, ((int32_t)il2cpp_codegen_subtract((int32_t)L_96, (int32_t)L_99)), /*hidden argument*/NULL);
		return L_100;
	}

IL_02ba:
	{
		bool L_101;
		L_101 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)2097152))), /*hidden argument*/NULL);
		if (!L_101)
		{
			goto IL_0346;
		}
	}
	{
		String_t* L_102 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_103 = __this->get_m_Info_18();
		NullCheck(L_103);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_104 = L_103->get_address_of_Offset_3();
		uint16_t L_105 = L_104->get_Scheme_0();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_106 = __this->get_m_Info_18();
		NullCheck(L_106);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_107 = L_106->get_address_of_Offset_3();
		uint16_t L_108 = L_107->get_User_1();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_109 = __this->get_m_Info_18();
		NullCheck(L_109);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_110 = L_109->get_address_of_Offset_3();
		uint16_t L_111 = L_110->get_Scheme_0();
		NullCheck(L_102);
		String_t* L_112;
		L_112 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_102, L_105, ((int32_t)il2cpp_codegen_subtract((int32_t)L_108, (int32_t)L_111)), /*hidden argument*/NULL);
		String_t* L_113 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_114 = __this->get_m_Info_18();
		NullCheck(L_114);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_115 = L_114->get_address_of_Offset_3();
		uint16_t L_116 = L_115->get_Host_2();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_117 = __this->get_m_Info_18();
		NullCheck(L_117);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_118 = L_117->get_address_of_Offset_3();
		uint16_t L_119 = L_118->get_Fragment_6();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_120 = __this->get_m_Info_18();
		NullCheck(L_120);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_121 = L_120->get_address_of_Offset_3();
		uint16_t L_122 = L_121->get_Host_2();
		NullCheck(L_113);
		String_t* L_123;
		L_123 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_113, L_116, ((int32_t)il2cpp_codegen_subtract((int32_t)L_119, (int32_t)L_122)), /*hidden argument*/NULL);
		String_t* L_124;
		L_124 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_112, L_123, /*hidden argument*/NULL);
		return L_124;
	}

IL_0346:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_125 = __this->get_m_Info_18();
		NullCheck(L_125);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_126 = L_125->get_address_of_Offset_3();
		uint16_t L_127 = L_126->get_Scheme_0();
		if (L_127)
		{
			goto IL_037c;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_128 = __this->get_m_Info_18();
		NullCheck(L_128);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_129 = L_128->get_address_of_Offset_3();
		uint16_t L_130 = L_129->get_Fragment_6();
		String_t* L_131 = __this->get_m_String_13();
		NullCheck(L_131);
		int32_t L_132;
		L_132 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_131, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_130) == ((uint32_t)L_132))))
		{
			goto IL_037c;
		}
	}
	{
		String_t* L_133 = __this->get_m_String_13();
		return L_133;
	}

IL_037c:
	{
		String_t* L_134 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_135 = __this->get_m_Info_18();
		NullCheck(L_135);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_136 = L_135->get_address_of_Offset_3();
		uint16_t L_137 = L_136->get_Scheme_0();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_138 = __this->get_m_Info_18();
		NullCheck(L_138);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_139 = L_138->get_address_of_Offset_3();
		uint16_t L_140 = L_139->get_Fragment_6();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_141 = __this->get_m_Info_18();
		NullCheck(L_141);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_142 = L_141->get_address_of_Offset_3();
		uint16_t L_143 = L_142->get_Scheme_0();
		NullCheck(L_134);
		String_t* L_144;
		L_144 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_134, L_137, ((int32_t)il2cpp_codegen_subtract((int32_t)L_140, (int32_t)L_143)), /*hidden argument*/NULL);
		return L_144;
	}

IL_03b9:
	{
		String_t* L_145 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_146 = __this->get_m_Info_18();
		NullCheck(L_146);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_147 = L_146->get_address_of_Offset_3();
		uint16_t L_148 = L_147->get_Scheme_0();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_149 = __this->get_m_Info_18();
		NullCheck(L_149);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_150 = L_149->get_address_of_Offset_3();
		uint16_t L_151 = L_150->get_Path_4();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_152 = __this->get_m_Info_18();
		NullCheck(L_152);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_153 = L_152->get_address_of_Offset_3();
		uint16_t L_154 = L_153->get_Scheme_0();
		NullCheck(L_145);
		String_t* L_155;
		L_155 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_145, L_148, ((int32_t)il2cpp_codegen_subtract((int32_t)L_151, (int32_t)L_154)), /*hidden argument*/NULL);
		return L_155;
	}

IL_03f6:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_156 = __this->get_m_Info_18();
		NullCheck(L_156);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_157 = L_156->get_address_of_Offset_3();
		uint16_t L_158 = L_157->get_Scheme_0();
		if (L_158)
		{
			goto IL_042c;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_159 = __this->get_m_Info_18();
		NullCheck(L_159);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_160 = L_159->get_address_of_Offset_3();
		uint16_t L_161 = L_160->get_Fragment_6();
		String_t* L_162 = __this->get_m_String_13();
		NullCheck(L_162);
		int32_t L_163;
		L_163 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_162, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_161) == ((uint32_t)L_163))))
		{
			goto IL_042c;
		}
	}
	{
		String_t* L_164 = __this->get_m_String_13();
		return L_164;
	}

IL_042c:
	{
		String_t* L_165 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_166 = __this->get_m_Info_18();
		NullCheck(L_166);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_167 = L_166->get_address_of_Offset_3();
		uint16_t L_168 = L_167->get_Scheme_0();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_169 = __this->get_m_Info_18();
		NullCheck(L_169);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_170 = L_169->get_address_of_Offset_3();
		uint16_t L_171 = L_170->get_Fragment_6();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_172 = __this->get_m_Info_18();
		NullCheck(L_172);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_173 = L_172->get_address_of_Offset_3();
		uint16_t L_174 = L_173->get_Scheme_0();
		NullCheck(L_165);
		String_t* L_175;
		L_175 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_165, L_168, ((int32_t)il2cpp_codegen_subtract((int32_t)L_171, (int32_t)L_174)), /*hidden argument*/NULL);
		return L_175;
	}

IL_0469:
	{
		int32_t L_176 = ___uriParts0;
		if ((((int32_t)L_176) == ((int32_t)1)))
		{
			goto IL_04aa;
		}
	}
	{
		String_t* L_177 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_178 = __this->get_m_Info_18();
		NullCheck(L_178);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_179 = L_178->get_address_of_Offset_3();
		uint16_t L_180 = L_179->get_Scheme_0();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_181 = __this->get_m_Info_18();
		NullCheck(L_181);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_182 = L_181->get_address_of_Offset_3();
		uint16_t L_183 = L_182->get_User_1();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_184 = __this->get_m_Info_18();
		NullCheck(L_184);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_185 = L_184->get_address_of_Offset_3();
		uint16_t L_186 = L_185->get_Scheme_0();
		NullCheck(L_177);
		String_t* L_187;
		L_187 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_177, L_180, ((int32_t)il2cpp_codegen_subtract((int32_t)L_183, (int32_t)L_186)), /*hidden argument*/NULL);
		return L_187;
	}

IL_04aa:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_188 = __this->get_m_Syntax_15();
		NullCheck(L_188);
		String_t* L_189;
		L_189 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_188, /*hidden argument*/NULL);
		return L_189;
	}

IL_04b6:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_190 = __this->get_m_Info_18();
		NullCheck(L_190);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_191 = L_190->get_address_of_Offset_3();
		uint16_t L_192 = L_191->get_Path_4();
		V_2 = L_192;
		bool L_193;
		L_193 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)8388616))), /*hidden argument*/NULL);
		if (!L_193)
		{
			goto IL_04ea;
		}
	}

IL_04d5:
	{
		String_t* L_194 = __this->get_m_String_13();
		uint16_t L_195 = V_2;
		int32_t L_196 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_195, (int32_t)1))));
		V_2 = (uint16_t)L_196;
		NullCheck(L_194);
		Il2CppChar L_197;
		L_197 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_194, L_196, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_197) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_04d5;
		}
	}

IL_04ea:
	{
		uint16_t L_198 = V_2;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_199 = __this->get_m_Info_18();
		NullCheck(L_199);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_200 = L_199->get_address_of_Offset_3();
		uint16_t L_201 = L_200->get_Host_2();
		if (!((int32_t)il2cpp_codegen_subtract((int32_t)L_198, (int32_t)L_201)))
		{
			goto IL_052c;
		}
	}
	{
		String_t* L_202 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_203 = __this->get_m_Info_18();
		NullCheck(L_203);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_204 = L_203->get_address_of_Offset_3();
		uint16_t L_205 = L_204->get_Host_2();
		uint16_t L_206 = V_2;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_207 = __this->get_m_Info_18();
		NullCheck(L_207);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_208 = L_207->get_address_of_Offset_3();
		uint16_t L_209 = L_208->get_Host_2();
		NullCheck(L_202);
		String_t* L_210;
		L_210 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_202, L_205, ((int32_t)il2cpp_codegen_subtract((int32_t)L_206, (int32_t)L_209)), /*hidden argument*/NULL);
		return L_210;
	}

IL_052c:
	{
		String_t* L_211 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_211;
	}

IL_0532:
	{
		int32_t L_212 = ___uriParts0;
		if ((!(((uint32_t)L_212) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_059c;
		}
	}
	{
		bool L_213;
		L_213 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)1048576))), /*hidden argument*/NULL);
		if (!L_213)
		{
			goto IL_059c;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_214 = __this->get_m_Info_18();
		NullCheck(L_214);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_215 = L_214->get_address_of_Offset_3();
		uint16_t L_216 = L_215->get_End_7();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_217 = __this->get_m_Info_18();
		NullCheck(L_217);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_218 = L_217->get_address_of_Offset_3();
		uint16_t L_219 = L_218->get_Path_4();
		if ((((int32_t)L_216) <= ((int32_t)L_219)))
		{
			goto IL_059c;
		}
	}
	{
		String_t* L_220 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_221 = __this->get_m_Info_18();
		NullCheck(L_221);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_222 = L_221->get_address_of_Offset_3();
		uint16_t L_223 = L_222->get_Path_4();
		NullCheck(L_220);
		Il2CppChar L_224;
		L_224 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_220, L_223, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_224) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_059c;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_225 = __this->get_m_Info_18();
		NullCheck(L_225);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_226 = L_225->get_address_of_Offset_3();
		uint16_t L_227 = L_226->get_Path_4();
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_227, (int32_t)1))));
		goto IL_05ad;
	}

IL_059c:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_228 = __this->get_m_Info_18();
		NullCheck(L_228);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_229 = L_228->get_address_of_Offset_3();
		uint16_t L_230 = L_229->get_Path_4();
		V_0 = L_230;
	}

IL_05ad:
	{
		uint16_t L_231 = V_0;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_232 = __this->get_m_Info_18();
		NullCheck(L_232);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_233 = L_232->get_address_of_Offset_3();
		uint16_t L_234 = L_233->get_Query_5();
		if ((((int32_t)L_231) < ((int32_t)L_234)))
		{
			goto IL_05c6;
		}
	}
	{
		String_t* L_235 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_235;
	}

IL_05c6:
	{
		String_t* L_236 = __this->get_m_String_13();
		uint16_t L_237 = V_0;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_238 = __this->get_m_Info_18();
		NullCheck(L_238);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_239 = L_238->get_address_of_Offset_3();
		uint16_t L_240 = L_239->get_Query_5();
		uint16_t L_241 = V_0;
		NullCheck(L_236);
		String_t* L_242;
		L_242 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_236, L_237, ((int32_t)il2cpp_codegen_subtract((int32_t)L_240, (int32_t)L_241)), /*hidden argument*/NULL);
		return L_242;
	}

IL_05e5:
	{
		int32_t L_243 = ___uriParts0;
		if ((!(((uint32_t)L_243) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0600;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_244 = __this->get_m_Info_18();
		NullCheck(L_244);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_245 = L_244->get_address_of_Offset_3();
		uint16_t L_246 = L_245->get_Query_5();
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_246, (int32_t)1))));
		goto IL_0611;
	}

IL_0600:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_247 = __this->get_m_Info_18();
		NullCheck(L_247);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_248 = L_247->get_address_of_Offset_3();
		uint16_t L_249 = L_248->get_Query_5();
		V_0 = L_249;
	}

IL_0611:
	{
		uint16_t L_250 = V_0;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_251 = __this->get_m_Info_18();
		NullCheck(L_251);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_252 = L_251->get_address_of_Offset_3();
		uint16_t L_253 = L_252->get_Fragment_6();
		if ((((int32_t)L_250) < ((int32_t)L_253)))
		{
			goto IL_062a;
		}
	}
	{
		String_t* L_254 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_254;
	}

IL_062a:
	{
		String_t* L_255 = __this->get_m_String_13();
		uint16_t L_256 = V_0;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_257 = __this->get_m_Info_18();
		NullCheck(L_257);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_258 = L_257->get_address_of_Offset_3();
		uint16_t L_259 = L_258->get_Fragment_6();
		uint16_t L_260 = V_0;
		NullCheck(L_255);
		String_t* L_261;
		L_261 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_255, L_256, ((int32_t)il2cpp_codegen_subtract((int32_t)L_259, (int32_t)L_260)), /*hidden argument*/NULL);
		return L_261;
	}

IL_0649:
	{
		int32_t L_262 = ___uriParts0;
		if ((!(((uint32_t)L_262) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_0664;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_263 = __this->get_m_Info_18();
		NullCheck(L_263);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_264 = L_263->get_address_of_Offset_3();
		uint16_t L_265 = L_264->get_Fragment_6();
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_265, (int32_t)1))));
		goto IL_0675;
	}

IL_0664:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_266 = __this->get_m_Info_18();
		NullCheck(L_266);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_267 = L_266->get_address_of_Offset_3();
		uint16_t L_268 = L_267->get_Fragment_6();
		V_0 = L_268;
	}

IL_0675:
	{
		uint16_t L_269 = V_0;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_270 = __this->get_m_Info_18();
		NullCheck(L_270);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_271 = L_270->get_address_of_Offset_3();
		uint16_t L_272 = L_271->get_End_7();
		if ((((int32_t)L_269) < ((int32_t)L_272)))
		{
			goto IL_068e;
		}
	}
	{
		String_t* L_273 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_273;
	}

IL_068e:
	{
		String_t* L_274 = __this->get_m_String_13();
		uint16_t L_275 = V_0;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_276 = __this->get_m_Info_18();
		NullCheck(L_276);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_277 = L_276->get_address_of_Offset_3();
		uint16_t L_278 = L_277->get_End_7();
		uint16_t L_279 = V_0;
		NullCheck(L_274);
		String_t* L_280;
		L_280 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_274, L_275, ((int32_t)il2cpp_codegen_subtract((int32_t)L_278, (int32_t)L_279)), /*hidden argument*/NULL);
		return L_280;
	}

IL_06ad:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_281 = __this->get_m_Info_18();
		NullCheck(L_281);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_282 = L_281->get_address_of_Offset_3();
		uint16_t L_283 = L_282->get_Path_4();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_284 = __this->get_m_Info_18();
		NullCheck(L_284);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_285 = L_284->get_address_of_Offset_3();
		uint16_t L_286 = L_285->get_User_1();
		if (!((int32_t)il2cpp_codegen_subtract((int32_t)L_283, (int32_t)L_286)))
		{
			goto IL_070d;
		}
	}
	{
		String_t* L_287 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_288 = __this->get_m_Info_18();
		NullCheck(L_288);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_289 = L_288->get_address_of_Offset_3();
		uint16_t L_290 = L_289->get_User_1();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_291 = __this->get_m_Info_18();
		NullCheck(L_291);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_292 = L_291->get_address_of_Offset_3();
		uint16_t L_293 = L_292->get_Path_4();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_294 = __this->get_m_Info_18();
		NullCheck(L_294);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_295 = L_294->get_address_of_Offset_3();
		uint16_t L_296 = L_295->get_User_1();
		NullCheck(L_287);
		String_t* L_297;
		L_297 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_287, L_290, ((int32_t)il2cpp_codegen_subtract((int32_t)L_293, (int32_t)L_296)), /*hidden argument*/NULL);
		return L_297;
	}

IL_070d:
	{
		String_t* L_298 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_298;
	}

IL_0713:
	{
		bool L_299;
		L_299 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)8388608))), /*hidden argument*/NULL);
		if (L_299)
		{
			goto IL_06ad;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_300 = __this->get_m_Syntax_15();
		NullCheck(L_300);
		int32_t L_301;
		L_301 = UriParser_get_DefaultPort_m7ECA5BE839D36C7FF854FEA0795D8DE701487D33_inline(L_300, /*hidden argument*/NULL);
		if ((((int32_t)L_301) == ((int32_t)(-1))))
		{
			goto IL_06ad;
		}
	}
	{
		String_t* L_302 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_303 = __this->get_m_Info_18();
		NullCheck(L_303);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_304 = L_303->get_address_of_Offset_3();
		uint16_t L_305 = L_304->get_User_1();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_306 = __this->get_m_Info_18();
		NullCheck(L_306);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_307 = L_306->get_address_of_Offset_3();
		uint16_t L_308 = L_307->get_Path_4();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_309 = __this->get_m_Info_18();
		NullCheck(L_309);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_310 = L_309->get_address_of_Offset_3();
		uint16_t L_311 = L_310->get_User_1();
		NullCheck(L_302);
		String_t* L_312;
		L_312 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_302, L_305, ((int32_t)il2cpp_codegen_subtract((int32_t)L_308, (int32_t)L_311)), /*hidden argument*/NULL);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_313 = __this->get_m_Info_18();
		NullCheck(L_313);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_314 = L_313->get_address_of_Offset_3();
		uint16_t* L_315 = L_314->get_address_of_PortValue_3();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_316;
		L_316 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_317;
		L_317 = UInt16_ToString_m960B640F8B0C181A9185FCD0921B2F85106FE336((uint16_t*)L_315, L_316, /*hidden argument*/NULL);
		String_t* L_318;
		L_318 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_312, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_317, /*hidden argument*/NULL);
		return L_318;
	}

IL_0793:
	{
		String_t* L_319 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_320 = __this->get_m_Info_18();
		NullCheck(L_320);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_321 = L_320->get_address_of_Offset_3();
		uint16_t L_322 = L_321->get_Path_4();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_323 = __this->get_m_Info_18();
		NullCheck(L_323);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_324 = L_323->get_address_of_Offset_3();
		uint16_t L_325 = L_324->get_Fragment_6();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_326 = __this->get_m_Info_18();
		NullCheck(L_326);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_327 = L_326->get_address_of_Offset_3();
		uint16_t L_328 = L_327->get_Path_4();
		NullCheck(L_319);
		String_t* L_329;
		L_329 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_319, L_322, ((int32_t)il2cpp_codegen_subtract((int32_t)L_325, (int32_t)L_328)), /*hidden argument*/NULL);
		return L_329;
	}

IL_07d0:
	{
		bool L_330;
		L_330 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)2097152))), /*hidden argument*/NULL);
		if (!L_330)
		{
			goto IL_085c;
		}
	}
	{
		String_t* L_331 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_332 = __this->get_m_Info_18();
		NullCheck(L_332);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_333 = L_332->get_address_of_Offset_3();
		uint16_t L_334 = L_333->get_Scheme_0();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_335 = __this->get_m_Info_18();
		NullCheck(L_335);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_336 = L_335->get_address_of_Offset_3();
		uint16_t L_337 = L_336->get_User_1();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_338 = __this->get_m_Info_18();
		NullCheck(L_338);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_339 = L_338->get_address_of_Offset_3();
		uint16_t L_340 = L_339->get_Scheme_0();
		NullCheck(L_331);
		String_t* L_341;
		L_341 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_331, L_334, ((int32_t)il2cpp_codegen_subtract((int32_t)L_337, (int32_t)L_340)), /*hidden argument*/NULL);
		String_t* L_342 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_343 = __this->get_m_Info_18();
		NullCheck(L_343);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_344 = L_343->get_address_of_Offset_3();
		uint16_t L_345 = L_344->get_Host_2();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_346 = __this->get_m_Info_18();
		NullCheck(L_346);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_347 = L_346->get_address_of_Offset_3();
		uint16_t L_348 = L_347->get_End_7();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_349 = __this->get_m_Info_18();
		NullCheck(L_349);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_350 = L_349->get_address_of_Offset_3();
		uint16_t L_351 = L_350->get_Host_2();
		NullCheck(L_342);
		String_t* L_352;
		L_352 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_342, L_345, ((int32_t)il2cpp_codegen_subtract((int32_t)L_348, (int32_t)L_351)), /*hidden argument*/NULL);
		String_t* L_353;
		L_353 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_341, L_352, /*hidden argument*/NULL);
		return L_353;
	}

IL_085c:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_354 = __this->get_m_Info_18();
		NullCheck(L_354);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_355 = L_354->get_address_of_Offset_3();
		uint16_t L_356 = L_355->get_Scheme_0();
		if (L_356)
		{
			goto IL_0892;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_357 = __this->get_m_Info_18();
		NullCheck(L_357);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_358 = L_357->get_address_of_Offset_3();
		uint16_t L_359 = L_358->get_End_7();
		String_t* L_360 = __this->get_m_String_13();
		NullCheck(L_360);
		int32_t L_361;
		L_361 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_360, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_359) == ((uint32_t)L_361))))
		{
			goto IL_0892;
		}
	}
	{
		String_t* L_362 = __this->get_m_String_13();
		return L_362;
	}

IL_0892:
	{
		String_t* L_363 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_364 = __this->get_m_Info_18();
		NullCheck(L_364);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_365 = L_364->get_address_of_Offset_3();
		uint16_t L_366 = L_365->get_Scheme_0();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_367 = __this->get_m_Info_18();
		NullCheck(L_367);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_368 = L_367->get_address_of_Offset_3();
		uint16_t L_369 = L_368->get_End_7();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_370 = __this->get_m_Info_18();
		NullCheck(L_370);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_371 = L_370->get_address_of_Offset_3();
		uint16_t L_372 = L_371->get_Scheme_0();
		NullCheck(L_363);
		String_t* L_373;
		L_373 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_363, L_366, ((int32_t)il2cpp_codegen_subtract((int32_t)L_369, (int32_t)L_372)), /*hidden argument*/NULL);
		return L_373;
	}

IL_08cf:
	{
		String_t* L_374 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_375 = __this->get_m_Info_18();
		NullCheck(L_375);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_376 = L_375->get_address_of_Offset_3();
		uint16_t L_377 = L_376->get_Path_4();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_378 = __this->get_m_Info_18();
		NullCheck(L_378);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_379 = L_378->get_address_of_Offset_3();
		uint16_t L_380 = L_379->get_End_7();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_381 = __this->get_m_Info_18();
		NullCheck(L_381);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_382 = L_381->get_address_of_Offset_3();
		uint16_t L_383 = L_382->get_Path_4();
		NullCheck(L_374);
		String_t* L_384;
		L_384 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_374, L_377, ((int32_t)il2cpp_codegen_subtract((int32_t)L_380, (int32_t)L_383)), /*hidden argument*/NULL);
		return L_384;
	}

IL_090c:
	{
		bool L_385;
		L_385 = Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969(__this, ((int64_t)((int64_t)((int32_t)2097152))), /*hidden argument*/NULL);
		if (!L_385)
		{
			goto IL_0920;
		}
	}
	{
		String_t* L_386 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_386;
	}

IL_0920:
	{
		int32_t L_387 = ___uriParts0;
		if ((!(((uint32_t)L_387) == ((uint32_t)2))))
		{
			goto IL_093a;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_388 = __this->get_m_Info_18();
		NullCheck(L_388);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_389 = L_388->get_address_of_Offset_3();
		uint16_t L_390 = L_389->get_Host_2();
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_390, (int32_t)1))));
		goto IL_094b;
	}

IL_093a:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_391 = __this->get_m_Info_18();
		NullCheck(L_391);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_392 = L_391->get_address_of_Offset_3();
		uint16_t L_393 = L_392->get_Host_2();
		V_0 = L_393;
	}

IL_094b:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_394 = __this->get_m_Info_18();
		NullCheck(L_394);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_395 = L_394->get_address_of_Offset_3();
		uint16_t L_396 = L_395->get_User_1();
		uint16_t L_397 = V_0;
		if ((((int32_t)L_396) < ((int32_t)L_397)))
		{
			goto IL_0964;
		}
	}
	{
		String_t* L_398 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_398;
	}

IL_0964:
	{
		String_t* L_399 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_400 = __this->get_m_Info_18();
		NullCheck(L_400);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_401 = L_400->get_address_of_Offset_3();
		uint16_t L_402 = L_401->get_User_1();
		uint16_t L_403 = V_0;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_404 = __this->get_m_Info_18();
		NullCheck(L_404);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_405 = L_404->get_address_of_Offset_3();
		uint16_t L_406 = L_405->get_User_1();
		NullCheck(L_399);
		String_t* L_407;
		L_407 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_399, L_402, ((int32_t)il2cpp_codegen_subtract((int32_t)L_403, (int32_t)L_406)), /*hidden argument*/NULL);
		return L_407;
	}

IL_0992:
	{
		return (String_t*)NULL;
	}
}
// System.Void System.Uri::ParseRemaining()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_ParseRemaining_m8C4350479C64906DDE464595F8BE5F8C14F2038D (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	bool V_1 = false;
	uint16_t V_2 = 0;
	uint16_t V_3 = 0;
	uint16_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	Il2CppChar* V_8 = NULL;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint16_t V_11 = 0;
	uint16_t V_12 = 0;
	String_t* V_13 = NULL;
	Il2CppChar* V_14 = NULL;
	uint16_t V_15 = 0;
	String_t* V_16 = NULL;
	Il2CppChar* V_17 = NULL;
	uint16_t V_18 = 0;
	String_t* V_19 = NULL;
	Il2CppChar* V_20 = NULL;
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * V_21 = NULL;
	bool V_22 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	int32_t G_B5_0 = 0;
	int32_t G_B45_0 = 0;
	uint16_t* G_B45_1 = NULL;
	String_t* G_B45_2 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B45_3 = NULL;
	int32_t G_B42_0 = 0;
	uint16_t* G_B42_1 = NULL;
	String_t* G_B42_2 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B42_3 = NULL;
	int32_t G_B44_0 = 0;
	uint16_t* G_B44_1 = NULL;
	String_t* G_B44_2 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B44_3 = NULL;
	int32_t G_B43_0 = 0;
	uint16_t* G_B43_1 = NULL;
	String_t* G_B43_2 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B43_3 = NULL;
	int32_t G_B46_0 = 0;
	int32_t G_B46_1 = 0;
	uint16_t* G_B46_2 = NULL;
	String_t* G_B46_3 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B46_4 = NULL;
	uint16_t G_B63_0 = 0;
	uint16_t* G_B63_1 = NULL;
	Il2CppChar* G_B63_2 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B63_3 = NULL;
	uint16_t G_B60_0 = 0;
	uint16_t* G_B60_1 = NULL;
	Il2CppChar* G_B60_2 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B60_3 = NULL;
	uint16_t G_B62_0 = 0;
	uint16_t* G_B62_1 = NULL;
	Il2CppChar* G_B62_2 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B62_3 = NULL;
	uint16_t G_B61_0 = 0;
	uint16_t* G_B61_1 = NULL;
	Il2CppChar* G_B61_2 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B61_3 = NULL;
	int32_t G_B64_0 = 0;
	uint16_t G_B64_1 = 0;
	uint16_t* G_B64_2 = NULL;
	Il2CppChar* G_B64_3 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B64_4 = NULL;
	int32_t G_B107_0 = 0;
	uint16_t* G_B107_1 = NULL;
	String_t* G_B107_2 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B107_3 = NULL;
	int32_t G_B106_0 = 0;
	uint16_t* G_B106_1 = NULL;
	String_t* G_B106_2 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B106_3 = NULL;
	int32_t G_B108_0 = 0;
	int32_t G_B108_1 = 0;
	uint16_t* G_B108_2 = NULL;
	String_t* G_B108_3 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B108_4 = NULL;
	uint16_t G_B121_0 = 0;
	uint16_t* G_B121_1 = NULL;
	Il2CppChar* G_B121_2 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B121_3 = NULL;
	uint16_t G_B120_0 = 0;
	uint16_t* G_B120_1 = NULL;
	Il2CppChar* G_B120_2 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B120_3 = NULL;
	int32_t G_B122_0 = 0;
	uint16_t G_B122_1 = 0;
	uint16_t* G_B122_2 = NULL;
	Il2CppChar* G_B122_3 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B122_4 = NULL;
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_0;
		L_0 = Uri_EnsureUriInfo_m5FA3DF1CD26867815CE1F247A47530E1D7E35F7E(__this, /*hidden argument*/NULL);
		V_0 = ((int64_t)((int64_t)0));
		bool L_1;
		L_1 = Uri_get_UserDrivenParsing_mF09087D4DE9A0823EBF1FC0C14101335D01393F2(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0822;
		}
	}
	{
		bool L_2 = __this->get_m_iriParsing_19();
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		uint64_t L_3 = __this->get_m_Flags_17();
		if (!((int64_t)((int64_t)L_3&(int64_t)((int64_t)8589934592LL))))
		{
			goto IL_0045;
		}
	}
	{
		uint64_t L_4 = __this->get_m_Flags_17();
		G_B5_0 = ((((int64_t)((int64_t)((int64_t)L_4&(int64_t)((int64_t)34359738368LL)))) == ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B5_0 = 0;
	}

IL_0046:
	{
		V_1 = (bool)G_B5_0;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_5 = __this->get_m_Info_18();
		NullCheck(L_5);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_6 = L_5->get_address_of_Offset_3();
		uint16_t L_7 = L_6->get_Scheme_0();
		V_3 = L_7;
		String_t* L_8 = __this->get_m_String_13();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_8, /*hidden argument*/NULL);
		V_4 = (uint16_t)((int32_t)((uint16_t)L_9));
		V_5 = 0;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_10 = __this->get_m_Syntax_15();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = UriParser_get_Flags_mDAA0D828057CA2CA4493FD152D3760E975BAE7F0_inline(L_10, /*hidden argument*/NULL);
		V_6 = L_11;
		String_t* L_12 = __this->get_m_String_13();
		V_9 = L_12;
		String_t* L_13 = V_9;
		V_8 = (Il2CppChar*)((uintptr_t)L_13);
		Il2CppChar* L_14 = V_8;
		if (!L_14)
		{
			goto IL_0091;
		}
	}
	{
		Il2CppChar* L_15 = V_8;
		int32_t L_16;
		L_16 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_8 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_15, (int32_t)L_16));
	}

IL_0091:
	{
		uint16_t L_17 = V_4;
		uint16_t L_18 = V_3;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_00d1;
		}
	}
	{
		Il2CppChar* L_19 = V_8;
		uint16_t L_20 = V_4;
		int32_t L_21 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_19, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1))), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Uri_IsLWS_m4A41E0157130C65E6768C4F5CFEE2219DAE773B4(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00d1;
		}
	}
	{
		uint16_t L_23 = V_4;
		V_4 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1))));
	}

IL_00af:
	{
		uint16_t L_24 = V_4;
		uint16_t L_25 = V_3;
		if ((((int32_t)L_24) == ((int32_t)L_25)))
		{
			goto IL_00ca;
		}
	}
	{
		Il2CppChar* L_26 = V_8;
		uint16_t L_27 = V_4;
		int32_t L_28 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1))));
		V_4 = (uint16_t)L_28;
		int32_t L_29 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_26, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_28), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Uri_IsLWS_m4A41E0157130C65E6768C4F5CFEE2219DAE773B4(L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_00af;
		}
	}

IL_00ca:
	{
		uint16_t L_31 = V_4;
		V_4 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1))));
	}

IL_00d1:
	{
		bool L_32;
		L_32 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(__this, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00e3;
		}
	}
	{
		uint64_t L_33 = V_0;
		V_0 = ((int64_t)((int64_t)L_33|(int64_t)((int64_t)((int64_t)1))));
		goto IL_016c;
	}

IL_00e3:
	{
		V_10 = (uint16_t)0;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_34 = __this->get_m_Syntax_15();
		NullCheck(L_34);
		String_t* L_35;
		L_35 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		int32_t L_36;
		L_36 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_35, /*hidden argument*/NULL);
		V_11 = (uint16_t)((int32_t)((uint16_t)L_36));
		goto IL_0126;
	}

IL_00fb:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_37 = __this->get_m_Syntax_15();
		NullCheck(L_37);
		String_t* L_38;
		L_38 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_37, /*hidden argument*/NULL);
		uint16_t L_39 = V_10;
		NullCheck(L_38);
		Il2CppChar L_40;
		L_40 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_38, L_39, /*hidden argument*/NULL);
		Il2CppChar* L_41 = V_8;
		uint16_t L_42 = V_3;
		uint16_t L_43 = V_10;
		int32_t L_44 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_41, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)L_43))), (int32_t)2)))));
		if ((((int32_t)L_40) == ((int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		uint64_t L_45 = V_0;
		V_0 = ((int64_t)((int64_t)L_45|(int64_t)((int64_t)((int64_t)1))));
	}

IL_011f:
	{
		uint16_t L_46 = V_10;
		V_10 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1))));
	}

IL_0126:
	{
		uint16_t L_47 = V_10;
		uint16_t L_48 = V_11;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00fb;
		}
	}
	{
		uint64_t L_49 = __this->get_m_Flags_17();
		if (!((int64_t)((int64_t)L_49&(int64_t)((int64_t)((int64_t)((int32_t)1048576))))))
		{
			goto IL_016c;
		}
	}
	{
		uint16_t L_50 = V_3;
		uint16_t L_51 = V_10;
		uint16_t L_52 = V_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)L_51)), (int32_t)3))) >= ((int32_t)L_52)))
		{
			goto IL_0167;
		}
	}
	{
		Il2CppChar* L_53 = V_8;
		uint16_t L_54 = V_3;
		uint16_t L_55 = V_10;
		int32_t L_56 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_53, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)L_55)), (int32_t)1))), (int32_t)2)))));
		if ((!(((uint32_t)L_56) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0167;
		}
	}
	{
		Il2CppChar* L_57 = V_8;
		uint16_t L_58 = V_3;
		uint16_t L_59 = V_10;
		int32_t L_60 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_57, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)L_59)), (int32_t)2))), (int32_t)2)))));
		if ((((int32_t)L_60) == ((int32_t)((int32_t)47))))
		{
			goto IL_016c;
		}
	}

IL_0167:
	{
		uint64_t L_61 = V_0;
		V_0 = ((int64_t)((int64_t)L_61|(int64_t)((int64_t)((int64_t)1))));
	}

IL_016c:
	{
		uint64_t L_62 = __this->get_m_Flags_17();
		if (!((int64_t)((int64_t)L_62&(int64_t)((int64_t)((int64_t)((int32_t)2097152))))))
		{
			goto IL_01e3;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_63 = __this->get_m_Info_18();
		NullCheck(L_63);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_64 = L_63->get_address_of_Offset_3();
		uint16_t L_65 = L_64->get_User_1();
		V_3 = L_65;
		Il2CppChar* L_66 = V_8;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_67 = __this->get_m_Info_18();
		NullCheck(L_67);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_68 = L_67->get_address_of_Offset_3();
		uint16_t L_69 = L_68->get_Host_2();
		int32_t L_70;
		L_70 = Uri_CheckCanonical_mFD937A06DC3885481C374ACDD190A3B3E40152F3(__this, (Il2CppChar*)(Il2CppChar*)L_66, (uint16_t*)(&V_3), L_69, ((int32_t)64), /*hidden argument*/NULL);
		V_5 = L_70;
		int32_t L_71 = V_5;
		if (((int32_t)((int32_t)L_71&(int32_t)2)))
		{
			goto IL_01b5;
		}
	}
	{
		uint64_t L_72 = V_0;
		V_0 = ((int64_t)((int64_t)L_72|(int64_t)((int64_t)((int64_t)2))));
	}

IL_01b5:
	{
		int32_t L_73 = V_5;
		if ((((int32_t)((int32_t)((int32_t)L_73&(int32_t)((int32_t)17)))) == ((int32_t)1)))
		{
			goto IL_01c6;
		}
	}
	{
		uint64_t L_74 = V_0;
		V_0 = ((int64_t)((int64_t)L_74|(int64_t)((int64_t)((int64_t)((int32_t)128)))));
	}

IL_01c6:
	{
		bool L_75 = __this->get_m_iriParsing_19();
		if (!L_75)
		{
			goto IL_01e3;
		}
	}
	{
		int32_t L_76 = V_5;
		if ((!(((uint32_t)((int32_t)((int32_t)L_76&(int32_t)((int32_t)91)))) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_01e3;
		}
	}
	{
		uint64_t L_77 = V_0;
		V_0 = ((int64_t)((int64_t)L_77|(int64_t)((int64_t)549755813888LL)));
	}

IL_01e3:
	{
		V_9 = (String_t*)NULL;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_78 = __this->get_m_Info_18();
		NullCheck(L_78);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_79 = L_78->get_address_of_Offset_3();
		uint16_t L_80 = L_79->get_Path_4();
		V_3 = L_80;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_81 = __this->get_m_Info_18();
		NullCheck(L_81);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_82 = L_81->get_address_of_Offset_3();
		uint16_t L_83 = L_82->get_Path_4();
		V_2 = L_83;
		bool L_84 = V_1;
		if (!L_84)
		{
			goto IL_034b;
		}
	}
	{
		bool L_85;
		L_85 = Uri_get_IsDosPath_m3374B9D26D6B547862ACB2E617AB6F96CA31A5AF(__this, /*hidden argument*/NULL);
		if (!L_85)
		{
			goto IL_0246;
		}
	}
	{
		bool L_86;
		L_86 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(__this, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_022b;
		}
	}
	{
		String_t* L_87 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_String_13(L_87);
		goto IL_0246;
	}

IL_022b:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_88 = __this->get_m_Syntax_15();
		NullCheck(L_88);
		String_t* L_89;
		L_89 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_88, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		String_t* L_90 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_SchemeDelimiter_12();
		String_t* L_91;
		L_91 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_89, L_90, /*hidden argument*/NULL);
		__this->set_m_String_13(L_91);
	}

IL_0246:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_92 = __this->get_m_Info_18();
		NullCheck(L_92);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_93 = L_92->get_address_of_Offset_3();
		String_t* L_94 = __this->get_m_String_13();
		NullCheck(L_94);
		int32_t L_95;
		L_95 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_94, /*hidden argument*/NULL);
		L_93->set_Path_4((uint16_t)((int32_t)((uint16_t)L_95)));
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_96 = __this->get_m_Info_18();
		NullCheck(L_96);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_97 = L_96->get_address_of_Offset_3();
		uint16_t L_98 = L_97->get_Path_4();
		V_3 = L_98;
		uint16_t L_99 = V_2;
		V_12 = L_99;
		bool L_100;
		L_100 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(__this, /*hidden argument*/NULL);
		if (L_100)
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_101 = V_6;
		if (((int32_t)((int32_t)L_101&(int32_t)((int32_t)96))))
		{
			goto IL_02a6;
		}
	}

IL_0285:
	{
		String_t* L_102 = __this->get_m_originalUnicodeString_14();
		String_t* L_103 = __this->get_m_originalUnicodeString_14();
		NullCheck(L_103);
		int32_t L_104;
		L_104 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_103, /*hidden argument*/NULL);
		Uri_FindEndOfComponent_m82D6E67E45114D23F403807E6D711C2A4E574567(__this, L_102, (uint16_t*)(&V_2), (uint16_t)((int32_t)((uint16_t)L_104)), ((int32_t)65535), /*hidden argument*/NULL);
		goto IL_02eb;
	}

IL_02a6:
	{
		String_t* L_105 = __this->get_m_originalUnicodeString_14();
		String_t* L_106 = __this->get_m_originalUnicodeString_14();
		NullCheck(L_106);
		int32_t L_107;
		L_107 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_106, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_108 = __this->get_m_Syntax_15();
		NullCheck(L_108);
		bool L_109;
		L_109 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_108, ((int32_t)32), /*hidden argument*/NULL);
		G_B42_0 = ((int32_t)((uint16_t)L_107));
		G_B42_1 = (&V_2);
		G_B42_2 = L_105;
		G_B42_3 = __this;
		if (L_109)
		{
			G_B45_0 = ((int32_t)((uint16_t)L_107));
			G_B45_1 = (&V_2);
			G_B45_2 = L_105;
			G_B45_3 = __this;
			goto IL_02e4;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_110 = __this->get_m_Syntax_15();
		NullCheck(L_110);
		bool L_111;
		L_111 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_110, ((int32_t)64), /*hidden argument*/NULL);
		G_B43_0 = G_B42_0;
		G_B43_1 = G_B42_1;
		G_B43_2 = G_B42_2;
		G_B43_3 = G_B42_3;
		if (L_111)
		{
			G_B44_0 = G_B42_0;
			G_B44_1 = G_B42_1;
			G_B44_2 = G_B42_2;
			G_B44_3 = G_B42_3;
			goto IL_02e0;
		}
	}
	{
		G_B46_0 = ((int32_t)65534);
		G_B46_1 = G_B43_0;
		G_B46_2 = G_B43_1;
		G_B46_3 = G_B43_2;
		G_B46_4 = G_B43_3;
		goto IL_02e6;
	}

IL_02e0:
	{
		G_B46_0 = ((int32_t)35);
		G_B46_1 = G_B44_0;
		G_B46_2 = G_B44_1;
		G_B46_3 = G_B44_2;
		G_B46_4 = G_B44_3;
		goto IL_02e6;
	}

IL_02e4:
	{
		G_B46_0 = ((int32_t)63);
		G_B46_1 = G_B45_0;
		G_B46_2 = G_B45_1;
		G_B46_3 = G_B45_2;
		G_B46_4 = G_B45_3;
	}

IL_02e6:
	{
		NullCheck(G_B46_4);
		Uri_FindEndOfComponent_m82D6E67E45114D23F403807E6D711C2A4E574567(G_B46_4, G_B46_3, (uint16_t*)G_B46_2, (uint16_t)G_B46_1, G_B46_0, /*hidden argument*/NULL);
	}

IL_02eb:
	{
		String_t* L_112 = __this->get_m_originalUnicodeString_14();
		uint16_t L_113 = V_12;
		uint16_t L_114 = V_2;
		String_t* L_115;
		L_115 = Uri_EscapeUnescapeIri_m606A69B7A76A131D0CA6F562E5DC0721C626E071(__this, L_112, L_113, L_114, ((int32_t)16), /*hidden argument*/NULL);
		V_13 = L_115;
	}

IL_02fe:
	try
	{// begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
			bool L_116;
			L_116 = UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2(/*hidden argument*/NULL);
			if (!L_116)
			{
				goto IL_0320;
			}
		}

IL_0305:
		{
			String_t* L_117 = __this->get_m_String_13();
			String_t* L_118 = V_13;
			NullCheck(L_118);
			String_t* L_119;
			L_119 = String_Normalize_m8CD42072C9F7B418990609EB63C5F7E1328321A9(L_118, 1, /*hidden argument*/NULL);
			String_t* L_120;
			L_120 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_117, L_119, /*hidden argument*/NULL);
			__this->set_m_String_13(L_120);
			goto IL_0333;
		}

IL_0320:
		{
			String_t* L_121 = __this->get_m_String_13();
			String_t* L_122 = V_13;
			String_t* L_123;
			L_123 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_121, L_122, /*hidden argument*/NULL);
			__this->set_m_String_13(L_123);
		}

IL_0333:
		{
			goto IL_033d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0335;
		}
		throw e;
	}

CATCH_0335:
	{// begin catch(System.ArgumentException)
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var)));
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_124;
		L_124 = Uri_GetException_m6A158C16E69136DF56BCF19CC4C7DCCC2601CF84(1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_124, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_ParseRemaining_m8C4350479C64906DDE464595F8BE5F8C14F2038D_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_033d:
	{
		String_t* L_125 = __this->get_m_String_13();
		NullCheck(L_125);
		int32_t L_126;
		L_126 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_125, /*hidden argument*/NULL);
		V_4 = (uint16_t)((int32_t)((uint16_t)L_126));
	}

IL_034b:
	{
		String_t* L_127 = __this->get_m_String_13();
		V_9 = L_127;
		String_t* L_128 = V_9;
		V_14 = (Il2CppChar*)((uintptr_t)L_128);
		Il2CppChar* L_129 = V_14;
		if (!L_129)
		{
			goto IL_0366;
		}
	}
	{
		Il2CppChar* L_130 = V_14;
		int32_t L_131;
		L_131 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_14 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_130, (int32_t)L_131));
	}

IL_0366:
	{
		bool L_132;
		L_132 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(__this, /*hidden argument*/NULL);
		if (L_132)
		{
			goto IL_0375;
		}
	}
	{
		int32_t L_133 = V_6;
		if (((int32_t)((int32_t)L_133&(int32_t)((int32_t)96))))
		{
			goto IL_038a;
		}
	}

IL_0375:
	{
		Il2CppChar* L_134 = V_14;
		uint16_t L_135 = V_4;
		int32_t L_136;
		L_136 = Uri_CheckCanonical_mFD937A06DC3885481C374ACDD190A3B3E40152F3(__this, (Il2CppChar*)(Il2CppChar*)L_134, (uint16_t*)(&V_3), L_135, ((int32_t)65535), /*hidden argument*/NULL);
		V_5 = L_136;
		goto IL_03bb;
	}

IL_038a:
	{
		Il2CppChar* L_137 = V_14;
		uint16_t L_138 = V_4;
		int32_t L_139 = V_6;
		G_B60_0 = L_138;
		G_B60_1 = (&V_3);
		G_B60_2 = L_137;
		G_B60_3 = __this;
		if (((int32_t)((int32_t)L_139&(int32_t)((int32_t)32))))
		{
			G_B63_0 = L_138;
			G_B63_1 = (&V_3);
			G_B63_2 = L_137;
			G_B63_3 = __this;
			goto IL_03b2;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_140 = __this->get_m_Syntax_15();
		NullCheck(L_140);
		bool L_141;
		L_141 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_140, ((int32_t)64), /*hidden argument*/NULL);
		G_B61_0 = G_B60_0;
		G_B61_1 = G_B60_1;
		G_B61_2 = G_B60_2;
		G_B61_3 = G_B60_3;
		if (L_141)
		{
			G_B62_0 = G_B60_0;
			G_B62_1 = G_B60_1;
			G_B62_2 = G_B60_2;
			G_B62_3 = G_B60_3;
			goto IL_03ae;
		}
	}
	{
		G_B64_0 = ((int32_t)65534);
		G_B64_1 = G_B61_0;
		G_B64_2 = G_B61_1;
		G_B64_3 = G_B61_2;
		G_B64_4 = G_B61_3;
		goto IL_03b4;
	}

IL_03ae:
	{
		G_B64_0 = ((int32_t)35);
		G_B64_1 = G_B62_0;
		G_B64_2 = G_B62_1;
		G_B64_3 = G_B62_2;
		G_B64_4 = G_B62_3;
		goto IL_03b4;
	}

IL_03b2:
	{
		G_B64_0 = ((int32_t)63);
		G_B64_1 = G_B63_0;
		G_B64_2 = G_B63_1;
		G_B64_3 = G_B63_2;
		G_B64_4 = G_B63_3;
	}

IL_03b4:
	{
		NullCheck(G_B64_4);
		int32_t L_142;
		L_142 = Uri_CheckCanonical_mFD937A06DC3885481C374ACDD190A3B3E40152F3(G_B64_4, (Il2CppChar*)(Il2CppChar*)G_B64_3, (uint16_t*)G_B64_2, G_B64_1, G_B64_0, /*hidden argument*/NULL);
		V_5 = L_142;
	}

IL_03bb:
	{
		uint64_t L_143 = __this->get_m_Flags_17();
		if (!((int64_t)((int64_t)L_143&(int64_t)((int64_t)((int64_t)((int32_t)1048576))))))
		{
			goto IL_0427;
		}
	}
	{
		int32_t L_144 = V_6;
		if (!((int32_t)((int32_t)L_144&(int32_t)((int32_t)2097152))))
		{
			goto IL_0427;
		}
	}
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_145 = __this->get_m_Info_18();
		NullCheck(L_145);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_146 = L_145->get_address_of_Offset_3();
		uint16_t L_147 = L_146->get_Path_4();
		uint16_t L_148 = V_4;
		if ((((int32_t)L_147) == ((int32_t)L_148)))
		{
			goto IL_041e;
		}
	}
	{
		Il2CppChar* L_149 = V_14;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_150 = __this->get_m_Info_18();
		NullCheck(L_150);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_151 = L_150->get_address_of_Offset_3();
		uint16_t L_152 = L_151->get_Path_4();
		int32_t L_153 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_149, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_152), (int32_t)2)))));
		if ((((int32_t)L_153) == ((int32_t)((int32_t)47))))
		{
			goto IL_0427;
		}
	}
	{
		Il2CppChar* L_154 = V_14;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_155 = __this->get_m_Info_18();
		NullCheck(L_155);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_156 = L_155->get_address_of_Offset_3();
		uint16_t L_157 = L_156->get_Path_4();
		int32_t L_158 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_154, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_157), (int32_t)2)))));
		if ((((int32_t)L_158) == ((int32_t)((int32_t)92))))
		{
			goto IL_0427;
		}
	}

IL_041e:
	{
		uint64_t L_159 = V_0;
		V_0 = ((int64_t)((int64_t)L_159|(int64_t)((int64_t)((int64_t)((int32_t)16384)))));
	}

IL_0427:
	{
		V_9 = (String_t*)NULL;
		V_7 = (bool)0;
		bool L_160;
		L_160 = Uri_get_IsDosPath_m3374B9D26D6B547862ACB2E617AB6F96CA31A5AF(__this, /*hidden argument*/NULL);
		if (L_160)
		{
			goto IL_0463;
		}
	}
	{
		uint64_t L_161 = __this->get_m_Flags_17();
		if (!((int64_t)((int64_t)L_161&(int64_t)((int64_t)((int64_t)((int32_t)1048576))))))
		{
			goto IL_04dd;
		}
	}
	{
		int32_t L_162 = V_6;
		if (((int32_t)((int32_t)L_162&(int32_t)((int32_t)12582912))))
		{
			goto IL_0463;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_163 = __this->get_m_Syntax_15();
		NullCheck(L_163);
		bool L_164;
		L_164 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_163, ((int32_t)33554432), /*hidden argument*/NULL);
		if (!L_164)
		{
			goto IL_04dd;
		}
	}

IL_0463:
	{
		int32_t L_165 = V_5;
		if (!((int32_t)((int32_t)L_165&(int32_t)((int32_t)128))))
		{
			goto IL_048b;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_166 = __this->get_m_Syntax_15();
		NullCheck(L_166);
		bool L_167;
		L_167 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_166, ((int32_t)33554432), /*hidden argument*/NULL);
		if (!L_167)
		{
			goto IL_048b;
		}
	}
	{
		uint64_t L_168 = V_0;
		V_0 = ((int64_t)((int64_t)L_168|(int64_t)((int64_t)((int64_t)((int32_t)1040)))));
		V_7 = (bool)1;
	}

IL_048b:
	{
		int32_t L_169 = V_6;
		if (!((int32_t)((int32_t)L_169&(int32_t)((int32_t)4194304))))
		{
			goto IL_04a8;
		}
	}
	{
		int32_t L_170 = V_5;
		if (!((int32_t)((int32_t)L_170&(int32_t)((int32_t)16))))
		{
			goto IL_04a8;
		}
	}
	{
		uint64_t L_171 = V_0;
		V_0 = ((int64_t)((int64_t)L_171|(int64_t)((int64_t)((int64_t)((int32_t)1040)))));
		V_7 = (bool)1;
	}

IL_04a8:
	{
		int32_t L_172 = V_6;
		if (!((int32_t)((int32_t)L_172&(int32_t)((int32_t)8388608))))
		{
			goto IL_04cb;
		}
	}
	{
		uint64_t L_173 = V_0;
		if (((int64_t)((int64_t)L_173&(int64_t)((int64_t)((int64_t)((int32_t)1024))))))
		{
			goto IL_04c2;
		}
	}
	{
		int32_t L_174 = V_5;
		if (!((int32_t)((int32_t)L_174&(int32_t)4)))
		{
			goto IL_04cb;
		}
	}

IL_04c2:
	{
		uint64_t L_175 = V_0;
		V_0 = ((int64_t)((int64_t)L_175|(int64_t)((int64_t)((int64_t)((int32_t)8192)))));
	}

IL_04cb:
	{
		int32_t L_176 = V_5;
		if (!((int32_t)((int32_t)L_176&(int32_t)((int32_t)16))))
		{
			goto IL_04f0;
		}
	}
	{
		uint64_t L_177 = V_0;
		V_0 = ((int64_t)((int64_t)L_177|(int64_t)((int64_t)((int64_t)((int32_t)32768)))));
		goto IL_04f0;
	}

IL_04dd:
	{
		int32_t L_178 = V_5;
		if (!((int32_t)((int32_t)L_178&(int32_t)((int32_t)16))))
		{
			goto IL_04f0;
		}
	}
	{
		uint64_t L_179 = V_0;
		V_0 = ((int64_t)((int64_t)L_179|(int64_t)((int64_t)((int64_t)((int32_t)1024)))));
		V_7 = (bool)1;
	}

IL_04f0:
	{
		int32_t L_180 = V_5;
		if (((int32_t)((int32_t)L_180&(int32_t)2)))
		{
			goto IL_0524;
		}
	}
	{
		uint64_t L_181 = __this->get_m_Flags_17();
		if (!((int64_t)((int64_t)L_181&(int64_t)((int64_t)((int64_t)((int32_t)536870912))))))
		{
			goto IL_051b;
		}
	}
	{
		uint64_t L_182 = __this->get_m_Flags_17();
		if (((int64_t)((int64_t)L_182&(int64_t)((int64_t)((int64_t)((int32_t)524288))))))
		{
			goto IL_051b;
		}
	}
	{
		int32_t L_183 = V_5;
		if (!((int32_t)((int32_t)L_183&(int32_t)((int32_t)32))))
		{
			goto IL_0524;
		}
	}

IL_051b:
	{
		uint64_t L_184 = V_0;
		V_0 = ((int64_t)((int64_t)L_184|(int64_t)((int64_t)((int64_t)((int32_t)16)))));
		V_7 = (bool)1;
	}

IL_0524:
	{
		uint64_t L_185 = __this->get_m_Flags_17();
		if (!((int64_t)((int64_t)L_185&(int64_t)((int64_t)((int64_t)((int32_t)536870912))))))
		{
			goto IL_0541;
		}
	}
	{
		int32_t L_186 = V_5;
		if (!((int32_t)((int32_t)L_186&(int32_t)((int32_t)33))))
		{
			goto IL_0541;
		}
	}
	{
		int32_t L_187 = V_5;
		V_5 = ((int32_t)((int32_t)L_187&(int32_t)((int32_t)-2)));
	}

IL_0541:
	{
		int32_t L_188 = V_5;
		if (((int32_t)((int32_t)L_188&(int32_t)1)))
		{
			goto IL_0550;
		}
	}
	{
		uint64_t L_189 = V_0;
		V_0 = ((int64_t)((int64_t)L_189|(int64_t)((int64_t)((int64_t)((int32_t)1024)))));
	}

IL_0550:
	{
		bool L_190 = __this->get_m_iriParsing_19();
		if (!L_190)
		{
			goto IL_0575;
		}
	}
	{
		bool L_191 = V_7;
		int32_t L_192 = V_5;
		if (!((int32_t)((int32_t)((((int32_t)L_191) == ((int32_t)0))? 1 : 0)&(int32_t)((((int32_t)((int32_t)((int32_t)L_192&(int32_t)((int32_t)75)))) == ((int32_t)((int32_t)10)))? 1 : 0))))
		{
			goto IL_0575;
		}
	}
	{
		uint64_t L_193 = V_0;
		V_0 = ((int64_t)((int64_t)L_193|(int64_t)((int64_t)1099511627776LL)));
	}

IL_0575:
	{
		bool L_194 = V_1;
		if (!L_194)
		{
			goto IL_0631;
		}
	}
	{
		uint16_t L_195 = V_2;
		V_15 = L_195;
		uint16_t L_196 = V_2;
		String_t* L_197 = __this->get_m_originalUnicodeString_14();
		NullCheck(L_197);
		int32_t L_198;
		L_198 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_197, /*hidden argument*/NULL);
		if ((((int32_t)L_196) >= ((int32_t)L_198)))
		{
			goto IL_0631;
		}
	}
	{
		String_t* L_199 = __this->get_m_originalUnicodeString_14();
		uint16_t L_200 = V_2;
		NullCheck(L_199);
		Il2CppChar L_201;
		L_201 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_199, L_200, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_201) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0631;
		}
	}
	{
		uint16_t L_202 = V_2;
		V_2 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_202, (int32_t)1))));
		String_t* L_203 = __this->get_m_originalUnicodeString_14();
		String_t* L_204 = __this->get_m_originalUnicodeString_14();
		NullCheck(L_204);
		int32_t L_205;
		L_205 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_204, /*hidden argument*/NULL);
		int32_t L_206 = V_6;
		G_B106_0 = ((int32_t)((uint16_t)L_205));
		G_B106_1 = (&V_2);
		G_B106_2 = L_203;
		G_B106_3 = __this;
		if (((int32_t)((int32_t)L_206&(int32_t)((int32_t)64))))
		{
			G_B107_0 = ((int32_t)((uint16_t)L_205));
			G_B107_1 = (&V_2);
			G_B107_2 = L_203;
			G_B107_3 = __this;
			goto IL_05ca;
		}
	}
	{
		G_B108_0 = ((int32_t)65534);
		G_B108_1 = G_B106_0;
		G_B108_2 = G_B106_1;
		G_B108_3 = G_B106_2;
		G_B108_4 = G_B106_3;
		goto IL_05cc;
	}

IL_05ca:
	{
		G_B108_0 = ((int32_t)35);
		G_B108_1 = G_B107_0;
		G_B108_2 = G_B107_1;
		G_B108_3 = G_B107_2;
		G_B108_4 = G_B107_3;
	}

IL_05cc:
	{
		NullCheck(G_B108_4);
		Uri_FindEndOfComponent_m82D6E67E45114D23F403807E6D711C2A4E574567(G_B108_4, G_B108_3, (uint16_t*)G_B108_2, (uint16_t)G_B108_1, G_B108_0, /*hidden argument*/NULL);
		String_t* L_207 = __this->get_m_originalUnicodeString_14();
		uint16_t L_208 = V_15;
		uint16_t L_209 = V_2;
		String_t* L_210;
		L_210 = Uri_EscapeUnescapeIri_m606A69B7A76A131D0CA6F562E5DC0721C626E071(__this, L_207, L_208, L_209, ((int32_t)32), /*hidden argument*/NULL);
		V_16 = L_210;
	}

IL_05e4:
	try
	{// begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
			bool L_211;
			L_211 = UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2(/*hidden argument*/NULL);
			if (!L_211)
			{
				goto IL_0606;
			}
		}

IL_05eb:
		{
			String_t* L_212 = __this->get_m_String_13();
			String_t* L_213 = V_16;
			NullCheck(L_213);
			String_t* L_214;
			L_214 = String_Normalize_m8CD42072C9F7B418990609EB63C5F7E1328321A9(L_213, 1, /*hidden argument*/NULL);
			String_t* L_215;
			L_215 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_212, L_214, /*hidden argument*/NULL);
			__this->set_m_String_13(L_215);
			goto IL_0619;
		}

IL_0606:
		{
			String_t* L_216 = __this->get_m_String_13();
			String_t* L_217 = V_16;
			String_t* L_218;
			L_218 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_216, L_217, /*hidden argument*/NULL);
			__this->set_m_String_13(L_218);
		}

IL_0619:
		{
			goto IL_0623;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_061b;
		}
		throw e;
	}

CATCH_061b:
	{// begin catch(System.ArgumentException)
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var)));
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_219;
		L_219 = Uri_GetException_m6A158C16E69136DF56BCF19CC4C7DCCC2601CF84(1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_219, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_ParseRemaining_m8C4350479C64906DDE464595F8BE5F8C14F2038D_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0623:
	{
		String_t* L_220 = __this->get_m_String_13();
		NullCheck(L_220);
		int32_t L_221;
		L_221 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_220, /*hidden argument*/NULL);
		V_4 = (uint16_t)((int32_t)((uint16_t)L_221));
	}

IL_0631:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_222 = __this->get_m_Info_18();
		NullCheck(L_222);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_223 = L_222->get_address_of_Offset_3();
		uint16_t L_224 = V_3;
		L_223->set_Query_5(L_224);
		String_t* L_225 = __this->get_m_String_13();
		V_9 = L_225;
		String_t* L_226 = V_9;
		V_17 = (Il2CppChar*)((uintptr_t)L_226);
		Il2CppChar* L_227 = V_17;
		if (!L_227)
		{
			goto IL_065d;
		}
	}
	{
		Il2CppChar* L_228 = V_17;
		int32_t L_229;
		L_229 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_17 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_228, (int32_t)L_229));
	}

IL_065d:
	{
		uint16_t L_230 = V_3;
		uint16_t L_231 = V_4;
		if ((((int32_t)L_230) >= ((int32_t)L_231)))
		{
			goto IL_06cb;
		}
	}
	{
		Il2CppChar* L_232 = V_17;
		uint16_t L_233 = V_3;
		int32_t L_234 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_232, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_233), (int32_t)2)))));
		if ((!(((uint32_t)L_234) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_06cb;
		}
	}
	{
		uint16_t L_235 = V_3;
		V_3 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_235, (int32_t)1))));
		Il2CppChar* L_236 = V_17;
		uint16_t L_237 = V_4;
		int32_t L_238 = V_6;
		G_B120_0 = L_237;
		G_B120_1 = (&V_3);
		G_B120_2 = L_236;
		G_B120_3 = __this;
		if (((int32_t)((int32_t)L_238&(int32_t)((int32_t)64))))
		{
			G_B121_0 = L_237;
			G_B121_1 = (&V_3);
			G_B121_2 = L_236;
			G_B121_3 = __this;
			goto IL_0688;
		}
	}
	{
		G_B122_0 = ((int32_t)65534);
		G_B122_1 = G_B120_0;
		G_B122_2 = G_B120_1;
		G_B122_3 = G_B120_2;
		G_B122_4 = G_B120_3;
		goto IL_068a;
	}

IL_0688:
	{
		G_B122_0 = ((int32_t)35);
		G_B122_1 = G_B121_0;
		G_B122_2 = G_B121_1;
		G_B122_3 = G_B121_2;
		G_B122_4 = G_B121_3;
	}

IL_068a:
	{
		NullCheck(G_B122_4);
		int32_t L_239;
		L_239 = Uri_CheckCanonical_mFD937A06DC3885481C374ACDD190A3B3E40152F3(G_B122_4, (Il2CppChar*)(Il2CppChar*)G_B122_3, (uint16_t*)G_B122_2, G_B122_1, G_B122_0, /*hidden argument*/NULL);
		V_5 = L_239;
		int32_t L_240 = V_5;
		if (((int32_t)((int32_t)L_240&(int32_t)2)))
		{
			goto IL_069d;
		}
	}
	{
		uint64_t L_241 = V_0;
		V_0 = ((int64_t)((int64_t)L_241|(int64_t)((int64_t)((int64_t)((int32_t)32)))));
	}

IL_069d:
	{
		int32_t L_242 = V_5;
		if ((((int32_t)((int32_t)((int32_t)L_242&(int32_t)((int32_t)17)))) == ((int32_t)1)))
		{
			goto IL_06ae;
		}
	}
	{
		uint64_t L_243 = V_0;
		V_0 = ((int64_t)((int64_t)L_243|(int64_t)((int64_t)((int64_t)((int32_t)2048)))));
	}

IL_06ae:
	{
		bool L_244 = __this->get_m_iriParsing_19();
		if (!L_244)
		{
			goto IL_06cb;
		}
	}
	{
		int32_t L_245 = V_5;
		if ((!(((uint32_t)((int32_t)((int32_t)L_245&(int32_t)((int32_t)91)))) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_06cb;
		}
	}
	{
		uint64_t L_246 = V_0;
		V_0 = ((int64_t)((int64_t)L_246|(int64_t)((int64_t)2199023255552LL)));
	}

IL_06cb:
	{
		V_9 = (String_t*)NULL;
		bool L_247 = V_1;
		if (!L_247)
		{
			goto IL_077f;
		}
	}
	{
		uint16_t L_248 = V_2;
		V_18 = L_248;
		uint16_t L_249 = V_2;
		String_t* L_250 = __this->get_m_originalUnicodeString_14();
		NullCheck(L_250);
		int32_t L_251;
		L_251 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_250, /*hidden argument*/NULL);
		if ((((int32_t)L_249) >= ((int32_t)L_251)))
		{
			goto IL_077f;
		}
	}
	{
		String_t* L_252 = __this->get_m_originalUnicodeString_14();
		uint16_t L_253 = V_2;
		NullCheck(L_252);
		Il2CppChar L_254;
		L_254 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_252, L_253, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_254) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_077f;
		}
	}
	{
		uint16_t L_255 = V_2;
		V_2 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_255, (int32_t)1))));
		String_t* L_256 = __this->get_m_originalUnicodeString_14();
		String_t* L_257 = __this->get_m_originalUnicodeString_14();
		NullCheck(L_257);
		int32_t L_258;
		L_258 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_257, /*hidden argument*/NULL);
		Uri_FindEndOfComponent_m82D6E67E45114D23F403807E6D711C2A4E574567(__this, L_256, (uint16_t*)(&V_2), (uint16_t)((int32_t)((uint16_t)L_258)), ((int32_t)65534), /*hidden argument*/NULL);
		String_t* L_259 = __this->get_m_originalUnicodeString_14();
		uint16_t L_260 = V_18;
		uint16_t L_261 = V_2;
		String_t* L_262;
		L_262 = Uri_EscapeUnescapeIri_m606A69B7A76A131D0CA6F562E5DC0721C626E071(__this, L_259, L_260, L_261, ((int32_t)64), /*hidden argument*/NULL);
		V_19 = L_262;
	}

IL_0732:
	try
	{// begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
			bool L_263;
			L_263 = UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2(/*hidden argument*/NULL);
			if (!L_263)
			{
				goto IL_0754;
			}
		}

IL_0739:
		{
			String_t* L_264 = __this->get_m_String_13();
			String_t* L_265 = V_19;
			NullCheck(L_265);
			String_t* L_266;
			L_266 = String_Normalize_m8CD42072C9F7B418990609EB63C5F7E1328321A9(L_265, 1, /*hidden argument*/NULL);
			String_t* L_267;
			L_267 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_264, L_266, /*hidden argument*/NULL);
			__this->set_m_String_13(L_267);
			goto IL_0767;
		}

IL_0754:
		{
			String_t* L_268 = __this->get_m_String_13();
			String_t* L_269 = V_19;
			String_t* L_270;
			L_270 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_268, L_269, /*hidden argument*/NULL);
			__this->set_m_String_13(L_270);
		}

IL_0767:
		{
			goto IL_0771;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0769;
		}
		throw e;
	}

CATCH_0769:
	{// begin catch(System.ArgumentException)
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var)));
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_271;
		L_271 = Uri_GetException_m6A158C16E69136DF56BCF19CC4C7DCCC2601CF84(1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_271, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_ParseRemaining_m8C4350479C64906DDE464595F8BE5F8C14F2038D_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0771:
	{
		String_t* L_272 = __this->get_m_String_13();
		NullCheck(L_272);
		int32_t L_273;
		L_273 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_272, /*hidden argument*/NULL);
		V_4 = (uint16_t)((int32_t)((uint16_t)L_273));
	}

IL_077f:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_274 = __this->get_m_Info_18();
		NullCheck(L_274);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_275 = L_274->get_address_of_Offset_3();
		uint16_t L_276 = V_3;
		L_275->set_Fragment_6(L_276);
		String_t* L_277 = __this->get_m_String_13();
		V_9 = L_277;
		String_t* L_278 = V_9;
		V_20 = (Il2CppChar*)((uintptr_t)L_278);
		Il2CppChar* L_279 = V_20;
		if (!L_279)
		{
			goto IL_07ab;
		}
	}
	{
		Il2CppChar* L_280 = V_20;
		int32_t L_281;
		L_281 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_20 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_280, (int32_t)L_281));
	}

IL_07ab:
	{
		uint16_t L_282 = V_3;
		uint16_t L_283 = V_4;
		if ((((int32_t)L_282) >= ((int32_t)L_283)))
		{
			goto IL_080e;
		}
	}
	{
		Il2CppChar* L_284 = V_20;
		uint16_t L_285 = V_3;
		int32_t L_286 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_284, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_285), (int32_t)2)))));
		if ((!(((uint32_t)L_286) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_080e;
		}
	}
	{
		uint16_t L_287 = V_3;
		V_3 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_287, (int32_t)1))));
		Il2CppChar* L_288 = V_20;
		uint16_t L_289 = V_4;
		int32_t L_290;
		L_290 = Uri_CheckCanonical_mFD937A06DC3885481C374ACDD190A3B3E40152F3(__this, (Il2CppChar*)(Il2CppChar*)L_288, (uint16_t*)(&V_3), L_289, ((int32_t)65534), /*hidden argument*/NULL);
		V_5 = L_290;
		int32_t L_291 = V_5;
		if (((int32_t)((int32_t)L_291&(int32_t)2)))
		{
			goto IL_07e0;
		}
	}
	{
		uint64_t L_292 = V_0;
		V_0 = ((int64_t)((int64_t)L_292|(int64_t)((int64_t)((int64_t)((int32_t)64)))));
	}

IL_07e0:
	{
		int32_t L_293 = V_5;
		if ((((int32_t)((int32_t)((int32_t)L_293&(int32_t)((int32_t)17)))) == ((int32_t)1)))
		{
			goto IL_07f1;
		}
	}
	{
		uint64_t L_294 = V_0;
		V_0 = ((int64_t)((int64_t)L_294|(int64_t)((int64_t)((int64_t)((int32_t)4096)))));
	}

IL_07f1:
	{
		bool L_295 = __this->get_m_iriParsing_19();
		if (!L_295)
		{
			goto IL_080e;
		}
	}
	{
		int32_t L_296 = V_5;
		if ((!(((uint32_t)((int32_t)((int32_t)L_296&(int32_t)((int32_t)91)))) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_080e;
		}
	}
	{
		uint64_t L_297 = V_0;
		V_0 = ((int64_t)((int64_t)L_297|(int64_t)((int64_t)4398046511104LL)));
	}

IL_080e:
	{
		V_9 = (String_t*)NULL;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_298 = __this->get_m_Info_18();
		NullCheck(L_298);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_299 = L_298->get_address_of_Offset_3();
		uint16_t L_300 = V_3;
		L_299->set_End_7(L_300);
	}

IL_0822:
	{
		uint64_t L_301 = V_0;
		V_0 = ((int64_t)((int64_t)L_301|(int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)-2147483648LL)))))));
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_302 = __this->get_m_Info_18();
		V_21 = L_302;
		V_22 = (bool)0;
	}

IL_0836:
	try
	{// begin try (depth: 1)
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_303 = V_21;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_303, (bool*)(&V_22), /*hidden argument*/NULL);
		uint64_t L_304 = __this->get_m_Flags_17();
		uint64_t L_305 = V_0;
		__this->set_m_Flags_17(((int64_t)((int64_t)L_304|(int64_t)L_305)));
		IL2CPP_LEAVE(0x85B, FINALLY_084f);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_084f;
	}

FINALLY_084f:
	{// begin finally (depth: 1)
		{
			bool L_306 = V_22;
			if (!L_306)
			{
				goto IL_085a;
			}
		}

IL_0853:
		{
			UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_307 = V_21;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_307, /*hidden argument*/NULL);
		}

IL_085a:
		{
			IL2CPP_END_FINALLY(2127)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(2127)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x85B, IL_085b)
	}

IL_085b:
	{
		uint64_t L_308 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_308|(int64_t)((int64_t)34359738368LL))));
		return;
	}
}
// System.UInt16 System.Uri::ParseSchemeCheckImplicitFile(System.Char*,System.UInt16,System.ParsingError&,System.Uri/Flags&,System.UriParser&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Uri_ParseSchemeCheckImplicitFile_m5F6B3C184CF455ED80D78937F208EB8C10265395 (Il2CppChar* ___uriString0, uint16_t ___length1, int32_t* ___err2, uint64_t* ___flags3, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** ___syntax4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_ParseSchemeCheckImplicitFile_m5F6B3C184CF455ED80D78937F208EB8C10265395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	Il2CppChar* V_2 = NULL;
	Il2CppChar V_3 = 0x0;
	{
		V_0 = (uint16_t)0;
		goto IL_0009;
	}

IL_0004:
	{
		uint16_t L_0 = V_0;
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))));
	}

IL_0009:
	{
		uint16_t L_1 = V_0;
		uint16_t L_2 = ___length1;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_001b;
		}
	}
	{
		Il2CppChar* L_3 = ___uriString0;
		uint16_t L_4 = V_0;
		int32_t L_5 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Uri_IsLWS_m4A41E0157130C65E6768C4F5CFEE2219DAE773B4(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0004;
		}
	}

IL_001b:
	{
		uint16_t L_7 = V_0;
		V_1 = L_7;
		goto IL_0024;
	}

IL_001f:
	{
		uint16_t L_8 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1))));
	}

IL_0024:
	{
		uint16_t L_9 = V_1;
		uint16_t L_10 = ___length1;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0033;
		}
	}
	{
		Il2CppChar* L_11 = ___uriString0;
		uint16_t L_12 = V_1;
		int32_t L_13 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_11, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_12), (int32_t)2)))));
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_001f;
		}
	}

IL_0033:
	{
		int32_t L_14;
		L_14 = IntPtr_get_Size_mD8038A1C440DE87E685F4D879DC80A6704D9C77B(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)4))))
		{
			goto IL_005d;
		}
	}
	{
		uint16_t L_15 = V_1;
		uint16_t L_16 = ___length1;
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		uint16_t L_17 = V_1;
		uint16_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)2)))))
		{
			goto IL_005d;
		}
	}
	{
		Il2CppChar* L_19 = ___uriString0;
		uint16_t L_20 = V_0;
		uint16_t L_21 = V_1;
		uint16_t L_22 = V_0;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_23 = ___syntax4;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Uri_CheckKnownSchemes_mDA8F5B5A8A82B234F1212931F2E0F19146BAEAA6((int64_t*)(int64_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_19, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_20), (int32_t)2)))), (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22)))), (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A **)L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_005d;
		}
	}
	{
		uint16_t L_25 = V_1;
		return (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1))));
	}

IL_005d:
	{
		uint16_t L_26 = V_0;
		uint16_t L_27 = ___length1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)2))) >= ((int32_t)L_27)))
		{
			goto IL_0067;
		}
	}
	{
		uint16_t L_28 = V_1;
		uint16_t L_29 = V_0;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_006c;
		}
	}

IL_0067:
	{
		int32_t* L_30 = ___err2;
		*((int32_t*)L_30) = (int32_t)1;
		return (uint16_t)0;
	}

IL_006c:
	{
		Il2CppChar* L_31 = ___uriString0;
		uint16_t L_32 = V_0;
		int32_t L_33 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_31, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1))), (int32_t)2)))));
		int32_t L_34 = L_33;
		V_3 = L_34;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)58))))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar L_35 = V_3;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)124)))))
		{
			goto IL_00cb;
		}
	}

IL_0080:
	{
		Il2CppChar* L_36 = ___uriString0;
		uint16_t L_37 = V_0;
		int32_t L_38 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_36, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_37), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Uri_IsAsciiLetter_mBEE6BD837C66CBB199E8A9FAB14A85744368F0FC(L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_00bc;
		}
	}
	{
		Il2CppChar* L_40 = ___uriString0;
		uint16_t L_41 = V_0;
		int32_t L_42 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_40, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)2))), (int32_t)2)))));
		int32_t L_43 = L_42;
		V_3 = L_43;
		if ((((int32_t)L_43) == ((int32_t)((int32_t)92))))
		{
			goto IL_00a2;
		}
	}
	{
		Il2CppChar L_44 = V_3;
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00b7;
		}
	}

IL_00a2:
	{
		uint64_t* L_45 = ___flags3;
		uint64_t* L_46 = ___flags3;
		int64_t L_47 = *((int64_t*)L_46);
		*((int64_t*)L_45) = (int64_t)((int64_t)((int64_t)L_47|(int64_t)((int64_t)((int64_t)((int32_t)672137216)))));
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_48 = ___syntax4;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_49 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FileUri_12();
		*((RuntimeObject **)L_48) = (RuntimeObject *)L_49;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_48, (void*)(RuntimeObject *)L_49);
		uint16_t L_50 = V_0;
		return L_50;
	}

IL_00b7:
	{
		int32_t* L_51 = ___err2;
		*((int32_t*)L_51) = (int32_t)7;
		return (uint16_t)0;
	}

IL_00bc:
	{
		Il2CppChar L_52 = V_3;
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_00c6;
		}
	}
	{
		int32_t* L_53 = ___err2;
		*((int32_t*)L_53) = (int32_t)2;
		goto IL_00c9;
	}

IL_00c6:
	{
		int32_t* L_54 = ___err2;
		*((int32_t*)L_54) = (int32_t)1;
	}

IL_00c9:
	{
		return (uint16_t)0;
	}

IL_00cb:
	{
		Il2CppChar* L_55 = ___uriString0;
		uint16_t L_56 = V_0;
		int32_t L_57 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_55, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_56), (int32_t)2)))));
		int32_t L_58 = L_57;
		V_3 = L_58;
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00df;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_59 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_IsWindowsFileSystem_25();
		if (L_59)
		{
			goto IL_00e4;
		}
	}

IL_00df:
	{
		Il2CppChar L_60 = V_3;
		if ((!(((uint32_t)L_60) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0134;
		}
	}

IL_00e4:
	{
		Il2CppChar* L_61 = ___uriString0;
		uint16_t L_62 = V_0;
		int32_t L_63 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_61, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1))), (int32_t)2)))));
		int32_t L_64 = L_63;
		V_3 = L_64;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)92))))
		{
			goto IL_00f8;
		}
	}
	{
		Il2CppChar L_65 = V_3;
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_012f;
		}
	}

IL_00f8:
	{
		uint64_t* L_66 = ___flags3;
		uint64_t* L_67 = ___flags3;
		int64_t L_68 = *((int64_t*)L_67);
		*((int64_t*)L_66) = (int64_t)((int64_t)((int64_t)L_68|(int64_t)((int64_t)((int64_t)((int32_t)806354944)))));
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_69 = ___syntax4;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_70 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FileUri_12();
		*((RuntimeObject **)L_69) = (RuntimeObject *)L_70;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_69, (void*)(RuntimeObject *)L_70);
		uint16_t L_71 = V_0;
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)2))));
		goto IL_0117;
	}

IL_0112:
	{
		uint16_t L_72 = V_0;
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1))));
	}

IL_0117:
	{
		uint16_t L_73 = V_0;
		uint16_t L_74 = ___length1;
		if ((((int32_t)L_73) >= ((int32_t)L_74)))
		{
			goto IL_012d;
		}
	}
	{
		Il2CppChar* L_75 = ___uriString0;
		uint16_t L_76 = V_0;
		int32_t L_77 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_75, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_76), (int32_t)2)))));
		int32_t L_78 = L_77;
		V_3 = L_78;
		if ((((int32_t)L_78) == ((int32_t)((int32_t)47))))
		{
			goto IL_0112;
		}
	}
	{
		Il2CppChar L_79 = V_3;
		if ((((int32_t)L_79) == ((int32_t)((int32_t)92))))
		{
			goto IL_0112;
		}
	}

IL_012d:
	{
		uint16_t L_80 = V_0;
		return L_80;
	}

IL_012f:
	{
		int32_t* L_81 = ___err2;
		*((int32_t*)L_81) = (int32_t)1;
		return (uint16_t)0;
	}

IL_0134:
	{
		Il2CppChar* L_82 = ___uriString0;
		uint16_t L_83 = V_0;
		int32_t L_84 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_82, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_83), (int32_t)2)))));
		if ((!(((uint32_t)L_84) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0198;
		}
	}
	{
		uint16_t L_85 = V_0;
		if (!L_85)
		{
			goto IL_014f;
		}
	}
	{
		Il2CppChar* L_86 = ___uriString0;
		uint16_t L_87 = V_0;
		int32_t L_88 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_86, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_87, (int32_t)1))), (int32_t)2)))));
		if ((((int32_t)L_88) == ((int32_t)((int32_t)58))))
		{
			goto IL_0164;
		}
	}

IL_014f:
	{
		uint64_t* L_89 = ___flags3;
		uint64_t* L_90 = ___flags3;
		int64_t L_91 = *((int64_t*)L_90);
		*((int64_t*)L_89) = (int64_t)((int64_t)((int64_t)L_91|(int64_t)((int64_t)((int64_t)((int32_t)537919488)))));
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_92 = ___syntax4;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_93 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FileUri_12();
		*((RuntimeObject **)L_92) = (RuntimeObject *)L_93;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_92, (void*)(RuntimeObject *)L_93);
		uint16_t L_94 = V_0;
		return L_94;
	}

IL_0164:
	{
		Il2CppChar* L_95 = ___uriString0;
		uint16_t L_96 = V_0;
		int32_t L_97 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_95, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1))), (int32_t)2)))));
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_01a8;
		}
	}
	{
		Il2CppChar* L_98 = ___uriString0;
		uint16_t L_99 = V_0;
		int32_t L_100 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_98, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)2))), (int32_t)2)))));
		if ((!(((uint32_t)L_100) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_01a8;
		}
	}
	{
		uint64_t* L_101 = ___flags3;
		uint64_t* L_102 = ___flags3;
		int64_t L_103 = *((int64_t*)L_102);
		*((int64_t*)L_101) = (int64_t)((int64_t)((int64_t)L_103|(int64_t)((int64_t)((int64_t)((int32_t)537919488)))));
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_104 = ___syntax4;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_105 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FileUri_12();
		*((RuntimeObject **)L_104) = (RuntimeObject *)L_105;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_104, (void*)(RuntimeObject *)L_105);
		uint16_t L_106 = V_0;
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)2))));
		uint16_t L_107 = V_0;
		return L_107;
	}

IL_0198:
	{
		Il2CppChar* L_108 = ___uriString0;
		uint16_t L_109 = V_0;
		int32_t L_110 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_108, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_109), (int32_t)2)))));
		if ((!(((uint32_t)L_110) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_01a8;
		}
	}
	{
		int32_t* L_111 = ___err2;
		*((int32_t*)L_111) = (int32_t)1;
		return (uint16_t)0;
	}

IL_01a8:
	{
		uint16_t L_112 = V_1;
		uint16_t L_113 = ___length1;
		if ((!(((uint32_t)L_112) == ((uint32_t)L_113))))
		{
			goto IL_01b1;
		}
	}
	{
		int32_t* L_114 = ___err2;
		*((int32_t*)L_114) = (int32_t)1;
		return (uint16_t)0;
	}

IL_01b1:
	{
		uint16_t L_115 = V_1;
		uint16_t L_116 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_115, (int32_t)L_116))) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_01c0;
		}
	}
	{
		int32_t* L_117 = ___err2;
		*((int32_t*)L_117) = (int32_t)5;
		return (uint16_t)0;
	}

IL_01c0:
	{
		uint16_t L_118 = V_1;
		uint16_t L_119 = V_0;
		if ((uintptr_t)((uintptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_118, (int32_t)L_119))) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Uri_ParseSchemeCheckImplicitFile_m5F6B3C184CF455ED80D78937F208EB8C10265395_RuntimeMethod_var);
		int8_t* L_120 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_118, (int32_t)L_119))), (int32_t)2)));
		memset(L_120, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_118, (int32_t)L_119))), (int32_t)2)));
		V_2 = (Il2CppChar*)(L_120);
		___length1 = (uint16_t)0;
		goto IL_01e7;
	}

IL_01ce:
	{
		Il2CppChar* L_121 = V_2;
		uint16_t L_122 = ___length1;
		uint16_t L_123 = L_122;
		___length1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)1))));
		Il2CppChar* L_124 = ___uriString0;
		uint16_t L_125 = V_0;
		int32_t L_126 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_124, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_125), (int32_t)2)))));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_121, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_123), (int32_t)2))))) = (int16_t)L_126;
		uint16_t L_127 = V_0;
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)1))));
	}

IL_01e7:
	{
		uint16_t L_128 = V_0;
		uint16_t L_129 = V_1;
		if ((((int32_t)L_128) < ((int32_t)L_129)))
		{
			goto IL_01ce;
		}
	}
	{
		int32_t* L_130 = ___err2;
		Il2CppChar* L_131 = V_2;
		uint16_t L_132 = ___length1;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_133 = ___syntax4;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		int32_t L_134;
		L_134 = Uri_CheckSchemeSyntax_m2D8AE16F4A6A55E89603F7E9D675227302B53761((Il2CppChar*)(Il2CppChar*)L_131, L_132, (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A **)L_133, /*hidden argument*/NULL);
		*((int32_t*)L_130) = (int32_t)L_134;
		int32_t* L_135 = ___err2;
		int32_t L_136 = *((int32_t*)L_135);
		if (!L_136)
		{
			goto IL_01fc;
		}
	}
	{
		return (uint16_t)0;
	}

IL_01fc:
	{
		uint16_t L_137 = V_1;
		return (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1))));
	}
}
// System.Boolean System.Uri::CheckKnownSchemes(System.Int64*,System.UInt16,System.UriParser&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_CheckKnownSchemes_mDA8F5B5A8A82B234F1212931F2E0F19146BAEAA6 (int64_t* ___lptr0, uint16_t ___nChars1, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** ___syntax2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		uint16_t L_0 = ___nChars1;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_001f;
		}
	}
	{
		int64_t* L_1 = ___lptr0;
		int64_t L_2 = *((int64_t*)L_1);
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2))|(int32_t)((int32_t)2097184)))) == ((uint32_t)((int32_t)7536759)))))
		{
			goto IL_001d;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_3 = ___syntax2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_4 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_WsUri_9();
		*((RuntimeObject **)L_3) = (RuntimeObject *)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)L_4);
		return (bool)1;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		int64_t* L_5 = ___lptr0;
		int64_t L_6 = *((int64_t*)L_5);
		V_0 = ((int64_t)((int64_t)L_6|(int64_t)((int64_t)9007336695791648LL)));
		int64_t L_7 = V_0;
		if ((((int64_t)L_7) > ((int64_t)((int64_t)29273878621519975LL))))
		{
			goto IL_00a8;
		}
	}
	{
		int64_t L_8 = V_0;
		if ((((int64_t)L_8) > ((int64_t)((int64_t)16326042577993847LL))))
		{
			goto IL_0076;
		}
	}
	{
		int64_t L_9 = V_0;
		if ((((int64_t)L_9) == ((int64_t)((int64_t)12948347151515758LL))))
		{
			goto IL_0203;
		}
	}
	{
		int64_t L_10 = V_0;
		if ((((int64_t)L_10) == ((int64_t)((int64_t)16326029693157478LL))))
		{
			goto IL_015d;
		}
	}
	{
		int64_t L_11 = V_0;
		if ((((int64_t)L_11) == ((int64_t)((int64_t)16326042577993847LL))))
		{
			goto IL_013d;
		}
	}
	{
		goto IL_025c;
	}

IL_0076:
	{
		int64_t L_12 = V_0;
		if ((((int64_t)L_12) == ((int64_t)((int64_t)28147948650299509LL))))
		{
			goto IL_018d;
		}
	}
	{
		int64_t L_13 = V_0;
		if ((((int64_t)L_13) == ((int64_t)((int64_t)28429436511125606LL))))
		{
			goto IL_014d;
		}
	}
	{
		int64_t L_14 = V_0;
		if ((((int64_t)L_14) == ((int64_t)((int64_t)29273878621519975LL))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_025c;
	}

IL_00a8:
	{
		int64_t L_15 = V_0;
		if ((((int64_t)L_15) > ((int64_t)((int64_t)31525614009974892LL))))
		{
			goto IL_00e6;
		}
	}
	{
		int64_t L_16 = V_0;
		if ((((int64_t)L_16) == ((int64_t)((int64_t)30399748462674029LL))))
		{
			goto IL_01c1;
		}
	}
	{
		int64_t L_17 = V_0;
		if ((((int64_t)L_17) == ((int64_t)((int64_t)30962711301259380LL))))
		{
			goto IL_01e5;
		}
	}
	{
		int64_t L_18 = V_0;
		if ((((int64_t)L_18) == ((int64_t)((int64_t)31525614009974892LL))))
		{
			goto IL_024f;
		}
	}
	{
		goto IL_025c;
	}

IL_00e6:
	{
		int64_t L_19 = V_0;
		if ((((int64_t)L_19) == ((int64_t)((int64_t)31525695615008878LL))))
		{
			goto IL_017d;
		}
	}
	{
		int64_t L_20 = V_0;
		if ((((int64_t)L_20) == ((int64_t)((int64_t)31525695615402088LL))))
		{
			goto IL_0112;
		}
	}
	{
		int64_t L_21 = V_0;
		if ((((int64_t)L_21) == ((int64_t)((int64_t)32370133429452910LL))))
		{
			goto IL_016d;
		}
	}
	{
		goto IL_025c;
	}

IL_0112:
	{
		uint16_t L_22 = ___nChars1;
		if ((!(((uint32_t)L_22) == ((uint32_t)4))))
		{
			goto IL_011f;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_23 = ___syntax2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_24 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpUri_7();
		*((RuntimeObject **)L_23) = (RuntimeObject *)L_24;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_23, (void*)(RuntimeObject *)L_24);
		return (bool)1;
	}

IL_011f:
	{
		uint16_t L_25 = ___nChars1;
		if ((!(((uint32_t)L_25) == ((uint32_t)5))))
		{
			goto IL_025c;
		}
	}
	{
		int64_t* L_26 = ___lptr0;
		int32_t L_27 = *((uint16_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_26, (int32_t)8)));
		if ((!(((uint32_t)((int32_t)((int32_t)L_27|(int32_t)((int32_t)32)))) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_025c;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_28 = ___syntax2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_29 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpsUri_8();
		*((RuntimeObject **)L_28) = (RuntimeObject *)L_29;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_28, (void*)(RuntimeObject *)L_29);
		return (bool)1;
	}

IL_013d:
	{
		uint16_t L_30 = ___nChars1;
		if ((!(((uint32_t)L_30) == ((uint32_t)3))))
		{
			goto IL_025c;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_31 = ___syntax2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_32 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_WssUri_10();
		*((RuntimeObject **)L_31) = (RuntimeObject *)L_32;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_31, (void*)(RuntimeObject *)L_32);
		return (bool)1;
	}

IL_014d:
	{
		uint16_t L_33 = ___nChars1;
		if ((!(((uint32_t)L_33) == ((uint32_t)4))))
		{
			goto IL_025c;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_34 = ___syntax2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_35 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FileUri_12();
		*((RuntimeObject **)L_34) = (RuntimeObject *)L_35;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_34, (void*)(RuntimeObject *)L_35);
		return (bool)1;
	}

IL_015d:
	{
		uint16_t L_36 = ___nChars1;
		if ((!(((uint32_t)L_36) == ((uint32_t)3))))
		{
			goto IL_025c;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_37 = ___syntax2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_38 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FtpUri_11();
		*((RuntimeObject **)L_37) = (RuntimeObject *)L_38;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_37, (void*)(RuntimeObject *)L_38);
		return (bool)1;
	}

IL_016d:
	{
		uint16_t L_39 = ___nChars1;
		if ((!(((uint32_t)L_39) == ((uint32_t)4))))
		{
			goto IL_025c;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_40 = ___syntax2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_41 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NewsUri_15();
		*((RuntimeObject **)L_40) = (RuntimeObject *)L_41;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_40, (void*)(RuntimeObject *)L_41);
		return (bool)1;
	}

IL_017d:
	{
		uint16_t L_42 = ___nChars1;
		if ((!(((uint32_t)L_42) == ((uint32_t)4))))
		{
			goto IL_025c;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_43 = ___syntax2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_44 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NntpUri_14();
		*((RuntimeObject **)L_43) = (RuntimeObject *)L_44;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_43, (void*)(RuntimeObject *)L_44);
		return (bool)1;
	}

IL_018d:
	{
		uint16_t L_45 = ___nChars1;
		if ((!(((uint32_t)L_45) == ((uint32_t)4))))
		{
			goto IL_025c;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_46 = ___syntax2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_47 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_UuidUri_17();
		*((RuntimeObject **)L_46) = (RuntimeObject *)L_47;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_46, (void*)(RuntimeObject *)L_47);
		return (bool)1;
	}

IL_019d:
	{
		uint16_t L_48 = ___nChars1;
		if ((!(((uint32_t)L_48) == ((uint32_t)6))))
		{
			goto IL_025c;
		}
	}
	{
		int64_t* L_49 = ___lptr0;
		int32_t L_50 = *((int32_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_49, (int32_t)8)));
		if ((!(((uint32_t)((int32_t)((int32_t)L_50|(int32_t)((int32_t)2097184)))) == ((uint32_t)((int32_t)7471205)))))
		{
			goto IL_025c;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_51 = ___syntax2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_52 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_GopherUri_13();
		*((RuntimeObject **)L_51) = (RuntimeObject *)L_52;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_51, (void*)(RuntimeObject *)L_52);
		return (bool)1;
	}

IL_01c1:
	{
		uint16_t L_53 = ___nChars1;
		if ((!(((uint32_t)L_53) == ((uint32_t)6))))
		{
			goto IL_025c;
		}
	}
	{
		int64_t* L_54 = ___lptr0;
		int32_t L_55 = *((int32_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_54, (int32_t)8)));
		if ((!(((uint32_t)((int32_t)((int32_t)L_55|(int32_t)((int32_t)2097184)))) == ((uint32_t)((int32_t)7274612)))))
		{
			goto IL_025c;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_56 = ___syntax2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_57 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_MailToUri_16();
		*((RuntimeObject **)L_56) = (RuntimeObject *)L_57;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_56, (void*)(RuntimeObject *)L_57);
		return (bool)1;
	}

IL_01e5:
	{
		uint16_t L_58 = ___nChars1;
		if ((!(((uint32_t)L_58) == ((uint32_t)6))))
		{
			goto IL_025c;
		}
	}
	{
		int64_t* L_59 = ___lptr0;
		int32_t L_60 = *((int32_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_59, (int32_t)8)));
		if ((!(((uint32_t)((int32_t)((int32_t)L_60|(int32_t)((int32_t)2097184)))) == ((uint32_t)((int32_t)7602277)))))
		{
			goto IL_025c;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_61 = ___syntax2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_62 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_TelnetUri_18();
		*((RuntimeObject **)L_61) = (RuntimeObject *)L_62;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_61, (void*)(RuntimeObject *)L_62);
		return (bool)1;
	}

IL_0203:
	{
		uint16_t L_63 = ___nChars1;
		if ((!(((uint32_t)L_63) == ((uint32_t)8))))
		{
			goto IL_0229;
		}
	}
	{
		int64_t* L_64 = ___lptr0;
		int64_t L_65 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_64, (int32_t)8)));
		if ((!(((uint64_t)((int64_t)((int64_t)L_65|(int64_t)((int64_t)9007336695791648LL)))) == ((uint64_t)((int64_t)28429453690994800LL)))))
		{
			goto IL_0229;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_66 = ___syntax2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_67 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NetPipeUri_21();
		*((RuntimeObject **)L_66) = (RuntimeObject *)L_67;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_66, (void*)(RuntimeObject *)L_67);
		return (bool)1;
	}

IL_0229:
	{
		uint16_t L_68 = ___nChars1;
		if ((!(((uint32_t)L_68) == ((uint32_t)7))))
		{
			goto IL_025c;
		}
	}
	{
		int64_t* L_69 = ___lptr0;
		int64_t L_70 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_69, (int32_t)8)));
		if ((!(((uint64_t)((int64_t)((int64_t)L_70|(int64_t)((int64_t)9007336695791648LL)))) == ((uint64_t)((int64_t)16326029692043380LL)))))
		{
			goto IL_025c;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_71 = ___syntax2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_72 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NetTcpUri_20();
		*((RuntimeObject **)L_71) = (RuntimeObject *)L_72;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_71, (void*)(RuntimeObject *)L_72);
		return (bool)1;
	}

IL_024f:
	{
		uint16_t L_73 = ___nChars1;
		if ((!(((uint32_t)L_73) == ((uint32_t)4))))
		{
			goto IL_025c;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_74 = ___syntax2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_75 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_LdapUri_19();
		*((RuntimeObject **)L_74) = (RuntimeObject *)L_75;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_74, (void*)(RuntimeObject *)L_75);
		return (bool)1;
	}

IL_025c:
	{
		return (bool)0;
	}
}
// System.ParsingError System.Uri::CheckSchemeSyntax(System.Char*,System.UInt16,System.UriParser&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_CheckSchemeSyntax_m2D8AE16F4A6A55E89603F7E9D675227302B53761 (Il2CppChar* ___ptr0, uint16_t ___length1, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** ___syntax2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	uint16_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		Il2CppChar* L_0 = ___ptr0;
		int32_t L_1 = *((uint16_t*)L_0);
		V_1 = L_1;
		Il2CppChar L_2 = V_1;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)97))))
		{
			goto IL_000d;
		}
	}
	{
		Il2CppChar L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)122))))
		{
			goto IL_0022;
		}
	}

IL_000d:
	{
		Il2CppChar L_4 = V_1;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)65))))
		{
			goto IL_0020;
		}
	}
	{
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)90))))
		{
			goto IL_0020;
		}
	}
	{
		Il2CppChar* L_6 = ___ptr0;
		Il2CppChar L_7 = V_1;
		*((int16_t*)L_6) = (int16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_7|(int32_t)((int32_t)32)))));
		goto IL_0022;
	}

IL_0020:
	{
		return (int32_t)(2);
	}

IL_0022:
	{
		V_2 = (uint16_t)1;
		goto IL_0070;
	}

IL_0026:
	{
		Il2CppChar* L_8 = ___ptr0;
		uint16_t L_9 = V_2;
		int32_t L_10 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_8, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_9), (int32_t)2)))));
		V_3 = L_10;
		Il2CppChar L_11 = V_3;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)97))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_12 = V_3;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)122))))
		{
			goto IL_006b;
		}
	}

IL_0038:
	{
		Il2CppChar L_13 = V_3;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)65))))
		{
			goto IL_0050;
		}
	}
	{
		Il2CppChar L_14 = V_3;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)90))))
		{
			goto IL_0050;
		}
	}
	{
		Il2CppChar* L_15 = ___ptr0;
		uint16_t L_16 = V_2;
		Il2CppChar L_17 = V_3;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_15, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_16), (int32_t)2))))) = (int16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_17|(int32_t)((int32_t)32)))));
		goto IL_006b;
	}

IL_0050:
	{
		Il2CppChar L_18 = V_3;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)48))))
		{
			goto IL_005a;
		}
	}
	{
		Il2CppChar L_19 = V_3;
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)57))))
		{
			goto IL_006b;
		}
	}

IL_005a:
	{
		Il2CppChar L_20 = V_3;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)43))))
		{
			goto IL_006b;
		}
	}
	{
		Il2CppChar L_21 = V_3;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)45))))
		{
			goto IL_006b;
		}
	}
	{
		Il2CppChar L_22 = V_3;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)46))))
		{
			goto IL_006b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_006b:
	{
		uint16_t L_23 = V_2;
		V_2 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1))));
	}

IL_0070:
	{
		uint16_t L_24 = V_2;
		uint16_t L_25 = ___length1;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0026;
		}
	}
	{
		Il2CppChar* L_26 = ___ptr0;
		uint16_t L_27 = ___length1;
		String_t* L_28;
		L_28 = String_CreateString_m854F19B67F5E1B63737E096BF53CC56AB12AF777(NULL, (Il2CppChar*)(Il2CppChar*)L_26, 0, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_29 = ___syntax2;
		String_t* L_30 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_31;
		L_31 = UriParser_FindOrFetchAsUnknownV1Syntax_m7844992E6D0B5FD676AEE47EBD4806305418D6CC(L_30, /*hidden argument*/NULL);
		*((RuntimeObject **)L_29) = (RuntimeObject *)L_31;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_29, (void*)(RuntimeObject *)L_31);
		return (int32_t)(0);
	}
}
// System.UInt16 System.Uri::CheckAuthorityHelper(System.Char*,System.UInt16,System.UInt16,System.ParsingError&,System.Uri/Flags&,System.UriParser,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Uri_CheckAuthorityHelper_mC5010AEC19EED1968EDE7CB52C92AC0AC0869503 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Il2CppChar* ___pString0, uint16_t ___idx1, uint16_t ___length2, int32_t* ___err3, uint64_t* ___flags4, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax5, String_t** ___newHost6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	bool V_10 = false;
	uint16_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	String_t* V_14 = NULL;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	uint16_t V_17 = 0;
	bool V_18 = false;
	int32_t V_19 = 0;
	String_t* V_20 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	int32_t G_B3_0 = 0;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B49_0 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B48_0 = NULL;
	int32_t G_B50_0 = 0;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B50_1 = NULL;
	{
		uint16_t L_0 = ___length2;
		V_0 = L_0;
		uint16_t L_1 = ___idx1;
		V_2 = L_1;
		uint16_t L_2 = ___idx1;
		V_3 = L_2;
		String_t** L_3 = ___newHost6;
		*((RuntimeObject **)L_3) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)NULL);
		V_4 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_4 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_IriParsing_23();
		il2cpp_codegen_memory_barrier();
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_5 = ___syntax5;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Uri_IriParsingStatic_m0F2797FEA328A2B1A72EE03F9BD88C577A7A0471(L_5, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_5 = (bool)G_B3_0;
		uint64_t* L_7 = ___flags4;
		int64_t L_8 = *((int64_t*)L_7);
		V_6 = (bool)((!(((uint64_t)((int64_t)((int64_t)L_8&(int64_t)((int64_t)8589934592LL)))) <= ((uint64_t)((int64_t)((int64_t)0)))))? 1 : 0);
		uint64_t* L_9 = ___flags4;
		int64_t L_10 = *((int64_t*)L_9);
		V_7 = (bool)((((int64_t)((int64_t)((int64_t)L_10&(int64_t)((int64_t)17179869184LL)))) == ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_11 = ___syntax5;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = UriParser_get_Flags_mDAA0D828057CA2CA4493FD152D3760E975BAE7F0_inline(L_11, /*hidden argument*/NULL);
		V_8 = L_12;
		bool L_13 = V_6;
		bool L_14 = V_5;
		bool L_15 = V_7;
		if (!((int32_t)((int32_t)((int32_t)((int32_t)L_13&(int32_t)L_14))&(int32_t)L_15)))
		{
			goto IL_006b;
		}
	}
	{
		String_t** L_16 = ___newHost6;
		String_t* L_17 = __this->get_m_originalUnicodeString_14();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_17, 0, L_18, /*hidden argument*/NULL);
		*((RuntimeObject **)L_16) = (RuntimeObject *)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_16, (void*)(RuntimeObject *)L_19);
	}

IL_006b:
	{
		uint16_t L_20 = ___idx1;
		uint16_t L_21 = ___length2;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar* L_22 = ___pString0;
		uint16_t L_23 = ___idx1;
		int32_t L_24 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_23), (int32_t)2)))));
		int32_t L_25 = L_24;
		V_1 = L_25;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)47))))
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_008a;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_27 = ___syntax5;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Uri_StaticIsFile_m3E03FC49813EF629A488CF3093AE0A5675210CED(L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0094;
		}
	}

IL_008a:
	{
		Il2CppChar L_29 = V_1;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)35))))
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar L_30 = V_1;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0106;
		}
	}

IL_0094:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_31 = ___syntax5;
		NullCheck(L_31);
		bool L_32;
		L_32 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_31, ((int32_t)128), /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00e6;
		}
	}
	{
		uint64_t* L_33 = ___flags4;
		uint64_t* L_34 = ___flags4;
		int64_t L_35 = *((int64_t*)L_34);
		*((int64_t*)L_33) = (int64_t)((int64_t)((int64_t)L_35&(int64_t)((int64_t)((int64_t)((int32_t)-268435457)))));
		uint64_t* L_36 = ___flags4;
		int64_t L_37 = *((int64_t*)L_36);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Uri_StaticInFact_m6B17A3B95B81DABD390B643ABD9ADAA316D5EF98(L_37, ((int64_t)((int64_t)((int32_t)536870912))), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00d7;
		}
	}
	{
		Il2CppChar* L_39 = ___pString0;
		uint16_t L_40 = ___idx1;
		int32_t L_41 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_39, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_40), (int32_t)2)))));
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00d1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_42 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_IsWindowsFileSystem_25();
		if (!L_42)
		{
			goto IL_00d7;
		}
	}

IL_00d1:
	{
		int32_t* L_43 = ___err3;
		*((int32_t*)L_43) = (int32_t)8;
		goto IL_00ea;
	}

IL_00d7:
	{
		uint64_t* L_44 = ___flags4;
		uint64_t* L_45 = ___flags4;
		int64_t L_46 = *((int64_t*)L_45);
		*((int64_t*)L_44) = (int64_t)((int64_t)((int64_t)L_46|(int64_t)((int64_t)((int64_t)((int32_t)327680)))));
		goto IL_00ea;
	}

IL_00e6:
	{
		int32_t* L_47 = ___err3;
		*((int32_t*)L_47) = (int32_t)8;
	}

IL_00ea:
	{
		bool L_48 = V_6;
		bool L_49 = V_5;
		bool L_50 = V_7;
		if (!((int32_t)((int32_t)((int32_t)((int32_t)L_48&(int32_t)L_49))&(int32_t)L_50)))
		{
			goto IL_0104;
		}
	}
	{
		uint64_t* L_51 = ___flags4;
		uint64_t* L_52 = ___flags4;
		int64_t L_53 = *((int64_t*)L_52);
		*((int64_t*)L_51) = (int64_t)((int64_t)((int64_t)L_53|(int64_t)((int64_t)17179869184LL)));
	}

IL_0104:
	{
		uint16_t L_54 = ___idx1;
		return L_54;
	}

IL_0106:
	{
		V_9 = (String_t*)NULL;
		int32_t L_55 = V_8;
		if (!((int32_t)((int32_t)L_55&(int32_t)4)))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_01dd;
	}

IL_0117:
	{
		uint16_t L_56 = V_3;
		int32_t L_57 = V_0;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1)))))
		{
			goto IL_0149;
		}
	}
	{
		Il2CppChar* L_58 = ___pString0;
		uint16_t L_59 = V_3;
		int32_t L_60 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_58, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_59), (int32_t)2)))));
		if ((((int32_t)L_60) == ((int32_t)((int32_t)63))))
		{
			goto IL_0149;
		}
	}
	{
		Il2CppChar* L_61 = ___pString0;
		uint16_t L_62 = V_3;
		int32_t L_63 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_61, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_62), (int32_t)2)))));
		if ((((int32_t)L_63) == ((int32_t)((int32_t)35))))
		{
			goto IL_0149;
		}
	}
	{
		Il2CppChar* L_64 = ___pString0;
		uint16_t L_65 = V_3;
		int32_t L_66 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_64, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_65), (int32_t)2)))));
		if ((((int32_t)L_66) == ((int32_t)((int32_t)92))))
		{
			goto IL_0149;
		}
	}
	{
		Il2CppChar* L_67 = ___pString0;
		uint16_t L_68 = V_3;
		int32_t L_69 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_67, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_68), (int32_t)2)))));
		if ((!(((uint32_t)L_69) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0150;
		}
	}

IL_0149:
	{
		uint16_t L_70 = ___idx1;
		V_3 = L_70;
		goto IL_01e4;
	}

IL_0150:
	{
		Il2CppChar* L_71 = ___pString0;
		uint16_t L_72 = V_3;
		int32_t L_73 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_71, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_72), (int32_t)2)))));
		if ((!(((uint32_t)L_73) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_01d8;
		}
	}
	{
		uint64_t* L_74 = ___flags4;
		uint64_t* L_75 = ___flags4;
		int64_t L_76 = *((int64_t*)L_75);
		*((int64_t*)L_74) = (int64_t)((int64_t)((int64_t)L_76|(int64_t)((int64_t)((int64_t)((int32_t)2097152)))));
		bool L_77 = V_5;
		if (L_77)
		{
			goto IL_0175;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		int32_t L_78 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_IdnScope_22();
		il2cpp_codegen_memory_barrier();
		if (!L_78)
		{
			goto IL_01c9;
		}
	}

IL_0175:
	{
		bool L_79 = V_5;
		bool L_80 = V_6;
		bool L_81 = V_7;
		if (!((int32_t)((int32_t)((int32_t)((int32_t)L_79&(int32_t)L_80))&(int32_t)L_81)))
		{
			goto IL_01bb;
		}
	}
	{
		Il2CppChar* L_82 = ___pString0;
		int32_t L_83 = V_2;
		uint16_t L_84 = V_3;
		String_t* L_85;
		L_85 = IriHelper_EscapeUnescapeIri_m6CABB7FC44037C0B5C18132AF5D8C55DB5C64444((Il2CppChar*)(Il2CppChar*)L_82, L_83, ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1)), 2, /*hidden argument*/NULL);
		V_9 = L_85;
	}

IL_018c:
	try
	{// begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
			bool L_86;
			L_86 = UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2(/*hidden argument*/NULL);
			if (!L_86)
			{
				goto IL_019d;
			}
		}

IL_0193:
		{
			String_t* L_87 = V_9;
			NullCheck(L_87);
			String_t* L_88;
			L_88 = String_Normalize_m8CD42072C9F7B418990609EB63C5F7E1328321A9(L_87, 1, /*hidden argument*/NULL);
			V_9 = L_88;
		}

IL_019d:
		{
			goto IL_01ac;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019f;
		}
		throw e;
	}

CATCH_019f:
	{// begin catch(System.ArgumentException)
		int32_t* L_89 = ___err3;
		*((int32_t*)L_89) = (int32_t)1;
		uint16_t L_90 = ___idx1;
		V_11 = L_90;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_07c1;
	}// end catch (depth: 1)

IL_01ac:
	{
		String_t** L_91 = ___newHost6;
		String_t** L_92 = ___newHost6;
		String_t* L_93 = *((String_t**)L_92);
		String_t* L_94 = V_9;
		String_t* L_95;
		L_95 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_93, L_94, /*hidden argument*/NULL);
		*((RuntimeObject **)L_91) = (RuntimeObject *)L_95;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_91, (void*)(RuntimeObject *)L_95);
		goto IL_01c9;
	}

IL_01bb:
	{
		Il2CppChar* L_96 = ___pString0;
		int32_t L_97 = V_2;
		uint16_t L_98 = V_3;
		int32_t L_99 = V_2;
		String_t* L_100;
		L_100 = String_CreateString_m854F19B67F5E1B63737E096BF53CC56AB12AF777(NULL, (Il2CppChar*)(Il2CppChar*)L_96, L_97, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_98, (int32_t)L_99)), (int32_t)1)), /*hidden argument*/NULL);
		V_9 = L_100;
	}

IL_01c9:
	{
		uint16_t L_101 = V_3;
		V_3 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1))));
		Il2CppChar* L_102 = ___pString0;
		uint16_t L_103 = V_3;
		int32_t L_104 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_102, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_103), (int32_t)2)))));
		V_1 = L_104;
		goto IL_01e4;
	}

IL_01d8:
	{
		uint16_t L_105 = V_3;
		V_3 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1))));
	}

IL_01dd:
	{
		uint16_t L_106 = V_3;
		int32_t L_107 = V_0;
		if ((((int32_t)L_106) < ((int32_t)L_107)))
		{
			goto IL_0117;
		}
	}

IL_01e4:
	{
		int32_t L_108 = V_8;
		V_10 = (bool)((((int32_t)((int32_t)((int32_t)L_108&(int32_t)((int32_t)131072)))) == ((int32_t)0))? 1 : 0);
		Il2CppChar L_109 = V_1;
		if ((!(((uint32_t)L_109) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0282;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_110 = ___syntax5;
		NullCheck(L_110);
		bool L_111;
		L_111 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_110, ((int32_t)2048), /*hidden argument*/NULL);
		if (!L_111)
		{
			goto IL_0282;
		}
	}
	{
		Il2CppChar* L_112 = ___pString0;
		uint16_t L_113 = V_3;
		bool L_114;
		L_114 = IPv6AddressHelper_IsValid_m8090A11221F415591268CBE22105DEFB03CA0FFF((Il2CppChar*)(Il2CppChar*)L_112, ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1)), (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_114)
		{
			goto IL_0282;
		}
	}
	{
		uint64_t* L_115 = ___flags4;
		uint64_t* L_116 = ___flags4;
		int64_t L_117 = *((int64_t*)L_116);
		*((int64_t*)L_115) = (int64_t)((int64_t)((int64_t)L_117|(int64_t)((int64_t)((int64_t)((int32_t)65536)))));
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_118 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_ConfigInitialized_20();
		il2cpp_codegen_memory_barrier();
		if (L_118)
		{
			goto IL_0248;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri_InitializeUriConfig_m0DB8F34B6FAF361C0FE002FA800548608A03F8E5(/*hidden argument*/NULL);
		bool L_119 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_IriParsing_23();
		il2cpp_codegen_memory_barrier();
		G_B48_0 = __this;
		if (!L_119)
		{
			G_B49_0 = __this;
			goto IL_0242;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_120 = ___syntax5;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_121;
		L_121 = Uri_IriParsingStatic_m0F2797FEA328A2B1A72EE03F9BD88C577A7A0471(L_120, /*hidden argument*/NULL);
		G_B50_0 = ((int32_t)(L_121));
		G_B50_1 = G_B48_0;
		goto IL_0243;
	}

IL_0242:
	{
		G_B50_0 = 0;
		G_B50_1 = G_B49_0;
	}

IL_0243:
	{
		NullCheck(G_B50_1);
		G_B50_1->set_m_iriParsing_19((bool)G_B50_0);
	}

IL_0248:
	{
		bool L_122 = V_6;
		bool L_123 = V_5;
		bool L_124 = V_7;
		if (!((int32_t)((int32_t)((int32_t)((int32_t)L_122&(int32_t)L_123))&(int32_t)L_124)))
		{
			goto IL_04cf;
		}
	}
	{
		String_t** L_125 = ___newHost6;
		String_t** L_126 = ___newHost6;
		String_t* L_127 = *((String_t**)L_126);
		Il2CppChar* L_128 = ___pString0;
		uint16_t L_129 = V_3;
		int32_t L_130 = V_0;
		uint16_t L_131 = V_3;
		String_t* L_132;
		L_132 = String_CreateString_m854F19B67F5E1B63737E096BF53CC56AB12AF777(NULL, (Il2CppChar*)(Il2CppChar*)L_128, L_129, ((int32_t)il2cpp_codegen_subtract((int32_t)L_130, (int32_t)L_131)), /*hidden argument*/NULL);
		String_t* L_133;
		L_133 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_127, L_132, /*hidden argument*/NULL);
		*((RuntimeObject **)L_125) = (RuntimeObject *)L_133;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_125, (void*)(RuntimeObject *)L_133);
		uint64_t* L_134 = ___flags4;
		uint64_t* L_135 = ___flags4;
		int64_t L_136 = *((int64_t*)L_135);
		*((int64_t*)L_134) = (int64_t)((int64_t)((int64_t)L_136|(int64_t)((int64_t)17179869184LL)));
		V_4 = (bool)1;
		goto IL_04cf;
	}

IL_0282:
	{
		Il2CppChar L_137 = V_1;
		if ((((int32_t)L_137) > ((int32_t)((int32_t)57))))
		{
			goto IL_030a;
		}
	}
	{
		Il2CppChar L_138 = V_1;
		if ((((int32_t)L_138) < ((int32_t)((int32_t)48))))
		{
			goto IL_030a;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_139 = ___syntax5;
		NullCheck(L_139);
		bool L_140;
		L_140 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_139, ((int32_t)1024), /*hidden argument*/NULL);
		if (!L_140)
		{
			goto IL_030a;
		}
	}
	{
		Il2CppChar* L_141 = ___pString0;
		uint16_t L_142 = V_3;
		uint64_t* L_143 = ___flags4;
		int64_t L_144 = *((int64_t*)L_143);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_145;
		L_145 = Uri_StaticNotAny_mA7DA612608D1C43837E3DC3E31C02F994746736C(L_144, ((int64_t)((int64_t)((int32_t)536870912))), /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_146 = ___syntax5;
		NullCheck(L_146);
		bool L_147;
		L_147 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_146, ((int32_t)65536), /*hidden argument*/NULL);
		bool L_148;
		L_148 = IPv4AddressHelper_IsValid_m6CAD01230EC033CB8F4ABB645327065A56E2ED7D((Il2CppChar*)(Il2CppChar*)L_141, L_142, (int32_t*)(&V_0), (bool)0, L_145, L_147, /*hidden argument*/NULL);
		if (!L_148)
		{
			goto IL_030a;
		}
	}
	{
		uint64_t* L_149 = ___flags4;
		uint64_t* L_150 = ___flags4;
		int64_t L_151 = *((int64_t*)L_150);
		*((int64_t*)L_149) = (int64_t)((int64_t)((int64_t)L_151|(int64_t)((int64_t)((int64_t)((int32_t)131072)))));
		bool L_152 = V_6;
		bool L_153 = V_5;
		bool L_154 = V_7;
		if (!((int32_t)((int32_t)((int32_t)((int32_t)L_152&(int32_t)L_153))&(int32_t)L_154)))
		{
			goto IL_04cf;
		}
	}
	{
		String_t** L_155 = ___newHost6;
		String_t** L_156 = ___newHost6;
		String_t* L_157 = *((String_t**)L_156);
		Il2CppChar* L_158 = ___pString0;
		uint16_t L_159 = V_3;
		int32_t L_160 = V_0;
		uint16_t L_161 = V_3;
		String_t* L_162;
		L_162 = String_CreateString_m854F19B67F5E1B63737E096BF53CC56AB12AF777(NULL, (Il2CppChar*)(Il2CppChar*)L_158, L_159, ((int32_t)il2cpp_codegen_subtract((int32_t)L_160, (int32_t)L_161)), /*hidden argument*/NULL);
		String_t* L_163;
		L_163 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_157, L_162, /*hidden argument*/NULL);
		*((RuntimeObject **)L_155) = (RuntimeObject *)L_163;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_155, (void*)(RuntimeObject *)L_163);
		uint64_t* L_164 = ___flags4;
		uint64_t* L_165 = ___flags4;
		int64_t L_166 = *((int64_t*)L_165);
		*((int64_t*)L_164) = (int64_t)((int64_t)((int64_t)L_166|(int64_t)((int64_t)17179869184LL)));
		V_4 = (bool)1;
		goto IL_04cf;
	}

IL_030a:
	{
		int32_t L_167 = V_8;
		if (!((int32_t)((int32_t)L_167&(int32_t)((int32_t)512))))
		{
			goto IL_0435;
		}
	}
	{
		bool L_168 = V_5;
		if (L_168)
		{
			goto IL_0435;
		}
	}
	{
		Il2CppChar* L_169 = ___pString0;
		uint16_t L_170 = V_3;
		uint64_t* L_171 = ___flags4;
		int64_t L_172 = *((int64_t*)L_171);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_173;
		L_173 = Uri_StaticNotAny_mA7DA612608D1C43837E3DC3E31C02F994746736C(L_172, ((int64_t)((int64_t)((int32_t)536870912))), /*hidden argument*/NULL);
		bool L_174;
		L_174 = DomainNameHelper_IsValid_m023973F3D85C0B74F55D6B7576911D4813685052((Il2CppChar*)(Il2CppChar*)L_169, L_170, (int32_t*)(&V_0), (bool*)(&V_10), L_173, /*hidden argument*/NULL);
		if (!L_174)
		{
			goto IL_0435;
		}
	}
	{
		uint64_t* L_175 = ___flags4;
		uint64_t* L_176 = ___flags4;
		int64_t L_177 = *((int64_t*)L_176);
		*((int64_t*)L_175) = (int64_t)((int64_t)((int64_t)L_177|(int64_t)((int64_t)((int64_t)((int32_t)196608)))));
		bool L_178 = V_10;
		if (L_178)
		{
			goto IL_035a;
		}
	}
	{
		uint64_t* L_179 = ___flags4;
		uint64_t* L_180 = ___flags4;
		int64_t L_181 = *((int64_t*)L_180);
		*((int64_t*)L_179) = (int64_t)((int64_t)((int64_t)L_181|(int64_t)((int64_t)((int64_t)((int32_t)33554432)))));
	}

IL_035a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		int32_t L_182 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_IdnScope_22();
		il2cpp_codegen_memory_barrier();
		if (!L_182)
		{
			goto IL_04cf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		int32_t L_183 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_IdnScope_22();
		il2cpp_codegen_memory_barrier();
		if ((!(((uint32_t)L_183) == ((uint32_t)1))))
		{
			goto IL_0390;
		}
	}
	{
		Il2CppChar* L_184 = ___pString0;
		int32_t L_185 = V_0;
		String_t* L_186;
		L_186 = String_CreateString_m854F19B67F5E1B63737E096BF53CC56AB12AF777(NULL, (Il2CppChar*)(Il2CppChar*)L_184, 0, L_185, /*hidden argument*/NULL);
		bool L_187;
		L_187 = Uri_IsIntranet_m89BF3C395C8D960B103DF056976B7C369231270C(__this, L_186, /*hidden argument*/NULL);
		if (!L_187)
		{
			goto IL_0390;
		}
	}
	{
		uint64_t* L_188 = ___flags4;
		uint64_t* L_189 = ___flags4;
		int64_t L_190 = *((int64_t*)L_189);
		*((int64_t*)L_188) = (int64_t)((int64_t)((int64_t)L_190|(int64_t)((int64_t)137438953472LL)));
	}

IL_0390:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_191 = ___syntax5;
		uint64_t* L_192 = ___flags4;
		int64_t L_193 = *((int64_t*)L_192);
		bool L_194;
		L_194 = Uri_AllowIdnStatic_mF38FDCA5248AA93F8823A192D61E2180FEC9C41C(__this, L_191, L_193, /*hidden argument*/NULL);
		if (!L_194)
		{
			goto IL_04cf;
		}
	}
	{
		V_12 = (bool)1;
		V_13 = (bool)0;
		Il2CppChar* L_195 = ___pString0;
		uint16_t L_196 = V_3;
		int32_t L_197 = V_0;
		String_t* L_198;
		L_198 = DomainNameHelper_UnicodeEquivalent_m3F187B69AA5313A516F863666C0A29292C8F07A3((Il2CppChar*)(Il2CppChar*)L_195, L_196, L_197, (bool*)(&V_12), (bool*)(&V_13), /*hidden argument*/NULL);
		V_14 = L_198;
		bool L_199 = V_13;
		if (!L_199)
		{
			goto IL_0420;
		}
	}
	{
		uint64_t* L_200 = ___flags4;
		int64_t L_201 = *((int64_t*)L_200);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_202;
		L_202 = Uri_StaticNotAny_mA7DA612608D1C43837E3DC3E31C02F994746736C(L_201, ((int64_t)8589934592LL), /*hidden argument*/NULL);
		if (!L_202)
		{
			goto IL_03d7;
		}
	}
	{
		String_t* L_203 = __this->get_m_String_13();
		__this->set_m_originalUnicodeString_14(L_203);
	}

IL_03d7:
	{
		uint64_t* L_204 = ___flags4;
		uint64_t* L_205 = ___flags4;
		int64_t L_206 = *((int64_t*)L_205);
		*((int64_t*)L_204) = (int64_t)((int64_t)((int64_t)L_206|(int64_t)((int64_t)4294967296LL)));
		String_t** L_207 = ___newHost6;
		String_t* L_208 = __this->get_m_originalUnicodeString_14();
		int32_t L_209 = V_2;
		NullCheck(L_208);
		String_t* L_210;
		L_210 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_208, 0, L_209, /*hidden argument*/NULL);
		String_t* L_211 = V_9;
		String_t* L_212 = V_14;
		String_t* L_213;
		L_213 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_210, L_211, L_212, /*hidden argument*/NULL);
		*((RuntimeObject **)L_207) = (RuntimeObject *)L_213;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_207, (void*)(RuntimeObject *)L_213);
		uint64_t* L_214 = ___flags4;
		uint64_t* L_215 = ___flags4;
		int64_t L_216 = *((int64_t*)L_215);
		*((int64_t*)L_214) = (int64_t)((int64_t)((int64_t)L_216|(int64_t)((int64_t)((int64_t)((int32_t)33554432)))));
		Il2CppChar* L_217 = ___pString0;
		uint16_t L_218 = V_3;
		int32_t L_219 = V_0;
		uint16_t L_220 = V_3;
		String_t* L_221;
		L_221 = String_CreateString_m854F19B67F5E1B63737E096BF53CC56AB12AF777(NULL, (Il2CppChar*)(Il2CppChar*)L_217, L_218, ((int32_t)il2cpp_codegen_subtract((int32_t)L_219, (int32_t)L_220)), /*hidden argument*/NULL);
		__this->set_m_DnsSafeHost_16(L_221);
		V_4 = (bool)1;
	}

IL_0420:
	{
		uint64_t* L_222 = ___flags4;
		uint64_t* L_223 = ___flags4;
		int64_t L_224 = *((int64_t*)L_223);
		*((int64_t*)L_222) = (int64_t)((int64_t)((int64_t)L_224|(int64_t)((int64_t)17179869184LL)));
		goto IL_04cf;
	}

IL_0435:
	{
		int32_t L_225 = V_8;
		if (!((int32_t)((int32_t)L_225&(int32_t)((int32_t)512))))
		{
			goto IL_0495;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_226 = ___syntax5;
		NullCheck(L_226);
		bool L_227;
		L_227 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_226, ((int32_t)268435456), /*hidden argument*/NULL);
		bool L_228 = V_7;
		if (((int32_t)((int32_t)L_227&(int32_t)L_228)))
		{
			goto IL_045e;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_229 = ___syntax5;
		NullCheck(L_229);
		bool L_230;
		L_230 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_229, ((int32_t)67108864), /*hidden argument*/NULL);
		if (!L_230)
		{
			goto IL_0495;
		}
	}

IL_045e:
	{
		Il2CppChar* L_231 = ___pString0;
		uint16_t L_232 = V_3;
		uint64_t* L_233 = ___flags4;
		int64_t L_234 = *((int64_t*)L_233);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_235;
		L_235 = Uri_StaticNotAny_mA7DA612608D1C43837E3DC3E31C02F994746736C(L_234, ((int64_t)((int64_t)((int32_t)536870912))), /*hidden argument*/NULL);
		bool L_236;
		L_236 = DomainNameHelper_IsValidByIri_m97F02F9CC9EEE94308F903936E1E5D4322364869((Il2CppChar*)(Il2CppChar*)L_231, L_232, (int32_t*)(&V_0), (bool*)(&V_10), L_235, /*hidden argument*/NULL);
		if (!L_236)
		{
			goto IL_0495;
		}
	}
	{
		Il2CppChar* L_237 = ___pString0;
		uint16_t L_238 = V_3;
		int32_t L_239 = V_0;
		int32_t L_240 = V_2;
		bool L_241 = V_5;
		bool L_242 = V_6;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_243 = ___syntax5;
		String_t* L_244 = V_9;
		uint64_t* L_245 = ___flags4;
		String_t** L_246 = ___newHost6;
		int32_t* L_247 = ___err3;
		Uri_CheckAuthorityHelperHandleDnsIri_m495861D9EEE706767F37270F316951E292C60B7A(__this, (Il2CppChar*)(Il2CppChar*)L_237, L_238, L_239, L_240, L_241, L_242, L_243, L_244, (uint64_t*)L_245, (bool*)(&V_4), (String_t**)L_246, (int32_t*)L_247, /*hidden argument*/NULL);
		goto IL_04cf;
	}

IL_0495:
	{
		int32_t L_248 = V_8;
		if (!((int32_t)((int32_t)L_248&(int32_t)((int32_t)256))))
		{
			goto IL_04cf;
		}
	}
	{
		Il2CppChar* L_249 = ___pString0;
		uint16_t L_250 = V_3;
		uint64_t* L_251 = ___flags4;
		int64_t L_252 = *((int64_t*)L_251);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_253;
		L_253 = Uri_StaticNotAny_mA7DA612608D1C43837E3DC3E31C02F994746736C(L_252, ((int64_t)((int64_t)((int32_t)536870912))), /*hidden argument*/NULL);
		bool L_254;
		L_254 = UncNameHelper_IsValid_m7179761E2E8A1F136418B2E4FA00277A192CD38E((Il2CppChar*)(Il2CppChar*)L_249, L_250, (int32_t*)(&V_0), L_253, /*hidden argument*/NULL);
		if (!L_254)
		{
			goto IL_04cf;
		}
	}
	{
		int32_t L_255 = V_0;
		uint16_t L_256 = V_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_255, (int32_t)L_256))) > ((int32_t)((int32_t)256))))
		{
			goto IL_04cf;
		}
	}
	{
		uint64_t* L_257 = ___flags4;
		uint64_t* L_258 = ___flags4;
		int64_t L_259 = *((int64_t*)L_258);
		*((int64_t*)L_257) = (int64_t)((int64_t)((int64_t)L_259|(int64_t)((int64_t)((int64_t)((int32_t)262144)))));
	}

IL_04cf:
	{
		int32_t L_260 = V_0;
		uint16_t L_261 = ___length2;
		if ((((int32_t)L_260) >= ((int32_t)L_261)))
		{
			goto IL_0527;
		}
	}
	{
		Il2CppChar* L_262 = ___pString0;
		int32_t L_263 = V_0;
		int32_t L_264 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_262, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_263), (int32_t)2)))));
		if ((!(((uint32_t)L_264) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0527;
		}
	}
	{
		uint64_t* L_265 = ___flags4;
		int64_t L_266 = *((int64_t*)L_265);
		if (!((int64_t)((int64_t)L_266&(int64_t)((int64_t)((int64_t)((int32_t)458752))))))
		{
			goto IL_0527;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_267 = ___syntax5;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_268;
		L_268 = Uri_StaticIsFile_m3E03FC49813EF629A488CF3093AE0A5675210CED(L_267, /*hidden argument*/NULL);
		if (L_268)
		{
			goto IL_0527;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_269 = ___syntax5;
		NullCheck(L_269);
		bool L_270;
		L_270 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_269, ((int32_t)65536), /*hidden argument*/NULL);
		if (!L_270)
		{
			goto IL_0515;
		}
	}
	{
		int32_t* L_271 = ___err3;
		*((int32_t*)L_271) = (int32_t)8;
		uint64_t* L_272 = ___flags4;
		uint64_t* L_273 = ___flags4;
		int64_t L_274 = *((int64_t*)L_273);
		*((int64_t*)L_272) = (int64_t)((int64_t)((int64_t)L_274|(int64_t)((int64_t)((int64_t)((int32_t)458752)))));
		int32_t L_275 = V_0;
		return (uint16_t)((int32_t)((uint16_t)L_275));
	}

IL_0515:
	{
		uint64_t* L_276 = ___flags4;
		uint64_t* L_277 = ___flags4;
		int64_t L_278 = *((int64_t*)L_277);
		*((int64_t*)L_276) = (int64_t)((int64_t)((int64_t)L_278&(int64_t)((int64_t)((int64_t)((int32_t)-458753)))));
		goto IL_0634;
	}

IL_0527:
	{
		int32_t L_279 = V_0;
		uint16_t L_280 = ___length2;
		if ((((int32_t)L_279) >= ((int32_t)L_280)))
		{
			goto IL_0634;
		}
	}
	{
		Il2CppChar* L_281 = ___pString0;
		int32_t L_282 = V_0;
		int32_t L_283 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_281, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_282), (int32_t)2)))));
		if ((!(((uint32_t)L_283) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0634;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_284 = ___syntax5;
		NullCheck(L_284);
		bool L_285;
		L_285 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_284, 8, /*hidden argument*/NULL);
		if (!L_285)
		{
			goto IL_0627;
		}
	}
	{
		V_15 = 0;
		int32_t L_286 = V_0;
		V_16 = L_286;
		int32_t L_287 = V_0;
		___idx1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_287, (int32_t)1))));
		goto IL_05d3;
	}

IL_0557:
	{
		Il2CppChar* L_288 = ___pString0;
		uint16_t L_289 = ___idx1;
		int32_t L_290 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_288, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_289), (int32_t)2)))));
		V_17 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_290, (int32_t)((int32_t)48)))));
		uint16_t L_291 = V_17;
		if ((((int32_t)L_291) < ((int32_t)0)))
		{
			goto IL_0583;
		}
	}
	{
		uint16_t L_292 = V_17;
		if ((((int32_t)L_292) > ((int32_t)((int32_t)9))))
		{
			goto IL_0583;
		}
	}
	{
		int32_t L_293 = V_15;
		uint16_t L_294 = V_17;
		int32_t L_295 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_293, (int32_t)((int32_t)10))), (int32_t)L_294));
		V_15 = L_295;
		if ((((int32_t)L_295) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_05cd;
		}
	}
	{
		goto IL_05d7;
	}

IL_0583:
	{
		uint16_t L_296 = V_17;
		if ((((int32_t)L_296) == ((int32_t)((int32_t)65535))))
		{
			goto IL_05d7;
		}
	}
	{
		uint16_t L_297 = V_17;
		if ((((int32_t)L_297) == ((int32_t)((int32_t)15))))
		{
			goto IL_05d7;
		}
	}
	{
		uint16_t L_298 = V_17;
		if ((((int32_t)L_298) == ((int32_t)((int32_t)65523))))
		{
			goto IL_05d7;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_299 = ___syntax5;
		NullCheck(L_299);
		bool L_300;
		L_300 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_299, ((int32_t)4096), /*hidden argument*/NULL);
		if (!L_300)
		{
			goto IL_05c6;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_301 = ___syntax5;
		NullCheck(L_301);
		bool L_302;
		L_302 = UriParser_NotAny_m6A42FAC623F0EBDE441782DAC3E3B2ED34756D91(L_301, ((int32_t)65536), /*hidden argument*/NULL);
		if (!L_302)
		{
			goto IL_05c6;
		}
	}
	{
		uint64_t* L_303 = ___flags4;
		uint64_t* L_304 = ___flags4;
		int64_t L_305 = *((int64_t*)L_304);
		*((int64_t*)L_303) = (int64_t)((int64_t)((int64_t)L_305&(int64_t)((int64_t)((int64_t)((int32_t)-458753)))));
		goto IL_05d7;
	}

IL_05c6:
	{
		int32_t* L_306 = ___err3;
		*((int32_t*)L_306) = (int32_t)((int32_t)10);
		uint16_t L_307 = ___idx1;
		return L_307;
	}

IL_05cd:
	{
		uint16_t L_308 = ___idx1;
		___idx1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_308, (int32_t)1))));
	}

IL_05d3:
	{
		uint16_t L_309 = ___idx1;
		uint16_t L_310 = ___length2;
		if ((((int32_t)L_309) < ((int32_t)L_310)))
		{
			goto IL_0557;
		}
	}

IL_05d7:
	{
		int32_t L_311 = V_15;
		if ((((int32_t)L_311) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0604;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_312 = ___syntax5;
		NullCheck(L_312);
		bool L_313;
		L_313 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_312, ((int32_t)4096), /*hidden argument*/NULL);
		if (!L_313)
		{
			goto IL_05fd;
		}
	}
	{
		uint64_t* L_314 = ___flags4;
		uint64_t* L_315 = ___flags4;
		int64_t L_316 = *((int64_t*)L_315);
		*((int64_t*)L_314) = (int64_t)((int64_t)((int64_t)L_316&(int64_t)((int64_t)((int64_t)((int32_t)-458753)))));
		goto IL_0604;
	}

IL_05fd:
	{
		int32_t* L_317 = ___err3;
		*((int32_t*)L_317) = (int32_t)((int32_t)10);
		uint16_t L_318 = ___idx1;
		return L_318;
	}

IL_0604:
	{
		bool L_319 = V_5;
		bool L_320 = V_6;
		bool L_321 = V_4;
		if (!((int32_t)((int32_t)((int32_t)((int32_t)L_319&(int32_t)L_320))&(int32_t)L_321)))
		{
			goto IL_0634;
		}
	}
	{
		String_t** L_322 = ___newHost6;
		String_t** L_323 = ___newHost6;
		String_t* L_324 = *((String_t**)L_323);
		Il2CppChar* L_325 = ___pString0;
		int32_t L_326 = V_16;
		uint16_t L_327 = ___idx1;
		int32_t L_328 = V_16;
		String_t* L_329;
		L_329 = String_CreateString_m854F19B67F5E1B63737E096BF53CC56AB12AF777(NULL, (Il2CppChar*)(Il2CppChar*)L_325, L_326, ((int32_t)il2cpp_codegen_subtract((int32_t)L_327, (int32_t)L_328)), /*hidden argument*/NULL);
		String_t* L_330;
		L_330 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_324, L_329, /*hidden argument*/NULL);
		*((RuntimeObject **)L_322) = (RuntimeObject *)L_330;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_322, (void*)(RuntimeObject *)L_330);
		goto IL_0634;
	}

IL_0627:
	{
		uint64_t* L_331 = ___flags4;
		uint64_t* L_332 = ___flags4;
		int64_t L_333 = *((int64_t*)L_332);
		*((int64_t*)L_331) = (int64_t)((int64_t)((int64_t)L_333&(int64_t)((int64_t)((int64_t)((int32_t)-458753)))));
	}

IL_0634:
	{
		uint64_t* L_334 = ___flags4;
		int64_t L_335 = *((int64_t*)L_334);
		if (((int64_t)((int64_t)L_335&(int64_t)((int64_t)((int64_t)((int32_t)458752))))))
		{
			goto IL_07be;
		}
	}
	{
		uint64_t* L_336 = ___flags4;
		uint64_t* L_337 = ___flags4;
		int64_t L_338 = *((int64_t*)L_337);
		*((int64_t*)L_336) = (int64_t)((int64_t)((int64_t)L_338&(int64_t)((int64_t)((int64_t)((int32_t)-2097153)))));
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_339 = ___syntax5;
		NullCheck(L_339);
		bool L_340;
		L_340 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_339, ((int32_t)4096), /*hidden argument*/NULL);
		if (!L_340)
		{
			goto IL_06b2;
		}
	}
	{
		uint64_t* L_341 = ___flags4;
		uint64_t* L_342 = ___flags4;
		int64_t L_343 = *((int64_t*)L_342);
		*((int64_t*)L_341) = (int64_t)((int64_t)((int64_t)L_343|(int64_t)((int64_t)((int64_t)((int32_t)327680)))));
		uint16_t L_344 = ___idx1;
		V_0 = L_344;
		goto IL_0694;
	}

IL_066f:
	{
		Il2CppChar* L_345 = ___pString0;
		int32_t L_346 = V_0;
		int32_t L_347 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_345, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_346), (int32_t)2)))));
		if ((((int32_t)L_347) == ((int32_t)((int32_t)47))))
		{
			goto IL_0698;
		}
	}
	{
		Il2CppChar* L_348 = ___pString0;
		int32_t L_349 = V_0;
		int32_t L_350 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_348, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_349), (int32_t)2)))));
		if ((((int32_t)L_350) == ((int32_t)((int32_t)63))))
		{
			goto IL_0698;
		}
	}
	{
		Il2CppChar* L_351 = ___pString0;
		int32_t L_352 = V_0;
		int32_t L_353 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_351, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_352), (int32_t)2)))));
		if ((((int32_t)L_353) == ((int32_t)((int32_t)35))))
		{
			goto IL_0698;
		}
	}
	{
		int32_t L_354 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_354, (int32_t)1));
	}

IL_0694:
	{
		int32_t L_355 = V_0;
		uint16_t L_356 = ___length2;
		if ((((int32_t)L_355) < ((int32_t)L_356)))
		{
			goto IL_066f;
		}
	}

IL_0698:
	{
		Il2CppChar* L_357 = ___pString0;
		int32_t L_358 = V_2;
		int32_t L_359 = V_0;
		bool L_360 = V_5;
		bool L_361 = V_6;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_362 = ___syntax5;
		uint64_t* L_363 = ___flags4;
		String_t** L_364 = ___newHost6;
		int32_t* L_365 = ___err3;
		Uri_CheckAuthorityHelperHandleAnyHostIri_m25D24DA750D1E2D025C22CF6D2BAD269AB3FA21B(__this, (Il2CppChar*)(Il2CppChar*)L_357, L_358, L_359, L_360, L_361, L_362, (uint64_t*)L_363, (String_t**)L_364, (int32_t*)L_365, /*hidden argument*/NULL);
		goto IL_07be;
	}

IL_06b2:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_366 = ___syntax5;
		NullCheck(L_366);
		bool L_367;
		L_367 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_366, ((int32_t)65536), /*hidden argument*/NULL);
		if (!L_367)
		{
			goto IL_078c;
		}
	}
	{
		V_18 = (bool)0;
		uint16_t L_368 = ___idx1;
		V_19 = L_368;
		uint16_t L_369 = ___idx1;
		V_0 = L_369;
		goto IL_071f;
	}

IL_06cd:
	{
		bool L_370 = V_18;
		if (!L_370)
		{
			goto IL_06f2;
		}
	}
	{
		Il2CppChar* L_371 = ___pString0;
		int32_t L_372 = V_0;
		int32_t L_373 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_371, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_372), (int32_t)2)))));
		if ((((int32_t)L_373) == ((int32_t)((int32_t)47))))
		{
			goto IL_0723;
		}
	}
	{
		Il2CppChar* L_374 = ___pString0;
		int32_t L_375 = V_0;
		int32_t L_376 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_374, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_375), (int32_t)2)))));
		if ((((int32_t)L_376) == ((int32_t)((int32_t)63))))
		{
			goto IL_0723;
		}
	}
	{
		Il2CppChar* L_377 = ___pString0;
		int32_t L_378 = V_0;
		int32_t L_379 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_377, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_378), (int32_t)2)))));
		if ((((int32_t)L_379) == ((int32_t)((int32_t)35))))
		{
			goto IL_0723;
		}
	}

IL_06f2:
	{
		int32_t L_380 = V_0;
		uint16_t L_381 = ___idx1;
		if ((((int32_t)L_380) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_381, (int32_t)2)))))
		{
			goto IL_0708;
		}
	}
	{
		Il2CppChar* L_382 = ___pString0;
		int32_t L_383 = V_0;
		int32_t L_384 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_382, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_383), (int32_t)2)))));
		if ((!(((uint32_t)L_384) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0708;
		}
	}
	{
		V_18 = (bool)1;
		goto IL_071b;
	}

IL_0708:
	{
		int32_t* L_385 = ___err3;
		*((int32_t*)L_385) = (int32_t)8;
		uint64_t* L_386 = ___flags4;
		uint64_t* L_387 = ___flags4;
		int64_t L_388 = *((int64_t*)L_387);
		*((int64_t*)L_386) = (int64_t)((int64_t)((int64_t)L_388|(int64_t)((int64_t)((int64_t)((int32_t)458752)))));
		uint16_t L_389 = ___idx1;
		return L_389;
	}

IL_071b:
	{
		int32_t L_390 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_390, (int32_t)1));
	}

IL_071f:
	{
		int32_t L_391 = V_0;
		uint16_t L_392 = ___length2;
		if ((((int32_t)L_391) < ((int32_t)L_392)))
		{
			goto IL_06cd;
		}
	}

IL_0723:
	{
		uint64_t* L_393 = ___flags4;
		uint64_t* L_394 = ___flags4;
		int64_t L_395 = *((int64_t*)L_394);
		*((int64_t*)L_393) = (int64_t)((int64_t)((int64_t)L_395|(int64_t)((int64_t)((int64_t)((int32_t)327680)))));
		bool L_396 = V_5;
		bool L_397 = V_6;
		if (!((int32_t)((int32_t)L_396&(int32_t)L_397)))
		{
			goto IL_07be;
		}
	}
	{
		uint64_t* L_398 = ___flags4;
		int64_t L_399 = *((int64_t*)L_398);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_400;
		L_400 = Uri_StaticNotAny_mA7DA612608D1C43837E3DC3E31C02F994746736C(L_399, ((int64_t)17179869184LL), /*hidden argument*/NULL);
		if (!L_400)
		{
			goto IL_07be;
		}
	}
	{
		Il2CppChar* L_401 = ___pString0;
		int32_t L_402 = V_19;
		int32_t L_403 = V_0;
		int32_t L_404 = V_19;
		String_t* L_405;
		L_405 = String_CreateString_m854F19B67F5E1B63737E096BF53CC56AB12AF777(NULL, (Il2CppChar*)(Il2CppChar*)L_401, L_402, ((int32_t)il2cpp_codegen_subtract((int32_t)L_403, (int32_t)L_404)), /*hidden argument*/NULL);
		V_20 = L_405;
	}

IL_075b:
	try
	{// begin try (depth: 1)
		String_t** L_406 = ___newHost6;
		String_t** L_407 = ___newHost6;
		String_t* L_408 = *((String_t**)L_407);
		String_t* L_409 = V_20;
		NullCheck(L_409);
		String_t* L_410;
		L_410 = String_Normalize_m8CD42072C9F7B418990609EB63C5F7E1328321A9(L_409, 1, /*hidden argument*/NULL);
		String_t* L_411;
		L_411 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_408, L_410, /*hidden argument*/NULL);
		*((RuntimeObject **)L_406) = (RuntimeObject *)L_411;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_406, (void*)(RuntimeObject *)L_411);
		goto IL_077a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0770;
		}
		throw e;
	}

CATCH_0770:
	{// begin catch(System.ArgumentException)
		int32_t* L_412 = ___err3;
		*((int32_t*)L_412) = (int32_t)1;
		uint16_t L_413 = ___idx1;
		V_11 = L_413;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_07c1;
	}// end catch (depth: 1)

IL_077a:
	{
		uint64_t* L_414 = ___flags4;
		uint64_t* L_415 = ___flags4;
		int64_t L_416 = *((int64_t*)L_415);
		*((int64_t*)L_414) = (int64_t)((int64_t)((int64_t)L_416|(int64_t)((int64_t)17179869184LL)));
		goto IL_07be;
	}

IL_078c:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_417 = ___syntax5;
		NullCheck(L_417);
		bool L_418;
		L_418 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_417, 1, /*hidden argument*/NULL);
		if (L_418)
		{
			goto IL_07ab;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_419 = ___syntax5;
		NullCheck(L_419);
		bool L_420;
		L_420 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_419, ((int32_t)16384), /*hidden argument*/NULL);
		if (!L_420)
		{
			goto IL_07be;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		bool L_421;
		L_421 = UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2(/*hidden argument*/NULL);
		if (L_421)
		{
			goto IL_07be;
		}
	}

IL_07ab:
	{
		int32_t* L_422 = ___err3;
		*((int32_t*)L_422) = (int32_t)8;
		uint64_t* L_423 = ___flags4;
		uint64_t* L_424 = ___flags4;
		int64_t L_425 = *((int64_t*)L_424);
		*((int64_t*)L_423) = (int64_t)((int64_t)((int64_t)L_425|(int64_t)((int64_t)((int64_t)((int32_t)458752)))));
		uint16_t L_426 = ___idx1;
		return L_426;
	}

IL_07be:
	{
		int32_t L_427 = V_0;
		return (uint16_t)((int32_t)((uint16_t)L_427));
	}

IL_07c1:
	{
		uint16_t L_428 = V_11;
		return L_428;
	}
}
// System.Void System.Uri::CheckAuthorityHelperHandleDnsIri(System.Char*,System.UInt16,System.Int32,System.Int32,System.Boolean,System.Boolean,System.UriParser,System.String,System.Uri/Flags&,System.Boolean&,System.String&,System.ParsingError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_CheckAuthorityHelperHandleDnsIri_m495861D9EEE706767F37270F316951E292C60B7A (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Il2CppChar* ___pString0, uint16_t ___start1, int32_t ___end2, int32_t ___startInput3, bool ___iriParsing4, bool ___hasUnicode5, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax6, String_t* ___userInfoString7, uint64_t* ___flags8, bool* ___justNormalized9, String_t** ___newHost10, int32_t* ___err11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	String_t* G_B12_0 = NULL;
	String_t** G_B12_1 = NULL;
	String_t* G_B11_0 = NULL;
	String_t** G_B11_1 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	String_t** G_B13_2 = NULL;
	String_t* G_B19_0 = NULL;
	String_t** G_B19_1 = NULL;
	String_t* G_B18_0 = NULL;
	String_t** G_B18_1 = NULL;
	String_t* G_B20_0 = NULL;
	String_t* G_B20_1 = NULL;
	String_t** G_B20_2 = NULL;
	int32_t G_B27_0 = 0;
	String_t* G_B33_0 = NULL;
	String_t** G_B33_1 = NULL;
	String_t* G_B32_0 = NULL;
	String_t** G_B32_1 = NULL;
	String_t* G_B34_0 = NULL;
	String_t* G_B34_1 = NULL;
	String_t** G_B34_2 = NULL;
	{
		uint64_t* L_0 = ___flags8;
		uint64_t* L_1 = ___flags8;
		int64_t L_2 = *((int64_t*)L_1);
		*((int64_t*)L_0) = (int64_t)((int64_t)((int64_t)L_2|(int64_t)((int64_t)((int64_t)((int32_t)196608)))));
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_IdnScope_22();
		il2cpp_codegen_memory_barrier();
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		Il2CppChar* L_4 = ___pString0;
		int32_t L_5 = ___end2;
		String_t* L_6;
		L_6 = String_CreateString_m854F19B67F5E1B63737E096BF53CC56AB12AF777(NULL, (Il2CppChar*)(Il2CppChar*)L_4, 0, L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Uri_IsIntranet_m89BF3C395C8D960B103DF056976B7C369231270C(__this, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		uint64_t* L_8 = ___flags8;
		uint64_t* L_9 = ___flags8;
		int64_t L_10 = *((int64_t*)L_9);
		*((int64_t*)L_8) = (int64_t)((int64_t)((int64_t)L_10|(int64_t)((int64_t)137438953472LL)));
	}

IL_0037:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_11 = ___syntax6;
		uint64_t* L_12 = ___flags8;
		int64_t L_13 = *((int64_t*)L_12);
		bool L_14;
		L_14 = Uri_AllowIdnStatic_mF38FDCA5248AA93F8823A192D61E2180FEC9C41C(__this, L_11, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0185;
		}
	}
	{
		V_0 = (bool)1;
		V_1 = (bool)0;
		Il2CppChar* L_15 = ___pString0;
		uint16_t L_16 = ___start1;
		int32_t L_17 = ___end2;
		String_t* L_18;
		L_18 = DomainNameHelper_IdnEquivalent_mBA80E13A0C970D723F1A05F175F6B96E0DE3C974((Il2CppChar*)(Il2CppChar*)L_15, L_16, L_17, (bool*)(&V_0), (bool*)(&V_1), /*hidden argument*/NULL);
		V_2 = L_18;
		String_t* L_19 = V_2;
		Il2CppChar* L_20 = ___pString0;
		uint16_t L_21 = ___start1;
		int32_t L_22 = ___end2;
		String_t* L_23;
		L_23 = DomainNameHelper_UnicodeEquivalent_m862F489809AFF128883F7E52A9B56D0169AE5168(L_19, (Il2CppChar*)(Il2CppChar*)L_20, L_21, L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		bool L_24 = V_0;
		if (L_24)
		{
			goto IL_0075;
		}
	}
	{
		uint64_t* L_25 = ___flags8;
		uint64_t* L_26 = ___flags8;
		int64_t L_27 = *((int64_t*)L_26);
		*((int64_t*)L_25) = (int64_t)((int64_t)((int64_t)L_27|(int64_t)((int64_t)68719476736LL)));
	}

IL_0075:
	{
		bool L_28 = V_1;
		if (!L_28)
		{
			goto IL_0088;
		}
	}
	{
		uint64_t* L_29 = ___flags8;
		uint64_t* L_30 = ___flags8;
		int64_t L_31 = *((int64_t*)L_30);
		*((int64_t*)L_29) = (int64_t)((int64_t)((int64_t)L_31|(int64_t)((int64_t)4294967296LL)));
	}

IL_0088:
	{
		bool L_32 = V_0;
		bool L_33 = V_1;
		if (!((int32_t)((int32_t)L_32&(int32_t)L_33)))
		{
			goto IL_00dd;
		}
	}
	{
		uint64_t* L_34 = ___flags8;
		int64_t L_35 = *((int64_t*)L_34);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Uri_StaticNotAny_mA7DA612608D1C43837E3DC3E31C02F994746736C(L_35, ((int64_t)8589934592LL), /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00dd;
		}
	}
	{
		String_t* L_37 = __this->get_m_String_13();
		__this->set_m_originalUnicodeString_14(L_37);
		String_t** L_38 = ___newHost10;
		String_t* L_39 = __this->get_m_originalUnicodeString_14();
		int32_t L_40 = ___startInput3;
		NullCheck(L_39);
		String_t* L_41;
		L_41 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_39, 0, L_40, /*hidden argument*/NULL);
		uint64_t* L_42 = ___flags8;
		int64_t L_43 = *((int64_t*)L_42);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Uri_StaticInFact_m6B17A3B95B81DABD390B643ABD9ADAA316D5EF98(L_43, ((int64_t)((int64_t)((int32_t)2097152))), /*hidden argument*/NULL);
		G_B11_0 = L_41;
		G_B11_1 = L_38;
		if (L_44)
		{
			G_B12_0 = L_41;
			G_B12_1 = L_38;
			goto IL_00cf;
		}
	}
	{
		G_B13_0 = ((String_t*)(NULL));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00d1;
	}

IL_00cf:
	{
		String_t* L_45 = ___userInfoString7;
		G_B13_0 = L_45;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00d1:
	{
		String_t* L_46;
		L_46 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B13_1, G_B13_0, /*hidden argument*/NULL);
		*((RuntimeObject **)G_B13_2) = (RuntimeObject *)L_46;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)G_B13_2, (void*)(RuntimeObject *)L_46);
		bool* L_47 = ___justNormalized9;
		*((int8_t*)L_47) = (int8_t)1;
		goto IL_0142;
	}

IL_00dd:
	{
		bool L_48 = ___iriParsing4;
		if (L_48)
		{
			goto IL_0142;
		}
	}
	{
		uint64_t* L_49 = ___flags8;
		int64_t L_50 = *((int64_t*)L_49);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = Uri_StaticInFact_m6B17A3B95B81DABD390B643ABD9ADAA316D5EF98(L_50, ((int64_t)68719476736LL), /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_0107;
		}
	}
	{
		uint64_t* L_52 = ___flags8;
		int64_t L_53 = *((int64_t*)L_52);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = Uri_StaticInFact_m6B17A3B95B81DABD390B643ABD9ADAA316D5EF98(L_53, ((int64_t)4294967296LL), /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_0142;
		}
	}

IL_0107:
	{
		String_t* L_55 = __this->get_m_String_13();
		__this->set_m_originalUnicodeString_14(L_55);
		String_t** L_56 = ___newHost10;
		String_t* L_57 = __this->get_m_originalUnicodeString_14();
		int32_t L_58 = ___startInput3;
		NullCheck(L_57);
		String_t* L_59;
		L_59 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_57, 0, L_58, /*hidden argument*/NULL);
		uint64_t* L_60 = ___flags8;
		int64_t L_61 = *((int64_t*)L_60);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = Uri_StaticInFact_m6B17A3B95B81DABD390B643ABD9ADAA316D5EF98(L_61, ((int64_t)((int64_t)((int32_t)2097152))), /*hidden argument*/NULL);
		G_B18_0 = L_59;
		G_B18_1 = L_56;
		if (L_62)
		{
			G_B19_0 = L_59;
			G_B19_1 = L_56;
			goto IL_0136;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		goto IL_0138;
	}

IL_0136:
	{
		String_t* L_63 = ___userInfoString7;
		G_B20_0 = L_63;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
	}

IL_0138:
	{
		String_t* L_64;
		L_64 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B20_1, G_B20_0, /*hidden argument*/NULL);
		*((RuntimeObject **)G_B20_2) = (RuntimeObject *)L_64;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)G_B20_2, (void*)(RuntimeObject *)L_64);
		bool* L_65 = ___justNormalized9;
		*((int8_t*)L_65) = (int8_t)1;
	}

IL_0142:
	{
		bool L_66 = V_0;
		if (!L_66)
		{
			goto IL_0148;
		}
	}
	{
		bool L_67 = V_1;
		if (!L_67)
		{
			goto IL_0161;
		}
	}

IL_0148:
	{
		String_t* L_68 = V_2;
		__this->set_m_DnsSafeHost_16(L_68);
		String_t** L_69 = ___newHost10;
		String_t** L_70 = ___newHost10;
		String_t* L_71 = *((String_t**)L_70);
		String_t* L_72 = V_3;
		String_t* L_73;
		L_73 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_71, L_72, /*hidden argument*/NULL);
		*((RuntimeObject **)L_69) = (RuntimeObject *)L_73;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_69, (void*)(RuntimeObject *)L_73);
		bool* L_74 = ___justNormalized9;
		*((int8_t*)L_74) = (int8_t)1;
		goto IL_01bc;
	}

IL_0161:
	{
		bool L_75 = V_0;
		if (!L_75)
		{
			goto IL_016a;
		}
	}
	{
		bool L_76 = V_1;
		G_B27_0 = ((((int32_t)L_76) == ((int32_t)0))? 1 : 0);
		goto IL_016b;
	}

IL_016a:
	{
		G_B27_0 = 0;
	}

IL_016b:
	{
		bool L_77 = ___iriParsing4;
		bool L_78 = ___hasUnicode5;
		if (!((int32_t)((int32_t)((int32_t)((int32_t)G_B27_0&(int32_t)L_77))&(int32_t)L_78)))
		{
			goto IL_01bc;
		}
	}
	{
		String_t** L_79 = ___newHost10;
		String_t** L_80 = ___newHost10;
		String_t* L_81 = *((String_t**)L_80);
		String_t* L_82 = V_3;
		String_t* L_83;
		L_83 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_81, L_82, /*hidden argument*/NULL);
		*((RuntimeObject **)L_79) = (RuntimeObject *)L_83;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_79, (void*)(RuntimeObject *)L_83);
		bool* L_84 = ___justNormalized9;
		*((int8_t*)L_84) = (int8_t)1;
		goto IL_01bc;
	}

IL_0185:
	{
		bool L_85 = ___hasUnicode5;
		if (!L_85)
		{
			goto IL_01bc;
		}
	}
	{
		Il2CppChar* L_86 = ___pString0;
		uint16_t L_87 = ___start1;
		int32_t L_88 = ___end2;
		uint16_t L_89 = ___start1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		String_t* L_90;
		L_90 = Uri_StripBidiControlCharacter_m17F47758CA4DA1A5D21B3D39D00E8364DC2CAF50((Il2CppChar*)(Il2CppChar*)L_86, L_87, ((int32_t)il2cpp_codegen_subtract((int32_t)L_88, (int32_t)L_89)), /*hidden argument*/NULL);
		V_4 = L_90;
	}

IL_0195:
	try
	{// begin try (depth: 1)
		{
			String_t** L_91 = ___newHost10;
			String_t** L_92 = ___newHost10;
			String_t* L_93 = *((String_t**)L_92);
			String_t* L_94 = V_4;
			G_B32_0 = L_93;
			G_B32_1 = L_91;
			if (L_94)
			{
				G_B33_0 = L_93;
				G_B33_1 = L_91;
				goto IL_01a1;
			}
		}

IL_019e:
		{
			G_B34_0 = ((String_t*)(NULL));
			G_B34_1 = G_B32_0;
			G_B34_2 = G_B32_1;
			goto IL_01a9;
		}

IL_01a1:
		{
			String_t* L_95 = V_4;
			NullCheck(L_95);
			String_t* L_96;
			L_96 = String_Normalize_m8CD42072C9F7B418990609EB63C5F7E1328321A9(L_95, 1, /*hidden argument*/NULL);
			G_B34_0 = L_96;
			G_B34_1 = G_B33_0;
			G_B34_2 = G_B33_1;
		}

IL_01a9:
		{
			String_t* L_97;
			L_97 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B34_1, G_B34_0, /*hidden argument*/NULL);
			*((RuntimeObject **)G_B34_2) = (RuntimeObject *)L_97;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)G_B34_2, (void*)(RuntimeObject *)L_97);
			goto IL_01b8;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01b1;
		}
		throw e;
	}

CATCH_01b1:
	{// begin catch(System.ArgumentException)
		int32_t* L_98 = ___err11;
		*((int32_t*)L_98) = (int32_t)8;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01b8;
	}// end catch (depth: 1)

IL_01b8:
	{
		bool* L_99 = ___justNormalized9;
		*((int8_t*)L_99) = (int8_t)1;
	}

IL_01bc:
	{
		uint64_t* L_100 = ___flags8;
		uint64_t* L_101 = ___flags8;
		int64_t L_102 = *((int64_t*)L_101);
		*((int64_t*)L_100) = (int64_t)((int64_t)((int64_t)L_102|(int64_t)((int64_t)17179869184LL)));
		return;
	}
}
// System.Void System.Uri::CheckAuthorityHelperHandleAnyHostIri(System.Char*,System.Int32,System.Int32,System.Boolean,System.Boolean,System.UriParser,System.Uri/Flags&,System.String&,System.ParsingError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_CheckAuthorityHelperHandleAnyHostIri_m25D24DA750D1E2D025C22CF6D2BAD269AB3FA21B (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Il2CppChar* ___pString0, int32_t ___startInput1, int32_t ___end2, bool ___iriParsing3, bool ___hasUnicode4, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax5, uint64_t* ___flags6, String_t** ___newHost7, int32_t* ___err8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		uint64_t* L_0 = ___flags6;
		int64_t L_1 = *((int64_t*)L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Uri_StaticNotAny_mA7DA612608D1C43837E3DC3E31C02F994746736C(L_1, ((int64_t)17179869184LL), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0124;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_3 = ___syntax5;
		uint64_t* L_4 = ___flags6;
		int64_t L_5 = *((int64_t*)L_4);
		bool L_6;
		L_6 = Uri_AllowIdnStatic_mF38FDCA5248AA93F8823A192D61E2180FEC9C41C(__this, L_3, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		bool L_7 = ___iriParsing3;
		bool L_8 = ___hasUnicode4;
		if (!((int32_t)((int32_t)L_7&(int32_t)L_8)))
		{
			goto IL_0124;
		}
	}

IL_002d:
	{
		Il2CppChar* L_9 = ___pString0;
		int32_t L_10 = ___startInput1;
		int32_t L_11 = ___end2;
		int32_t L_12 = ___startInput1;
		String_t* L_13;
		L_13 = String_CreateString_m854F19B67F5E1B63737E096BF53CC56AB12AF777(NULL, (Il2CppChar*)(Il2CppChar*)L_9, L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)), /*hidden argument*/NULL);
		V_0 = L_13;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_14 = ___syntax5;
		uint64_t* L_15 = ___flags6;
		int64_t L_16 = *((int64_t*)L_15);
		bool L_17;
		L_17 = Uri_AllowIdnStatic_mF38FDCA5248AA93F8823A192D61E2180FEC9C41C(__this, L_14, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00f8;
		}
	}
	{
		V_1 = (bool)1;
		V_2 = (bool)0;
		Il2CppChar* L_18 = ___pString0;
		int32_t L_19 = ___startInput1;
		int32_t L_20 = ___end2;
		String_t* L_21;
		L_21 = DomainNameHelper_UnicodeEquivalent_m3F187B69AA5313A516F863666C0A29292C8F07A3((Il2CppChar*)(Il2CppChar*)L_18, L_19, L_20, (bool*)(&V_1), (bool*)(&V_2), /*hidden argument*/NULL);
		V_3 = L_21;
		bool L_22 = V_1;
		bool L_23 = V_2;
		if (((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0061;
		}
	}
	{
		bool L_24 = V_1;
		if (L_24)
		{
			goto IL_0094;
		}
	}

IL_0061:
	{
		bool L_25 = ___iriParsing3;
		bool L_26 = ___hasUnicode4;
		if (((int32_t)((int32_t)L_25&(int32_t)L_26)))
		{
			goto IL_0094;
		}
	}
	{
		String_t* L_27 = __this->get_m_String_13();
		__this->set_m_originalUnicodeString_14(L_27);
		String_t** L_28 = ___newHost7;
		String_t* L_29 = __this->get_m_originalUnicodeString_14();
		int32_t L_30 = ___startInput1;
		NullCheck(L_29);
		String_t* L_31;
		L_31 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_29, 0, L_30, /*hidden argument*/NULL);
		*((RuntimeObject **)L_28) = (RuntimeObject *)L_31;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_28, (void*)(RuntimeObject *)L_31);
		uint64_t* L_32 = ___flags6;
		uint64_t* L_33 = ___flags6;
		int64_t L_34 = *((int64_t*)L_33);
		*((int64_t*)L_32) = (int64_t)((int64_t)((int64_t)L_34|(int64_t)((int64_t)8589934592LL)));
	}

IL_0094:
	{
		bool L_35 = V_2;
		if (L_35)
		{
			goto IL_009a;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00e3;
		}
	}

IL_009a:
	{
		String_t** L_37 = ___newHost7;
		String_t** L_38 = ___newHost7;
		String_t* L_39 = *((String_t**)L_38);
		String_t* L_40 = V_3;
		String_t* L_41;
		L_41 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_39, L_40, /*hidden argument*/NULL);
		*((RuntimeObject **)L_37) = (RuntimeObject *)L_41;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_37, (void*)(RuntimeObject *)L_41);
		V_4 = (String_t*)NULL;
		Il2CppChar* L_42 = ___pString0;
		int32_t L_43 = ___startInput1;
		int32_t L_44 = ___end2;
		String_t* L_45;
		L_45 = DomainNameHelper_IdnEquivalent_mEF2BE28789962238A2B054639C82F8F711903CDC((Il2CppChar*)(Il2CppChar*)L_42, L_43, L_44, (bool*)(&V_1), (String_t**)(&V_4), /*hidden argument*/NULL);
		__this->set_m_DnsSafeHost_16(L_45);
		bool L_46 = V_2;
		if (!L_46)
		{
			goto IL_00ce;
		}
	}
	{
		uint64_t* L_47 = ___flags6;
		uint64_t* L_48 = ___flags6;
		int64_t L_49 = *((int64_t*)L_48);
		*((int64_t*)L_47) = (int64_t)((int64_t)((int64_t)L_49|(int64_t)((int64_t)4294967296LL)));
	}

IL_00ce:
	{
		bool L_50 = V_1;
		if (L_50)
		{
			goto IL_0114;
		}
	}
	{
		uint64_t* L_51 = ___flags6;
		uint64_t* L_52 = ___flags6;
		int64_t L_53 = *((int64_t*)L_52);
		*((int64_t*)L_51) = (int64_t)((int64_t)((int64_t)L_53|(int64_t)((int64_t)68719476736LL)));
		goto IL_0114;
	}

IL_00e3:
	{
		bool L_54 = ___iriParsing3;
		bool L_55 = ___hasUnicode4;
		if (!((int32_t)((int32_t)L_54&(int32_t)L_55)))
		{
			goto IL_0114;
		}
	}
	{
		String_t** L_56 = ___newHost7;
		String_t** L_57 = ___newHost7;
		String_t* L_58 = *((String_t**)L_57);
		String_t* L_59 = V_0;
		String_t* L_60;
		L_60 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_58, L_59, /*hidden argument*/NULL);
		*((RuntimeObject **)L_56) = (RuntimeObject *)L_60;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_56, (void*)(RuntimeObject *)L_60);
		goto IL_0114;
	}

IL_00f8:
	{
	}

IL_00f9:
	try
	{// begin try (depth: 1)
		String_t** L_61 = ___newHost7;
		String_t** L_62 = ___newHost7;
		String_t* L_63 = *((String_t**)L_62);
		String_t* L_64 = V_0;
		NullCheck(L_64);
		String_t* L_65;
		L_65 = String_Normalize_m8CD42072C9F7B418990609EB63C5F7E1328321A9(L_64, 1, /*hidden argument*/NULL);
		String_t* L_66;
		L_66 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_63, L_65, /*hidden argument*/NULL);
		*((RuntimeObject **)L_61) = (RuntimeObject *)L_66;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_61, (void*)(RuntimeObject *)L_66);
		goto IL_0114;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_010d;
		}
		throw e;
	}

CATCH_010d:
	{// begin catch(System.ArgumentException)
		int32_t* L_67 = ___err8;
		*((int32_t*)L_67) = (int32_t)8;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0114;
	}// end catch (depth: 1)

IL_0114:
	{
		uint64_t* L_68 = ___flags6;
		uint64_t* L_69 = ___flags6;
		int64_t L_70 = *((int64_t*)L_69);
		*((int64_t*)L_68) = (int64_t)((int64_t)((int64_t)L_70|(int64_t)((int64_t)17179869184LL)));
	}

IL_0124:
	{
		return;
	}
}
// System.Void System.Uri::FindEndOfComponent(System.String,System.UInt16&,System.UInt16,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_FindEndOfComponent_m82D6E67E45114D23F403807E6D711C2A4E574567 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___input0, uint16_t* ___idx1, uint16_t ___end2, Il2CppChar ___delim3, const RuntimeMethod* method)
{
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___input0;
		V_1 = L_0;
		String_t* L_1 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_1);
		Il2CppChar* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar* L_3 = V_0;
		int32_t L_4;
		L_4 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, (int32_t)L_4));
	}

IL_0010:
	{
		Il2CppChar* L_5 = V_0;
		uint16_t* L_6 = ___idx1;
		uint16_t L_7 = ___end2;
		Il2CppChar L_8 = ___delim3;
		Uri_FindEndOfComponent_mFFFB2266B9FDDB757E145586461BF46D26C509C9(__this, (Il2CppChar*)(Il2CppChar*)L_5, (uint16_t*)L_6, L_7, L_8, /*hidden argument*/NULL);
		V_1 = (String_t*)NULL;
		return;
	}
}
// System.Void System.Uri::FindEndOfComponent(System.Char*,System.UInt16&,System.UInt16,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_FindEndOfComponent_mFFFB2266B9FDDB757E145586461BF46D26C509C9 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Il2CppChar* ___str0, uint16_t* ___idx1, uint16_t ___end2, Il2CppChar ___delim3, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	uint16_t V_1 = 0;
	{
		V_0 = ((int32_t)65535);
		uint16_t* L_0 = ___idx1;
		int32_t L_1 = *((uint16_t*)L_0);
		V_1 = (uint16_t)L_1;
		goto IL_003f;
	}

IL_000b:
	{
		Il2CppChar* L_2 = ___str0;
		uint16_t L_3 = V_1;
		int32_t L_4 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_3), (int32_t)2)))));
		V_0 = L_4;
		Il2CppChar L_5 = V_0;
		Il2CppChar L_6 = ___delim3;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0043;
		}
	}
	{
		Il2CppChar L_7 = ___delim3;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_003a;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_003a;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_9 = __this->get_m_Syntax_15();
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_10 = __this->get_m_Syntax_15();
		NullCheck(L_10);
		bool L_11;
		L_11 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_10, ((int32_t)64), /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0043;
		}
	}

IL_003a:
	{
		uint16_t L_12 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1))));
	}

IL_003f:
	{
		uint16_t L_13 = V_1;
		uint16_t L_14 = ___end2;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000b;
		}
	}

IL_0043:
	{
		uint16_t* L_15 = ___idx1;
		uint16_t L_16 = V_1;
		*((int16_t*)L_15) = (int16_t)L_16;
		return;
	}
}
// System.Uri/Check System.Uri::CheckCanonical(System.Char*,System.UInt16&,System.UInt16,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_CheckCanonical_mFD937A06DC3885481C374ACDD190A3B3E40152F3 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Il2CppChar* ___str0, uint16_t* ___idx1, uint16_t ___end2, Il2CppChar ___delim3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppChar V_3 = 0x0;
	uint16_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		V_0 = 0;
		V_1 = (bool)0;
		V_2 = (bool)0;
		V_3 = ((int32_t)65535);
		uint16_t* L_0 = ___idx1;
		int32_t L_1 = *((uint16_t*)L_0);
		V_4 = (uint16_t)L_1;
		goto IL_0288;
	}

IL_0015:
	{
		Il2CppChar* L_2 = ___str0;
		uint16_t L_3 = V_4;
		int32_t L_4 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_3), (int32_t)2)))));
		V_3 = L_4;
		Il2CppChar L_5 = V_3;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)31))))
		{
			goto IL_0030;
		}
	}
	{
		Il2CppChar L_6 = V_3;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)127))))
		{
			goto IL_003e;
		}
	}
	{
		Il2CppChar L_7 = V_3;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)159))))
		{
			goto IL_003e;
		}
	}

IL_0030:
	{
		V_1 = (bool)1;
		V_2 = (bool)1;
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8|(int32_t)((int32_t)32)));
		goto IL_0281;
	}

IL_003e:
	{
		Il2CppChar L_9 = V_3;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)122))))
		{
			goto IL_009f;
		}
	}
	{
		Il2CppChar L_10 = V_3;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)126))))
		{
			goto IL_009f;
		}
	}
	{
		bool L_11 = __this->get_m_iriParsing_19();
		if (!L_11)
		{
			goto IL_0092;
		}
	}
	{
		V_5 = (bool)0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12|(int32_t)8));
		Il2CppChar L_13 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Char_IsHighSurrogate_m7BECD1C98C902946F069D8936F8A557F1F7DFF01(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0080;
		}
	}
	{
		uint16_t L_15 = V_4;
		uint16_t L_16 = ___end2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1))) >= ((int32_t)L_16)))
		{
			goto IL_0089;
		}
	}
	{
		V_6 = (bool)0;
		Il2CppChar L_17 = V_3;
		Il2CppChar* L_18 = ___str0;
		uint16_t L_19 = V_4;
		int32_t L_20 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_18, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1))), (int32_t)2)))));
		bool L_21;
		L_21 = IriHelper_CheckIriUnicodeRange_m03144D55C396E2870F76F85B29852F8314346A1A(L_17, L_20, (bool*)(&V_6), (bool)1, /*hidden argument*/NULL);
		V_5 = L_21;
		goto IL_0089;
	}

IL_0080:
	{
		Il2CppChar L_22 = V_3;
		bool L_23;
		L_23 = IriHelper_CheckIriUnicodeRange_m5E205B2F096045DE5259E0E98A062DD0813206F6(L_22, (bool)1, /*hidden argument*/NULL);
		V_5 = L_23;
	}

IL_0089:
	{
		bool L_24 = V_5;
		if (L_24)
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_25 = V_0;
		V_0 = ((int32_t)((int32_t)L_25|(int32_t)((int32_t)64)));
	}

IL_0092:
	{
		bool L_26 = V_1;
		if (L_26)
		{
			goto IL_0281;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0281;
	}

IL_009f:
	{
		Il2CppChar L_27 = V_3;
		Il2CppChar L_28 = ___delim3;
		if ((((int32_t)L_27) == ((int32_t)L_28)))
		{
			goto IL_0290;
		}
	}
	{
		Il2CppChar L_29 = ___delim3;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_00cc;
		}
	}
	{
		Il2CppChar L_30 = V_3;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_00cc;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_31 = __this->get_m_Syntax_15();
		if (!L_31)
		{
			goto IL_00cc;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_32 = __this->get_m_Syntax_15();
		NullCheck(L_32);
		bool L_33;
		L_33 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_32, ((int32_t)64), /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_0290;
		}
	}

IL_00cc:
	{
		Il2CppChar L_34 = V_3;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0110;
		}
	}
	{
		bool L_35;
		L_35 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(__this, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0102;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_36 = __this->get_m_Syntax_15();
		if (!L_36)
		{
			goto IL_0281;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_37 = __this->get_m_Syntax_15();
		NullCheck(L_37);
		bool L_38;
		L_38 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_37, ((int32_t)32), /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0281;
		}
	}
	{
		Il2CppChar L_39 = ___delim3;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)65534))))
		{
			goto IL_0281;
		}
	}

IL_0102:
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)((int32_t)L_40|(int32_t)((int32_t)32)));
		V_2 = (bool)1;
		V_1 = (bool)1;
		goto IL_0281;
	}

IL_0110:
	{
		Il2CppChar L_41 = V_3;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_0148;
		}
	}
	{
		V_1 = (bool)1;
		bool L_42;
		L_42 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(__this, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_013c;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_43 = __this->get_m_Syntax_15();
		if (!L_43)
		{
			goto IL_0281;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_44 = __this->get_m_Syntax_15();
		NullCheck(L_44);
		bool L_45;
		L_45 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_44, ((int32_t)64), /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0281;
		}
	}

IL_013c:
	{
		int32_t L_46 = V_0;
		V_0 = ((int32_t)((int32_t)L_46|(int32_t)((int32_t)32)));
		V_2 = (bool)1;
		goto IL_0281;
	}

IL_0148:
	{
		Il2CppChar L_47 = V_3;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)47))))
		{
			goto IL_0152;
		}
	}
	{
		Il2CppChar L_48 = V_3;
		if ((!(((uint32_t)L_48) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_019c;
		}
	}

IL_0152:
	{
		int32_t L_49 = V_0;
		if (((int32_t)((int32_t)L_49&(int32_t)((int32_t)16))))
		{
			goto IL_0162;
		}
	}
	{
		Il2CppChar L_50 = V_3;
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0162;
		}
	}
	{
		int32_t L_51 = V_0;
		V_0 = ((int32_t)((int32_t)L_51|(int32_t)((int32_t)16)));
	}

IL_0162:
	{
		int32_t L_52 = V_0;
		if (((int32_t)((int32_t)L_52&(int32_t)4)))
		{
			goto IL_0281;
		}
	}
	{
		uint16_t L_53 = V_4;
		uint16_t L_54 = ___end2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1))) == ((int32_t)L_54)))
		{
			goto IL_0281;
		}
	}
	{
		Il2CppChar* L_55 = ___str0;
		uint16_t L_56 = V_4;
		int32_t L_57 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_55, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1))), (int32_t)2)))));
		if ((((int32_t)L_57) == ((int32_t)((int32_t)47))))
		{
			goto IL_0193;
		}
	}
	{
		Il2CppChar* L_58 = ___str0;
		uint16_t L_59 = V_4;
		int32_t L_60 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_58, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1))), (int32_t)2)))));
		if ((!(((uint32_t)L_60) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0281;
		}
	}

IL_0193:
	{
		int32_t L_61 = V_0;
		V_0 = ((int32_t)((int32_t)L_61|(int32_t)4));
		goto IL_0281;
	}

IL_019c:
	{
		Il2CppChar L_62 = V_3;
		if ((!(((uint32_t)L_62) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_01ff;
		}
	}
	{
		int32_t L_63 = V_0;
		if (((int32_t)((int32_t)L_63&(int32_t)4)))
		{
			goto IL_01ad;
		}
	}
	{
		uint16_t L_64 = V_4;
		uint16_t L_65 = ___end2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1))) == ((int32_t)L_65)))
		{
			goto IL_01f6;
		}
	}

IL_01ad:
	{
		Il2CppChar* L_66 = ___str0;
		uint16_t L_67 = V_4;
		int32_t L_68 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_66, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1))), (int32_t)2)))));
		if ((((int32_t)L_68) == ((int32_t)((int32_t)46))))
		{
			goto IL_01f6;
		}
	}
	{
		Il2CppChar* L_69 = ___str0;
		uint16_t L_70 = V_4;
		int32_t L_71 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_69, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1))), (int32_t)2)))));
		if ((((int32_t)L_71) == ((int32_t)((int32_t)47))))
		{
			goto IL_01f6;
		}
	}
	{
		Il2CppChar* L_72 = ___str0;
		uint16_t L_73 = V_4;
		int32_t L_74 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_72, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1))), (int32_t)2)))));
		if ((((int32_t)L_74) == ((int32_t)((int32_t)92))))
		{
			goto IL_01f6;
		}
	}
	{
		Il2CppChar* L_75 = ___str0;
		uint16_t L_76 = V_4;
		int32_t L_77 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_75, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1))), (int32_t)2)))));
		if ((((int32_t)L_77) == ((int32_t)((int32_t)63))))
		{
			goto IL_01f6;
		}
	}
	{
		Il2CppChar* L_78 = ___str0;
		uint16_t L_79 = V_4;
		int32_t L_80 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_78, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1))), (int32_t)2)))));
		if ((!(((uint32_t)L_80) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_0281;
		}
	}

IL_01f6:
	{
		int32_t L_81 = V_0;
		V_0 = ((int32_t)((int32_t)L_81|(int32_t)4));
		goto IL_0281;
	}

IL_01ff:
	{
		bool L_82 = V_1;
		if (L_82)
		{
			goto IL_0229;
		}
	}
	{
		Il2CppChar L_83 = V_3;
		if ((((int32_t)L_83) > ((int32_t)((int32_t)34))))
		{
			goto IL_020c;
		}
	}
	{
		Il2CppChar L_84 = V_3;
		if ((!(((uint32_t)L_84) == ((uint32_t)((int32_t)33)))))
		{
			goto IL_0225;
		}
	}

IL_020c:
	{
		Il2CppChar L_85 = V_3;
		if ((((int32_t)L_85) < ((int32_t)((int32_t)91))))
		{
			goto IL_0216;
		}
	}
	{
		Il2CppChar L_86 = V_3;
		if ((((int32_t)L_86) <= ((int32_t)((int32_t)94))))
		{
			goto IL_0225;
		}
	}

IL_0216:
	{
		Il2CppChar L_87 = V_3;
		if ((((int32_t)L_87) == ((int32_t)((int32_t)62))))
		{
			goto IL_0225;
		}
	}
	{
		Il2CppChar L_88 = V_3;
		if ((((int32_t)L_88) == ((int32_t)((int32_t)60))))
		{
			goto IL_0225;
		}
	}
	{
		Il2CppChar L_89 = V_3;
		if ((!(((uint32_t)L_89) == ((uint32_t)((int32_t)96)))))
		{
			goto IL_0229;
		}
	}

IL_0225:
	{
		V_1 = (bool)1;
		goto IL_0281;
	}

IL_0229:
	{
		Il2CppChar L_90 = V_3;
		if ((!(((uint32_t)L_90) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0281;
		}
	}
	{
		bool L_91 = V_2;
		if (L_91)
		{
			goto IL_0233;
		}
	}
	{
		V_2 = (bool)1;
	}

IL_0233:
	{
		uint16_t L_92 = V_4;
		uint16_t L_93 = ___end2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)2))) >= ((int32_t)L_93)))
		{
			goto IL_027c;
		}
	}
	{
		Il2CppChar* L_94 = ___str0;
		uint16_t L_95 = V_4;
		int32_t L_96 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_94, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1))), (int32_t)2)))));
		Il2CppChar* L_97 = ___str0;
		uint16_t L_98 = V_4;
		int32_t L_99 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_97, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)2))), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		Il2CppChar L_100;
		L_100 = UriHelper_EscapedAscii_m80D926F5C8B177B5D041BBFEADEAB2363A324461(L_96, L_99, /*hidden argument*/NULL);
		Il2CppChar L_101 = L_100;
		V_3 = L_101;
		if ((((int32_t)L_101) == ((int32_t)((int32_t)65535))))
		{
			goto IL_027c;
		}
	}
	{
		Il2CppChar L_102 = V_3;
		if ((((int32_t)L_102) == ((int32_t)((int32_t)46))))
		{
			goto IL_026b;
		}
	}
	{
		Il2CppChar L_103 = V_3;
		if ((((int32_t)L_103) == ((int32_t)((int32_t)47))))
		{
			goto IL_026b;
		}
	}
	{
		Il2CppChar L_104 = V_3;
		if ((!(((uint32_t)L_104) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0273;
		}
	}

IL_026b:
	{
		int32_t L_105 = V_0;
		V_0 = ((int32_t)((int32_t)L_105|(int32_t)((int32_t)128)));
	}

IL_0273:
	{
		uint16_t L_106 = V_4;
		V_4 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)2))));
		goto IL_0281;
	}

IL_027c:
	{
		bool L_107 = V_1;
		if (L_107)
		{
			goto IL_0281;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_0281:
	{
		uint16_t L_108 = V_4;
		V_4 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1))));
	}

IL_0288:
	{
		uint16_t L_109 = V_4;
		uint16_t L_110 = ___end2;
		if ((((int32_t)L_109) < ((int32_t)L_110)))
		{
			goto IL_0015;
		}
	}

IL_0290:
	{
		bool L_111 = V_2;
		if (!L_111)
		{
			goto IL_029c;
		}
	}
	{
		bool L_112 = V_1;
		if (L_112)
		{
			goto IL_02a7;
		}
	}
	{
		int32_t L_113 = V_0;
		V_0 = ((int32_t)((int32_t)L_113|(int32_t)1));
		goto IL_02a7;
	}

IL_029c:
	{
		int32_t L_114 = V_0;
		V_0 = ((int32_t)((int32_t)L_114|(int32_t)2));
		bool L_115 = V_1;
		if (L_115)
		{
			goto IL_02a7;
		}
	}
	{
		int32_t L_116 = V_0;
		V_0 = ((int32_t)((int32_t)L_116|(int32_t)1));
	}

IL_02a7:
	{
		uint16_t* L_117 = ___idx1;
		uint16_t L_118 = V_4;
		*((int16_t*)L_117) = (int16_t)L_118;
		int32_t L_119 = V_0;
		return L_119;
	}
}
// System.Char[] System.Uri::GetCanonicalPath(System.Char[],System.Int32&,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* Uri_GetCanonicalPath_mA187EAD590C890FE0623CF7B1EFF4364B57FAF10 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest0, int32_t* ___pos1, int32_t ___formatAs2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar* V_3 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_4 = NULL;
	String_t* V_5 = NULL;
	Il2CppChar* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_9 = NULL;
	Il2CppChar* V_10 = NULL;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	int32_t* G_B15_2 = NULL;
	int32_t G_B15_3 = 0;
	Il2CppChar* G_B15_4 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	int32_t* G_B14_2 = NULL;
	int32_t G_B14_3 = 0;
	Il2CppChar* G_B14_4 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t* G_B16_3 = NULL;
	int32_t G_B16_4 = 0;
	Il2CppChar* G_B16_5 = NULL;
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	int32_t G_B24_2 = 0;
	int32_t* G_B24_3 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B24_4 = NULL;
	uint16_t G_B24_5 = 0;
	uint16_t G_B24_6 = 0;
	String_t* G_B24_7 = NULL;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	int32_t G_B23_2 = 0;
	int32_t* G_B23_3 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B23_4 = NULL;
	uint16_t G_B23_5 = 0;
	uint16_t G_B23_6 = 0;
	String_t* G_B23_7 = NULL;
	int32_t G_B25_0 = 0;
	int32_t G_B25_1 = 0;
	int32_t G_B25_2 = 0;
	int32_t G_B25_3 = 0;
	int32_t* G_B25_4 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B25_5 = NULL;
	uint16_t G_B25_6 = 0;
	uint16_t G_B25_7 = 0;
	String_t* G_B25_8 = NULL;
	int32_t G_B37_0 = 0;
	int32_t G_B37_1 = 0;
	int32_t* G_B37_2 = NULL;
	int32_t G_B37_3 = 0;
	Il2CppChar* G_B37_4 = NULL;
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	int32_t* G_B36_2 = NULL;
	int32_t G_B36_3 = 0;
	Il2CppChar* G_B36_4 = NULL;
	int32_t G_B38_0 = 0;
	int32_t G_B38_1 = 0;
	int32_t G_B38_2 = 0;
	int32_t* G_B38_3 = NULL;
	int32_t G_B38_4 = 0;
	Il2CppChar* G_B38_5 = NULL;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B50_2 = 0;
	int32_t* G_B50_3 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B50_4 = NULL;
	int32_t G_B50_5 = 0;
	int32_t G_B50_6 = 0;
	String_t* G_B50_7 = NULL;
	int32_t G_B49_0 = 0;
	int32_t G_B49_1 = 0;
	int32_t G_B49_2 = 0;
	int32_t* G_B49_3 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B49_4 = NULL;
	int32_t G_B49_5 = 0;
	int32_t G_B49_6 = 0;
	String_t* G_B49_7 = NULL;
	int32_t G_B51_0 = 0;
	int32_t G_B51_1 = 0;
	int32_t G_B51_2 = 0;
	int32_t G_B51_3 = 0;
	int32_t* G_B51_4 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B51_5 = NULL;
	int32_t G_B51_6 = 0;
	int32_t G_B51_7 = 0;
	String_t* G_B51_8 = NULL;
	int32_t G_B67_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B76_0 = 0;
	{
		bool L_0;
		L_0 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)16384))), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___dest0;
		int32_t* L_2 = ___pos1;
		int32_t* L_3 = ___pos1;
		int32_t L_4 = *((int32_t*)L_3);
		V_2 = L_4;
		int32_t L_5 = V_2;
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_6 = V_2;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Il2CppChar)((int32_t)47));
	}

IL_001b:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_7 = __this->get_m_Info_18();
		NullCheck(L_7);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_8 = L_7->get_address_of_Offset_3();
		uint16_t L_9 = L_8->get_Path_4();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_10 = __this->get_m_Info_18();
		NullCheck(L_10);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_11 = L_10->get_address_of_Offset_3();
		uint16_t L_12 = L_11->get_Query_5();
		if ((!(((uint32_t)L_9) == ((uint32_t)L_12))))
		{
			goto IL_003f;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_13 = ___dest0;
		return L_13;
	}

IL_003f:
	{
		int32_t* L_14 = ___pos1;
		int32_t L_15 = *((int32_t*)L_14);
		V_0 = L_15;
		uint16_t L_16;
		L_16 = Uri_get_SecuredPathIndex_m0BE7920E94AA002B4CD2D568BD6E0FD91F0D7F0B(__this, /*hidden argument*/NULL);
		V_1 = L_16;
		int32_t L_17 = ___formatAs2;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_0277;
		}
	}
	{
		bool L_18;
		L_18 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)8192))), /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_013d;
		}
	}
	{
		String_t* L_19 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_20 = __this->get_m_Info_18();
		NullCheck(L_20);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_21 = L_20->get_address_of_Offset_3();
		uint16_t L_22 = L_21->get_Path_4();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_23 = ___dest0;
		int32_t L_24 = V_0;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_25 = __this->get_m_Info_18();
		NullCheck(L_25);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_26 = L_25->get_address_of_Offset_3();
		uint16_t L_27 = L_26->get_Query_5();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_28 = __this->get_m_Info_18();
		NullCheck(L_28);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_29 = L_28->get_address_of_Offset_3();
		uint16_t L_30 = L_29->get_Path_4();
		NullCheck(L_19);
		String_CopyTo_mF77EF8D4E5ABBD2AB7F509FFE9C0C70DC15A27E1(L_19, L_22, L_23, L_24, ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)L_30)), /*hidden argument*/NULL);
		int32_t L_31 = V_0;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_32 = __this->get_m_Info_18();
		NullCheck(L_32);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_33 = L_32->get_address_of_Offset_3();
		uint16_t L_34 = L_33->get_Query_5();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_35 = __this->get_m_Info_18();
		NullCheck(L_35);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_36 = L_35->get_address_of_Offset_3();
		uint16_t L_37 = L_36->get_Path_4();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)L_37))));
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_38 = __this->get_m_Syntax_15();
		NullCheck(L_38);
		bool L_39;
		L_39 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_38, ((int32_t)33554432), /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0356;
		}
	}
	{
		bool L_40;
		L_40 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)16))), /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0356;
		}
	}
	{
		bool L_41;
		L_41 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(__this, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_0356;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_42 = ___dest0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_43 = L_42;
		V_4 = L_43;
		if (!L_43)
		{
			goto IL_00fd;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_44 = V_4;
		NullCheck(L_44);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))
		{
			goto IL_0102;
		}
	}

IL_00fd:
	{
		V_3 = (Il2CppChar*)((uintptr_t)0);
		goto IL_010c;
	}

IL_0102:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_45 = V_4;
		NullCheck(L_45);
		V_3 = (Il2CppChar*)((uintptr_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_010c:
	{
		Il2CppChar* L_46 = V_3;
		int32_t* L_47 = ___pos1;
		int32_t L_48 = *((int32_t*)L_47);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_49 = __this->get_m_Syntax_15();
		NullCheck(L_49);
		bool L_50;
		L_50 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_49, ((int32_t)4194304), /*hidden argument*/NULL);
		G_B14_0 = ((int32_t)47);
		G_B14_1 = ((int32_t)46);
		G_B14_2 = (&V_0);
		G_B14_3 = L_48;
		G_B14_4 = L_46;
		if (L_50)
		{
			G_B15_0 = ((int32_t)47);
			G_B15_1 = ((int32_t)46);
			G_B15_2 = (&V_0);
			G_B15_3 = L_48;
			G_B15_4 = L_46;
			goto IL_012e;
		}
	}
	{
		G_B16_0 = ((int32_t)65535);
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		G_B16_3 = G_B14_2;
		G_B16_4 = G_B14_3;
		G_B16_5 = G_B14_4;
		goto IL_0130;
	}

IL_012e:
	{
		G_B16_0 = ((int32_t)92);
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
		G_B16_3 = G_B15_2;
		G_B16_4 = G_B15_3;
		G_B16_5 = G_B15_4;
	}

IL_0130:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri_UnescapeOnly_m18532EEE1EFF1E8A802527ECC577BA815CC33B1B((Il2CppChar*)(Il2CppChar*)G_B16_5, G_B16_4, (int32_t*)G_B16_3, G_B16_2, G_B16_1, G_B16_0, /*hidden argument*/NULL);
		V_4 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL;
		goto IL_0356;
	}

IL_013d:
	{
		bool L_51;
		L_51 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)1024))), /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_0210;
		}
	}
	{
		bool L_52;
		L_52 = Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969(__this, ((int64_t)((int64_t)((int32_t)524288))), /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0210;
		}
	}
	{
		String_t* L_53 = __this->get_m_String_13();
		V_5 = L_53;
		int32_t L_54 = V_1;
		if (!L_54)
		{
			goto IL_01c9;
		}
	}
	{
		String_t* L_55 = V_5;
		int32_t L_56 = V_1;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_57 = __this->get_m_Info_18();
		NullCheck(L_57);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_58 = L_57->get_address_of_Offset_3();
		uint16_t L_59 = L_58->get_Path_4();
		NullCheck(L_55);
		Il2CppChar L_60;
		L_60 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_55, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)L_59)), (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_60) == ((uint32_t)((int32_t)124)))))
		{
			goto IL_01c9;
		}
	}
	{
		String_t* L_61 = V_5;
		int32_t L_62 = V_1;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_63 = __this->get_m_Info_18();
		NullCheck(L_63);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_64 = L_63->get_address_of_Offset_3();
		uint16_t L_65 = L_64->get_Path_4();
		NullCheck(L_61);
		String_t* L_66;
		L_66 = String_Remove_mA7DE3D6FE3344FD65108B33BD1DE8020D22ADAC0(L_61, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)L_65)), (int32_t)1)), 1, /*hidden argument*/NULL);
		V_5 = L_66;
		String_t* L_67 = V_5;
		int32_t L_68 = V_1;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_69 = __this->get_m_Info_18();
		NullCheck(L_69);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_70 = L_69->get_address_of_Offset_3();
		uint16_t L_71 = L_70->get_Path_4();
		NullCheck(L_67);
		String_t* L_72;
		L_72 = String_Insert_m6F5335C84ACB178D4141772E1D7F2EB7811990EB(L_67, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)L_71)), (int32_t)1)), _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, /*hidden argument*/NULL);
		V_5 = L_72;
	}

IL_01c9:
	{
		String_t* L_73 = V_5;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_74 = __this->get_m_Info_18();
		NullCheck(L_74);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_75 = L_74->get_address_of_Offset_3();
		uint16_t L_76 = L_75->get_Path_4();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_77 = __this->get_m_Info_18();
		NullCheck(L_77);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_78 = L_77->get_address_of_Offset_3();
		uint16_t L_79 = L_78->get_Query_5();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_80 = ___dest0;
		bool L_81;
		L_81 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(__this, /*hidden argument*/NULL);
		G_B23_0 = ((int32_t)35);
		G_B23_1 = ((int32_t)63);
		G_B23_2 = 1;
		G_B23_3 = (&V_0);
		G_B23_4 = L_80;
		G_B23_5 = L_79;
		G_B23_6 = L_76;
		G_B23_7 = L_73;
		if (L_81)
		{
			G_B24_0 = ((int32_t)35);
			G_B24_1 = ((int32_t)63);
			G_B24_2 = 1;
			G_B24_3 = (&V_0);
			G_B24_4 = L_80;
			G_B24_5 = L_79;
			G_B24_6 = L_76;
			G_B24_7 = L_73;
			goto IL_01ff;
		}
	}
	{
		G_B25_0 = ((int32_t)37);
		G_B25_1 = G_B23_0;
		G_B25_2 = G_B23_1;
		G_B25_3 = G_B23_2;
		G_B25_4 = G_B23_3;
		G_B25_5 = G_B23_4;
		G_B25_6 = G_B23_5;
		G_B25_7 = G_B23_6;
		G_B25_8 = G_B23_7;
		goto IL_0204;
	}

IL_01ff:
	{
		G_B25_0 = ((int32_t)65535);
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
		G_B25_3 = G_B24_2;
		G_B25_4 = G_B24_3;
		G_B25_5 = G_B24_4;
		G_B25_6 = G_B24_5;
		G_B25_7 = G_B24_6;
		G_B25_8 = G_B24_7;
	}

IL_0204:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_82;
		L_82 = UriHelper_EscapeString_m322E8737F58BBAF891A75032EC1800BE548F84D7(G_B25_8, G_B25_7, G_B25_6, G_B25_5, (int32_t*)G_B25_4, (bool)G_B25_3, G_B25_2, G_B25_1, G_B25_0, /*hidden argument*/NULL);
		___dest0 = L_82;
		goto IL_0356;
	}

IL_0210:
	{
		String_t* L_83 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_84 = __this->get_m_Info_18();
		NullCheck(L_84);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_85 = L_84->get_address_of_Offset_3();
		uint16_t L_86 = L_85->get_Path_4();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_87 = ___dest0;
		int32_t L_88 = V_0;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_89 = __this->get_m_Info_18();
		NullCheck(L_89);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_90 = L_89->get_address_of_Offset_3();
		uint16_t L_91 = L_90->get_Query_5();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_92 = __this->get_m_Info_18();
		NullCheck(L_92);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_93 = L_92->get_address_of_Offset_3();
		uint16_t L_94 = L_93->get_Path_4();
		NullCheck(L_83);
		String_CopyTo_mF77EF8D4E5ABBD2AB7F509FFE9C0C70DC15A27E1(L_83, L_86, L_87, L_88, ((int32_t)il2cpp_codegen_subtract((int32_t)L_91, (int32_t)L_94)), /*hidden argument*/NULL);
		int32_t L_95 = V_0;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_96 = __this->get_m_Info_18();
		NullCheck(L_96);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_97 = L_96->get_address_of_Offset_3();
		uint16_t L_98 = L_97->get_Query_5();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_99 = __this->get_m_Info_18();
		NullCheck(L_99);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_100 = L_99->get_address_of_Offset_3();
		uint16_t L_101 = L_100->get_Path_4();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_98, (int32_t)L_101))));
		goto IL_0356;
	}

IL_0277:
	{
		String_t* L_102 = __this->get_m_String_13();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_103 = __this->get_m_Info_18();
		NullCheck(L_103);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_104 = L_103->get_address_of_Offset_3();
		uint16_t L_105 = L_104->get_Path_4();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_106 = ___dest0;
		int32_t L_107 = V_0;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_108 = __this->get_m_Info_18();
		NullCheck(L_108);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_109 = L_108->get_address_of_Offset_3();
		uint16_t L_110 = L_109->get_Query_5();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_111 = __this->get_m_Info_18();
		NullCheck(L_111);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_112 = L_111->get_address_of_Offset_3();
		uint16_t L_113 = L_112->get_Path_4();
		NullCheck(L_102);
		String_CopyTo_mF77EF8D4E5ABBD2AB7F509FFE9C0C70DC15A27E1(L_102, L_105, L_106, L_107, ((int32_t)il2cpp_codegen_subtract((int32_t)L_110, (int32_t)L_113)), /*hidden argument*/NULL);
		int32_t L_114 = V_0;
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_115 = __this->get_m_Info_18();
		NullCheck(L_115);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_116 = L_115->get_address_of_Offset_3();
		uint16_t L_117 = L_116->get_Query_5();
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_118 = __this->get_m_Info_18();
		NullCheck(L_118);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_119 = L_118->get_address_of_Offset_3();
		uint16_t L_120 = L_119->get_Path_4();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_117, (int32_t)L_120))));
		bool L_121;
		L_121 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)8192))), /*hidden argument*/NULL);
		if (!L_121)
		{
			goto IL_0356;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_122 = __this->get_m_Syntax_15();
		NullCheck(L_122);
		bool L_123;
		L_123 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_122, ((int32_t)33554432), /*hidden argument*/NULL);
		if (!L_123)
		{
			goto IL_0356;
		}
	}
	{
		bool L_124;
		L_124 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)16))), /*hidden argument*/NULL);
		if (!L_124)
		{
			goto IL_0356;
		}
	}
	{
		bool L_125;
		L_125 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(__this, /*hidden argument*/NULL);
		if (L_125)
		{
			goto IL_0356;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_126 = ___dest0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_127 = L_126;
		V_4 = L_127;
		if (!L_127)
		{
			goto IL_0318;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_128 = V_4;
		NullCheck(L_128);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_128)->max_length))))
		{
			goto IL_031e;
		}
	}

IL_0318:
	{
		V_6 = (Il2CppChar*)((uintptr_t)0);
		goto IL_0329;
	}

IL_031e:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_129 = V_4;
		NullCheck(L_129);
		V_6 = (Il2CppChar*)((uintptr_t)((L_129)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0329:
	{
		Il2CppChar* L_130 = V_6;
		int32_t* L_131 = ___pos1;
		int32_t L_132 = *((int32_t*)L_131);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_133 = __this->get_m_Syntax_15();
		NullCheck(L_133);
		bool L_134;
		L_134 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_133, ((int32_t)4194304), /*hidden argument*/NULL);
		G_B36_0 = ((int32_t)47);
		G_B36_1 = ((int32_t)46);
		G_B36_2 = (&V_0);
		G_B36_3 = L_132;
		G_B36_4 = L_130;
		if (L_134)
		{
			G_B37_0 = ((int32_t)47);
			G_B37_1 = ((int32_t)46);
			G_B37_2 = (&V_0);
			G_B37_3 = L_132;
			G_B37_4 = L_130;
			goto IL_034c;
		}
	}
	{
		G_B38_0 = ((int32_t)65535);
		G_B38_1 = G_B36_0;
		G_B38_2 = G_B36_1;
		G_B38_3 = G_B36_2;
		G_B38_4 = G_B36_3;
		G_B38_5 = G_B36_4;
		goto IL_034e;
	}

IL_034c:
	{
		G_B38_0 = ((int32_t)92);
		G_B38_1 = G_B37_0;
		G_B38_2 = G_B37_1;
		G_B38_3 = G_B37_2;
		G_B38_4 = G_B37_3;
		G_B38_5 = G_B37_4;
	}

IL_034e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri_UnescapeOnly_m18532EEE1EFF1E8A802527ECC577BA815CC33B1B((Il2CppChar*)(Il2CppChar*)G_B38_5, G_B38_4, (int32_t*)G_B38_3, G_B38_2, G_B38_1, G_B38_0, /*hidden argument*/NULL);
		V_4 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL;
	}

IL_0356:
	{
		int32_t L_135 = V_1;
		if (!L_135)
		{
			goto IL_036f;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_136 = ___dest0;
		int32_t L_137 = V_1;
		int32_t* L_138 = ___pos1;
		int32_t L_139 = *((int32_t*)L_138);
		NullCheck(L_136);
		int32_t L_140 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)L_139)), (int32_t)1));
		uint16_t L_141 = (uint16_t)(L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		if ((!(((uint32_t)L_141) == ((uint32_t)((int32_t)124)))))
		{
			goto IL_036f;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_142 = ___dest0;
		int32_t L_143 = V_1;
		int32_t* L_144 = ___pos1;
		int32_t L_145 = *((int32_t*)L_144);
		NullCheck(L_142);
		(L_142)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_143, (int32_t)L_145)), (int32_t)1))), (Il2CppChar)((int32_t)58));
	}

IL_036f:
	{
		bool L_146;
		L_146 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)8192))), /*hidden argument*/NULL);
		if (!L_146)
		{
			goto IL_03fb;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_147 = ___dest0;
		int32_t* L_148 = ___pos1;
		int32_t L_149 = *((int32_t*)L_148);
		int32_t L_150 = V_1;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_151 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_152;
		L_152 = Uri_Compress_mDF5924D464EB2CDA24C14D7448878C2DA46A9B8F(L_147, (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)L_150)))), (int32_t*)(&V_0), L_151, /*hidden argument*/NULL);
		___dest0 = L_152;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_153 = ___dest0;
		int32_t* L_154 = ___pos1;
		int32_t L_155 = *((int32_t*)L_154);
		NullCheck(L_153);
		int32_t L_156 = L_155;
		uint16_t L_157 = (uint16_t)(L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		if ((!(((uint32_t)L_157) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_03a0;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_158 = ___dest0;
		int32_t* L_159 = ___pos1;
		int32_t L_160 = *((int32_t*)L_159);
		NullCheck(L_158);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(L_160), (Il2CppChar)((int32_t)47));
	}

IL_03a0:
	{
		int32_t L_161 = ___formatAs2;
		if ((!(((uint32_t)L_161) == ((uint32_t)1))))
		{
			goto IL_043a;
		}
	}
	{
		bool L_162;
		L_162 = Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969(__this, ((int64_t)((int64_t)((int32_t)524288))), /*hidden argument*/NULL);
		if (!L_162)
		{
			goto IL_043a;
		}
	}
	{
		bool L_163;
		L_163 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)1024))), /*hidden argument*/NULL);
		if (!L_163)
		{
			goto IL_043a;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_164 = ___dest0;
		int32_t* L_165 = ___pos1;
		int32_t L_166 = *((int32_t*)L_165);
		int32_t L_167 = V_0;
		int32_t* L_168 = ___pos1;
		int32_t L_169 = *((int32_t*)L_168);
		String_t* L_170;
		L_170 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_164, L_166, ((int32_t)il2cpp_codegen_subtract((int32_t)L_167, (int32_t)L_169)), /*hidden argument*/NULL);
		int32_t L_171 = V_0;
		int32_t* L_172 = ___pos1;
		int32_t L_173 = *((int32_t*)L_172);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_174 = ___dest0;
		int32_t* L_175 = ___pos1;
		bool L_176;
		L_176 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(__this, /*hidden argument*/NULL);
		G_B49_0 = ((int32_t)35);
		G_B49_1 = ((int32_t)63);
		G_B49_2 = 1;
		G_B49_3 = L_175;
		G_B49_4 = L_174;
		G_B49_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_171, (int32_t)L_173));
		G_B49_6 = 0;
		G_B49_7 = L_170;
		if (L_176)
		{
			G_B50_0 = ((int32_t)35);
			G_B50_1 = ((int32_t)63);
			G_B50_2 = 1;
			G_B50_3 = L_175;
			G_B50_4 = L_174;
			G_B50_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_171, (int32_t)L_173));
			G_B50_6 = 0;
			G_B50_7 = L_170;
			goto IL_03ea;
		}
	}
	{
		G_B51_0 = ((int32_t)37);
		G_B51_1 = G_B49_0;
		G_B51_2 = G_B49_1;
		G_B51_3 = G_B49_2;
		G_B51_4 = G_B49_3;
		G_B51_5 = G_B49_4;
		G_B51_6 = G_B49_5;
		G_B51_7 = G_B49_6;
		G_B51_8 = G_B49_7;
		goto IL_03ef;
	}

IL_03ea:
	{
		G_B51_0 = ((int32_t)65535);
		G_B51_1 = G_B50_0;
		G_B51_2 = G_B50_1;
		G_B51_3 = G_B50_2;
		G_B51_4 = G_B50_3;
		G_B51_5 = G_B50_4;
		G_B51_6 = G_B50_5;
		G_B51_7 = G_B50_6;
		G_B51_8 = G_B50_7;
	}

IL_03ef:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_177;
		L_177 = UriHelper_EscapeString_m322E8737F58BBAF891A75032EC1800BE548F84D7(G_B51_8, G_B51_7, G_B51_6, G_B51_5, (int32_t*)G_B51_4, (bool)G_B51_3, G_B51_2, G_B51_1, G_B51_0, /*hidden argument*/NULL);
		___dest0 = L_177;
		int32_t* L_178 = ___pos1;
		int32_t L_179 = *((int32_t*)L_178);
		V_0 = L_179;
		goto IL_043a;
	}

IL_03fb:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_180 = __this->get_m_Syntax_15();
		NullCheck(L_180);
		bool L_181;
		L_181 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_180, ((int32_t)4194304), /*hidden argument*/NULL);
		if (!L_181)
		{
			goto IL_043a;
		}
	}
	{
		bool L_182;
		L_182 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)32768))), /*hidden argument*/NULL);
		if (!L_182)
		{
			goto IL_043a;
		}
	}
	{
		int32_t* L_183 = ___pos1;
		int32_t L_184 = *((int32_t*)L_183);
		V_7 = L_184;
		goto IL_0435;
	}

IL_0421:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_185 = ___dest0;
		int32_t L_186 = V_7;
		NullCheck(L_185);
		int32_t L_187 = L_186;
		uint16_t L_188 = (uint16_t)(L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		if ((!(((uint32_t)L_188) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_042f;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_189 = ___dest0;
		int32_t L_190 = V_7;
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(L_190), (Il2CppChar)((int32_t)47));
	}

IL_042f:
	{
		int32_t L_191 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_191, (int32_t)1));
	}

IL_0435:
	{
		int32_t L_192 = V_7;
		int32_t L_193 = V_0;
		if ((((int32_t)L_192) < ((int32_t)L_193)))
		{
			goto IL_0421;
		}
	}

IL_043a:
	{
		int32_t L_194 = ___formatAs2;
		if ((((int32_t)L_194) == ((int32_t)1)))
		{
			goto IL_0520;
		}
	}
	{
		bool L_195;
		L_195 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)16))), /*hidden argument*/NULL);
		if (!L_195)
		{
			goto IL_0520;
		}
	}
	{
		bool L_196;
		L_196 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)16))), /*hidden argument*/NULL);
		if (!L_196)
		{
			goto IL_04c3;
		}
	}
	{
		int32_t L_197 = ___formatAs2;
		if ((((int32_t)L_197) == ((int32_t)2)))
		{
			goto IL_048d;
		}
	}
	{
		int32_t L_198 = ___formatAs2;
		if ((!(((uint32_t)L_198) == ((uint32_t)((int32_t)32767)))))
		{
			goto IL_049e;
		}
	}
	{
		bool L_199;
		L_199 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)524288))), /*hidden argument*/NULL);
		if (L_199)
		{
			goto IL_0477;
		}
	}
	{
		G_B67_0 = 3;
		goto IL_0478;
	}

IL_0477:
	{
		G_B67_0 = 2;
	}

IL_0478:
	{
		V_8 = ((int32_t)((int32_t)G_B67_0|(int32_t)4));
		bool L_200;
		L_200 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(__this, /*hidden argument*/NULL);
		if (!L_200)
		{
			goto IL_04c6;
		}
	}
	{
		int32_t L_201 = V_8;
		V_8 = ((int32_t)((int32_t)L_201&(int32_t)((int32_t)-3)));
		goto IL_04c6;
	}

IL_048d:
	{
		bool L_202;
		L_202 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(__this, /*hidden argument*/NULL);
		if (L_202)
		{
			goto IL_0499;
		}
	}
	{
		G_B72_0 = ((int32_t)10);
		goto IL_049a;
	}

IL_0499:
	{
		G_B72_0 = 0;
	}

IL_049a:
	{
		V_8 = G_B72_0;
		goto IL_04c6;
	}

IL_049e:
	{
		bool L_203;
		L_203 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)524288))), /*hidden argument*/NULL);
		if (L_203)
		{
			goto IL_04af;
		}
	}
	{
		G_B76_0 = 3;
		goto IL_04b0;
	}

IL_04af:
	{
		G_B76_0 = 2;
	}

IL_04b0:
	{
		V_8 = G_B76_0;
		bool L_204;
		L_204 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(__this, /*hidden argument*/NULL);
		if (!L_204)
		{
			goto IL_04c6;
		}
	}
	{
		int32_t L_205 = V_8;
		V_8 = ((int32_t)((int32_t)L_205&(int32_t)((int32_t)-3)));
		goto IL_04c6;
	}

IL_04c3:
	{
		V_8 = 0;
	}

IL_04c6:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_206 = ___dest0;
		NullCheck(L_206);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_207 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_206)->max_length))));
		V_9 = L_207;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_208 = ___dest0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_209 = V_9;
		int32_t L_210 = V_0;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_208, 0, (RuntimeArray *)(RuntimeArray *)L_209, 0, ((int32_t)((int32_t)L_210<<(int32_t)1)), /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_211 = V_9;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_212 = L_211;
		V_4 = L_212;
		if (!L_212)
		{
			goto IL_04ea;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_213 = V_4;
		NullCheck(L_213);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_213)->max_length))))
		{
			goto IL_04f0;
		}
	}

IL_04ea:
	{
		V_10 = (Il2CppChar*)((uintptr_t)0);
		goto IL_04fb;
	}

IL_04f0:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_214 = V_4;
		NullCheck(L_214);
		V_10 = (Il2CppChar*)((uintptr_t)((L_214)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_04fb:
	{
		Il2CppChar* L_215 = V_10;
		int32_t* L_216 = ___pos1;
		int32_t L_217 = *((int32_t*)L_216);
		int32_t L_218 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_219 = ___dest0;
		int32_t* L_220 = ___pos1;
		int32_t L_221 = V_8;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_222 = __this->get_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_223;
		L_223 = UriHelper_UnescapeString_m92E5C90E7DAE8DA5C7C1E6FB72B0F58321B6484C((Il2CppChar*)(Il2CppChar*)L_215, L_217, L_218, L_219, (int32_t*)L_220, ((int32_t)63), ((int32_t)35), ((int32_t)65535), L_221, L_222, (bool)0, /*hidden argument*/NULL);
		___dest0 = L_223;
		V_4 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL;
		goto IL_0523;
	}

IL_0520:
	{
		int32_t* L_224 = ___pos1;
		int32_t L_225 = V_0;
		*((int32_t*)L_224) = (int32_t)L_225;
	}

IL_0523:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_226 = ___dest0;
		return L_226;
	}
}
// System.Void System.Uri::UnescapeOnly(System.Char*,System.Int32,System.Int32&,System.Char,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_UnescapeOnly_m18532EEE1EFF1E8A802527ECC577BA815CC33B1B (Il2CppChar* ___pch0, int32_t ___start1, int32_t* ___end2, Il2CppChar ___ch13, Il2CppChar ___ch24, Il2CppChar ___ch35, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	Il2CppChar V_2 = 0x0;
	Il2CppChar V_3 = 0x0;
	{
		int32_t* L_0 = ___end2;
		int32_t L_1 = *((int32_t*)L_0);
		int32_t L_2 = ___start1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2))) >= ((int32_t)3)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		Il2CppChar* L_3 = ___pch0;
		int32_t* L_4 = ___end2;
		int32_t L_5 = *((int32_t*)L_4);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_5), (int32_t)2)))), (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)2), (int32_t)2))));
		Il2CppChar* L_6 = ___pch0;
		int32_t L_7 = ___start1;
		___pch0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)2))));
		V_1 = (Il2CppChar*)((uintptr_t)0);
	}

IL_0020:
	{
		Il2CppChar* L_8 = ___pch0;
		Il2CppChar* L_9 = V_0;
		if ((!(((uintptr_t)L_8) < ((uintptr_t)L_9))))
		{
			goto IL_00ba;
		}
	}
	{
		Il2CppChar* L_10 = ___pch0;
		Il2CppChar* L_11 = (Il2CppChar*)L_10;
		___pch0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_11, (int32_t)2));
		int32_t L_12 = *((uint16_t*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0020;
		}
	}
	{
		Il2CppChar* L_13 = ___pch0;
		Il2CppChar* L_14 = (Il2CppChar*)L_13;
		___pch0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_14, (int32_t)2));
		int32_t L_15 = *((uint16_t*)L_14);
		Il2CppChar* L_16 = ___pch0;
		Il2CppChar* L_17 = (Il2CppChar*)L_16;
		___pch0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_17, (int32_t)2));
		int32_t L_18 = *((uint16_t*)L_17);
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		Il2CppChar L_19;
		L_19 = UriHelper_EscapedAscii_m80D926F5C8B177B5D041BBFEADEAB2363A324461(L_15, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		Il2CppChar L_20 = V_2;
		Il2CppChar L_21 = ___ch13;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_0054;
		}
	}
	{
		Il2CppChar L_22 = V_2;
		Il2CppChar L_23 = ___ch24;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_0054;
		}
	}
	{
		Il2CppChar L_24 = V_2;
		Il2CppChar L_25 = ___ch35;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_0020;
		}
	}

IL_0054:
	{
		Il2CppChar* L_26 = ___pch0;
		V_1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_26, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)2), (int32_t)2))));
		Il2CppChar* L_27 = V_1;
		Il2CppChar L_28 = V_2;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_27, (int32_t)2))) = (int16_t)L_28;
	}

IL_0060:
	{
		Il2CppChar* L_29 = ___pch0;
		Il2CppChar* L_30 = V_0;
		if ((!(((uintptr_t)L_29) < ((uintptr_t)L_30))))
		{
			goto IL_00ba;
		}
	}
	{
		Il2CppChar* L_31 = V_1;
		Il2CppChar* L_32 = (Il2CppChar*)L_31;
		V_1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_32, (int32_t)2));
		Il2CppChar* L_33 = ___pch0;
		Il2CppChar* L_34 = (Il2CppChar*)L_33;
		___pch0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_34, (int32_t)2));
		int32_t L_35 = *((uint16_t*)L_34);
		int32_t L_36 = L_35;
		V_3 = L_36;
		*((int16_t*)L_32) = (int16_t)L_36;
		Il2CppChar L_37 = V_3;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0060;
		}
	}
	{
		Il2CppChar* L_38 = V_1;
		Il2CppChar* L_39 = (Il2CppChar*)L_38;
		V_1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_39, (int32_t)2));
		Il2CppChar* L_40 = ___pch0;
		Il2CppChar* L_41 = (Il2CppChar*)L_40;
		___pch0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_41, (int32_t)2));
		int32_t L_42 = *((uint16_t*)L_41);
		int32_t L_43 = L_42;
		V_3 = L_43;
		*((int16_t*)L_39) = (int16_t)L_43;
		Il2CppChar L_44 = V_3;
		Il2CppChar* L_45 = V_1;
		Il2CppChar* L_46 = (Il2CppChar*)L_45;
		V_1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_46, (int32_t)2));
		Il2CppChar* L_47 = ___pch0;
		Il2CppChar* L_48 = (Il2CppChar*)L_47;
		___pch0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_48, (int32_t)2));
		int32_t L_49 = *((uint16_t*)L_48);
		int32_t L_50 = L_49;
		V_3 = L_50;
		*((int16_t*)L_46) = (int16_t)L_50;
		Il2CppChar L_51 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		Il2CppChar L_52;
		L_52 = UriHelper_EscapedAscii_m80D926F5C8B177B5D041BBFEADEAB2363A324461(L_44, L_51, /*hidden argument*/NULL);
		V_2 = L_52;
		Il2CppChar L_53 = V_2;
		Il2CppChar L_54 = ___ch13;
		if ((((int32_t)L_53) == ((int32_t)L_54)))
		{
			goto IL_00ac;
		}
	}
	{
		Il2CppChar L_55 = V_2;
		Il2CppChar L_56 = ___ch24;
		if ((((int32_t)L_55) == ((int32_t)L_56)))
		{
			goto IL_00ac;
		}
	}
	{
		Il2CppChar L_57 = V_2;
		Il2CppChar L_58 = ___ch35;
		if ((!(((uint32_t)L_57) == ((uint32_t)L_58))))
		{
			goto IL_0060;
		}
	}

IL_00ac:
	{
		Il2CppChar* L_59 = V_1;
		V_1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_59, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)2), (int32_t)2))));
		Il2CppChar* L_60 = V_1;
		Il2CppChar L_61 = V_2;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_60, (int32_t)2))) = (int16_t)L_61;
		goto IL_0060;
	}

IL_00ba:
	{
		Il2CppChar* L_62 = V_0;
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_62, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)2), (int32_t)2))));
		Il2CppChar* L_63 = V_1;
		if ((!(((uintptr_t)L_63) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_00c7;
		}
	}
	{
		return;
	}

IL_00c7:
	{
		Il2CppChar* L_64 = ___pch0;
		Il2CppChar* L_65 = V_0;
		if ((!(((uintptr_t)L_64) == ((uintptr_t)L_65))))
		{
			goto IL_00d8;
		}
	}
	{
		int32_t* L_66 = ___end2;
		int32_t* L_67 = ___end2;
		int32_t L_68 = *((int32_t*)L_67);
		Il2CppChar* L_69 = ___pch0;
		Il2CppChar* L_70 = V_1;
		*((int32_t*)L_66) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)((int32_t)((int32_t)((int64_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_69, (intptr_t)L_70))/(int32_t)2))))))));
		return;
	}

IL_00d8:
	{
		Il2CppChar* L_71 = V_1;
		Il2CppChar* L_72 = (Il2CppChar*)L_71;
		V_1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_72, (int32_t)2));
		Il2CppChar* L_73 = ___pch0;
		Il2CppChar* L_74 = (Il2CppChar*)L_73;
		___pch0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_74, (int32_t)2));
		int32_t L_75 = *((uint16_t*)L_74);
		*((int16_t*)L_72) = (int16_t)L_75;
		Il2CppChar* L_76 = ___pch0;
		Il2CppChar* L_77 = V_0;
		if ((!(((uintptr_t)L_76) == ((uintptr_t)L_77))))
		{
			goto IL_00f6;
		}
	}
	{
		int32_t* L_78 = ___end2;
		int32_t* L_79 = ___end2;
		int32_t L_80 = *((int32_t*)L_79);
		Il2CppChar* L_81 = ___pch0;
		Il2CppChar* L_82 = V_1;
		*((int32_t*)L_78) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)((int32_t)((int32_t)((int64_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_81, (intptr_t)L_82))/(int32_t)2))))))));
		return;
	}

IL_00f6:
	{
		Il2CppChar* L_83 = V_1;
		Il2CppChar* L_84 = (Il2CppChar*)L_83;
		V_1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_84, (int32_t)2));
		Il2CppChar* L_85 = ___pch0;
		Il2CppChar* L_86 = (Il2CppChar*)L_85;
		___pch0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_86, (int32_t)2));
		int32_t L_87 = *((uint16_t*)L_86);
		*((int16_t*)L_84) = (int16_t)L_87;
		int32_t* L_88 = ___end2;
		int32_t* L_89 = ___end2;
		int32_t L_90 = *((int32_t*)L_89);
		Il2CppChar* L_91 = ___pch0;
		Il2CppChar* L_92 = V_1;
		*((int32_t*)L_88) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)((int32_t)((int32_t)((int64_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_91, (intptr_t)L_92))/(int32_t)2))))))));
		return;
	}
}
// System.Char[] System.Uri::Compress(System.Char[],System.UInt16,System.Int32&,System.UriParser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* Uri_Compress_mDF5924D464EB2CDA24C14D7448878C2DA46A9B8F (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest0, uint16_t ___start1, int32_t* ___destLength2, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	uint16_t V_3 = 0;
	uint16_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	bool V_6 = false;
	int32_t G_B18_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B28_1 = 0;
	uint16_t G_B57_0 = 0;
	uint16_t G_B56_0 = 0;
	int32_t G_B58_0 = 0;
	uint16_t G_B58_1 = 0;
	{
		V_0 = (uint16_t)0;
		V_1 = (uint16_t)0;
		V_2 = (uint16_t)0;
		V_3 = (uint16_t)0;
		int32_t* L_0 = ___destLength2;
		int32_t L_1 = *((int32_t*)L_0);
		V_4 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((uint16_t)L_1)), (int32_t)1))));
		uint16_t L_2 = ___start1;
		___start1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))));
		goto IL_019b;
	}

IL_001b:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___dest0;
		uint16_t L_4 = V_4;
		NullCheck(L_3);
		uint16_t L_5 = L_4;
		uint16_t L_6 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_5 = L_6;
		Il2CppChar L_7 = V_5;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_003d;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_8 = ___syntax3;
		NullCheck(L_8);
		bool L_9;
		L_9 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_8, ((int32_t)4194304), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = ___dest0;
		uint16_t L_11 = V_4;
		int32_t L_12 = ((int32_t)47);
		V_5 = L_12;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Il2CppChar)L_12);
	}

IL_003d:
	{
		Il2CppChar L_13 = V_5;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_004a;
		}
	}
	{
		uint16_t L_14 = V_0;
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1))));
		goto IL_0056;
	}

IL_004a:
	{
		uint16_t L_15 = V_0;
		if ((((int32_t)L_15) <= ((int32_t)1)))
		{
			goto IL_0054;
		}
	}
	{
		uint16_t L_16 = V_4;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1))));
	}

IL_0054:
	{
		V_0 = (uint16_t)0;
	}

IL_0056:
	{
		Il2CppChar L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0066;
		}
	}
	{
		uint16_t L_18 = V_2;
		V_2 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1))));
		goto IL_0194;
	}

IL_0066:
	{
		uint16_t L_19 = V_2;
		if (!L_19)
		{
			goto IL_015d;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_20 = ___syntax3;
		NullCheck(L_20);
		bool L_21;
		L_21 = UriParser_NotAny_m6A42FAC623F0EBDE441782DAC3E3B2ED34756D91(L_20, ((int32_t)16777216), /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_008d;
		}
	}
	{
		uint16_t L_22 = V_2;
		if ((((int32_t)L_22) > ((int32_t)2)))
		{
			goto IL_008a;
		}
	}
	{
		Il2CppChar L_23 = V_5;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_008a;
		}
	}
	{
		uint16_t L_24 = V_4;
		uint16_t L_25 = ___start1;
		G_B18_0 = ((((int32_t)L_24) == ((int32_t)L_25))? 1 : 0);
		goto IL_008e;
	}

IL_008a:
	{
		G_B18_0 = 1;
		goto IL_008e;
	}

IL_008d:
	{
		G_B18_0 = 0;
	}

IL_008e:
	{
		V_6 = (bool)G_B18_0;
		bool L_26 = V_6;
		if (L_26)
		{
			goto IL_0108;
		}
	}
	{
		Il2CppChar L_27 = V_5;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0108;
		}
	}
	{
		uint16_t L_28 = V_1;
		uint16_t L_29 = V_4;
		uint16_t L_30 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30)), (int32_t)1)))))
		{
			goto IL_00b6;
		}
	}
	{
		uint16_t L_31 = V_1;
		if (L_31)
		{
			goto IL_015b;
		}
	}
	{
		uint16_t L_32 = V_4;
		uint16_t L_33 = V_2;
		int32_t* L_34 = ___destLength2;
		int32_t L_35 = *((int32_t*)L_34);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33)), (int32_t)1))) == ((uint32_t)L_35))))
		{
			goto IL_015b;
		}
	}

IL_00b6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2(/*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_00c4;
		}
	}
	{
		uint16_t L_37 = V_2;
		if ((((int32_t)L_37) > ((int32_t)2)))
		{
			goto IL_015b;
		}
	}

IL_00c4:
	{
		uint16_t L_38 = V_4;
		uint16_t L_39 = V_2;
		uint16_t L_40 = V_1;
		G_B26_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1)), (int32_t)L_39));
		if (!L_40)
		{
			G_B27_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1)), (int32_t)L_39));
			goto IL_00d0;
		}
	}
	{
		G_B28_0 = 1;
		G_B28_1 = G_B26_0;
		goto IL_00d1;
	}

IL_00d0:
	{
		G_B28_0 = 0;
		G_B28_1 = G_B27_0;
	}

IL_00d1:
	{
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)G_B28_1, (int32_t)G_B28_0))));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_41 = ___dest0;
		uint16_t L_42 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_43 = ___dest0;
		uint16_t L_44 = V_4;
		int32_t* L_45 = ___destLength2;
		int32_t L_46 = *((int32_t*)L_45);
		uint16_t L_47 = V_1;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_41, ((int32_t)((int32_t)L_42<<(int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_43, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1))<<(int32_t)1)), ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)L_47))<<(int32_t)1)), /*hidden argument*/NULL);
		int32_t* L_48 = ___destLength2;
		int32_t* L_49 = ___destLength2;
		int32_t L_50 = *((int32_t*)L_49);
		uint16_t L_51 = V_1;
		uint16_t L_52 = V_4;
		*((int32_t*)L_48) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)L_52)), (int32_t)1))));
		uint16_t L_53 = V_4;
		V_1 = L_53;
		uint16_t L_54 = V_2;
		if ((!(((uint32_t)L_54) == ((uint32_t)2))))
		{
			goto IL_0101;
		}
	}
	{
		uint16_t L_55 = V_3;
		V_3 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1))));
	}

IL_0101:
	{
		V_2 = (uint16_t)0;
		goto IL_0194;
	}

IL_0108:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2(/*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_015b;
		}
	}
	{
		bool L_57 = V_6;
		if (L_57)
		{
			goto IL_015b;
		}
	}
	{
		uint16_t L_58 = V_3;
		if (L_58)
		{
			goto IL_015b;
		}
	}
	{
		uint16_t L_59 = V_1;
		uint16_t L_60 = V_4;
		uint16_t L_61 = V_2;
		if ((((int32_t)L_59) == ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)L_61)), (int32_t)1)))))
		{
			goto IL_012c;
		}
	}
	{
		uint16_t L_62 = V_1;
		if (L_62)
		{
			goto IL_015b;
		}
	}
	{
		uint16_t L_63 = V_4;
		uint16_t L_64 = V_2;
		int32_t* L_65 = ___destLength2;
		int32_t L_66 = *((int32_t*)L_65);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)L_64)), (int32_t)1))) == ((uint32_t)L_66))))
		{
			goto IL_015b;
		}
	}

IL_012c:
	{
		uint16_t L_67 = V_4;
		uint16_t L_68 = V_2;
		V_2 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1)), (int32_t)L_68))));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_69 = ___dest0;
		uint16_t L_70 = V_2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_71 = ___dest0;
		uint16_t L_72 = V_4;
		int32_t* L_73 = ___destLength2;
		int32_t L_74 = *((int32_t*)L_73);
		uint16_t L_75 = V_2;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_69, ((int32_t)((int32_t)L_70<<(int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_71, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1))<<(int32_t)1)), ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)L_75))<<(int32_t)1)), /*hidden argument*/NULL);
		int32_t* L_76 = ___destLength2;
		int32_t* L_77 = ___destLength2;
		int32_t L_78 = *((int32_t*)L_77);
		uint16_t L_79 = V_2;
		uint16_t L_80 = V_4;
		*((int32_t*)L_76) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_78, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_79, (int32_t)L_80)), (int32_t)1))));
		V_1 = (uint16_t)0;
		V_2 = (uint16_t)0;
		goto IL_0194;
	}

IL_015b:
	{
		V_2 = (uint16_t)0;
	}

IL_015d:
	{
		Il2CppChar L_81 = V_5;
		if ((!(((uint32_t)L_81) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0194;
		}
	}
	{
		uint16_t L_82 = V_3;
		if (!L_82)
		{
			goto IL_0191;
		}
	}
	{
		uint16_t L_83 = V_3;
		V_3 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)1))));
		uint16_t L_84 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1))));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_85 = ___dest0;
		uint16_t L_86 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_87 = ___dest0;
		uint16_t L_88 = V_4;
		int32_t* L_89 = ___destLength2;
		int32_t L_90 = *((int32_t*)L_89);
		uint16_t L_91 = V_1;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_85, ((int32_t)((int32_t)L_86<<(int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_87, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1))<<(int32_t)1)), ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)L_91))<<(int32_t)1)), /*hidden argument*/NULL);
		int32_t* L_92 = ___destLength2;
		int32_t* L_93 = ___destLength2;
		int32_t L_94 = *((int32_t*)L_93);
		uint16_t L_95 = V_1;
		uint16_t L_96 = V_4;
		*((int32_t*)L_92) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_94, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_95, (int32_t)L_96)), (int32_t)1))));
	}

IL_0191:
	{
		uint16_t L_97 = V_4;
		V_1 = L_97;
	}

IL_0194:
	{
		uint16_t L_98 = V_4;
		V_4 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_98, (int32_t)1))));
	}

IL_019b:
	{
		uint16_t L_99 = V_4;
		uint16_t L_100 = ___start1;
		if ((!(((uint32_t)L_99) == ((uint32_t)L_100))))
		{
			goto IL_001b;
		}
	}
	{
		uint16_t L_101 = ___start1;
		___start1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1))));
		int32_t* L_102 = ___destLength2;
		int32_t L_103 = *((int32_t*)L_102);
		uint16_t L_104 = ___start1;
		if ((((int32_t)((int32_t)((uint16_t)L_103))) <= ((int32_t)L_104)))
		{
			goto IL_0221;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_105 = ___syntax3;
		NullCheck(L_105);
		bool L_106;
		L_106 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_105, ((int32_t)16777216), /*hidden argument*/NULL);
		if (!L_106)
		{
			goto IL_0221;
		}
	}
	{
		uint16_t L_107 = V_0;
		if ((((int32_t)L_107) > ((int32_t)1)))
		{
			goto IL_0221;
		}
	}
	{
		uint16_t L_108 = V_3;
		if (!L_108)
		{
			goto IL_01ea;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_109 = ___dest0;
		uint16_t L_110 = ___start1;
		NullCheck(L_109);
		uint16_t L_111 = L_110;
		uint16_t L_112 = (uint16_t)(L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		if ((((int32_t)L_112) == ((int32_t)((int32_t)47))))
		{
			goto IL_01ea;
		}
	}
	{
		uint16_t L_113 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1))));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_114 = ___dest0;
		uint16_t L_115 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_116 = ___dest0;
		uint16_t L_117 = ___start1;
		int32_t* L_118 = ___destLength2;
		int32_t L_119 = *((int32_t*)L_118);
		uint16_t L_120 = V_1;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_114, ((int32_t)((int32_t)L_115<<(int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_116, ((int32_t)((int32_t)L_117<<(int32_t)1)), ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_119, (int32_t)L_120))<<(int32_t)1)), /*hidden argument*/NULL);
		int32_t* L_121 = ___destLength2;
		int32_t* L_122 = ___destLength2;
		int32_t L_123 = *((int32_t*)L_122);
		uint16_t L_124 = V_1;
		*((int32_t*)L_121) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_123, (int32_t)L_124));
		goto IL_0221;
	}

IL_01ea:
	{
		uint16_t L_125 = V_2;
		if (!L_125)
		{
			goto IL_0221;
		}
	}
	{
		uint16_t L_126 = V_1;
		uint16_t L_127 = V_2;
		if ((((int32_t)L_126) == ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)1)))))
		{
			goto IL_01fd;
		}
	}
	{
		uint16_t L_128 = V_1;
		if (L_128)
		{
			goto IL_0221;
		}
	}
	{
		uint16_t L_129 = V_2;
		int32_t* L_130 = ___destLength2;
		int32_t L_131 = *((int32_t*)L_130);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)1))) == ((uint32_t)L_131))))
		{
			goto IL_0221;
		}
	}

IL_01fd:
	{
		uint16_t L_132 = V_2;
		uint16_t L_133 = V_1;
		G_B56_0 = L_132;
		if (!L_133)
		{
			G_B57_0 = L_132;
			goto IL_0204;
		}
	}
	{
		G_B58_0 = 1;
		G_B58_1 = G_B56_0;
		goto IL_0205;
	}

IL_0204:
	{
		G_B58_0 = 0;
		G_B58_1 = G_B57_0;
	}

IL_0205:
	{
		V_2 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)G_B58_1, (int32_t)G_B58_0))));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_134 = ___dest0;
		uint16_t L_135 = V_2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_136 = ___dest0;
		uint16_t L_137 = ___start1;
		int32_t* L_138 = ___destLength2;
		int32_t L_139 = *((int32_t*)L_138);
		uint16_t L_140 = V_2;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_134, ((int32_t)((int32_t)L_135<<(int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_136, ((int32_t)((int32_t)L_137<<(int32_t)1)), ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_139, (int32_t)L_140))<<(int32_t)1)), /*hidden argument*/NULL);
		int32_t* L_141 = ___destLength2;
		int32_t* L_142 = ___destLength2;
		int32_t L_143 = *((int32_t*)L_142);
		uint16_t L_144 = V_2;
		*((int32_t*)L_141) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_143, (int32_t)L_144));
	}

IL_0221:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_145 = ___dest0;
		return L_145;
	}
}
// System.Int32 System.Uri::CalculateCaseInsensitiveHashCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_CalculateCaseInsensitiveHashCode_m3C1409D3BEC3AEDC2880109BF1755CF68263DD7A (String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0;
		L_0 = StringComparer_get_InvariantCultureIgnoreCase_m091360FF9FE3516559AFF706AF431E6FD4CCF2C2_inline(/*hidden argument*/NULL);
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(12 /* System.Int32 System.StringComparer::GetHashCode(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.String System.Uri::CombineUri(System.Uri,System.String,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_CombineUri_m25D4A53B7535EA10C7DA7835E16961BBD5895EB0 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___basePart0, String_t* ___relativePart1, int32_t ___uriFormat2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2972BFE844E63CD209338A1C5E5ADB3707E7B9B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A62305734B1A5D8C56B0791FEB96BCDDD1CD15E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_4 = NULL;
	Il2CppChar V_5 = 0x0;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B42_0 = 0;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B42_1 = NULL;
	int32_t G_B41_0 = 0;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B41_1 = NULL;
	int32_t G_B43_0 = 0;
	int32_t G_B43_1 = 0;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B43_2 = NULL;
	int32_t G_B51_0 = 0;
	int32_t G_B55_0 = 0;
	{
		String_t* L_0 = ___relativePart1;
		NullCheck(L_0);
		Il2CppChar L_1;
		L_1 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_2 = ___basePart0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Uri_get_IsDosPath_m3374B9D26D6B547862ACB2E617AB6F96CA31A5AF(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)47))))
		{
			goto IL_001d;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0094;
		}
	}

IL_001d:
	{
		String_t* L_6 = ___relativePart1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_8 = ___relativePart1;
		NullCheck(L_8);
		Il2CppChar L_9;
		L_9 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_8, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)47))))
		{
			goto IL_0094;
		}
	}
	{
		String_t* L_10 = ___relativePart1;
		NullCheck(L_10);
		Il2CppChar L_11;
		L_11 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_10, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_11) == ((int32_t)((int32_t)92))))
		{
			goto IL_0094;
		}
	}

IL_003c:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_12 = ___basePart0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_13, ((int32_t)58), /*hidden argument*/NULL);
		V_7 = L_14;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_15 = ___basePart0;
		NullCheck(L_15);
		bool L_16;
		L_16 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_006a;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_17 = ___basePart0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_7;
		NullCheck(L_18);
		String_t* L_20;
		L_20 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_18, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
		String_t* L_21 = ___relativePart1;
		String_t* L_22;
		L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}

IL_006a:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_23 = ___basePart0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(L_23, /*hidden argument*/NULL);
		int32_t L_25 = V_7;
		NullCheck(L_24);
		int32_t L_26;
		L_26 = String_IndexOf_mAD7052CB25BA1D60A8F055AA89D09809F61233DB(L_24, ((int32_t)58), ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)), /*hidden argument*/NULL);
		V_7 = L_26;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_27 = ___basePart0;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_7;
		NullCheck(L_28);
		String_t* L_30;
		L_30 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_28, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)), /*hidden argument*/NULL);
		String_t* L_31 = ___relativePart1;
		String_t* L_32;
		L_32 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_30, L_31, /*hidden argument*/NULL);
		return L_32;
	}

IL_0094:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_33 = ___basePart0;
		NullCheck(L_33);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_34;
		L_34 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Uri_StaticIsFile_m3E03FC49813EF629A488CF3093AE0A5675210CED(L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_016d;
		}
	}
	{
		Il2CppChar L_36 = V_0;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b1;
		}
	}
	{
		Il2CppChar L_37 = V_0;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_016d;
		}
	}

IL_00b1:
	{
		String_t* L_38 = ___relativePart1;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_38, /*hidden argument*/NULL);
		if ((((int32_t)L_39) < ((int32_t)2)))
		{
			goto IL_00e6;
		}
	}
	{
		String_t* L_40 = ___relativePart1;
		NullCheck(L_40);
		Il2CppChar L_41;
		L_41 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_40, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_41) == ((int32_t)((int32_t)92))))
		{
			goto IL_00d0;
		}
	}
	{
		String_t* L_42 = ___relativePart1;
		NullCheck(L_42);
		Il2CppChar L_43;
		L_43 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_42, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00e6;
		}
	}

IL_00d0:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_44 = ___basePart0;
		NullCheck(L_44);
		bool L_45;
		L_45 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_00e4;
		}
	}
	{
		String_t* L_46 = ___relativePart1;
		String_t* L_47;
		L_47 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9A62305734B1A5D8C56B0791FEB96BCDDD1CD15E, L_46, /*hidden argument*/NULL);
		return L_47;
	}

IL_00e4:
	{
		String_t* L_48 = ___relativePart1;
		return L_48;
	}

IL_00e6:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_49 = ___basePart0;
		NullCheck(L_49);
		bool L_50;
		L_50 = Uri_get_IsUnc_m74CE69038E37D7F868EF3EFD9DCCD08AA11877CC(L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0161;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_51 = ___basePart0;
		NullCheck(L_51);
		String_t* L_52;
		L_52 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(L_51, ((int32_t)1073741840), 2, /*hidden argument*/NULL);
		V_8 = L_52;
		V_9 = 1;
		goto IL_0122;
	}

IL_0101:
	{
		String_t* L_53 = V_8;
		int32_t L_54 = V_9;
		NullCheck(L_53);
		Il2CppChar L_55;
		L_55 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_53, L_54, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_011c;
		}
	}
	{
		String_t* L_56 = V_8;
		int32_t L_57 = V_9;
		NullCheck(L_56);
		String_t* L_58;
		L_58 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_56, 0, L_57, /*hidden argument*/NULL);
		V_8 = L_58;
		goto IL_012d;
	}

IL_011c:
	{
		int32_t L_59 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_0122:
	{
		int32_t L_60 = V_9;
		String_t* L_61 = V_8;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_61, /*hidden argument*/NULL);
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_0101;
		}
	}

IL_012d:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_63 = ___basePart0;
		NullCheck(L_63);
		bool L_64;
		L_64 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(L_63, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_014b;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_65 = ___basePart0;
		NullCheck(L_65);
		String_t* L_66;
		L_66 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(L_65, 4, 2, /*hidden argument*/NULL);
		String_t* L_67 = V_8;
		String_t* L_68 = ___relativePart1;
		String_t* L_69;
		L_69 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, L_66, L_67, L_68, /*hidden argument*/NULL);
		return L_69;
	}

IL_014b:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_70 = ___basePart0;
		int32_t L_71 = ___uriFormat2;
		NullCheck(L_70);
		String_t* L_72;
		L_72 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(L_70, 4, L_71, /*hidden argument*/NULL);
		String_t* L_73 = V_8;
		String_t* L_74 = ___relativePart1;
		String_t* L_75;
		L_75 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_72, L_73, L_74, /*hidden argument*/NULL);
		return L_75;
	}

IL_0161:
	{
		String_t* L_76 = ___relativePart1;
		String_t* L_77;
		L_77 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_76, /*hidden argument*/NULL);
		return L_77;
	}

IL_016d:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_78 = ___basePart0;
		NullCheck(L_78);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_79;
		L_79 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(L_78, /*hidden argument*/NULL);
		NullCheck(L_79);
		bool L_80;
		L_80 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_79, ((int32_t)4194304), /*hidden argument*/NULL);
		V_1 = L_80;
		V_2 = (String_t*)NULL;
		Il2CppChar L_81 = V_0;
		if ((((int32_t)L_81) == ((int32_t)((int32_t)47))))
		{
			goto IL_0191;
		}
	}
	{
		Il2CppChar L_82 = V_0;
		bool L_83 = V_1;
		if (!((int32_t)((int32_t)((((int32_t)L_82) == ((int32_t)((int32_t)92)))? 1 : 0)&(int32_t)L_83)))
		{
			goto IL_0233;
		}
	}

IL_0191:
	{
		String_t* L_84 = ___relativePart1;
		NullCheck(L_84);
		int32_t L_85;
		L_85 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_84, /*hidden argument*/NULL);
		if ((((int32_t)L_85) < ((int32_t)2)))
		{
			goto IL_01b7;
		}
	}
	{
		String_t* L_86 = ___relativePart1;
		NullCheck(L_86);
		Il2CppChar L_87;
		L_87 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_86, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_87) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_01b7;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_88 = ___basePart0;
		NullCheck(L_88);
		String_t* L_89;
		L_89 = Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29(L_88, /*hidden argument*/NULL);
		String_t* L_90 = ___relativePart1;
		String_t* L_91;
		L_91 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_89, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_90, /*hidden argument*/NULL);
		return L_91;
	}

IL_01b7:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_92 = ___basePart0;
		NullCheck(L_92);
		uint64_t L_93;
		L_93 = Uri_get_HostType_m6C142BC37D44CF1F53D80627455BC6B1CB747820(L_92, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_93) == ((uint64_t)((int64_t)((int64_t)((int32_t)65536)))))))
		{
			goto IL_0206;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_94 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_95 = L_94;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_96 = ___basePart0;
		int32_t L_97 = ___uriFormat2;
		NullCheck(L_96);
		String_t* L_98;
		L_98 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(L_96, 3, L_97, /*hidden argument*/NULL);
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, L_98);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_98);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_99 = L_95;
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_100 = L_99;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_101 = ___basePart0;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = Uri_get_DnsSafeHost_m3A22E10619987FC8FED6CEDDCA5D9647AC5B6AC5(L_101, /*hidden argument*/NULL);
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, L_102);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_102);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_103 = L_100;
		NullCheck(L_103);
		ArrayElementTypeCheck (L_103, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_104 = L_103;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_105 = ___basePart0;
		int32_t L_106 = ___uriFormat2;
		NullCheck(L_105);
		String_t* L_107;
		L_107 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(L_105, ((int32_t)1073741832), L_106, /*hidden argument*/NULL);
		NullCheck(L_104);
		ArrayElementTypeCheck (L_104, L_107);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_107);
		String_t* L_108;
		L_108 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_104, /*hidden argument*/NULL);
		V_2 = L_108;
		goto IL_0210;
	}

IL_0206:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_109 = ___basePart0;
		int32_t L_110 = ___uriFormat2;
		NullCheck(L_109);
		String_t* L_111;
		L_111 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(L_109, ((int32_t)15), L_110, /*hidden argument*/NULL);
		V_2 = L_111;
	}

IL_0210:
	{
		bool L_112 = V_1;
		if (!L_112)
		{
			goto IL_022b;
		}
	}
	{
		Il2CppChar L_113 = V_0;
		if ((!(((uint32_t)L_113) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_022b;
		}
	}
	{
		String_t* L_114 = ___relativePart1;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_114, 1, /*hidden argument*/NULL);
		String_t* L_116;
		L_116 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_115, /*hidden argument*/NULL);
		___relativePart1 = L_116;
	}

IL_022b:
	{
		String_t* L_117 = V_2;
		String_t* L_118 = ___relativePart1;
		String_t* L_119;
		L_119 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_117, L_118, /*hidden argument*/NULL);
		return L_119;
	}

IL_0233:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_120 = ___basePart0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_121 = ___basePart0;
		NullCheck(L_121);
		bool L_122;
		L_122 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(L_121, /*hidden argument*/NULL);
		G_B41_0 = ((int32_t)1073741840);
		G_B41_1 = L_120;
		if (L_122)
		{
			G_B42_0 = ((int32_t)1073741840);
			G_B42_1 = L_120;
			goto IL_0244;
		}
	}
	{
		int32_t L_123 = ___uriFormat2;
		G_B43_0 = ((int32_t)(L_123));
		G_B43_1 = G_B41_0;
		G_B43_2 = G_B41_1;
		goto IL_0245;
	}

IL_0244:
	{
		G_B43_0 = 2;
		G_B43_1 = G_B42_0;
		G_B43_2 = G_B42_1;
	}

IL_0245:
	{
		NullCheck(G_B43_2);
		String_t* L_124;
		L_124 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(G_B43_2, G_B43_1, G_B43_0, /*hidden argument*/NULL);
		V_2 = L_124;
		String_t* L_125 = V_2;
		NullCheck(L_125);
		int32_t L_126;
		L_126 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_125, /*hidden argument*/NULL);
		V_3 = L_126;
		int32_t L_127 = V_3;
		String_t* L_128 = ___relativePart1;
		NullCheck(L_128);
		int32_t L_129;
		L_129 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_128, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_130 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)L_129)));
		V_4 = L_130;
		int32_t L_131 = V_3;
		if ((((int32_t)L_131) <= ((int32_t)0)))
		{
			goto IL_0288;
		}
	}
	{
		String_t* L_132 = V_2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_133 = V_4;
		int32_t L_134 = V_3;
		NullCheck(L_132);
		String_CopyTo_mF77EF8D4E5ABBD2AB7F509FFE9C0C70DC15A27E1(L_132, 0, L_133, 0, L_134, /*hidden argument*/NULL);
		goto IL_0284;
	}

IL_0272:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_135 = V_4;
		int32_t L_136 = V_3;
		int32_t L_137 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_136, (int32_t)1));
		V_3 = L_137;
		NullCheck(L_135);
		int32_t L_138 = L_137;
		uint16_t L_139 = (uint16_t)(L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		if ((!(((uint32_t)L_139) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0284;
		}
	}
	{
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)1));
		goto IL_0288;
	}

IL_0284:
	{
		int32_t L_141 = V_3;
		if ((((int32_t)L_141) > ((int32_t)0)))
		{
			goto IL_0272;
		}
	}

IL_0288:
	{
		String_t* L_142 = ___relativePart1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_143 = V_4;
		int32_t L_144 = V_3;
		String_t* L_145 = ___relativePart1;
		NullCheck(L_145);
		int32_t L_146;
		L_146 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_145, /*hidden argument*/NULL);
		NullCheck(L_142);
		String_CopyTo_mF77EF8D4E5ABBD2AB7F509FFE9C0C70DC15A27E1(L_142, 0, L_143, L_144, L_146, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_147 = ___basePart0;
		NullCheck(L_147);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_148;
		L_148 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(L_147, /*hidden argument*/NULL);
		NullCheck(L_148);
		bool L_149;
		L_149 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_148, ((int32_t)32), /*hidden argument*/NULL);
		if (L_149)
		{
			goto IL_02ae;
		}
	}
	{
		G_B51_0 = ((int32_t)65535);
		goto IL_02b0;
	}

IL_02ae:
	{
		G_B51_0 = ((int32_t)63);
	}

IL_02b0:
	{
		V_0 = G_B51_0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_150 = ___basePart0;
		NullCheck(L_150);
		bool L_151;
		L_151 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(L_150, /*hidden argument*/NULL);
		if (L_151)
		{
			goto IL_02c8;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_152 = ___basePart0;
		NullCheck(L_152);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_153;
		L_153 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(L_152, /*hidden argument*/NULL);
		NullCheck(L_153);
		bool L_154;
		L_154 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_153, ((int32_t)64), /*hidden argument*/NULL);
		if (L_154)
		{
			goto IL_02cf;
		}
	}

IL_02c8:
	{
		G_B55_0 = ((int32_t)65535);
		goto IL_02d1;
	}

IL_02cf:
	{
		G_B55_0 = ((int32_t)35);
	}

IL_02d1:
	{
		V_5 = G_B55_0;
		String_t* L_155 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_6 = L_155;
		Il2CppChar L_156 = V_0;
		if ((!(((uint32_t)L_156) == ((uint32_t)((int32_t)65535)))))
		{
			goto IL_02eb;
		}
	}
	{
		Il2CppChar L_157 = V_5;
		if ((((int32_t)L_157) == ((int32_t)((int32_t)65535))))
		{
			goto IL_0339;
		}
	}

IL_02eb:
	{
		V_10 = 0;
		goto IL_030b;
	}

IL_02f0:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_158 = V_4;
		int32_t L_159 = V_3;
		int32_t L_160 = V_10;
		NullCheck(L_158);
		int32_t L_161 = ((int32_t)il2cpp_codegen_add((int32_t)L_159, (int32_t)L_160));
		uint16_t L_162 = (uint16_t)(L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		Il2CppChar L_163 = V_0;
		if ((((int32_t)L_162) == ((int32_t)L_163)))
		{
			goto IL_0315;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_164 = V_4;
		int32_t L_165 = V_3;
		int32_t L_166 = V_10;
		NullCheck(L_164);
		int32_t L_167 = ((int32_t)il2cpp_codegen_add((int32_t)L_165, (int32_t)L_166));
		uint16_t L_168 = (uint16_t)(L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		Il2CppChar L_169 = V_5;
		if ((((int32_t)L_168) == ((int32_t)L_169)))
		{
			goto IL_0315;
		}
	}
	{
		int32_t L_170 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_170, (int32_t)1));
	}

IL_030b:
	{
		int32_t L_171 = V_10;
		String_t* L_172 = ___relativePart1;
		NullCheck(L_172);
		int32_t L_173;
		L_173 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_172, /*hidden argument*/NULL);
		if ((((int32_t)L_171) < ((int32_t)L_173)))
		{
			goto IL_02f0;
		}
	}

IL_0315:
	{
		int32_t L_174 = V_10;
		if (L_174)
		{
			goto IL_031e;
		}
	}
	{
		String_t* L_175 = ___relativePart1;
		V_6 = L_175;
		goto IL_0332;
	}

IL_031e:
	{
		int32_t L_176 = V_10;
		String_t* L_177 = ___relativePart1;
		NullCheck(L_177);
		int32_t L_178;
		L_178 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_177, /*hidden argument*/NULL);
		if ((((int32_t)L_176) >= ((int32_t)L_178)))
		{
			goto IL_0332;
		}
	}
	{
		String_t* L_179 = ___relativePart1;
		int32_t L_180 = V_10;
		NullCheck(L_179);
		String_t* L_181;
		L_181 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_179, L_180, /*hidden argument*/NULL);
		V_6 = L_181;
	}

IL_0332:
	{
		int32_t L_182 = V_3;
		int32_t L_183 = V_10;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_182, (int32_t)L_183));
		goto IL_0342;
	}

IL_0339:
	{
		int32_t L_184 = V_3;
		String_t* L_185 = ___relativePart1;
		NullCheck(L_185);
		int32_t L_186;
		L_186 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_185, /*hidden argument*/NULL);
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_184, (int32_t)L_186));
	}

IL_0342:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_187 = ___basePart0;
		NullCheck(L_187);
		uint64_t L_188;
		L_188 = Uri_get_HostType_m6C142BC37D44CF1F53D80627455BC6B1CB747820(L_187, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_188) == ((uint64_t)((int64_t)((int64_t)((int32_t)65536)))))))
		{
			goto IL_03b4;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_189 = ___basePart0;
		NullCheck(L_189);
		bool L_190;
		L_190 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(L_189, /*hidden argument*/NULL);
		if (!L_190)
		{
			goto IL_0373;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_191 = ___basePart0;
		NullCheck(L_191);
		String_t* L_192;
		L_192 = Uri_get_DnsSafeHost_m3A22E10619987FC8FED6CEDDCA5D9647AC5B6AC5(L_191, /*hidden argument*/NULL);
		String_t* L_193;
		L_193 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral2972BFE844E63CD209338A1C5E5ADB3707E7B9B9, L_192, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
		V_2 = L_193;
		goto IL_041a;
	}

IL_0373:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_194 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_195 = L_194;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_196 = ___basePart0;
		int32_t L_197 = ___uriFormat2;
		NullCheck(L_196);
		String_t* L_198;
		L_198 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(L_196, 3, L_197, /*hidden argument*/NULL);
		NullCheck(L_195);
		ArrayElementTypeCheck (L_195, L_198);
		(L_195)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_198);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_199 = L_195;
		NullCheck(L_199);
		ArrayElementTypeCheck (L_199, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		(L_199)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_200 = L_199;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_201 = ___basePart0;
		NullCheck(L_201);
		String_t* L_202;
		L_202 = Uri_get_DnsSafeHost_m3A22E10619987FC8FED6CEDDCA5D9647AC5B6AC5(L_201, /*hidden argument*/NULL);
		NullCheck(L_200);
		ArrayElementTypeCheck (L_200, L_202);
		(L_200)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_202);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_203 = L_200;
		NullCheck(L_203);
		ArrayElementTypeCheck (L_203, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_203)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_204 = L_203;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_205 = ___basePart0;
		int32_t L_206 = ___uriFormat2;
		NullCheck(L_205);
		String_t* L_207;
		L_207 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(L_205, ((int32_t)1073741832), L_206, /*hidden argument*/NULL);
		NullCheck(L_204);
		ArrayElementTypeCheck (L_204, L_207);
		(L_204)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_207);
		String_t* L_208;
		L_208 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_204, /*hidden argument*/NULL);
		V_2 = L_208;
		goto IL_041a;
	}

IL_03b4:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_209 = ___basePart0;
		NullCheck(L_209);
		bool L_210;
		L_210 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(L_209, /*hidden argument*/NULL);
		if (!L_210)
		{
			goto IL_0410;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_211 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_IsWindowsFileSystem_25();
		if (!L_211)
		{
			goto IL_0405;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_212 = ___basePart0;
		NullCheck(L_212);
		bool L_213;
		L_213 = Uri_get_IsDosPath_m3374B9D26D6B547862ACB2E617AB6F96CA31A5AF(L_212, /*hidden argument*/NULL);
		if (!L_213)
		{
			goto IL_03f0;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_214 = V_4;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_215 = ___basePart0;
		NullCheck(L_215);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_216;
		L_216 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(L_215, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_217;
		L_217 = Uri_Compress_mDF5924D464EB2CDA24C14D7448878C2DA46A9B8F(L_214, (uint16_t)3, (int32_t*)(&V_3), L_216, /*hidden argument*/NULL);
		V_4 = L_217;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_218 = V_4;
		int32_t L_219 = V_3;
		String_t* L_220;
		L_220 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_218, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_219, (int32_t)1)), /*hidden argument*/NULL);
		String_t* L_221 = V_6;
		String_t* L_222;
		L_222 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_220, L_221, /*hidden argument*/NULL);
		return L_222;
	}

IL_03f0:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_223 = ___basePart0;
		NullCheck(L_223);
		String_t* L_224;
		L_224 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(L_223, 4, 2, /*hidden argument*/NULL);
		String_t* L_225;
		L_225 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, L_224, /*hidden argument*/NULL);
		V_2 = L_225;
		goto IL_041a;
	}

IL_0405:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_226 = ___basePart0;
		NullCheck(L_226);
		String_t* L_227;
		L_227 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(L_226, 4, 2, /*hidden argument*/NULL);
		V_2 = L_227;
		goto IL_041a;
	}

IL_0410:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_228 = ___basePart0;
		int32_t L_229 = ___uriFormat2;
		NullCheck(L_228);
		String_t* L_230;
		L_230 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(L_228, ((int32_t)15), L_229, /*hidden argument*/NULL);
		V_2 = L_230;
	}

IL_041a:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_231 = V_4;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_232 = ___basePart0;
		NullCheck(L_232);
		uint16_t L_233;
		L_233 = Uri_get_SecuredPathIndex_m0BE7920E94AA002B4CD2D568BD6E0FD91F0D7F0B(L_232, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_234 = ___basePart0;
		NullCheck(L_234);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_235;
		L_235 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(L_234, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_236;
		L_236 = Uri_Compress_mDF5924D464EB2CDA24C14D7448878C2DA46A9B8F(L_231, L_233, (int32_t*)(&V_3), L_235, /*hidden argument*/NULL);
		V_4 = L_236;
		String_t* L_237 = V_2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_238 = V_4;
		int32_t L_239 = V_3;
		String_t* L_240;
		L_240 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_238, 0, L_239, /*hidden argument*/NULL);
		String_t* L_241 = V_6;
		String_t* L_242;
		L_242 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_237, L_240, L_241, /*hidden argument*/NULL);
		return L_242;
	}
}
// System.Boolean System.Uri::IsLWS(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IsLWS_m4A41E0157130C65E6768C4F5CFEE2219DAE773B4 (Il2CppChar ___ch0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___ch0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)32))))
		{
			goto IL_001c;
		}
	}
	{
		Il2CppChar L_1 = ___ch0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)32))))
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_2 = ___ch0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)10))))
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_3 = ___ch0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)13))))
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_4 = ___ch0;
		return (bool)((((int32_t)L_4) == ((int32_t)((int32_t)9)))? 1 : 0);
	}

IL_001a:
	{
		return (bool)1;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Boolean System.Uri::IsAsciiLetter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IsAsciiLetter_mBEE6BD837C66CBB199E8A9FAB14A85744368F0FC (Il2CppChar ___character0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___character0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)97))))
		{
			goto IL_000a;
		}
	}
	{
		Il2CppChar L_1 = ___character0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)122))))
		{
			goto IL_001a;
		}
	}

IL_000a:
	{
		Il2CppChar L_2 = ___character0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65))))
		{
			goto IL_0018;
		}
	}
	{
		Il2CppChar L_3 = ___character0;
		return (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)((int32_t)90)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return (bool)0;
	}

IL_001a:
	{
		return (bool)1;
	}
}
// System.Boolean System.Uri::IsAsciiLetterOrDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IsAsciiLetterOrDigit_m1DDFA9F464FD15F8482F0C669E7E22B20DE07DCA (Il2CppChar ___character0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___character0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Uri_IsAsciiLetter_mBEE6BD837C66CBB199E8A9FAB14A85744368F0FC(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		Il2CppChar L_2 = ___character0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0016;
		}
	}
	{
		Il2CppChar L_3 = ___character0;
		return (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)((int32_t)57)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		return (bool)1;
	}
}
// System.Boolean System.Uri::IsBidiControlCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IsBidiControlCharacter_m36A30E0708EE0209208B23136C2BEC9C802C697B (Il2CppChar ___ch0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___ch0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)8206))))
		{
			goto IL_0039;
		}
	}
	{
		Il2CppChar L_1 = ___ch0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)8207))))
		{
			goto IL_0039;
		}
	}
	{
		Il2CppChar L_2 = ___ch0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)8234))))
		{
			goto IL_0039;
		}
	}
	{
		Il2CppChar L_3 = ___ch0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)8235))))
		{
			goto IL_0039;
		}
	}
	{
		Il2CppChar L_4 = ___ch0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)8236))))
		{
			goto IL_0039;
		}
	}
	{
		Il2CppChar L_5 = ___ch0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)8237))))
		{
			goto IL_0039;
		}
	}
	{
		Il2CppChar L_6 = ___ch0;
		return (bool)((((int32_t)L_6) == ((int32_t)((int32_t)8238)))? 1 : 0);
	}

IL_0039:
	{
		return (bool)1;
	}
}
// System.String System.Uri::StripBidiControlCharacter(System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_StripBidiControlCharacter_m17F47758CA4DA1A5D21B3D39D00E8364DC2CAF50 (Il2CppChar* ___strToClean0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		int32_t L_0 = ___length2;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000a:
	{
		int32_t L_1 = ___length2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		V_1 = 0;
		V_2 = 0;
		goto IL_0045;
	}

IL_0017:
	{
		Il2CppChar* L_3 = ___strToClean0;
		int32_t L_4 = ___start1;
		int32_t L_5 = V_2;
		int32_t L_6 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5))), (int32_t)2)))));
		V_3 = L_6;
		Il2CppChar L_7 = V_3;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)8206))))
		{
			goto IL_0039;
		}
	}
	{
		Il2CppChar L_8 = V_3;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)8238))))
		{
			goto IL_0039;
		}
	}
	{
		Il2CppChar L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Uri_IsBidiControlCharacter_m36A30E0708EE0209208B23136C2BEC9C802C697B(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0041;
		}
	}

IL_0039:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		Il2CppChar L_14 = V_3;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Il2CppChar)L_14);
	}

IL_0041:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0045:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = ___length2;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0017;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_18 = V_0;
		int32_t L_19 = V_1;
		String_t* L_20;
		L_20 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_18, 0, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Void System.Uri::CreateThis(System.String,System.Boolean,System.UriKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_CreateThis_m86E72577BCB9A6FDF5A0EC8EDFDD5F41AD3256FC (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uri0, bool ___dontEscape1, int32_t ___uriKind2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * V_1 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B6_0 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B7_1 = NULL;
	{
		int32_t L_0 = ___uriKind2;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___uriKind2;
		if ((((int32_t)L_1) <= ((int32_t)2)))
		{
			goto IL_002f;
		}
	}

IL_0008:
	{
		int32_t L_2 = ___uriKind2;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)300))))
		{
			goto IL_002f;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		int32_t L_5 = ___uriKind2;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC_il2cpp_TypeInfo_var)), &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		String_t* L_8;
		L_8 = SR_GetString_m4FFAF18248A54C5B67E4760C5ED4869A87BCAD7F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19A73218F14885E4C839EDA68A1C1C791F7745AA)), L_4, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_CreateThis_m86E72577BCB9A6FDF5A0EC8EDFDD5F41AD3256FC_RuntimeMethod_var)));
	}

IL_002f:
	{
		String_t* L_10 = ___uri0;
		G_B5_0 = __this;
		if (!L_10)
		{
			G_B6_0 = __this;
			goto IL_0036;
		}
	}
	{
		String_t* L_11 = ___uri0;
		G_B7_0 = L_11;
		G_B7_1 = G_B5_0;
		goto IL_003b;
	}

IL_0036:
	{
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B7_0 = L_12;
		G_B7_1 = G_B6_0;
	}

IL_003b:
	{
		NullCheck(G_B7_1);
		G_B7_1->set_m_String_13(G_B7_0);
		bool L_13 = ___dontEscape1;
		if (!L_13)
		{
			goto IL_0056;
		}
	}
	{
		uint64_t L_14 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_14|(int64_t)((int64_t)((int64_t)((int32_t)524288))))));
	}

IL_0056:
	{
		String_t* L_15 = __this->get_m_String_13();
		uint64_t* L_16 = __this->get_address_of_m_Flags_17();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** L_17 = __this->get_address_of_m_Syntax_15();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Uri_ParseScheme_m65694E4DA17BF0A8447ACE12EF444FE4D1E1AB16(L_15, (uint64_t*)L_16, (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A **)L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		int32_t L_19 = V_0;
		int32_t L_20 = ___uriKind2;
		Uri_InitializeUri_m952665E18BE60CFAC5A6025FCD2A0BB9CCB5C567(__this, L_19, L_20, (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D **)(&V_1), /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_21 = V_1;
		if (!L_21)
		{
			goto IL_007d;
		}
	}
	{
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_22 = V_1;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_CreateThis_m86E72577BCB9A6FDF5A0EC8EDFDD5F41AD3256FC_RuntimeMethod_var)));
	}

IL_007d:
	{
		return;
	}
}
// System.Void System.Uri::InitializeUri(System.ParsingError,System.UriKind,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_InitializeUri_m952665E18BE60CFAC5A6025FCD2A0BB9CCB5C567 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___err0, int32_t ___uriKind1, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___e2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B25_0 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B22_0 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B24_0 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B23_0 = NULL;
	int32_t G_B26_0 = 0;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B26_1 = NULL;
	{
		int32_t L_0 = ___err0;
		if (L_0)
		{
			goto IL_00ce;
		}
	}
	{
		bool L_1;
		L_1 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_2 = ___uriKind1;
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_3 = __this->get_m_String_13();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_5 = __this->get_m_String_13();
		NullCheck(L_5);
		Il2CppChar L_6;
		L_6 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_5, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_7 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_useDotNetRelativeOrAbsolute_24();
		if (!L_7)
		{
			goto IL_00e2;
		}
	}

IL_003c:
	{
		bool L_8;
		L_8 = Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969(__this, ((int64_t)((int64_t)((int32_t)134217728))), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_9 = ___uriKind1;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_10 = ___uriKind1;
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_0080;
		}
	}
	{
		String_t* L_11 = __this->get_m_String_13();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)2)))
		{
			goto IL_009e;
		}
	}
	{
		String_t* L_13 = __this->get_m_String_13();
		NullCheck(L_13);
		Il2CppChar L_14;
		L_14 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_13, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0080;
		}
	}
	{
		String_t* L_15 = __this->get_m_String_13();
		NullCheck(L_15);
		Il2CppChar L_16;
		L_16 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_15, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)92))))
		{
			goto IL_009e;
		}
	}

IL_0080:
	{
		__this->set_m_Syntax_15((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)NULL);
		uint64_t L_17 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_17&(int64_t)((int64_t)((int64_t)((int32_t)524288))))));
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_18 = ___e2;
		*((RuntimeObject **)L_18) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_18, (void*)(RuntimeObject *)NULL);
		return;
	}

IL_009e:
	{
		int32_t L_19 = ___uriKind1;
		if ((!(((uint32_t)L_19) == ((uint32_t)2))))
		{
			goto IL_00e2;
		}
	}
	{
		bool L_20;
		L_20 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)134217728))), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00e2;
		}
	}
	{
		__this->set_m_Syntax_15((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)NULL);
		uint64_t L_21 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_21&(int64_t)((int64_t)((int64_t)((int32_t)524288))))));
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_22 = ___e2;
		*((RuntimeObject **)L_22) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_22, (void*)(RuntimeObject *)NULL);
		return;
	}

IL_00ce:
	{
		int32_t L_23 = ___err0;
		if ((((int32_t)L_23) <= ((int32_t)4)))
		{
			goto IL_00e2;
		}
	}
	{
		__this->set_m_String_13((String_t*)NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_24 = ___e2;
		int32_t L_25 = ___err0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_26;
		L_26 = Uri_GetException_m6A158C16E69136DF56BCF19CC4C7DCCC2601CF84(L_25, /*hidden argument*/NULL);
		*((RuntimeObject **)L_24) = (RuntimeObject *)L_26;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_24, (void*)(RuntimeObject *)L_26);
		return;
	}

IL_00e2:
	{
		V_0 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_27 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_ConfigInitialized_20();
		il2cpp_codegen_memory_barrier();
		if (L_27)
		{
			goto IL_0100;
		}
	}
	{
		String_t* L_28 = __this->get_m_String_13();
		bool L_29;
		L_29 = Uri_CheckForConfigLoad_m4AF9D27B5F62A0D4269B23FB3BEF4846E8D0983D(__this, L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0100;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri_InitializeUriConfig_m0DB8F34B6FAF361C0FE002FA800548608A03F8E5(/*hidden argument*/NULL);
	}

IL_0100:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_30 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_s_IriParsing_23();
		il2cpp_codegen_memory_barrier();
		G_B22_0 = __this;
		if (!L_30)
		{
			G_B25_0 = __this;
			goto IL_0127;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_31 = __this->get_m_Syntax_15();
		G_B23_0 = G_B22_0;
		if (!L_31)
		{
			G_B24_0 = G_B22_0;
			goto IL_0124;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_32 = __this->get_m_Syntax_15();
		NullCheck(L_32);
		bool L_33;
		L_33 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_32, ((int32_t)268435456), /*hidden argument*/NULL);
		G_B26_0 = ((int32_t)(L_33));
		G_B26_1 = G_B23_0;
		goto IL_0128;
	}

IL_0124:
	{
		G_B26_0 = 1;
		G_B26_1 = G_B24_0;
		goto IL_0128;
	}

IL_0127:
	{
		G_B26_0 = 0;
		G_B26_1 = G_B25_0;
	}

IL_0128:
	{
		NullCheck(G_B26_1);
		G_B26_1->set_m_iriParsing_19((bool)G_B26_0);
		bool L_34 = __this->get_m_iriParsing_19();
		if (!L_34)
		{
			goto IL_0175;
		}
	}
	{
		String_t* L_35 = __this->get_m_String_13();
		bool L_36;
		L_36 = Uri_CheckForUnicode_m2A9DB97F3B384DADC1A274C8982404DDE17F6688(__this, L_35, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0151;
		}
	}
	{
		String_t* L_37 = __this->get_m_String_13();
		bool L_38;
		L_38 = Uri_CheckForEscapedUnreserved_m5EC5EFE77E30B08708B49086DF72A659454B1A2F(__this, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0175;
		}
	}

IL_0151:
	{
		uint64_t L_39 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_39|(int64_t)((int64_t)8589934592LL))));
		V_0 = (bool)1;
		String_t* L_40 = __this->get_m_String_13();
		__this->set_m_originalUnicodeString_14(L_40);
	}

IL_0175:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_41 = __this->get_m_Syntax_15();
		if (!L_41)
		{
			goto IL_0290;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_42 = __this->get_m_Syntax_15();
		NullCheck(L_42);
		bool L_43;
		L_43 = UriParser_get_IsSimple_m09BA6505FDD1AE0BF6C711AE9C2C3F9379B868F8(L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_01ef;
		}
	}
	{
		int32_t L_44;
		L_44 = Uri_PrivateParseMinimal_m154A67FFA2FA8E2D9215163B56DF1BB88576A369(__this, /*hidden argument*/NULL);
		int32_t L_45 = L_44;
		___err0 = L_45;
		if (!L_45)
		{
			goto IL_01c9;
		}
	}
	{
		int32_t L_46 = ___uriKind1;
		if ((((int32_t)L_46) == ((int32_t)1)))
		{
			goto IL_01bf;
		}
	}
	{
		int32_t L_47 = ___err0;
		if ((((int32_t)L_47) > ((int32_t)4)))
		{
			goto IL_01bf;
		}
	}
	{
		__this->set_m_Syntax_15((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_48 = ___e2;
		*((RuntimeObject **)L_48) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_48, (void*)(RuntimeObject *)NULL);
		uint64_t L_49 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_49&(int64_t)((int64_t)((int64_t)((int32_t)524288))))));
		goto IL_01db;
	}

IL_01bf:
	{
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_50 = ___e2;
		int32_t L_51 = ___err0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_52;
		L_52 = Uri_GetException_m6A158C16E69136DF56BCF19CC4C7DCCC2601CF84(L_51, /*hidden argument*/NULL);
		*((RuntimeObject **)L_50) = (RuntimeObject *)L_52;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_50, (void*)(RuntimeObject *)L_52);
		goto IL_01db;
	}

IL_01c9:
	{
		int32_t L_53 = ___uriKind1;
		if ((!(((uint32_t)L_53) == ((uint32_t)2))))
		{
			goto IL_01d8;
		}
	}
	{
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_54 = ___e2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_55;
		L_55 = Uri_GetException_m6A158C16E69136DF56BCF19CC4C7DCCC2601CF84(((int32_t)12), /*hidden argument*/NULL);
		*((RuntimeObject **)L_54) = (RuntimeObject *)L_55;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_54, (void*)(RuntimeObject *)L_55);
		goto IL_01db;
	}

IL_01d8:
	{
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_56 = ___e2;
		*((RuntimeObject **)L_56) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_56, (void*)(RuntimeObject *)NULL);
	}

IL_01db:
	{
		bool L_57 = __this->get_m_iriParsing_19();
		bool L_58 = V_0;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0312;
		}
	}
	{
		Uri_EnsureParseRemaining_m7BC86BEFE07F56D480C9ACBCE64983806F6789BB(__this, /*hidden argument*/NULL);
		return;
	}

IL_01ef:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_59 = __this->get_m_Syntax_15();
		NullCheck(L_59);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_60;
		L_60 = UriParser_InternalOnNewUri_m0AC629BCCA398E9A193AC16A5E91D445B9B70D79(L_59, /*hidden argument*/NULL);
		__this->set_m_Syntax_15(L_60);
		uint64_t L_61 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_61|(int64_t)((int64_t)((int64_t)((int32_t)16777216))))));
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_62 = __this->get_m_Syntax_15();
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_63 = ___e2;
		NullCheck(L_62);
		UriParser_InternalValidate_mB845C482B4B01EDFE012DD4C4CEF62C8F4FFE94F(L_62, __this, (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D **)L_63, /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_64 = ___e2;
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_65 = *((UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D **)L_64);
		if (!L_65)
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_66 = ___uriKind1;
		if ((((int32_t)L_66) == ((int32_t)1)))
		{
			goto IL_0312;
		}
	}
	{
		int32_t L_67 = ___err0;
		if (!L_67)
		{
			goto IL_0312;
		}
	}
	{
		int32_t L_68 = ___err0;
		if ((((int32_t)L_68) > ((int32_t)4)))
		{
			goto IL_0312;
		}
	}
	{
		__this->set_m_Syntax_15((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_69 = ___e2;
		*((RuntimeObject **)L_69) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_69, (void*)(RuntimeObject *)NULL);
		uint64_t L_70 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_70&(int64_t)((int64_t)((int64_t)((int32_t)524288))))));
		return;
	}

IL_0256:
	{
		int32_t L_71 = ___err0;
		if (L_71)
		{
			goto IL_0267;
		}
	}
	{
		bool L_72;
		L_72 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)67108864))), /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_026f;
		}
	}

IL_0267:
	{
		Uri_SetUserDrivenParsing_mDF0BFAFE946EAD9122ED2A542132902D7E47FD9C(__this, /*hidden argument*/NULL);
		goto IL_027c;
	}

IL_026f:
	{
		int32_t L_73 = ___uriKind1;
		if ((!(((uint32_t)L_73) == ((uint32_t)2))))
		{
			goto IL_027c;
		}
	}
	{
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_74 = ___e2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_75;
		L_75 = Uri_GetException_m6A158C16E69136DF56BCF19CC4C7DCCC2601CF84(((int32_t)12), /*hidden argument*/NULL);
		*((RuntimeObject **)L_74) = (RuntimeObject *)L_75;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_74, (void*)(RuntimeObject *)L_75);
	}

IL_027c:
	{
		bool L_76 = __this->get_m_iriParsing_19();
		bool L_77 = V_0;
		if (!((int32_t)((int32_t)L_76&(int32_t)L_77)))
		{
			goto IL_0312;
		}
	}
	{
		Uri_EnsureParseRemaining_m7BC86BEFE07F56D480C9ACBCE64983806F6789BB(__this, /*hidden argument*/NULL);
		return;
	}

IL_0290:
	{
		int32_t L_78 = ___err0;
		if (!L_78)
		{
			goto IL_0303;
		}
	}
	{
		int32_t L_79 = ___uriKind1;
		if ((((int32_t)L_79) == ((int32_t)1)))
		{
			goto IL_0303;
		}
	}
	{
		int32_t L_80 = ___err0;
		if ((((int32_t)L_80) > ((int32_t)4)))
		{
			goto IL_0303;
		}
	}
	{
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_81 = ___e2;
		*((RuntimeObject **)L_81) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_81, (void*)(RuntimeObject *)NULL);
		uint64_t L_82 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_82&(int64_t)((int64_t)8590458880LL))));
		bool L_83 = __this->get_m_iriParsing_19();
		bool L_84 = V_0;
		if (!((int32_t)((int32_t)L_83&(int32_t)L_84)))
		{
			goto IL_0312;
		}
	}
	{
		String_t* L_85 = __this->get_m_originalUnicodeString_14();
		String_t* L_86 = __this->get_m_originalUnicodeString_14();
		NullCheck(L_86);
		int32_t L_87;
		L_87 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_86, /*hidden argument*/NULL);
		String_t* L_88;
		L_88 = Uri_EscapeUnescapeIri_m606A69B7A76A131D0CA6F562E5DC0721C626E071(__this, L_85, 0, L_87, 0, /*hidden argument*/NULL);
		__this->set_m_String_13(L_88);
	}

IL_02dd:
	try
	{// begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
			bool L_89;
			L_89 = UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2(/*hidden argument*/NULL);
			if (!L_89)
			{
				goto IL_02f6;
			}
		}

IL_02e4:
		{
			String_t* L_90 = __this->get_m_String_13();
			NullCheck(L_90);
			String_t* L_91;
			L_91 = String_Normalize_m8CD42072C9F7B418990609EB63C5F7E1328321A9(L_90, 1, /*hidden argument*/NULL);
			__this->set_m_String_13(L_91);
		}

IL_02f6:
		{
			goto IL_0312;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02f8;
		}
		throw e;
	}

CATCH_02f8:
	{// begin catch(System.ArgumentException)
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_92 = ___e2;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var)));
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_93;
		L_93 = Uri_GetException_m6A158C16E69136DF56BCF19CC4C7DCCC2601CF84(1, /*hidden argument*/NULL);
		*((RuntimeObject **)L_92) = (RuntimeObject *)L_93;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_92, (void*)(RuntimeObject *)L_93);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0312;
	}// end catch (depth: 1)

IL_0303:
	{
		__this->set_m_String_13((String_t*)NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_94 = ___e2;
		int32_t L_95 = ___err0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_96;
		L_96 = Uri_GetException_m6A158C16E69136DF56BCF19CC4C7DCCC2601CF84(L_95, /*hidden argument*/NULL);
		*((RuntimeObject **)L_94) = (RuntimeObject *)L_96;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_94, (void*)(RuntimeObject *)L_96);
	}

IL_0312:
	{
		return;
	}
}
// System.Boolean System.Uri::CheckForConfigLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_CheckForConfigLoad_m4AF9D27B5F62A0D4269B23FB3BEF4846E8D0983D (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___data0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppChar* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		V_0 = (bool)0;
		String_t* L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2 = ___data0;
		V_3 = L_2;
		String_t* L_3 = V_3;
		V_2 = (Il2CppChar*)((uintptr_t)L_3);
		Il2CppChar* L_4 = V_2;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		Il2CppChar* L_5 = V_2;
		int32_t L_6;
		L_6 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_2 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_5, (int32_t)L_6));
	}

IL_0019:
	{
		V_4 = 0;
		goto IL_007d;
	}

IL_001e:
	{
		Il2CppChar* L_7 = V_2;
		int32_t L_8 = V_4;
		int32_t L_9 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_8), (int32_t)2)))));
		if ((((int32_t)L_9) > ((int32_t)((int32_t)127))))
		{
			goto IL_0073;
		}
	}
	{
		Il2CppChar* L_10 = V_2;
		int32_t L_11 = V_4;
		int32_t L_12 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_11), (int32_t)2)))));
		if ((((int32_t)L_12) == ((int32_t)((int32_t)37))))
		{
			goto IL_0073;
		}
	}
	{
		Il2CppChar* L_13 = V_2;
		int32_t L_14 = V_4;
		int32_t L_15 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_13, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_14), (int32_t)2)))));
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)120)))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_16 = V_4;
		int32_t L_17 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)3))) >= ((int32_t)L_17)))
		{
			goto IL_0077;
		}
	}
	{
		Il2CppChar* L_18 = V_2;
		int32_t L_19 = V_4;
		int32_t L_20 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_18, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1))), (int32_t)2)))));
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_0077;
		}
	}
	{
		Il2CppChar* L_21 = V_2;
		int32_t L_22 = V_4;
		int32_t L_23 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_21, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)2))), (int32_t)2)))));
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0077;
		}
	}
	{
		Il2CppChar* L_24 = V_2;
		int32_t L_25 = V_4;
		int32_t L_26 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_24, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)3))), (int32_t)2)))));
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0077;
		}
	}

IL_0073:
	{
		V_0 = (bool)1;
		goto IL_0082;
	}

IL_0077:
	{
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_007d:
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_001e;
		}
	}

IL_0082:
	{
		V_3 = (String_t*)NULL;
		bool L_30 = V_0;
		return L_30;
	}
}
// System.Boolean System.Uri::CheckForUnicode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_CheckForUnicode_m2A9DB97F3B384DADC1A274C8982404DDE17F6688 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = (bool)0;
		String_t* L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		V_2 = 0;
		String_t* L_3 = ___data0;
		String_t* L_4 = ___data0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7;
		L_7 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(L_3, 0, L_5, L_6, (int32_t*)(&V_2), ((int32_t)65535), ((int32_t)65535), ((int32_t)65535), ((int32_t)10), (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)NULL, (bool)0, /*hidden argument*/NULL);
		V_1 = L_7;
		V_3 = 0;
		goto IL_0047;
	}

IL_0038:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = V_1;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint16_t L_11 = (uint16_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0043;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_004b;
	}

IL_0043:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0038;
		}
	}

IL_004b:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Boolean System.Uri::CheckForEscapedUnreserved(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_CheckForEscapedUnreserved_m5EC5EFE77E30B08708B49086DF72A659454B1A2F (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		String_t* L_0 = ___data0;
		V_1 = L_0;
		String_t* L_1 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_1);
		Il2CppChar* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar* L_3 = V_0;
		int32_t L_4;
		L_4 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, (int32_t)L_4));
	}

IL_0010:
	{
		V_2 = 0;
		goto IL_0087;
	}

IL_0014:
	{
		Il2CppChar* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)2)))));
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0083;
		}
	}
	{
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_8, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1))), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Uri_IsHexDigit_m87121EC1F62716CC681A4458BF2E6A6B844BD95F(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0083;
		}
	}
	{
		Il2CppChar* L_12 = V_0;
		int32_t L_13 = V_2;
		int32_t L_14 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_12, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)2))), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Uri_IsHexDigit_m87121EC1F62716CC681A4458BF2E6A6B844BD95F(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0083;
		}
	}
	{
		Il2CppChar* L_16 = V_0;
		int32_t L_17 = V_2;
		int32_t L_18 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1))), (int32_t)2)))));
		if ((((int32_t)L_18) < ((int32_t)((int32_t)48))))
		{
			goto IL_0083;
		}
	}
	{
		Il2CppChar* L_19 = V_0;
		int32_t L_20 = V_2;
		int32_t L_21 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_19, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1))), (int32_t)2)))));
		if ((((int32_t)L_21) > ((int32_t)((int32_t)55))))
		{
			goto IL_0083;
		}
	}
	{
		Il2CppChar* L_22 = V_0;
		int32_t L_23 = V_2;
		int32_t L_24 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1))), (int32_t)2)))));
		Il2CppChar* L_25 = V_0;
		int32_t L_26 = V_2;
		int32_t L_27 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_25, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)2))), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		Il2CppChar L_28;
		L_28 = UriHelper_EscapedAscii_m80D926F5C8B177B5D041BBFEADEAB2363A324461(L_24, L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		Il2CppChar L_29 = V_3;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)65535))))
		{
			goto IL_0083;
		}
	}
	{
		Il2CppChar L_30 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = UriHelper_Is3986Unreserved_m0532DF2A1577C475D0D83F10C6C5D91F125AC028(L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0083;
		}
	}
	{
		return (bool)1;
	}

IL_0083:
	{
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0087:
	{
		int32_t L_33 = V_2;
		String_t* L_34 = ___data0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_34, /*hidden argument*/NULL);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)2)))))
		{
			goto IL_0014;
		}
	}
	{
		V_1 = (String_t*)NULL;
		return (bool)0;
	}
}
// System.Boolean System.Uri::TryCreate(System.String,System.UriKind,System.Uri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_TryCreate_m44277635BB8291BC0AADD85B9C9A015C1C21EF92 (String_t* ___uriString0, int32_t ___uriKind1, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** ___result2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * V_0 = NULL;
	{
		String_t* L_0 = ___uriString0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** L_1 = ___result2;
		*((RuntimeObject **)L_1) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_1, (void*)(RuntimeObject *)NULL);
		return (bool)0;
	}

IL_0008:
	{
		V_0 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)NULL;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** L_2 = ___result2;
		String_t* L_3 = ___uriString0;
		int32_t L_4 = ___uriKind1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_5;
		L_5 = Uri_CreateHelper_m95C8DB174EFC0CB21C3A74160A1001C14D3EF6DD(L_3, (bool)0, L_4, (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D **)(&V_0), /*hidden argument*/NULL);
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_5);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_6 = V_0;
		if (L_6)
		{
			goto IL_0022;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** L_7 = ___result2;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_8 = *((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **)L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Uri_op_Inequality_m3B3733CAA19866A20EF76A772B368EFB5FC89A4F(L_8, (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL, /*hidden argument*/NULL);
		return L_9;
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.String System.Uri::GetComponents(System.UriComponents,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_GetComponents_mA614A98C35F2E5D924A10A8018A46606AFB6133E (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___components0, int32_t ___format1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___components0;
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_1 = ___components0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___components0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriComponents_tA599793722A9810EC23036FF1B1B02A905B4EA76_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE13258345AC5ED7FA38D641004219DBE3A3FB56C)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_6 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7C03E97995F6950303A46C204A216735E6B4582)), L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_GetComponents_mA614A98C35F2E5D924A10A8018A46606AFB6133E_RuntimeMethod_var)));
	}

IL_002c:
	{
		int32_t L_7 = ___format1;
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-4))))
		{
			goto IL_003d;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_GetComponents_mA614A98C35F2E5D924A10A8018A46606AFB6133E_RuntimeMethod_var)));
	}

IL_003d:
	{
		bool L_9;
		L_9 = Uri_get_IsNotAbsoluteUri_m7394FF83375B299BA634518D3104903AFEAE3177(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_10 = ___components0;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-2147483648LL)))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_11 = ___format1;
		String_t* L_12;
		L_12 = Uri_GetRelativeSerializationString_mBCE8CC99C746B18A9DE0B2C6084C5B90A192130D(__this, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0055:
	{
		String_t* L_13;
		L_13 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE657126EBF76C06687ED6EAD2C714E37315C927F)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_14 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_GetComponents_mA614A98C35F2E5D924A10A8018A46606AFB6133E_RuntimeMethod_var)));
	}

IL_0065:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_15;
		L_15 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		bool L_16;
		L_16 = UriParser_get_IsSimple_m09BA6505FDD1AE0BF6C711AE9C2C3F9379B868F8(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_17 = ___components0;
		int32_t L_18 = ___format1;
		String_t* L_19;
		L_19 = Uri_GetComponentsHelper_mAA39E421157735AAD7D93A187CCCAED5A122C8E8(__this, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_007b:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_20;
		L_20 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(__this, /*hidden argument*/NULL);
		int32_t L_21 = ___components0;
		int32_t L_22 = ___format1;
		NullCheck(L_20);
		String_t* L_23;
		L_23 = UriParser_InternalGetComponents_mAB0A54E462724FA417D0EF3A2AD0BD24BC66DFF8(L_20, __this, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.String System.Uri::UnescapeDataString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_UnescapeDataString_m52E242703F2842594B2B37D673CDD5465ABCC836 (String_t* ___stringToUnescape0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_4 = NULL;
	{
		String_t* L_0 = ___stringToUnescape0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE86F8F43B9D456F4E47ACD029ADCCE78BE9C9AA7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_UnescapeDataString_m52E242703F2842594B2B37D673CDD5465ABCC836_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___stringToUnescape0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_4;
	}

IL_001c:
	{
		String_t* L_5 = ___stringToUnescape0;
		V_1 = L_5;
		String_t* L_6 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_6);
		Il2CppChar* L_7 = V_0;
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		Il2CppChar* L_8 = V_0;
		int32_t L_9;
		L_9 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_8, (int32_t)L_9));
	}

IL_002c:
	{
		V_2 = 0;
		goto IL_003f;
	}

IL_0030:
	{
		Il2CppChar* L_10 = V_0;
		int32_t L_11 = V_2;
		int32_t L_12 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_11), (int32_t)2)))));
		if ((((int32_t)L_12) == ((int32_t)((int32_t)37))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003f:
	{
		int32_t L_14 = V_2;
		String_t* L_15 = ___stringToUnescape0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0030;
		}
	}

IL_0048:
	{
		int32_t L_17 = V_2;
		String_t* L_18 = ___stringToUnescape0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_18, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_19))))
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_20 = ___stringToUnescape0;
		return L_20;
	}

IL_0053:
	{
		V_3 = ((int32_t)10);
		V_2 = 0;
		String_t* L_21 = ___stringToUnescape0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_21, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_23 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_22);
		V_4 = L_23;
		String_t* L_24 = ___stringToUnescape0;
		String_t* L_25 = ___stringToUnescape0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_25, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_27 = V_4;
		int32_t L_28 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_29;
		L_29 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(L_24, 0, L_26, L_27, (int32_t*)(&V_2), ((int32_t)65535), ((int32_t)65535), ((int32_t)65535), L_28, (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)NULL, (bool)0, /*hidden argument*/NULL);
		V_4 = L_29;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_30 = V_4;
		int32_t L_31 = V_2;
		String_t* L_32;
		L_32 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_30, 0, L_31, /*hidden argument*/NULL);
		return L_32;
	}
}
// System.String System.Uri::EscapeUnescapeIri(System.String,System.Int32,System.Int32,System.UriComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_EscapeUnescapeIri_m606A69B7A76A131D0CA6F562E5DC0721C626E071 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___input0, int32_t ___start1, int32_t ___end2, int32_t ___component3, const RuntimeMethod* method)
{
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___input0;
		V_1 = L_0;
		String_t* L_1 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_1);
		Il2CppChar* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar* L_3 = V_0;
		int32_t L_4;
		L_4 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, (int32_t)L_4));
	}

IL_0010:
	{
		Il2CppChar* L_5 = V_0;
		int32_t L_6 = ___start1;
		int32_t L_7 = ___end2;
		int32_t L_8 = ___component3;
		String_t* L_9;
		L_9 = IriHelper_EscapeUnescapeIri_m6CABB7FC44037C0B5C18132AF5D8C55DB5C64444((Il2CppChar*)(Il2CppChar*)L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void System.Uri::.ctor(System.Uri/Flags,System.UriParser,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m899122920EF2C3DE3E7A620B823D43BDB54D3406 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, uint64_t ___flags0, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___uriParser1, String_t* ___uri2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		uint64_t L_0 = ___flags0;
		__this->set_m_Flags_17(L_0);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_1 = ___uriParser1;
		__this->set_m_Syntax_15(L_1);
		String_t* L_2 = ___uri2;
		__this->set_m_String_13(L_2);
		return;
	}
}
// System.Uri System.Uri::CreateHelper(System.String,System.Boolean,System.UriKind,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * Uri_CreateHelper_m95C8DB174EFC0CB21C3A74160A1001C14D3EF6DD (String_t* ___uriString0, bool ___dontEscape1, int32_t ___uriKind2, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___e3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * V_0 = NULL;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_3 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_4 = NULL;
	UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = ___uriKind2;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___uriKind2;
		if ((((int32_t)L_1) <= ((int32_t)2)))
		{
			goto IL_002f;
		}
	}

IL_0008:
	{
		int32_t L_2 = ___uriKind2;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)300))))
		{
			goto IL_002f;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		int32_t L_5 = ___uriKind2;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC_il2cpp_TypeInfo_var)), &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		String_t* L_8;
		L_8 = SR_GetString_m4FFAF18248A54C5B67E4760C5ED4869A87BCAD7F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19A73218F14885E4C839EDA68A1C1C791F7745AA)), L_4, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_CreateHelper_m95C8DB174EFC0CB21C3A74160A1001C14D3EF6DD_RuntimeMethod_var)));
	}

IL_002f:
	{
		V_0 = (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)NULL;
		V_1 = ((int64_t)((int64_t)0));
		String_t* L_10 = ___uriString0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Uri_ParseScheme_m65694E4DA17BF0A8447ACE12EF444FE4D1E1AB16(L_10, (uint64_t*)(&V_1), (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A **)(&V_0), /*hidden argument*/NULL);
		V_2 = L_11;
		bool L_12 = ___dontEscape1;
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		uint64_t L_13 = V_1;
		V_1 = ((int64_t)((int64_t)L_13|(int64_t)((int64_t)((int64_t)((int32_t)524288)))));
	}

IL_004b:
	{
		int32_t L_14 = V_2;
		if (!L_14)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_15 = ___uriKind2;
		if ((((int32_t)L_15) == ((int32_t)1)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) > ((int32_t)4)))
		{
			goto IL_0066;
		}
	}
	{
		uint64_t L_17 = V_1;
		String_t* L_18 = ___uriString0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_19 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m899122920EF2C3DE3E7A620B823D43BDB54D3406(L_19, ((int64_t)((int64_t)L_17&(int64_t)((int64_t)((int64_t)((int32_t)524288))))), (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)NULL, L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_0066:
	{
		return (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL;
	}

IL_0068:
	{
		uint64_t L_20 = V_1;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_21 = V_0;
		String_t* L_22 = ___uriString0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_23 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m899122920EF2C3DE3E7A620B823D43BDB54D3406(L_23, L_20, L_21, L_22, /*hidden argument*/NULL);
		V_3 = L_23;
	}

IL_0071:
	try
	{// begin try (depth: 1)
		{
			Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_24 = V_3;
			int32_t L_25 = V_2;
			int32_t L_26 = ___uriKind2;
			UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_27 = ___e3;
			NullCheck(L_24);
			Uri_InitializeUri_m952665E18BE60CFAC5A6025FCD2A0BB9CCB5C567(L_24, L_25, L_26, (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D **)L_27, /*hidden argument*/NULL);
			UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_28 = ___e3;
			UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_29 = *((UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D **)L_28);
			if (L_29)
			{
				goto IL_0083;
			}
		}

IL_007e:
		{
			Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_30 = V_3;
			V_4 = L_30;
			goto IL_0093;
		}

IL_0083:
		{
			V_4 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL;
			goto IL_0093;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0088;
		}
		throw e;
	}

CATCH_0088:
	{// begin catch(System.UriFormatException)
		V_5 = ((UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)IL2CPP_GET_ACTIVE_EXCEPTION(UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *));
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_31 = ___e3;
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_32 = V_5;
		*((RuntimeObject **)L_31) = (RuntimeObject *)L_32;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_31, (void*)(RuntimeObject *)L_32);
		V_4 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0093;
	}// end catch (depth: 1)

IL_0093:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_33 = V_4;
		return L_33;
	}
}
// System.Uri System.Uri::ResolveHelper(System.Uri,System.Uri,System.String&,System.Boolean&,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * Uri_ResolveHelper_m2C5CDF42841B464E75B3AA102A24BABA8B51698E (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri0, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___relativeUri1, String_t** ___newUriString2, bool* ___userEscaped3, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___e4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00ED444101CADBDD612603B145DC44E57F6FCA22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAE6B383FC259C6D8E02FFF07CC62BD90BA58157);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t G_B15_0 = 0;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B15_1 = NULL;
	String_t** G_B15_2 = NULL;
	int32_t G_B14_0 = 0;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B14_1 = NULL;
	String_t** G_B14_2 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B16_2 = NULL;
	String_t** G_B16_3 = NULL;
	String_t* G_B38_0 = NULL;
	String_t* G_B42_0 = NULL;
	{
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_0 = ___e4;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_1;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_2 = ___relativeUri1;
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_3 = ___relativeUri1;
		NullCheck(L_3);
		bool L_4;
		L_4 = Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_5 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get_IsWindowsFileSystem_25();
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_6 = ___relativeUri1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Il2CppChar L_8;
		L_8 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_7, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0034;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_9 = ___relativeUri1;
		NullCheck(L_9);
		bool L_10;
		L_10 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0036;
		}
	}

IL_0034:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_11 = ___relativeUri1;
		return L_11;
	}

IL_0036:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_12 = ___relativeUri1;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		bool* L_14 = ___userEscaped3;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_15 = ___relativeUri1;
		NullCheck(L_15);
		bool L_16;
		L_16 = Uri_get_UserEscaped_m36B234B7081DFE3B3B6D7FCA2F9768C10DDD2807(L_15, /*hidden argument*/NULL);
		*((int8_t*)L_14) = (int8_t)L_16;
		goto IL_004d;
	}

IL_0047:
	{
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_17;
	}

IL_004d:
	{
		String_t* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		String_t* L_20 = V_0;
		NullCheck(L_20);
		Il2CppChar L_21;
		L_21 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_20, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Uri_IsLWS_m4A41E0157130C65E6768C4F5CFEE2219DAE773B4(L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_23 = V_0;
		String_t* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		Il2CppChar L_26;
		L_26 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_23, ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Uri_IsLWS_m4A41E0157130C65E6768C4F5CFEE2219DAE773B4(L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0085;
		}
	}

IL_0079:
	{
		String_t* L_28 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_29 = ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->get__WSchars_28();
		NullCheck(L_28);
		String_t* L_30;
		L_30 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_28, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
	}

IL_0085:
	{
		String_t* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00a5;
		}
	}
	{
		String_t** L_33 = ___newUriString2;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_34 = ___baseUri0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_35 = ___baseUri0;
		NullCheck(L_35);
		bool L_36;
		L_36 = Uri_get_UserEscaped_m36B234B7081DFE3B3B6D7FCA2F9768C10DDD2807(L_35, /*hidden argument*/NULL);
		G_B14_0 = ((int32_t)127);
		G_B14_1 = L_34;
		G_B14_2 = L_33;
		if (L_36)
		{
			G_B15_0 = ((int32_t)127);
			G_B15_1 = L_34;
			G_B15_2 = L_33;
			goto IL_009c;
		}
	}
	{
		G_B16_0 = 3;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		G_B16_3 = G_B14_2;
		goto IL_009d;
	}

IL_009c:
	{
		G_B16_0 = 1;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
		G_B16_3 = G_B15_2;
	}

IL_009d:
	{
		NullCheck(G_B16_2);
		String_t* L_37;
		L_37 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(G_B16_2, G_B16_1, G_B16_0, /*hidden argument*/NULL);
		*((RuntimeObject **)G_B16_3) = (RuntimeObject *)L_37;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)G_B16_3, (void*)(RuntimeObject *)L_37);
		return (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL;
	}

IL_00a5:
	{
		String_t* L_38 = V_0;
		NullCheck(L_38);
		Il2CppChar L_39;
		L_39 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_38, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_00da;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_40 = ___baseUri0;
		NullCheck(L_40);
		bool L_41;
		L_41 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(L_40, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_00da;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_42 = ___baseUri0;
		NullCheck(L_42);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_43;
		L_43 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		bool L_44;
		L_44 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_43, ((int32_t)64), /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_00da;
		}
	}
	{
		String_t** L_45 = ___newUriString2;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_46 = ___baseUri0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(L_46, ((int32_t)63), 1, /*hidden argument*/NULL);
		String_t* L_48 = V_0;
		String_t* L_49;
		L_49 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_47, L_48, /*hidden argument*/NULL);
		*((RuntimeObject **)L_45) = (RuntimeObject *)L_49;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_45, (void*)(RuntimeObject *)L_49);
		return (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL;
	}

IL_00da:
	{
		String_t* L_50 = V_0;
		NullCheck(L_50);
		Il2CppChar L_51;
		L_51 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_50, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_010f;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_52 = ___baseUri0;
		NullCheck(L_52);
		bool L_53;
		L_53 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(L_52, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_010f;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_54 = ___baseUri0;
		NullCheck(L_54);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_55;
		L_55 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		bool L_56;
		L_56 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_55, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_010f;
		}
	}
	{
		String_t** L_57 = ___newUriString2;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_58 = ___baseUri0;
		NullCheck(L_58);
		String_t* L_59;
		L_59 = Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA(L_58, ((int32_t)31), 1, /*hidden argument*/NULL);
		String_t* L_60 = V_0;
		String_t* L_61;
		L_61 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_59, L_60, /*hidden argument*/NULL);
		*((RuntimeObject **)L_57) = (RuntimeObject *)L_61;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_57, (void*)(RuntimeObject *)L_61);
		return (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL;
	}

IL_010f:
	{
		String_t* L_62 = V_0;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_62, /*hidden argument*/NULL);
		if ((((int32_t)L_63) < ((int32_t)3)))
		{
			goto IL_01d9;
		}
	}
	{
		String_t* L_64 = V_0;
		NullCheck(L_64);
		Il2CppChar L_65;
		L_65 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_64, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_65) == ((int32_t)((int32_t)58))))
		{
			goto IL_0134;
		}
	}
	{
		String_t* L_66 = V_0;
		NullCheck(L_66);
		Il2CppChar L_67;
		L_67 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_66, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_67) == ((uint32_t)((int32_t)124)))))
		{
			goto IL_01d9;
		}
	}

IL_0134:
	{
		String_t* L_68 = V_0;
		NullCheck(L_68);
		Il2CppChar L_69;
		L_69 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_68, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = Uri_IsAsciiLetter_mBEE6BD837C66CBB199E8A9FAB14A85744368F0FC(L_69, /*hidden argument*/NULL);
		if (!L_70)
		{
			goto IL_01d9;
		}
	}
	{
		String_t* L_71 = V_0;
		NullCheck(L_71);
		Il2CppChar L_72;
		L_72 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_71, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_72) == ((int32_t)((int32_t)92))))
		{
			goto IL_015b;
		}
	}
	{
		String_t* L_73 = V_0;
		NullCheck(L_73);
		Il2CppChar L_74;
		L_74 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_73, 2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_01d9;
		}
	}

IL_015b:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_75 = ___baseUri0;
		NullCheck(L_75);
		bool L_76;
		L_76 = Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA(L_75, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_0168;
		}
	}
	{
		String_t** L_77 = ___newUriString2;
		String_t* L_78 = V_0;
		*((RuntimeObject **)L_77) = (RuntimeObject *)L_78;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_77, (void*)(RuntimeObject *)L_78);
		return (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL;
	}

IL_0168:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_79 = ___baseUri0;
		NullCheck(L_79);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_80;
		L_80 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(L_79, /*hidden argument*/NULL);
		NullCheck(L_80);
		bool L_81;
		L_81 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_80, ((int32_t)1048576), /*hidden argument*/NULL);
		if (!L_81)
		{
			goto IL_01d9;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_82 = ___baseUri0;
		NullCheck(L_82);
		bool L_83;
		L_83 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(L_82, ((int64_t)((int64_t)((int32_t)1048576))), /*hidden argument*/NULL);
		if (!L_83)
		{
			goto IL_01a9;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_84 = ___baseUri0;
		NullCheck(L_84);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_85;
		L_85 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(L_84, /*hidden argument*/NULL);
		NullCheck(L_85);
		bool L_86;
		L_86 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_85, ((int32_t)2097152), /*hidden argument*/NULL);
		if (L_86)
		{
			goto IL_01a1;
		}
	}
	{
		G_B38_0 = _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
		goto IL_01a6;
	}

IL_01a1:
	{
		G_B38_0 = _stringLiteral00ED444101CADBDD612603B145DC44E57F6FCA22;
	}

IL_01a6:
	{
		V_2 = G_B38_0;
		goto IL_01c8;
	}

IL_01a9:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_87 = ___baseUri0;
		NullCheck(L_87);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_88;
		L_88 = Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline(L_87, /*hidden argument*/NULL);
		NullCheck(L_88);
		bool L_89;
		L_89 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(L_88, ((int32_t)2097152), /*hidden argument*/NULL);
		if (L_89)
		{
			goto IL_01c2;
		}
	}
	{
		G_B42_0 = _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
		goto IL_01c7;
	}

IL_01c2:
	{
		G_B42_0 = _stringLiteralCAE6B383FC259C6D8E02FFF07CC62BD90BA58157;
	}

IL_01c7:
	{
		V_2 = G_B42_0;
	}

IL_01c8:
	{
		String_t** L_90 = ___newUriString2;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_91 = ___baseUri0;
		NullCheck(L_91);
		String_t* L_92;
		L_92 = Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29(L_91, /*hidden argument*/NULL);
		String_t* L_93 = V_2;
		String_t* L_94 = V_0;
		String_t* L_95;
		L_95 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_92, L_93, L_94, /*hidden argument*/NULL);
		*((RuntimeObject **)L_90) = (RuntimeObject *)L_95;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_90, (void*)(RuntimeObject *)L_95);
		return (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL;
	}

IL_01d9:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_96 = ___baseUri0;
		String_t* L_97 = V_0;
		bool* L_98 = ___userEscaped3;
		int32_t L_99 = *((uint8_t*)L_98);
		String_t** L_100 = ___newUriString2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		int32_t L_101;
		L_101 = Uri_GetCombinedString_mC6530D23E30E379E8991E52862B9B38489430743(L_96, L_97, (bool)L_99, (String_t**)L_100, /*hidden argument*/NULL);
		V_1 = L_101;
		int32_t L_102 = V_1;
		if (!L_102)
		{
			goto IL_01f2;
		}
	}
	{
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_103 = ___e4;
		int32_t L_104 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_105;
		L_105 = Uri_GetException_m6A158C16E69136DF56BCF19CC4C7DCCC2601CF84(L_104, /*hidden argument*/NULL);
		*((RuntimeObject **)L_103) = (RuntimeObject *)L_105;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_103, (void*)(RuntimeObject *)L_105);
		return (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL;
	}

IL_01f2:
	{
		String_t** L_106 = ___newUriString2;
		String_t* L_107 = *((String_t**)L_106);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_108 = ___baseUri0;
		NullCheck(L_108);
		String_t* L_109 = L_108->get_m_String_13();
		if ((!(((RuntimeObject*)(String_t*)L_107) == ((RuntimeObject*)(String_t*)L_109))))
		{
			goto IL_01fe;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_110 = ___baseUri0;
		return L_110;
	}

IL_01fe:
	{
		return (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL;
	}
}
// System.String System.Uri::GetRelativeSerializationString(System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_GetRelativeSerializationString_mBCE8CC99C746B18A9DE0B2C6084C5B90A192130D (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___format0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_1 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___format0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_1 = __this->get_m_String_13();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_3;
	}

IL_0017:
	{
		V_0 = 0;
		String_t* L_4 = __this->get_m_String_13();
		String_t* L_5 = __this->get_m_String_13();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7;
		L_7 = UriHelper_EscapeString_m322E8737F58BBAF891A75032EC1800BE548F84D7(L_4, 0, L_6, (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL, (int32_t*)(&V_0), (bool)1, ((int32_t)65535), ((int32_t)65535), ((int32_t)37), /*hidden argument*/NULL);
		V_1 = L_7;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = V_1;
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		String_t* L_9 = __this->get_m_String_13();
		return L_9;
	}

IL_004b:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = V_1;
		int32_t L_11 = V_0;
		String_t* L_12;
		L_12 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_10, 0, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0054:
	{
		int32_t L_13 = ___format0;
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_14 = __this->get_m_String_13();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = Uri_UnescapeDataString_m52E242703F2842594B2B37D673CDD5465ABCC836(L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_0064:
	{
		int32_t L_16 = ___format0;
		if ((!(((uint32_t)L_16) == ((uint32_t)3))))
		{
			goto IL_00c4;
		}
	}
	{
		String_t* L_17 = __this->get_m_String_13();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_007b;
		}
	}
	{
		String_t* L_19 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_19;
	}

IL_007b:
	{
		String_t* L_20 = __this->get_m_String_13();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_20, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_21);
		V_2 = L_22;
		V_3 = 0;
		String_t* L_23 = __this->get_m_String_13();
		String_t* L_24 = __this->get_m_String_13();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_24, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_27;
		L_27 = UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300(L_23, 0, L_25, L_26, (int32_t*)(&V_3), ((int32_t)65535), ((int32_t)65535), ((int32_t)65535), 3, (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)NULL, (bool)0, /*hidden argument*/NULL);
		V_2 = L_27;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_28 = V_2;
		int32_t L_29 = V_3;
		String_t* L_30;
		L_30 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_28, 0, L_29, /*hidden argument*/NULL);
		return L_30;
	}

IL_00c4:
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_31 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_GetRelativeSerializationString_mBCE8CC99C746B18A9DE0B2C6084C5B90A192130D_RuntimeMethod_var)));
	}
}
// System.String System.Uri::GetComponentsHelper(System.UriComponents,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_GetComponentsHelper_mAA39E421157735AAD7D93A187CCCAED5A122C8E8 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___uriComponents0, int32_t ___uriFormat1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___uriComponents0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_1 = __this->get_m_Syntax_15();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0010:
	{
		int32_t L_3 = ___uriComponents0;
		if (!((int32_t)((int32_t)L_3&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = ___uriComponents0;
		___uriComponents0 = ((int32_t)((int32_t)L_4|(int32_t)((int32_t)127)));
	}

IL_001f:
	{
		Uri_EnsureParseRemaining_m7BC86BEFE07F56D480C9ACBCE64983806F6789BB(__this, /*hidden argument*/NULL);
		int32_t L_5 = ___uriComponents0;
		if (!((int32_t)((int32_t)L_5&(int32_t)((int32_t)256))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_6 = ___uriComponents0;
		___uriComponents0 = ((int32_t)((int32_t)L_6|(int32_t)4));
	}

IL_0033:
	{
		int32_t L_7 = ___uriComponents0;
		if (!((int32_t)((int32_t)L_7&(int32_t)4)))
		{
			goto IL_003f;
		}
	}
	{
		Uri_EnsureHostString_m47897EC94F83DFE1CA16CE71167DDD3CC986C22A(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_003f:
	{
		int32_t L_8 = ___uriComponents0;
		if ((((int32_t)L_8) == ((int32_t)8)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_9 = ___uriComponents0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0091;
		}
	}

IL_004b:
	{
		uint64_t L_10 = __this->get_m_Flags_17();
		if (((int64_t)((int64_t)L_10&(int64_t)((int64_t)((int64_t)((int32_t)8388608))))))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_11 = ___uriComponents0;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_008b;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_12 = __this->get_m_Syntax_15();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = UriParser_get_DefaultPort_m7ECA5BE839D36C7FF854FEA0795D8DE701487D33_inline(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) == ((int32_t)(-1))))
		{
			goto IL_008b;
		}
	}

IL_0070:
	{
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_14 = __this->get_m_Info_18();
		NullCheck(L_14);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_15 = L_14->get_address_of_Offset_3();
		uint16_t* L_16 = L_15->get_address_of_PortValue_3();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_17;
		L_17 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_18;
		L_18 = UInt16_ToString_m960B640F8B0C181A9185FCD0921B2F85106FE336((uint16_t*)L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_008b:
	{
		String_t* L_19 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_19;
	}

IL_0091:
	{
		int32_t L_20 = ___uriComponents0;
		if (!((int32_t)((int32_t)L_20&(int32_t)((int32_t)128))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_21 = ___uriComponents0;
		___uriComponents0 = ((int32_t)((int32_t)L_21|(int32_t)8));
	}

IL_009f:
	{
		int32_t L_22 = ___uriComponents0;
		if ((!(((uint32_t)L_22) == ((uint32_t)4))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_23 = ___uriFormat1;
		if ((((int32_t)L_23) == ((int32_t)1)))
		{
			goto IL_00b6;
		}
	}
	{
		uint64_t L_24 = __this->get_m_Flags_17();
		if (((int64_t)((int64_t)L_24&(int64_t)((int64_t)((int64_t)((int32_t)260))))))
		{
			goto IL_00c9;
		}
	}

IL_00b6:
	{
		Uri_EnsureHostString_m47897EC94F83DFE1CA16CE71167DDD3CC986C22A(__this, (bool)0, /*hidden argument*/NULL);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_25 = __this->get_m_Info_18();
		NullCheck(L_25);
		String_t* L_26 = L_25->get_Host_0();
		return L_26;
	}

IL_00c9:
	{
		int32_t L_27 = ___uriFormat1;
		if ((((int32_t)L_27) == ((int32_t)1)))
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_28 = ___uriFormat1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)2))) > ((uint32_t)1))))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_29 = ___uriFormat1;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)32767))))
		{
			goto IL_00e5;
		}
	}
	{
		goto IL_00ee;
	}

IL_00dd:
	{
		int32_t L_30 = ___uriComponents0;
		String_t* L_31;
		L_31 = Uri_GetEscapedParts_m61C2B2B898F8AA8B75AAEC38EF78C340BC1F5A20(__this, L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_00e5:
	{
		int32_t L_32 = ___uriComponents0;
		int32_t L_33 = ___uriFormat1;
		String_t* L_34;
		L_34 = Uri_GetUnescapedParts_m6F106ECABBBAFA95C3F3CA86F540B9EE0B9D01D4(__this, L_32, L_33, /*hidden argument*/NULL);
		return L_34;
	}

IL_00ee:
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_35 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_35, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB856D5F930F0597377D1341A0C6F24DD74854667)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Uri_GetComponentsHelper_mAA39E421157735AAD7D93A187CCCAED5A122C8E8_RuntimeMethod_var)));
	}
}
// System.Void System.Uri::CreateThisFromUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri_CreateThisFromUri_mCD4CFC7C223ADB909C634DA7EAE279DCD9BF5C14 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___otherUri0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		__this->set_m_Info_18((UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 *)NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___otherUri0;
		NullCheck(L_0);
		uint64_t L_1 = L_0->get_m_Flags_17();
		__this->set_m_Flags_17(L_1);
		bool L_2;
		L_2 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)1073741824))), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00b2;
		}
	}
	{
		uint64_t L_3 = __this->get_m_Flags_17();
		__this->set_m_Flags_17(((int64_t)((int64_t)L_3&(int64_t)((int64_t)-3221291008LL))));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_4 = ___otherUri0;
		NullCheck(L_4);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_5 = L_4->get_m_Info_18();
		NullCheck(L_5);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_6 = L_5->get_address_of_Offset_3();
		uint16_t L_7 = L_6->get_Path_4();
		V_0 = L_7;
		bool L_8;
		L_8 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(__this, ((int64_t)((int64_t)((int32_t)8388608))), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_005f;
	}

IL_005b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
	}

IL_005f:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_10 = ___otherUri0;
		NullCheck(L_10);
		String_t* L_11 = L_10->get_m_String_13();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		Il2CppChar L_13;
		L_13 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_11, L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) == ((int32_t)((int32_t)58))))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_14 = V_0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_15 = ___otherUri0;
		NullCheck(L_15);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_16 = L_15->get_m_Info_18();
		NullCheck(L_16);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_17 = L_16->get_address_of_Offset_3();
		uint16_t L_18 = L_17->get_Host_2();
		if ((((int32_t)L_14) > ((int32_t)L_18)))
		{
			goto IL_005b;
		}
	}

IL_0082:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_19 = ___otherUri0;
		NullCheck(L_19);
		String_t* L_20 = L_19->get_m_String_13();
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Il2CppChar L_22;
		L_22 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_20, L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) == ((int32_t)((int32_t)58))))
		{
			goto IL_00a3;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_23 = ___otherUri0;
		NullCheck(L_23);
		UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * L_24 = L_23->get_m_Info_18();
		NullCheck(L_24);
		Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * L_25 = L_24->get_address_of_Offset_3();
		uint16_t L_26 = L_25->get_Path_4();
		V_0 = L_26;
	}

IL_00a3:
	{
		uint64_t L_27 = __this->get_m_Flags_17();
		int32_t L_28 = V_0;
		__this->set_m_Flags_17(((int64_t)((int64_t)L_27|(int64_t)((int64_t)((int64_t)L_28)))));
	}

IL_00b2:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_29 = ___otherUri0;
		NullCheck(L_29);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_30 = L_29->get_m_Syntax_15();
		__this->set_m_Syntax_15(L_30);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_31 = ___otherUri0;
		NullCheck(L_31);
		String_t* L_32 = L_31->get_m_String_13();
		__this->set_m_String_13(L_32);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_33 = ___otherUri0;
		NullCheck(L_33);
		bool L_34 = L_33->get_m_iriParsing_19();
		__this->set_m_iriParsing_19(L_34);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_35 = ___otherUri0;
		NullCheck(L_35);
		bool L_36;
		L_36 = Uri_get_OriginalStringSwitched_m405404D361D84E268AED978DCE114F5E43583987(L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00ea;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_37 = ___otherUri0;
		NullCheck(L_37);
		String_t* L_38 = L_37->get_m_originalUnicodeString_14();
		__this->set_m_originalUnicodeString_14(L_38);
	}

IL_00ea:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_39 = ___otherUri0;
		NullCheck(L_39);
		bool L_40;
		L_40 = Uri_get_AllowIdn_m4031E81D7D0E44FC81C6951D78B2C836EC8270D7(L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0120;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_41 = ___otherUri0;
		NullCheck(L_41);
		bool L_42;
		L_42 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(L_41, ((int64_t)4294967296LL), /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_0114;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_43 = ___otherUri0;
		NullCheck(L_43);
		bool L_44;
		L_44 = Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4(L_43, ((int64_t)68719476736LL), /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0120;
		}
	}

IL_0114:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_45 = ___otherUri0;
		NullCheck(L_45);
		String_t* L_46 = L_45->get_m_DnsSafeHost_16();
		__this->set_m_DnsSafeHost_16(L_46);
	}

IL_0120:
	{
		return;
	}
}
// System.Void System.Uri::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__cctor_mA68C4B77F99F4519E579073E32CB924DB4467457 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0____C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0____E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778DFAE29C280DA8F24CB36747AB3656B8220A6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC754689D33E77DA33A161FB7A06C164EDF02EE65);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_0 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FileUri_12();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_0, /*hidden argument*/NULL);
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_UriSchemeFile_0(L_1);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_2 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FtpUri_11();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_2, /*hidden argument*/NULL);
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_UriSchemeFtp_1(L_3);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_4 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_GopherUri_13();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_4, /*hidden argument*/NULL);
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_UriSchemeGopher_2(L_5);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_6 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpUri_7();
		NullCheck(L_6);
		String_t* L_7;
		L_7 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_6, /*hidden argument*/NULL);
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_UriSchemeHttp_3(L_7);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_8 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpsUri_8();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_8, /*hidden argument*/NULL);
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_UriSchemeHttps_4(L_9);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_10 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_WsUri_9();
		NullCheck(L_10);
		String_t* L_11;
		L_11 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_10, /*hidden argument*/NULL);
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_UriSchemeWs_5(L_11);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_12 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_WssUri_10();
		NullCheck(L_12);
		String_t* L_13;
		L_13 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_12, /*hidden argument*/NULL);
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_UriSchemeWss_6(L_13);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_14 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_MailToUri_16();
		NullCheck(L_14);
		String_t* L_15;
		L_15 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_14, /*hidden argument*/NULL);
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_UriSchemeMailto_7(L_15);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_16 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NewsUri_15();
		NullCheck(L_16);
		String_t* L_17;
		L_17 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_16, /*hidden argument*/NULL);
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_UriSchemeNews_8(L_17);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_18 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NntpUri_14();
		NullCheck(L_18);
		String_t* L_19;
		L_19 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_18, /*hidden argument*/NULL);
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_UriSchemeNntp_9(L_19);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_20 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NetTcpUri_20();
		NullCheck(L_20);
		String_t* L_21;
		L_21 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_20, /*hidden argument*/NULL);
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_UriSchemeNetTcp_10(L_21);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_22 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NetPipeUri_21();
		NullCheck(L_22);
		String_t* L_23;
		L_23 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_22, /*hidden argument*/NULL);
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_UriSchemeNetPipe_11(L_23);
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_SchemeDelimiter_12(_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_memory_barrier();
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_s_IdnScope_22(0);
		String_t* L_24;
		L_24 = Environment_GetEnvironmentVariable_mBDE19BD883E2D01AEA6DD1667D5E97941558C7A3(_stringLiteralC754689D33E77DA33A161FB7A06C164EDF02EE65, /*hidden argument*/NULL);
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_24, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		il2cpp_codegen_memory_barrier();
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_s_IriParsing_23(((((int32_t)L_25) == ((int32_t)0))? 1 : 0));
		String_t* L_26;
		L_26 = Environment_GetEnvironmentVariable_mBDE19BD883E2D01AEA6DD1667D5E97941558C7A3(_stringLiteral778DFAE29C280DA8F24CB36747AB3656B8220A6F, /*hidden argument*/NULL);
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_useDotNetRelativeOrAbsolute_24(L_27);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		Il2CppChar L_28 = ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields*)il2cpp_codegen_static_fields_for(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var))->get_DirectorySeparatorChar_2();
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_IsWindowsFileSystem_25((bool)((((int32_t)L_28) == ((int32_t)((int32_t)92)))? 1 : 0));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_29 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_30 = L_29;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_31 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0____C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_30, L_31, /*hidden argument*/NULL);
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set_HexLowerChars_27(L_30);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_32 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)4);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_33 = L_32;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_34 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0____E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_33, L_34, /*hidden argument*/NULL);
		((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var))->set__WSchars_28(L_33);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m3727BDA5C26E0220FA7BBE73C9E662774F5F1664_inline (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___handle0;
		__this->set_handle_0((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SettingsBindableAttribute_get_Bindable_mB64EAF5229EA9C4B0B9D0D1F769CAA50609CA83A_inline (SettingsBindableAttribute_t783D603AF17D5F8513057F95AA46FF26995EEDA0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__bindable_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_m699652BD16C42823BE283EA769647F676122EB6B_inline (TypeConverterAttribute_t2C9750F302F83A7710D031C00A7CEBDA8F0C3F83 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_typeName_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UriParser_get_Flags_mDAA0D828057CA2CA4493FD152D3760E975BAE7F0_inline (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Flags_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9_inline (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method)
{
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_0 = __this->get_m_Syntax_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UriParser_get_DefaultPort_m7ECA5BE839D36C7FF854FEA0795D8DE701487D33_inline (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Port_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_Scheme_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_InvariantCultureIgnoreCase_m091360FF9FE3516559AFF706AF431E6FD4CCF2C2_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0 = ((StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var))->get__invariantCultureIgnoreCase_1();
		return L_0;
	}
}

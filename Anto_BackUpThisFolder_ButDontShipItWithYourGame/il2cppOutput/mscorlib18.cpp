﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>

#include "icalls/mscorlib/System.IO/MonoIO.h"
#include "icalls/mscorlib/System.IO/Path.h"

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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.ByteMatcher
struct ByteMatcher_tBD9445F65E590C89D353CAA1C3776C69898F11EB;
// System.IO.CStreamReader
struct CStreamReader_tA8A200A5C1352CF0A34EC40F7AFBFC0360589094;
// System.IO.CStreamWriter
struct CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryNotFoundException
struct DirectoryNotFoundException_tBE92A20AAC24C3B22DE38973ABE6886FA97419BF;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A;
// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t63112633BC368A3723281F1E7B27E0AFD372F215;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.IConsoleDriver
struct IConsoleDriver_t328C60C1918C982E51EE38694ECD558B6417A9CE;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.IO.PathTooLongException
struct PathTooLongException_tAF7644094546C2BD93B829405B0199BF3B3FC2E5;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.TermInfoDriver
struct TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF;
// System.TermInfoReader
struct TermInfoReader_t728E05197DD5DD57DCCCC27D1F6A0B6C5486EF97;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791;
// System.IO.UnexceptionalStreamReader
struct UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE;
// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_tF3DBFED31D3D9EAB7CD7B58F89F817D69DE71EDD;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8;
// System.IO.FileStream/ReadDelegate
struct ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98;
// System.IO.FileStream/WriteDelegate
struct WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsoleDriver_tC98607842465524D6078EB6C21FEA25BBC1A6E80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectoryNotFoundException_tBE92A20AAC24C3B22DE38973ABE6886FA97419BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStreamAsyncResult_t63112633BC368A3723281F1E7B27E0AFD372F215_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoIOError_tC94D69F85D2C23B3229AE92B97381C7F9351D947_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PathTooLongException_tAF7644094546C2BD93B829405B0199BF3B3FC2E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____510FDFA4743E58DD45DCDD7CB4F8509BF6294CC1D1D4958CA30A9E7604973006_22_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____C95D810E738DB5F591EE691CE884EED2F110D9F82B1F7A8BE6ED257FDF4CDBEB_63_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02693BE56D23D49FBADB98D7AF6D95B6C888CA51;
IL2CPP_EXTERN_C String_t* _stringLiteral03CF13FCF21F7356CB29CA6878C545117C724E80;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral0B600EA7FFCE1E78F9FAE21D30FB88DAACC16451;
IL2CPP_EXTERN_C String_t* _stringLiteral0D89B88FC94E8CC19BCE749B99496598C24D30F2;
IL2CPP_EXTERN_C String_t* _stringLiteral0F4BBBFA471C24196595235C87B3283075DB6F43;
IL2CPP_EXTERN_C String_t* _stringLiteral17F8D92EF7FF34148C336F80F73EDB4F3000E2D0;
IL2CPP_EXTERN_C String_t* _stringLiteral1ED8A9EE5536D74DF44A6E16DA5AB12118240C68;
IL2CPP_EXTERN_C String_t* _stringLiteral22096D5CF0D5EA8DA07B484F78E2FB49AD56A7DF;
IL2CPP_EXTERN_C String_t* _stringLiteral222287037E82D3568C7162E396BDBB9C749B086D;
IL2CPP_EXTERN_C String_t* _stringLiteral252115912CA60CC88926239ECA0FAB133529A3C3;
IL2CPP_EXTERN_C String_t* _stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral313BEFF10E9EC86112EEAC5AF888D20BFE52F9C9;
IL2CPP_EXTERN_C String_t* _stringLiteral532F5429956965038FA49DA954E9A0D4D34B41A9;
IL2CPP_EXTERN_C String_t* _stringLiteral5A182B180E626C1E1930FEC2AFFF5397AE62013D;
IL2CPP_EXTERN_C String_t* _stringLiteral6481FC1636BEB597B430AECC275BB5A83EA4633B;
IL2CPP_EXTERN_C String_t* _stringLiteral6A3FDDD8C3BE1CF11AE8A00B54BE972C0AB9968D;
IL2CPP_EXTERN_C String_t* _stringLiteral713771722B208F5FC37F4ECC7686F62C2AAE6547;
IL2CPP_EXTERN_C String_t* _stringLiteral76090A3CE9567D0D26B5213CB891A873540230EE;
IL2CPP_EXTERN_C String_t* _stringLiteral89228C2272C203A431928EA4D77EC3641DC74018;
IL2CPP_EXTERN_C String_t* _stringLiteral8FAFE0C7CF4DAF4B0E2865AE5128EAAA4A3DE940;
IL2CPP_EXTERN_C String_t* _stringLiteral92D2D6E357274775AD04DE0FFDE0AD3B993D0D99;
IL2CPP_EXTERN_C String_t* _stringLiteral9314E51D0364D320B5BB9F10EB1CB0704A3299F7;
IL2CPP_EXTERN_C String_t* _stringLiteral93ED0449AC9AE5B2961E266396F4C4B0BE35BF4B;
IL2CPP_EXTERN_C String_t* _stringLiteral98F8D74C1DFFFFCDC763E65133743020F32A37B6;
IL2CPP_EXTERN_C String_t* _stringLiteral99C191933128F806168ECE83CFFE154EA7BD6485;
IL2CPP_EXTERN_C String_t* _stringLiteral9FD5FEB346EEA827BCC3F2949A87620F6DFAA5DB;
IL2CPP_EXTERN_C String_t* _stringLiteral9FF46628166A3E3EA154B7D95D42166503C62220;
IL2CPP_EXTERN_C String_t* _stringLiteralB13B0836EA95708673E059506B8B21DF07ECE287;
IL2CPP_EXTERN_C String_t* _stringLiteralB3C8D23C90C9F01C333960195D4396A9F37637CD;
IL2CPP_EXTERN_C String_t* _stringLiteralB5E709D03D17E89AB189BBD7D746E0EFCDCA9798;
IL2CPP_EXTERN_C String_t* _stringLiteralB60A5DC327E3719B63E2509B4B166FECDBDBFB14;
IL2CPP_EXTERN_C String_t* _stringLiteralD022821CCC942F161E496B5F0F4FCF3CB5191B46;
IL2CPP_EXTERN_C String_t* _stringLiteralD36F2A1E2D9C14B427558FDF2106B8A8B2702189;
IL2CPP_EXTERN_C String_t* _stringLiteralD999C15961E364746AD7ED275769D73DA5AD2EC9;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD99D805A078DC2ADE236145CB8A33D8617F51FB;
IL2CPP_EXTERN_C String_t* _stringLiteralDF6B82F2AEC4586E7225BDAA062B9B2B51F5B1C1;
IL2CPP_EXTERN_C String_t* _stringLiteralDFF2473A7BBBEF5B0A663B9AC66A798A65151FCF;
IL2CPP_EXTERN_C String_t* _stringLiteralE5F784701A529679B86B8456DAC0AA48DEBCB125;
IL2CPP_EXTERN_C String_t* _stringLiteralEA61DF7479C2DD80A2CDC904C4797B8649263D06;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF3AB4D2B45A34EA3A9E2747A578958B56872E44B;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E8F4347CBCB3CFEB88C38EBC7540DC8045D76F;
IL2CPP_EXTERN_C String_t* _stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CStreamReader_Read_mF326C19B1DCECDEE67D5FF17B3EA3A82D3602238_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileStreamAsyncResult_CBWrapper_mC6342E7CD602950295BC49D22E9B06F52A0F50CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Path_Combine_m21AD76E5168EE9430E587E3EFE3C6C73383F1DA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Path_Combine_m414B2D97688304C226B1828FFCD5A3AF5824D0EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Path_GetFileName_mEBC73E0C8D8C56214D1DA4BA8409C5B5F00457A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Path_GetFullPathName_mC081C526B9439A93DCD9412655A3BC9CFDC71CC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Path_GetPathRoot_m6DDE2394DA53E1C4F4753406F0B48955DFF1E5EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Path_InsecureGetFullPath_mEC5058434A250282F37B367D212F0BCB530AD592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Path_IsPathRooted_m3B275F519FBDF73A7667387F6FAC8F1CEC9DFF0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_mCF7A8540CD52C39F8262F7F8C01ACE4821CFB7B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnexceptionalStreamReader_Read_m22BD0BB94B4575905541068A2BF813CEDCB1F513_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};
struct Il2CppArrayBounds;

// System.ConsoleDriver
struct ConsoleDriver_tC98607842465524D6078EB6C21FEA25BBC1A6E80  : public RuntimeObject
{
};

struct ConsoleDriver_tC98607842465524D6078EB6C21FEA25BBC1A6E80_StaticFields
{
	// System.IConsoleDriver System.ConsoleDriver::driver
	RuntimeObject* ___driver_0;
	// System.Boolean System.ConsoleDriver::is_console
	bool ___is_console_1;
	// System.Boolean System.ConsoleDriver::called_isatty
	bool ___called_isatty_2;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
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
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
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
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t63112633BC368A3723281F1E7B27E0AFD372F215  : public RuntimeObject
{
	// System.Object System.IO.FileStreamAsyncResult::state
	RuntimeObject* ___state_0;
	// System.Boolean System.IO.FileStreamAsyncResult::completed
	bool ___completed_1;
	// System.Threading.ManualResetEvent System.IO.FileStreamAsyncResult::wh
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___wh_2;
	// System.AsyncCallback System.IO.FileStreamAsyncResult::cb
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___cb_3;
	// System.Int32 System.IO.FileStreamAsyncResult::Count
	int32_t ___Count_4;
	// System.Int32 System.IO.FileStreamAsyncResult::OriginalCount
	int32_t ___OriginalCount_5;
	// System.Int32 System.IO.FileStreamAsyncResult::BytesRead
	int32_t ___BytesRead_6;
	// System.AsyncCallback System.IO.FileStreamAsyncResult::realcb
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___realcb_7;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.IO.Path
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC  : public RuntimeObject
{
};

struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields
{
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___InvalidPathChars_0;
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
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsUnix_9;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.TermInfoDriver
struct TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF  : public RuntimeObject
{
	// System.TermInfoReader System.TermInfoDriver::reader
	TermInfoReader_t728E05197DD5DD57DCCCC27D1F6A0B6C5486EF97* ___reader_3;
	// System.Int32 System.TermInfoDriver::cursorLeft
	int32_t ___cursorLeft_4;
	// System.Int32 System.TermInfoDriver::cursorTop
	int32_t ___cursorTop_5;
	// System.String System.TermInfoDriver::title
	String_t* ___title_6;
	// System.String System.TermInfoDriver::titleFormat
	String_t* ___titleFormat_7;
	// System.Boolean System.TermInfoDriver::cursorVisible
	bool ___cursorVisible_8;
	// System.String System.TermInfoDriver::csrVisible
	String_t* ___csrVisible_9;
	// System.String System.TermInfoDriver::csrInvisible
	String_t* ___csrInvisible_10;
	// System.String System.TermInfoDriver::clear
	String_t* ___clear_11;
	// System.String System.TermInfoDriver::bell
	String_t* ___bell_12;
	// System.String System.TermInfoDriver::term
	String_t* ___term_13;
	// System.IO.StreamReader System.TermInfoDriver::stdin
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___stdin_14;
	// System.IO.CStreamWriter System.TermInfoDriver::stdout
	CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239* ___stdout_15;
	// System.Int32 System.TermInfoDriver::windowWidth
	int32_t ___windowWidth_16;
	// System.Int32 System.TermInfoDriver::windowHeight
	int32_t ___windowHeight_17;
	// System.Int32 System.TermInfoDriver::bufferHeight
	int32_t ___bufferHeight_18;
	// System.Int32 System.TermInfoDriver::bufferWidth
	int32_t ___bufferWidth_19;
	// System.Char[] System.TermInfoDriver::buffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___buffer_20;
	// System.Int32 System.TermInfoDriver::readpos
	int32_t ___readpos_21;
	// System.Int32 System.TermInfoDriver::writepos
	int32_t ___writepos_22;
	// System.String System.TermInfoDriver::keypadXmit
	String_t* ___keypadXmit_23;
	// System.String System.TermInfoDriver::keypadLocal
	String_t* ___keypadLocal_24;
	// System.Boolean System.TermInfoDriver::inited
	bool ___inited_25;
	// System.Object System.TermInfoDriver::initLock
	RuntimeObject* ___initLock_26;
	// System.Boolean System.TermInfoDriver::initKeys
	bool ___initKeys_27;
	// System.String System.TermInfoDriver::origPair
	String_t* ___origPair_28;
	// System.String System.TermInfoDriver::origColors
	String_t* ___origColors_29;
	// System.String System.TermInfoDriver::cursorAddress
	String_t* ___cursorAddress_30;
	// System.ConsoleColor System.TermInfoDriver::fgcolor
	int32_t ___fgcolor_31;
	// System.String System.TermInfoDriver::setfgcolor
	String_t* ___setfgcolor_32;
	// System.String System.TermInfoDriver::setbgcolor
	String_t* ___setbgcolor_33;
	// System.Int32 System.TermInfoDriver::maxColors
	int32_t ___maxColors_34;
	// System.Boolean System.TermInfoDriver::noGetPosition
	bool ___noGetPosition_35;
	// System.Collections.Hashtable System.TermInfoDriver::keymap
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___keymap_36;
	// System.ByteMatcher System.TermInfoDriver::rootmap
	ByteMatcher_tBD9445F65E590C89D353CAA1C3776C69898F11EB* ___rootmap_37;
	// System.Int32 System.TermInfoDriver::rl_startx
	int32_t ___rl_startx_38;
	// System.Int32 System.TermInfoDriver::rl_starty
	int32_t ___rl_starty_39;
	// System.Byte[] System.TermInfoDriver::control_characters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___control_characters_40;
	// System.Char[] System.TermInfoDriver::echobuf
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___echobuf_42;
	// System.Int32 System.TermInfoDriver::echon
	int32_t ___echon_43;
};

struct TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF_StaticFields
{
	// System.Int32* System.TermInfoDriver::native_terminal_size
	int32_t* ___native_terminal_size_0;
	// System.Int32 System.TermInfoDriver::terminal_size
	int32_t ___terminal_size_1;
	// System.String[] System.TermInfoDriver::locations
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___locations_2;
	// System.Int32[] System.TermInfoDriver::_consoleColorToAnsiCode
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____consoleColorToAnsiCode_41;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.ConsoleKeyInfo
struct ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900 
{
	// System.Char System.ConsoleKeyInfo::_keyChar
	Il2CppChar ____keyChar_0;
	// System.ConsoleKey System.ConsoleKeyInfo::_key
	int32_t ____key_1;
	// System.ConsoleModifiers System.ConsoleKeyInfo::_mods
	int32_t ____mods_2;
};
// Native definition for P/Invoke marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshaled_pinvoke
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};
// Native definition for COM marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshaled_com
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.IO.MonoIOStat
struct MonoIOStat_tC4A2B5AD1FAE52605782F0DEA956C9674C4F22DD 
{
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1018
struct __StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55__padding[1018];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
struct __StaticArrayInitTypeSizeU3D1024_tFAF4058252F4F8B582A57FE003804BDA44C97A07 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_tFAF4058252F4F8B582A57FE003804BDA44C97A07__padding[1024];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10800
struct __StaticArrayInitTypeSizeU3D10800_tAF97D91E5007DF1AE1150F5C33EF60959135EBB5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10800_tAF97D91E5007DF1AE1150F5C33EF60959135EBB5__padding[10800];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413__padding[120];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1208
struct __StaticArrayInitTypeSizeU3D1208_t448FE03E395F60069921A133A51971348403E284 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1208_t448FE03E395F60069921A133A51971348403E284__padding[1208];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=130
struct __StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E__padding[130];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1450
struct __StaticArrayInitTypeSizeU3D1450_t1FAC416BA849625CD3D95A1981F559A2F2DE0E7C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1450_t1FAC416BA849625CD3D95A1981F559A2F2DE0E7C__padding[1450];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1472
struct __StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070__padding[1472];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=15
struct __StaticArrayInitTypeSizeU3D15_tFF02C3CB329BAAB88B3F50AE2C9AFD21390048D7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D15_tFF02C3CB329BAAB88B3F50AE2C9AFD21390048D7__padding[15];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152
struct __StaticArrayInitTypeSizeU3D152_t93532A5884A6C4A42D7F939692873D7E88D937B1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D152_t93532A5884A6C4A42D7F939692873D7E88D937B1__padding[152];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1665
struct __StaticArrayInitTypeSizeU3D1665_t4CB4CE1056FC98C5BAB53D5F6D5F1F0B8CEBA06D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1665_t4CB4CE1056FC98C5BAB53D5F6D5F1F0B8CEBA06D__padding[1665];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=170
struct __StaticArrayInitTypeSizeU3D170_tD5DDF5B1A4672BA6F4CB986B6CB5E4C8DA842155 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D170_tD5DDF5B1A4672BA6F4CB986B6CB5E4C8DA842155__padding[170];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=172
struct __StaticArrayInitTypeSizeU3D172_t50A59F10FF3AFEB82AF45171BD2A55F079B975D6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D172_t50A59F10FF3AFEB82AF45171BD2A55F079B975D6__padding[172];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174
struct __StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6__padding[174];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2100
struct __StaticArrayInitTypeSizeU3D2100_t88D645A2CDCA331608377780128DA8BFC74942DE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2100_t88D645A2CDCA331608377780128DA8BFC74942DE__padding[2100];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212
struct __StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A__padding[212];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2176
struct __StaticArrayInitTypeSizeU3D2176_tA278ED4E477855073B05C8EDF2E0D3BC18DE265A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2176_tA278ED4E477855073B05C8EDF2E0D3BC18DE265A__padding[2176];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350
struct __StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC__padding[2350];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382
struct __StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630__padding[2382];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240
struct __StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265__padding[240];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143__padding[256];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=262
struct __StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37__padding[262];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288
struct __StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51__padding[288];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct __StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312__padding[3];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=336
struct __StaticArrayInitTypeSizeU3D336_tCE45B5681EF21AE25502E6165F44A12AA857A970 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D336_tCE45B5681EF21AE25502E6165F44A12AA857A970__padding[336];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct __StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4__padding[36];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360
struct __StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00__padding[360];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38
struct __StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E__padding[38];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct __StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08__padding[40];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42
struct __StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A__padding[42];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct __StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE__padding[44];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct __StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89__padding[52];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5952
struct __StaticArrayInitTypeSizeU3D5952_tFA61BCE25F463DACAE80095EF7F54BF3C32EC5FD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5952_tFA61BCE25F463DACAE80095EF7F54BF3C32EC5FD__padding[5952];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5__padding[64];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=648
struct __StaticArrayInitTypeSizeU3D648_tA7C66768813068A9779D5A0CCD24D484326985EE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D648_tA7C66768813068A9779D5A0CCD24D484326985EE__padding[648];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72
struct __StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC__padding[72];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76
struct __StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61__padding[76];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=84
struct __StaticArrayInitTypeSizeU3D84_tD7894A8DC44B8037ABDA03237AC9ED587ED067D3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D84_tD7894A8DC44B8037ABDA03237AC9ED587ED067D3__padding[84];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94
struct __StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B__padding[94];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=998
struct __StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E__padding[998];
	};
};

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=170 <PrivateImplementationDetails>::021022D5891F99B3B525763EB77BAEC69B107268F560721F5060FCDBD4D5AAE8
	__StaticArrayInitTypeSizeU3D170_tD5DDF5B1A4672BA6F4CB986B6CB5E4C8DA842155 ___021022D5891F99B3B525763EB77BAEC69B107268F560721F5060FCDBD4D5AAE8_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::042957A0DB5FF2D38A343AC5AE5F8635B88F10C32EB87A238B1DFB4756468476
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___042957A0DB5FF2D38A343AC5AE5F8635B88F10C32EB87A238B1DFB4756468476_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=84 <PrivateImplementationDetails>::0C496C9AE05419BD25256D0EF4F31AFD291119F14B8BD683BF1774F91E08659D
	__StaticArrayInitTypeSizeU3D84_tD7894A8DC44B8037ABDA03237AC9ED587ED067D3 ___0C496C9AE05419BD25256D0EF4F31AFD291119F14B8BD683BF1774F91E08659D_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::0F9E3C7E66CDEF5C44FA29E65CA676C480F7A2A4A067F70107FDC292C68D38B0
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___0F9E3C7E66CDEF5C44FA29E65CA676C480F7A2A4A067F70107FDC292C68D38B0_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::1199C3B39A2FA058EFF5B3829616AE81EE2B59A51D89C107A5FA4B6FEF95DD16
	__StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 ___1199C3B39A2FA058EFF5B3829616AE81EE2B59A51D89C107A5FA4B6FEF95DD16_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2100 <PrivateImplementationDetails>::12D518BA10F3DD1A331E65FBD4C330930C0A0BD9F50F37BE0BDF596E964B9A78
	__StaticArrayInitTypeSizeU3D2100_t88D645A2CDCA331608377780128DA8BFC74942DE ___12D518BA10F3DD1A331E65FBD4C330930C0A0BD9F50F37BE0BDF596E964B9A78_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::195ABC1ABB69B6BD65F20ACAFA79EED2D330BF513E25C830F24B8A78D8703446
	__StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF ___195ABC1ABB69B6BD65F20ACAFA79EED2D330BF513E25C830F24B8A78D8703446_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1450 <PrivateImplementationDetails>::1B9CC34A0CF8DBCC350E200673FAC4124DDAD581F1FC2C16FF9A1C0154691687
	__StaticArrayInitTypeSizeU3D1450_t1FAC416BA849625CD3D95A1981F559A2F2DE0E7C ___1B9CC34A0CF8DBCC350E200673FAC4124DDAD581F1FC2C16FF9A1C0154691687_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360 <PrivateImplementationDetails>::1C4B3A80ED7AEC83916479BCE280E1258D5785D07F0EA22A5E27592ACCAE692B
	__StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00 ___1C4B3A80ED7AEC83916479BCE280E1258D5785D07F0EA22A5E27592ACCAE692B_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42 <PrivateImplementationDetails>::1F38DEB3F70291588D06D3830D0D4241CE0570C9F4EE8B00F606C4753EB016E2
	__StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A ___1F38DEB3F70291588D06D3830D0D4241CE0570C9F4EE8B00F606C4753EB016E2_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::2403FBEA85D0741C5727760E97EF16C9BF23294F21C0F1265A4BAF7F22202A64
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___2403FBEA85D0741C5727760E97EF16C9BF23294F21C0F1265A4BAF7F22202A64_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::25308BAB47481701F1E861B1EA4F2409E73ABB14E9579C26DF4ABE440A0DCF0A
	__StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 ___25308BAB47481701F1E861B1EA4F2409E73ABB14E9579C26DF4ABE440A0DCF0A_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::2CCF4119215BDAD102DA7AD5B57E0E6CA19CC8FF5524856FC58907E824213E1F
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___2CCF4119215BDAD102DA7AD5B57E0E6CA19CC8FF5524856FC58907E824213E1F_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::3444EB31231B2CCC1B05C7A44EBD1B2A009C1D9977A99B453F52E2F81DD6C32F
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___3444EB31231B2CCC1B05C7A44EBD1B2A009C1D9977A99B453F52E2F81DD6C32F_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::3D95E4501B1964D7FCE16E3F5682A038752B462357D87343880B1E819F6163FE
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___3D95E4501B1964D7FCE16E3F5682A038752B462357D87343880B1E819F6163FE_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::42E1421FC2A5A6A33E964D7EB9603EB101818D858DDA09B2BC9B5A888C1C351C
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___42E1421FC2A5A6A33E964D7EB9603EB101818D858DDA09B2BC9B5A888C1C351C_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::4623CA5867960AA898AA1F65E720CD5ECD3552542E0C6F6FB65B21D14DD1CBC2
	__StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413 ___4623CA5867960AA898AA1F65E720CD5ECD3552542E0C6F6FB65B21D14DD1CBC2_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174 <PrivateImplementationDetails>::494C32E1A18F6E8AD8ED5FAB0A5AF07F801BE7AF3C936942B020918CE2953046
	__StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6 ___494C32E1A18F6E8AD8ED5FAB0A5AF07F801BE7AF3C936942B020918CE2953046_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382 <PrivateImplementationDetails>::4E0B9E024FA510B6F03C92D95BB204E78CDC6E3FD2EC8D35787B7BC76F0655A0
	__StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630 ___4E0B9E024FA510B6F03C92D95BB204E78CDC6E3FD2EC8D35787B7BC76F0655A0_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::508085E0DDEEA9CE48BFAE98CEC779F8D06301AE973555D37680D08190CAFA70
	__StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE ___508085E0DDEEA9CE48BFAE98CEC779F8D06301AE973555D37680D08190CAFA70_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::510FDFA4743E58DD45DCDD7CB4F8509BF6294CC1D1D4958CA30A9E7604973006
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___510FDFA4743E58DD45DCDD7CB4F8509BF6294CC1D1D4958CA30A9E7604973006_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42 <PrivateImplementationDetails>::5292FD0A8E62FCCBE41F34EFE7575D097990A66FE23B3507971C5BF272A4362E
	__StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A ___5292FD0A8E62FCCBE41F34EFE7575D097990A66FE23B3507971C5BF272A4362E_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::543172FF9822CE5240DF89FF3AD8C7FD9824F97D0EED9B1432E60345FBBDE9A9
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___543172FF9822CE5240DF89FF3AD8C7FD9824F97D0EED9B1432E60345FBBDE9A9_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10800 <PrivateImplementationDetails>::56073E3CC3FC817690CC306D0DB7EA63EBCB0801359567CA44CA3D3B9BF63854
	__StaticArrayInitTypeSizeU3D10800_tAF97D91E5007DF1AE1150F5C33EF60959135EBB5 ___56073E3CC3FC817690CC306D0DB7EA63EBCB0801359567CA44CA3D3B9BF63854_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::5EC4E50DA95A113769D73E5F7F8221A876185CEE6498ABB16FBB9F0563C15BBF
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___5EC4E50DA95A113769D73E5F7F8221A876185CEE6498ABB16FBB9F0563C15BBF_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94 <PrivateImplementationDetails>::61D639BE11384EE21CDE2B40357F4F9D80A106C97C592D18A9F4CAA442CA5D31
	__StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B ___61D639BE11384EE21CDE2B40357F4F9D80A106C97C592D18A9F4CAA442CA5D31_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=648 <PrivateImplementationDetails>::67856A16DB0550FDAB4D1A9B208B0C155C4679CA116BF867B74ED2A0AA4D2955
	__StaticArrayInitTypeSizeU3D648_tA7C66768813068A9779D5A0CCD24D484326985EE ___67856A16DB0550FDAB4D1A9B208B0C155C4679CA116BF867B74ED2A0AA4D2955_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::6DC92D3617F0357376502FBA4CDD465B5423818DABE8B2CA1A06E1351F2F1C85
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___6DC92D3617F0357376502FBA4CDD465B5423818DABE8B2CA1A06E1351F2F1C85_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212 <PrivateImplementationDetails>::71F7F6B226CBC11C8B26D506869FAE022928427389882579DB316F36FF34A096
	__StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A ___71F7F6B226CBC11C8B26D506869FAE022928427389882579DB316F36FF34A096_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288 <PrivateImplementationDetails>::74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20
	__StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51 ___74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1472 <PrivateImplementationDetails>::7BEC6AD454781FDCD8D475B3418629CBABB3BF9CA66FA80009D608A1A60D0696
	__StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070 ___7BEC6AD454781FDCD8D475B3418629CBABB3BF9CA66FA80009D608A1A60D0696_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::7F777906B0704EB248888E491577584D5BEBE71B375BD595A06444390B471915
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___7F777906B0704EB248888E491577584D5BEBE71B375BD595A06444390B471915_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::801494072CDD59E61F9AA9345A80D045378705DFDCE94902C22EAEAE049BE780
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___801494072CDD59E61F9AA9345A80D045378705DFDCE94902C22EAEAE049BE780_35;
	// System.Int64 <PrivateImplementationDetails>::819B40F8CF7DC49B4275955A17C10239F1BBBB3BF96E26E25ED844B96B645D7F
	int64_t ___819B40F8CF7DC49B4275955A17C10239F1BBBB3BF96E26E25ED844B96B645D7F_36;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::8259E3EBA4D41CA02AE5322BBD280034A9C9860D9CD0D2038139FC9EBE6B6C77
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___8259E3EBA4D41CA02AE5322BBD280034A9C9860D9CD0D2038139FC9EBE6B6C77_37;
	// System.Int64 <PrivateImplementationDetails>::82B100804CE219CD73E155C7C6457FCF04EA539DE5B19F4736E800098714EB21
	int64_t ___82B100804CE219CD73E155C7C6457FCF04EA539DE5B19F4736E800098714EB21_38;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::861FD05B0EAD3D0AA9418B140CC37846BBC5F195214D90CEF42919D1E36EED10
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___861FD05B0EAD3D0AA9418B140CC37846BBC5F195214D90CEF42919D1E36EED10_39;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=998 <PrivateImplementationDetails>::86BDA34D2165AC08F2DE4918B302E44205CDEA674FCA7F2C7F56D4F12D8B0C73
	__StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E ___86BDA34D2165AC08F2DE4918B302E44205CDEA674FCA7F2C7F56D4F12D8B0C73_40;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1665 <PrivateImplementationDetails>::8CCE27079B32C13BB310169A6AD26AE419CDC98B7E2EFD3CC9997257F4BC1DEF
	__StaticArrayInitTypeSizeU3D1665_t4CB4CE1056FC98C5BAB53D5F6D5F1F0B8CEBA06D ___8CCE27079B32C13BB310169A6AD26AE419CDC98B7E2EFD3CC9997257F4BC1DEF_41;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5952 <PrivateImplementationDetails>::9086502742CE7F0595B57A4E5B32901FF4CF97959B92F7E91A435E4765AC1115
	__StaticArrayInitTypeSizeU3D5952_tFA61BCE25F463DACAE80095EF7F54BF3C32EC5FD ___9086502742CE7F0595B57A4E5B32901FF4CF97959B92F7E91A435E4765AC1115_42;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=336 <PrivateImplementationDetails>::93B42898102ACB2421875C45676880B8A07390D8DF0E1EE85C5D1AA26964B0C6
	__StaticArrayInitTypeSizeU3D336_tCE45B5681EF21AE25502E6165F44A12AA857A970 ___93B42898102ACB2421875C45676880B8A07390D8DF0E1EE85C5D1AA26964B0C6_43;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::93F28AF88A06482BE13F8D0354B6A7676DDAED573EA3938C50F6E53E6D6BB0B6
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___93F28AF88A06482BE13F8D0354B6A7676DDAED573EA3938C50F6E53E6D6BB0B6_44;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174 <PrivateImplementationDetails>::95BDE712712F10D07813AE3DEEA40D1F38E3FCF1A92CC435F17A326CC22242EB
	__StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6 ___95BDE712712F10D07813AE3DEEA40D1F38E3FCF1A92CC435F17A326CC22242EB_45;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=262 <PrivateImplementationDetails>::964889A5283FD0A3DFC8AE256721E6F67B8212FD6841AB1C821DE3134DE79B07
	__StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37 ___964889A5283FD0A3DFC8AE256721E6F67B8212FD6841AB1C821DE3134DE79B07_46;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=15 <PrivateImplementationDetails>::96E3FDE919EC36694EFBEC22FEF80F84EE640CC5E46CED07C3E65AC04607C7D6
	__StaticArrayInitTypeSizeU3D15_tFF02C3CB329BAAB88B3F50AE2C9AFD21390048D7 ___96E3FDE919EC36694EFBEC22FEF80F84EE640CC5E46CED07C3E65AC04607C7D6_47;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::9960C7FC60CDD325C8A2A00995BE7064EAC3F6295C6A5C4E797D2281846131E4
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 ___9960C7FC60CDD325C8A2A00995BE7064EAC3F6295C6A5C4E797D2281846131E4_48;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::99E66DACA3EFF94776AF1258E0E5B2F4DF2900E4EA32351B0DF37A87F2426B1F
	__StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE ___99E66DACA3EFF94776AF1258E0E5B2F4DF2900E4EA32351B0DF37A87F2426B1F_49;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9_50;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::A2DFDF9C2CED8BB1C0B9B06064345ACC9C22DFE5FEC9976FF061F0994451519B
	__StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413 ___A2DFDF9C2CED8BB1C0B9B06064345ACC9C22DFE5FEC9976FF061F0994451519B_51;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::A2EC7CB9B0FE89F9A9BEA547D773225AFE6E4535DF28325A0D6CD7A5E2D20376
	__StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 ___A2EC7CB9B0FE89F9A9BEA547D773225AFE6E4535DF28325A0D6CD7A5E2D20376_52;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::A30E1152CFB528AE968FAC58E83BBEB3611BFDE2E6CF60B4FA9535A7D0A9B8EA
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___A30E1152CFB528AE968FAC58E83BBEB3611BFDE2E6CF60B4FA9535A7D0A9B8EA_53;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::A516EECB41051151F0183A8B0B6F6693C43F7D9E1815F85CAAAB18E00A5269A2
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08 ___A516EECB41051151F0183A8B0B6F6693C43F7D9E1815F85CAAAB18E00A5269A2_54;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::AAF4528994DD7C464F43C131F6CD44DF41ACC18462C95877252FFC7EAC0164EF
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___AAF4528994DD7C464F43C131F6CD44DF41ACC18462C95877252FFC7EAC0164EF_55;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5_56;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2176 <PrivateImplementationDetails>::B55F94CD2F415D0279D7A1AF2265C4D9A90CE47F8C900D5D09AD088796210838
	__StaticArrayInitTypeSizeU3D2176_tA278ED4E477855073B05C8EDF2E0D3BC18DE265A ___B55F94CD2F415D0279D7A1AF2265C4D9A90CE47F8C900D5D09AD088796210838_57;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::BABD01C34E7E65E57E4C431281E782B4101CE0644A8090AD6E501F1C6CF2C9DF
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 ___BABD01C34E7E65E57E4C431281E782B4101CE0644A8090AD6E501F1C6CF2C9DF_58;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BB425A9B43E10C921902A25D07A4317DEFF9F606A788672E1B21633C143407F0
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___BB425A9B43E10C921902A25D07A4317DEFF9F606A788672E1B21633C143407F0_59;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::C250CAD28060A4EB63B4C4A643DDA196CCD35FD2FC67FB749ADF4BAC6D62E1A0
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 ___C250CAD28060A4EB63B4C4A643DDA196CCD35FD2FC67FB749ADF4BAC6D62E1A0_60;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::C5733A1245383FBF067B4A9BDB41E3FB8E3A6BDEF37B3D5418F389422875783F
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___C5733A1245383FBF067B4A9BDB41E3FB8E3A6BDEF37B3D5418F389422875783F_61;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::C8EC70AC5A448C3A45CF1DFCC1375BE4E80DC6793E97D5E89BD97A0DC232B2E3
	__StaticArrayInitTypeSizeU3D1024_tFAF4058252F4F8B582A57FE003804BDA44C97A07 ___C8EC70AC5A448C3A45CF1DFCC1375BE4E80DC6793E97D5E89BD97A0DC232B2E3_62;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::C95D810E738DB5F591EE691CE884EED2F110D9F82B1F7A8BE6ED257FDF4CDBEB
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___C95D810E738DB5F591EE691CE884EED2F110D9F82B1F7A8BE6ED257FDF4CDBEB_63;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=130 <PrivateImplementationDetails>::C9830DF6956357ACE51CE1F82298578B36EB45A0CFDB8AEC5B9FDA7DB17E8063
	__StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E ___C9830DF6956357ACE51CE1F82298578B36EB45A0CFDB8AEC5B9FDA7DB17E8063_64;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::CAF8A46B3A07E26F84FE849B57A877051A0D06194B1C057985446B64BCC6E016
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___CAF8A46B3A07E26F84FE849B57A877051A0D06194B1C057985446B64BCC6E016_65;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::CAFFFC9D15E4037EE8FBDB1A45DFE456F0936BDC7310F1882EAF14B706A76658
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 ___CAFFFC9D15E4037EE8FBDB1A45DFE456F0936BDC7310F1882EAF14B706A76658_66;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::D1A99909A2923269BB67E72C1AED693F74961BDA58360FCC133007740CEBF5F1
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___D1A99909A2923269BB67E72C1AED693F74961BDA58360FCC133007740CEBF5F1_67;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::D503954AE2C3616EA32CEB0D66F5B2E119D03CE722773E5D7E1A8BC8F1803631
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___D503954AE2C3616EA32CEB0D66F5B2E119D03CE722773E5D7E1A8BC8F1803631_68;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=172 <PrivateImplementationDetails>::D6691EE5A533DE7E0859066942261B24D0C836D7EE016D2251377BFEE40FEA15
	__StaticArrayInitTypeSizeU3D172_t50A59F10FF3AFEB82AF45171BD2A55F079B975D6 ___D6691EE5A533DE7E0859066942261B24D0C836D7EE016D2251377BFEE40FEA15_69;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D896D464C3726A21162F271ACB711464AD07EA9C9CE78E0297FD0DE934471FA6
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___D896D464C3726A21162F271ACB711464AD07EA9C9CE78E0297FD0DE934471FA6_70;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::D8A29F3D197FBB54CF9F4B105AFBA6B1257ADF6449F0184F843380AAAA24639C
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___D8A29F3D197FBB54CF9F4B105AFBA6B1257ADF6449F0184F843380AAAA24639C_71;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::DCDCF594464B904F763D4CE53B1DBE08A47E551AE86FD5D61F63FD0C3313FDC3
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___DCDCF594464B904F763D4CE53B1DBE08A47E551AE86FD5D61F63FD0C3313FDC3_72;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350 <PrivateImplementationDetails>::DCE88EE5233B9D0FD0D7A6222C82BC3AEE83B15E9992F939B17AB40530DB555C
	__StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC ___DCE88EE5233B9D0FD0D7A6222C82BC3AEE83B15E9992F939B17AB40530DB555C_73;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152 <PrivateImplementationDetails>::DD471F12FFA94CC557A02A91C2CBB95F551AB28C8BBF297B2F953B8886BCCF6D
	__StaticArrayInitTypeSizeU3D152_t93532A5884A6C4A42D7F939692873D7E88D937B1 ___DD471F12FFA94CC557A02A91C2CBB95F551AB28C8BBF297B2F953B8886BCCF6D_74;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::DF29A050CD2EBD9DFDC783DB1CC74D3D716DAEC1630A337EE31B9E2E03D34D2D
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___DF29A050CD2EBD9DFDC783DB1CC74D3D716DAEC1630A337EE31B9E2E03D34D2D_75;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38 <PrivateImplementationDetails>::E2C673A3A737B04369A63F1FB1A30F6E742B066E2CCCD9B1838793CBB5590598
	__StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E ___E2C673A3A737B04369A63F1FB1A30F6E742B066E2CCCD9B1838793CBB5590598_76;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::E32C465157D21F39B3DBF186A98FB02185C63B0260B47247A7A5FDF2B061EAA8
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___E32C465157D21F39B3DBF186A98FB02185C63B0260B47247A7A5FDF2B061EAA8_77;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::E5F4F6214036DF103321A8A0CE30C2EF935694B4199D52BC538E7EF3F045CB92
	__StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14 ___E5F4F6214036DF103321A8A0CE30C2EF935694B4199D52BC538E7EF3F045CB92_78;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
	__StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5 ___E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B_79;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1018 <PrivateImplementationDetails>::E8588351183F6F6A7DAD54DC28357628F3C4D4B358AB92A18AE7D08B0D9B0092
	__StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55 ___E8588351183F6F6A7DAD54DC28357628F3C4D4B358AB92A18AE7D08B0D9B0092_80;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::EBE07C3718876777F609CD22058F4C3A6CCCC695F5BDE90998DC1E12E0CBE63D
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___EBE07C3718876777F609CD22058F4C3A6CCCC695F5BDE90998DC1E12E0CBE63D_81;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::EE415D5C3ECC6C8C19F71BCD4E03847F5A15931374A7F5BF88C24B722F04B8FE
	__StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0 ___EE415D5C3ECC6C8C19F71BCD4E03847F5A15931374A7F5BF88C24B722F04B8FE_82;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::EF82B163CA8252A793A6E73F57775D843C9A21F65586926EB11893FA8BB603E9
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___EF82B163CA8252A793A6E73F57775D843C9A21F65586926EB11893FA8BB603E9_83;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240 <PrivateImplementationDetails>::F0CF66F9B123DCEBB39C38C5D8E4821D4E94DB593889C506BCA0827036F1B7EB
	__StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265 ___F0CF66F9B123DCEBB39C38C5D8E4821D4E94DB593889C506BCA0827036F1B7EB_84;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::F1945CD6C19E56B3C1C78943EF5EC18116907A4CA1EFC40A57D48AB1DB7ADFC5
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312 ___F1945CD6C19E56B3C1C78943EF5EC18116907A4CA1EFC40A57D48AB1DB7ADFC5_85;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8_86;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::F4BD8144313C3B67E191C6F3CD8B00540FF1809837C5BCA5C2FDA0D518681563
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___F4BD8144313C3B67E191C6F3CD8B00540FF1809837C5BCA5C2FDA0D518681563_87;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212 <PrivateImplementationDetails>::F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
	__StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A ___F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3_88;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315_89;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1208 <PrivateImplementationDetails>::FB2089AF82E09593374B65EC2440779FDCF5DD6DA07D26E57AF6790667B937CD
	__StaticArrayInitTypeSizeU3D1208_t448FE03E395F60069921A133A51971348403E284 ___FB2089AF82E09593374B65EC2440779FDCF5DD6DA07D26E57AF6790667B937CD_90;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240 <PrivateImplementationDetails>::FD68700E95459C5E7A49C5830F8BD0A9BA4BD171252663D8066B09E7768C5C5D
	__StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265 ___FD68700E95459C5E7A49C5830F8BD0A9BA4BD171252663D8066B09E7768C5C5D_91;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::FEC387BA57A54BB6066E4CA8A4F9C0FF9C36B9CBD6600C3683F6FB1BDB5077EB
	__StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14 ___FEC387BA57A54BB6066E4CA8A4F9C0FF9C36B9CBD6600C3683F6FB1BDB5077EB_92;
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

// System.IO.MonoIO
struct MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7  : public RuntimeObject
{
};

struct MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_StaticFields
{
	// System.IntPtr System.IO.MonoIO::InvalidHandle
	intptr_t ___InvalidHandle_0;
	// System.Boolean System.IO.MonoIO::dump_handles
	bool ___dump_handles_1;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.IO.Stream System.IO.StreamWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_7;
	// System.Text.Encoding System.IO.StreamWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_8;
	// System.Text.Encoder System.IO.StreamWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_9;
	// System.Byte[] System.IO.StreamWriter::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_10;
	// System.Char[] System.IO.StreamWriter::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_11;
	// System.Int32 System.IO.StreamWriter::_charPos
	int32_t ____charPos_12;
	// System.Int32 System.IO.StreamWriter::_charLen
	int32_t ____charLen_13;
	// System.Boolean System.IO.StreamWriter::_autoFlush
	bool ____autoFlush_14;
	// System.Boolean System.IO.StreamWriter::_haveWrittenPreamble
	bool ____haveWrittenPreamble_15;
	// System.Boolean System.IO.StreamWriter::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamWriter::_asyncWriteTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncWriteTask_17;
};

struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_StaticFields
{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___Null_6;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.ReadOnlySpan`1<System.Char>
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.IO.CStreamReader
struct CStreamReader_tA8A200A5C1352CF0A34EC40F7AFBFC0360589094  : public StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B
{
	// System.TermInfoDriver System.IO.CStreamReader::driver
	TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF* ___driver_18;
};

// System.IO.CStreamWriter
struct CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239  : public StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4
{
	// System.TermInfoDriver System.IO.CStreamWriter::driver
	TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF* ___driver_18;
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
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

// System.IO.UnexceptionalStreamReader
struct UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE  : public StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B
{
};

struct UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_StaticFields
{
	// System.Boolean[] System.IO.UnexceptionalStreamReader::newline
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___newline_18;
	// System.Char System.IO.UnexceptionalStreamReader::newlineChar
	Il2CppChar ___newlineChar_19;
};

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_tF3DBFED31D3D9EAB7CD7B58F89F817D69DE71EDD  : public StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.FileStream/ReadDelegate
struct ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98  : public MulticastDelegate_t
{
};

// System.IO.FileStream/WriteDelegate
struct WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.IO.DirectoryNotFoundException
struct DirectoryNotFoundException_tBE92A20AAC24C3B22DE38973ABE6886FA97419BF  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};

// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
	// System.String System.IO.FileNotFoundException::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_18;
	// System.String System.IO.FileNotFoundException::<FusionLog>k__BackingField
	String_t* ___U3CFusionLogU3Ek__BackingField_19;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// System.IO.PathTooLongException
struct PathTooLongException_tAF7644094546C2BD93B829405B0199BF3B3FC2E5  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};

// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};

// Unity.ThrowStub
struct ThrowStub_t98574FADF548B70B1F425B46CC940CEC3C38FB5F  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* __this, bool ___initialState0, const RuntimeMethod* method) ;
// System.IAsyncResult System.AsyncCallback::BeginInvoke(System.IAsyncResult,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncCallback_BeginInvoke_m3CBD8B256174D206DC85F42A48F1F88E097E5975 (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___ar0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) ;
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_mED94291A37165C0D7A5A573AE6866429DF1712F6 (UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___message0, int32_t ___hresult1, const RuntimeMethod* method) ;
// System.Exception System.IO.MonoIO::GetException(System.String,System.IO.MonoIOError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* MonoIO_GetException_m6181E108DACA0DA9861C6F08A30C3B7ABAE14AFF (String_t* ___path0, int32_t ___error1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.IO.FileNotFoundException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_mC4247CABF75A7B484A21790CD7F8EFA8AC101677 (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* __this, String_t* ___message0, String_t* ___fileName1, const RuntimeMethod* method) ;
// System.Void System.IO.MonoIO::DumpHandles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoIO_DumpHandles_m335F7A8DB8A832F834B208AEADCCF0CDA0F0E644 (const RuntimeMethod* method) ;
// System.Void System.IO.DirectoryNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryNotFoundException__ctor_mA7F098E81D1D163C09BF5E64A34634290B76F235 (DirectoryNotFoundException_tBE92A20AAC24C3B22DE38973ABE6886FA97419BF* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.PathTooLongException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathTooLongException__ctor_m2E98EE527C0503C02F7305BC57045AB86BB202A7 (PathTooLongException_tAF7644094546C2BD93B829405B0199BF3B3FC2E5* __this, String_t* ___message0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___success0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SafeHandle_DangerousGetHandle_mE7CB3F36EE7BB2E2623EF316C4B43D1CA44B7F9C_inline (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.IO.MonoFileType System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonoIO_GetFileType_m8A3AD74614ECB605B1B96EBA6815E9D03EF414C4 (intptr_t ___handle0, int32_t* ___error1, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mBBE58AEA702864FB006771F4600D1D99B1234460 (const RuntimeMethod* method) ;
// System.IntPtr System.IO.MonoIO::Open(System.Char*,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MonoIO_Open_mA845F2D0E79777BCAB0BA7CC31D3D079188216BF (Il2CppChar* ___filename0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, int32_t ___options4, int32_t* ___error5, const RuntimeMethod* method) ;
// System.Boolean System.IO.MonoIO::Cancel_internal(System.IntPtr,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoIO_Cancel_internal_m27D0A4080002C7DA3EF09499101A5C89ABB5A0C0 (intptr_t ___handle0, int32_t* ___error1, const RuntimeMethod* method) ;
// System.Int32 System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonoIO_Read_m51A2830CE63D870654F2DBDC4CAB9A6E89A1BF9D (intptr_t ___handle0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dest1, int32_t ___dest_offset2, int32_t ___count3, int32_t* ___error4, const RuntimeMethod* method) ;
// System.Int32 System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonoIO_Write_m4868AB991DE3BFE39676EF37D77BD36D156AF22A (intptr_t ___handle0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src1, int32_t ___src_offset2, int32_t ___count3, int32_t* ___error4, const RuntimeMethod* method) ;
// System.Int64 System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MonoIO_Seek_m4DECF02A76F506A915B53C3A089F25917B074FFE (intptr_t ___handle0, int64_t ___offset1, int32_t ___origin2, int32_t* ___error3, const RuntimeMethod* method) ;
// System.Int64 System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MonoIO_GetLength_m6C0D9ED1B60FA820E5C4EEACEAD3A86135B3FE0E (intptr_t ___handle0, int32_t* ___error1, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mAD35C3919D90848D6319343DC82CFEB64D75CC0F (int64_t ___value0, const RuntimeMethod* method) ;
// System.String System.Environment::GetEnvironmentVariable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetEnvironmentVariable_mFA1E83F28F2E74EF3312F9D4B582FFBE38804ED8 (String_t* ___variable0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOfAny(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_mC7AA4AE42B38667BDB9B214AA6230F322306CFF6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___anyOf0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.IO.Path::IsPathRooted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Path_IsPathRooted_m3B275F519FBDF73A7667387F6FAC8F1CEC9DFF0E (String_t* ___path0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetPathRoot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetPathRoot_m6DDE2394DA53E1C4F4753406F0B48955DFF1E5EB (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOfAny(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOfAny_m3A1F0D1FFE0F949789A425D25E0BEDB6D4F26BB4 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___anyOf0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::CleanPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_CleanPath_mC359F720FD49EACE4B2B8A739139F85613C91B9A (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String System.IO.Path::InsecureGetFullPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_InsecureGetFullPath_mEC5058434A250282F37B367D212F0BCB530AD592 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Security.SecurityManager::EnsureElevatedPermissions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityManager_EnsureElevatedPermissions_m7DBC4DC0657D1593766019B867E645D374E72D00 (const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Int32 System.IO.Path::GetFullPathName(System.String,System.Int32,System.Text.StringBuilder,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Path_GetFullPathName_mBA74382E7562781D204C71F5C8904850F84EDB81 (String_t* ___path0, int32_t ___numBufferChars1, StringBuilder_t* ___buffer2, intptr_t* ___lpFilePartOrNull3, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_GetLastWin32Error_m776667F265B8ABFFF13E3DD51B1BC5C2B5611F43 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.IO.Directory::GetCurrentDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Directory_GetCurrentDirectory_m7EA69F721BEEC05DC0FBF8E9189990BF9F856363 (const RuntimeMethod* method) ;
// System.Boolean System.Char::IsLetter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsLetter_m8AA5C1E0E24784F5B681E5A7DB6A28D11DC7E678 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.String System.IO.Directory::InsecureGetCurrentDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Directory_InsecureGetCurrentDirectory_mE70CBBC485163145FAA8B1274397E49460BDBAC5 (const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFullPathName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFullPathName_mC081C526B9439A93DCD9412655A3BC9CFDC71CC0 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.String Locale::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_mB5E9ECC1E9AAA230D967810285D49F3A0BCD99D6 (String_t* ___msg0, const RuntimeMethod* method) ;
// System.Boolean System.Environment::get_IsRunningOnWindows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Environment_get_IsRunningOnWindows_m3C4708D3BDAA9ABB6FCCEE446FD58B36A54F31F8 (const RuntimeMethod* method) ;
// System.String System.IO.Path::WindowsDriveAdjustment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_WindowsDriveAdjustment_m014B3FED3090F2EC4301C0EFEE33A29A8FE9A505 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.IO.Path::IsDirectorySeparator(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4 (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOfUnchecked(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOfUnchecked_mFADA04D6FCED11D71D76C4D91BA9A2CD3692E389 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) ;
// System.String System.IO.Path::CanonicalizePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_CanonicalizePath_mB665AB00F1D6CE61F99B92AA2F0F2DD4DF5CB989 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.IO.MonoIO::RemapPath(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoIO_RemapPath_mF901263DD105B28F8BFAA96337A3789248AB1C00 (String_t* ___path0, String_t** ___newPath1, const RuntimeMethod* method) ;
// System.String System.IO.Path::get_temp_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_get_temp_path_mDF1B882105F66D67EDC934537AD690C322B78E21 (const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline)(__this, method);
}
// System.ReadOnlySpan`1<System.Char> System.MemoryExtensions::AsSpan(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m738C019A02A3B4B8BFEACFFA013409898B81D4FB_inline (String_t* ___text0, const RuntimeMethod* method) ;
// System.Boolean System.IO.Path::IsPathRooted(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Path_IsPathRooted_m419E334FD990E531F7B2CC0A65E5C1DEC8BEF794 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___path0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Char System.IO.MonoIO::get_VolumeSeparatorChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar MonoIO_get_VolumeSeparatorChar_m62746C64329B7051BA531069FE7380352184C28A (const RuntimeMethod* method) ;
// System.Char System.IO.MonoIO::get_DirectorySeparatorChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar MonoIO_get_DirectorySeparatorChar_m6E78F519C72DE6B42D1A33FE6142A699CCF62CA0 (const RuntimeMethod* method) ;
// System.Char System.IO.MonoIO::get_AltDirectorySeparatorChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar MonoIO_get_AltDirectorySeparatorChar_m17C1075AF7427FFCB8D916ACD6510675B85801D5 (const RuntimeMethod* method) ;
// System.Char System.IO.MonoIO::get_PathSeparator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar MonoIO_get_PathSeparator_mD5ECF2C45AF5B456F7D8A96B90A6DAABF29FD4A5 (const RuntimeMethod* method) ;
// System.Char[] System.IO.Path::GetInvalidPathChars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Path_GetInvalidPathChars_m771E6754D2B0E556D0363B0F4C21A500D820E6DD (const RuntimeMethod* method) ;
// System.String System.IO.Path::GetServerAndShare(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetServerAndShare_m23BF13411CF8F20DA1AFE0FFAD4534799258C1FC (String_t* ___path0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mCC9D98D7951772D5A6D2B1019F4077331C90E8C7 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture3, const RuntimeMethod* method) ;
// System.Boolean System.Char::Equals(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B (Il2CppChar* __this, Il2CppChar ___obj0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.String System.String::TrimEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_m25B1EA658EE07ADFED51FED61D630E5625336AB5 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m9FD21210E351374C67CD671692B866CA6B02E3EF (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method) ;
// System.Boolean System.IO.Path::SameRoot(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Path_SameRoot_m8237DEFE6670D349256DA0A45978F991201F9565 (String_t* ___root0, String_t* ___path1, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m414B2D97688304C226B1828FFCD5A3AF5824D0EF (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m1618CF9F1145C9832FC830A4BD6DD96A540012F8 (String_t* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___value0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32,System.Int32)
inline ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0 (const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m7712DDC735E99B6833E2666ADFD8A06CB96A58B1 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) ;
// System.Int32 System.IO.StreamReader::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamReader_Peek_m02A726104F658F68395E8D0CD77B741B9E267553 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.StreamReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamReader_Read_mB7DF78E453DA180AF0E360278016505417C7874E (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Boolean System.IO.UnexceptionalStreamReader::CheckEOL(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnexceptionalStreamReader_CheckEOL_m200CB322B32C8859E4EC257C95757C8237193F28 (UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE* __this, Il2CppChar ___current0, const RuntimeMethod* method) ;
// System.String System.IO.StreamReader::ReadLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StreamReader_ReadLine_m9E583F06F10408D5941F889F1ECC2A1CE545728F (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m07CDDF5BC8553960286FA1BFF8BBA2159835EBCC (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, int32_t ___bufferSize2, bool ___leaveOpen3, const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StreamWriter_Write_mE02DD312AFCC5AF2794F96FC3A8E521F2587D333 (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::Write(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter_Write_m2A48056A5E6D0CCA8E813C5D1D1D44276415A11B (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::Write(System.Char[])
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StreamWriter_Write_mA6EEDCFC293614704BFFF1FF1F1B1780E7C67E18 (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StreamWriter_Write_m1961836CD57985833261ABC980416118E24F83DA (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.ConsoleKeyInfo System.Console::ReadKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900 Console_ReadKey_mBD5CE0AC56C4129A36D645577D5C8B1890144733 (const RuntimeMethod* method) ;
// System.Char System.ConsoleKeyInfo::get_KeyChar()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar ConsoleKeyInfo_get_KeyChar_m8138528816FDD8AD7B4CAD3ADB6D70EA2F2C7A63_inline (ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900* __this, const RuntimeMethod* method) ;
// System.Int32 System.TermInfoDriver::Read(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TermInfoDriver_Read_mDD15CF4A7519DBDF41E68B9C4CEABED8FBDB933A (TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___dest0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) ;
// System.String System.TermInfoDriver::ReadLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TermInfoDriver_ReadLine_m30B6FC262A7CAAD9B9731D259104DA53A2992E90 (TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF* __this, const RuntimeMethod* method) ;
// System.Boolean System.TermInfoDriver::get_Initialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TermInfoDriver_get_Initialized_mBD30B804687340F54636E76581E98ECF722352F7_inline (TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Boolean System.TermInfoDriver::IsSpecialKey(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TermInfoDriver_IsSpecialKey_m3CFB7E17BEB19DEB92484C7EEAF3F967DE9D3444 (TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF* __this, Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Void System.TermInfoDriver::WriteSpecialKey(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TermInfoDriver_WriteSpecialKey_m1824ADD9FEA7C438DD16C72EB161FE27C1D2F8F0 (TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF* __this, Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Void System.IO.CStreamWriter::InternalWriteChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStreamWriter_InternalWriteChar_m34145F97CB254D0299E62B2303E4112F3FBF84E5 (CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239* __this, Il2CppChar ___val0, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353 (const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetFullPathName(Il2CppChar*, int32_t, Il2CppChar*, intptr_t*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t ReadDelegate_Invoke_mA05655ED3D897B96171A69924F4A6A53B2955C39_Multicast(ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98* currentDelegate = reinterpret_cast<ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___buffer0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t ReadDelegate_Invoke_mA05655ED3D897B96171A69924F4A6A53B2955C39_Open(ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buffer0, ___offset1, ___count2, method);
}
int32_t ReadDelegate_Invoke_mA05655ED3D897B96171A69924F4A6A53B2955C39_OpenStaticInvoker(ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___buffer0, ___offset1, ___count2);
}
int32_t ReadDelegate_Invoke_mA05655ED3D897B96171A69924F4A6A53B2955C39_ClosedStaticInvoker(ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___buffer0, ___offset1, ___count2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98 (ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___buffer0' to native representation
	uint8_t* ____buffer0_marshaled = NULL;
	if (___buffer0 != NULL)
	{
		____buffer0_marshaled = reinterpret_cast<uint8_t*>((___buffer0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____buffer0_marshaled, ___offset1, ___count2);

	return returnValue;
}
// System.Void System.IO.FileStream/ReadDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadDelegate__ctor_mBA1BEB5913BE4A71248167B48787B3FF6E1DB6EE (ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadDelegate_Invoke_mA05655ED3D897B96171A69924F4A6A53B2955C39_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReadDelegate_Invoke_mA05655ED3D897B96171A69924F4A6A53B2955C39_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadDelegate_Invoke_mA05655ED3D897B96171A69924F4A6A53B2955C39_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ReadDelegate_Invoke_mA05655ED3D897B96171A69924F4A6A53B2955C39_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ReadDelegate_Invoke_mA05655ED3D897B96171A69924F4A6A53B2955C39_Multicast;
}
// System.Int32 System.IO.FileStream/ReadDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadDelegate_Invoke_mA05655ED3D897B96171A69924F4A6A53B2955C39 (ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buffer0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult System.IO.FileStream/ReadDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadDelegate_BeginInvoke_mA1EC49077A5F2D0288A8C1150A52B63A92296A8C (ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___buffer0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___offset1);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___count2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 System.IO.FileStream/ReadDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadDelegate_EndInvoke_mA7BFB7DF1C102734891B994DB7230E6895A94EF6 (ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mD68C31FAC1E18B960ADFEF38A97F7B4F37DBA893_Multicast(WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA* currentDelegate = reinterpret_cast<WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___buffer0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_mD68C31FAC1E18B960ADFEF38A97F7B4F37DBA893_Open(WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___buffer0, ___offset1, ___count2, method);
}
void WriteDelegate_Invoke_mD68C31FAC1E18B960ADFEF38A97F7B4F37DBA893_OpenStaticInvoker(WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___buffer0, ___offset1, ___count2);
}
void WriteDelegate_Invoke_mD68C31FAC1E18B960ADFEF38A97F7B4F37DBA893_ClosedStaticInvoker(WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___buffer0, ___offset1, ___count2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA (WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___buffer0' to native representation
	uint8_t* ____buffer0_marshaled = NULL;
	if (___buffer0 != NULL)
	{
		____buffer0_marshaled = reinterpret_cast<uint8_t*>((___buffer0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____buffer0_marshaled, ___offset1, ___count2);

}
// System.Void System.IO.FileStream/WriteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m186943F3D4E331CB3302B459ABFF74E80FF80055 (WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mD68C31FAC1E18B960ADFEF38A97F7B4F37DBA893_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mD68C31FAC1E18B960ADFEF38A97F7B4F37DBA893_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mD68C31FAC1E18B960ADFEF38A97F7B4F37DBA893_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mD68C31FAC1E18B960ADFEF38A97F7B4F37DBA893_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_mD68C31FAC1E18B960ADFEF38A97F7B4F37DBA893_Multicast;
}
// System.Void System.IO.FileStream/WriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mD68C31FAC1E18B960ADFEF38A97F7B4F37DBA893 (WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buffer0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult System.IO.FileStream/WriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDelegate_BeginInvoke_m8EA7AA1E0DA584A7C9B0491DA771D4FD7436D6F8 (WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___buffer0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___offset1);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___count2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void System.IO.FileStream/WriteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_EndInvoke_m92AABB59A77DB173BDC2FD1396F633C7C433F8F6 (WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStreamAsyncResult__ctor_m0985ECF746AEB53C743BE9F5F51B4933E6ABF85D (FileStreamAsyncResult_t63112633BC368A3723281F1E7B27E0AFD372F215* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___cb0, RuntimeObject* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStreamAsyncResult_CBWrapper_mC6342E7CD602950295BC49D22E9B06F52A0F50CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___state1;
		__this->___state_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___state_0), (void*)L_0);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_1 = ___cb0;
		__this->___realcb_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___realcb_7), (void*)L_1);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_2 = __this->___realcb_7;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_3 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_3, NULL, (intptr_t)((void*)FileStreamAsyncResult_CBWrapper_mC6342E7CD602950295BC49D22E9B06F52A0F50CA_RuntimeMethod_var), NULL);
		__this->___cb_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cb_3), (void*)L_3);
	}

IL_002e:
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_4 = (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)il2cpp_codegen_object_new(ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE(L_4, (bool)0, NULL);
		__this->___wh_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wh_2), (void*)L_4);
		return;
	}
}
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStreamAsyncResult_CBWrapper_mC6342E7CD602950295BC49D22E9B06F52A0F50CA (RuntimeObject* ___ares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStreamAsyncResult_t63112633BC368A3723281F1E7B27E0AFD372F215_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___ares0;
		NullCheck(((FileStreamAsyncResult_t63112633BC368A3723281F1E7B27E0AFD372F215*)CastclassClass((RuntimeObject*)L_0, FileStreamAsyncResult_t63112633BC368A3723281F1E7B27E0AFD372F215_il2cpp_TypeInfo_var)));
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_1 = ((FileStreamAsyncResult_t63112633BC368A3723281F1E7B27E0AFD372F215*)CastclassClass((RuntimeObject*)L_0, FileStreamAsyncResult_t63112633BC368A3723281F1E7B27E0AFD372F215_il2cpp_TypeInfo_var))->___realcb_7;
		RuntimeObject* L_2 = ___ares0;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = AsyncCallback_BeginInvoke_m3CBD8B256174D206DC85F42A48F1F88E097E5975(L_1, L_2, (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)NULL, NULL, NULL);
		return;
	}
}
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* FileStreamAsyncResult_get_AsyncWaitHandle_mF30168A776594AD881D0E1A84C07D1660ABE39D7 (FileStreamAsyncResult_t63112633BC368A3723281F1E7B27E0AFD372F215* __this, const RuntimeMethod* method) 
{
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_0 = __this->___wh_2;
		return L_0;
	}
}
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileStreamAsyncResult_get_IsCompleted_mF5113B9903F78736E3545C73BE5BB7306AEE0F8A (FileStreamAsyncResult_t63112633BC368A3723281F1E7B27E0AFD372F215* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___completed_1;
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
// System.Exception System.IO.MonoIO::GetException(System.IO.MonoIOError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* MonoIO_GetException_m83962CC85B25CF192D37583E53A43F8FFE909F9E (int32_t ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17F8D92EF7FF34148C336F80F73EDB4F3000E2D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9314E51D0364D320B5BB9F10EB1CB0704A3299F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___error0;
		if ((((int32_t)L_0) == ((int32_t)5)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___error0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)80))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0026;
	}

IL_000b:
	{
		UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791* L_2 = (UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791*)il2cpp_codegen_object_new(UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnauthorizedAccessException__ctor_mED94291A37165C0D7A5A573AE6866429DF1712F6(L_2, _stringLiteral9314E51D0364D320B5BB9F10EB1CB0704A3299F7, NULL);
		return L_2;
	}

IL_0016:
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_3 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(L_3, _stringLiteral17F8D92EF7FF34148C336F80F73EDB4F3000E2D0, ((int32_t)-2147024816), NULL);
		return L_3;
	}

IL_0026:
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		int32_t L_5 = ___error0;
		il2cpp_codegen_runtime_class_init_inline(MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		Exception_t* L_6;
		L_6 = MonoIO_GetException_m6181E108DACA0DA9861C6F08A30C3B7ABAE14AFF(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Exception System.IO.MonoIO::GetException(System.String,System.IO.MonoIOError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* MonoIO_GetException_m6181E108DACA0DA9861C6F08A30C3B7ABAE14AFF (String_t* ___path0, int32_t ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryNotFoundException_tBE92A20AAC24C3B22DE38973ABE6886FA97419BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoIOError_tC94D69F85D2C23B3229AE92B97381C7F9351D947_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathTooLongException_tAF7644094546C2BD93B829405B0199BF3B3FC2E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B600EA7FFCE1E78F9FAE21D30FB88DAACC16451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ED8A9EE5536D74DF44A6E16DA5AB12118240C68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22096D5CF0D5EA8DA07B484F78E2FB49AD56A7DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral222287037E82D3568C7162E396BDBB9C749B086D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A182B180E626C1E1930FEC2AFFF5397AE62013D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A3FDDD8C3BE1CF11AE8A00B54BE972C0AB9968D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral713771722B208F5FC37F4ECC7686F62C2AAE6547);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89228C2272C203A431928EA4D77EC3641DC74018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92D2D6E357274775AD04DE0FFDE0AD3B993D0D99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98F8D74C1DFFFFCDC763E65133743020F32A37B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FD5FEB346EEA827BCC3F2949A87620F6DFAA5DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FF46628166A3E3EA154B7D95D42166503C62220);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB13B0836EA95708673E059506B8B21DF07ECE287);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB60A5DC327E3719B63E2509B4B166FECDBDBFB14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD99D805A078DC2ADE236145CB8A33D8617F51FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF6B82F2AEC4586E7225BDAA062B9B2B51F5B1C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFF2473A7BBBEF5B0A663B9AC66A798A65151FCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5F784701A529679B86B8456DAC0AA48DEBCB125);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA61DF7479C2DD80A2CDC904C4797B8649263D06);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___error1;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)80))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_1 = ___error1;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)17))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_2 = ___error1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 2)))
		{
			case 0:
			{
				goto IL_00bb;
			}
			case 1:
			{
				goto IL_00eb;
			}
			case 2:
			{
				goto IL_00cd;
			}
			case 3:
			{
				goto IL_00fc;
			}
			case 4:
			{
				goto IL_010d;
			}
		}
	}
	{
		int32_t L_3 = ___error1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)15))))
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_4 = ___error1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)17))))
		{
			goto IL_0224;
		}
	}
	{
		goto IL_0248;
	}

IL_003b:
	{
		int32_t L_5 = ___error1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, ((int32_t)29))))
		{
			case 0:
			{
				goto IL_0182;
			}
			case 1:
			{
				goto IL_0248;
			}
			case 2:
			{
				goto IL_0248;
			}
			case 3:
			{
				goto IL_019a;
			}
			case 4:
			{
				goto IL_01b2;
			}
		}
	}
	{
		int32_t L_6 = ___error1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)39))))
		{
			goto IL_01ca;
		}
	}
	{
		int32_t L_7 = ___error1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)80))))
		{
			goto IL_013d;
		}
	}
	{
		goto IL_0248;
	}

IL_006d:
	{
		int32_t L_8 = ___error1;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)145))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_9 = ___error1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)82))))
		{
			goto IL_020c;
		}
	}
	{
		int32_t L_10 = ___error1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)87))))
		{
			goto IL_0166;
		}
	}
	{
		int32_t L_11 = ___error1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)145))))
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_0248;
	}

IL_0095:
	{
		int32_t L_12 = ___error1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)206))))
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_13 = ___error1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)267))))
		{
			goto IL_0236;
		}
	}
	{
		int32_t L_14 = ___error1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)6000))))
		{
			goto IL_01fa;
		}
	}
	{
		goto IL_0248;
	}

IL_00bb:
	{
		String_t* L_15 = ___path0;
		String_t* L_16;
		L_16 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralE5F784701A529679B86B8456DAC0AA48DEBCB125, L_15, NULL);
		String_t* L_17 = ___path0;
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_18 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		FileNotFoundException__ctor_mC4247CABF75A7B484A21790CD7F8EFA8AC101677(L_18, L_16, L_17, NULL);
		return L_18;
	}

IL_00cd:
	{
		il2cpp_codegen_runtime_class_init_inline(MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		bool L_19 = ((MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_StaticFields*)il2cpp_codegen_static_fields_for(MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var))->___dump_handles_1;
		if (!L_19)
		{
			goto IL_00d9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		MonoIO_DumpHandles_m335F7A8DB8A832F834B208AEADCCF0CDA0F0E644(NULL);
	}

IL_00d9:
	{
		int32_t L_20 = ___error1;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_21 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(L_21, _stringLiteralEA61DF7479C2DD80A2CDC904C4797B8649263D06, ((int32_t)(((int32_t)-2147024896)|(int32_t)L_20)), NULL);
		return L_21;
	}

IL_00eb:
	{
		String_t* L_22 = ___path0;
		String_t* L_23;
		L_23 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral22096D5CF0D5EA8DA07B484F78E2FB49AD56A7DF, L_22, NULL);
		DirectoryNotFoundException_tBE92A20AAC24C3B22DE38973ABE6886FA97419BF* L_24 = (DirectoryNotFoundException_tBE92A20AAC24C3B22DE38973ABE6886FA97419BF*)il2cpp_codegen_object_new(DirectoryNotFoundException_tBE92A20AAC24C3B22DE38973ABE6886FA97419BF_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		DirectoryNotFoundException__ctor_mA7F098E81D1D163C09BF5E64A34634290B76F235(L_24, L_23, NULL);
		return L_24;
	}

IL_00fc:
	{
		String_t* L_25 = ___path0;
		String_t* L_26;
		L_26 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral0B600EA7FFCE1E78F9FAE21D30FB88DAACC16451, L_25, NULL);
		UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791* L_27 = (UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791*)il2cpp_codegen_object_new(UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		UnauthorizedAccessException__ctor_mED94291A37165C0D7A5A573AE6866429DF1712F6(L_27, L_26, NULL);
		return L_27;
	}

IL_010d:
	{
		String_t* L_28 = ___path0;
		String_t* L_29;
		L_29 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral6A3FDDD8C3BE1CF11AE8A00B54BE972C0AB9968D, L_28, NULL);
		int32_t L_30 = ___error1;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_31 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(L_31, L_29, ((int32_t)(((int32_t)-2147024896)|(int32_t)L_30)), NULL);
		return L_31;
	}

IL_0125:
	{
		String_t* L_32 = ___path0;
		String_t* L_33;
		L_33 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral98F8D74C1DFFFFCDC763E65133743020F32A37B6, L_32, NULL);
		int32_t L_34 = ___error1;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_35 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(L_35, L_33, ((int32_t)(((int32_t)-2147024896)|(int32_t)L_34)), NULL);
		return L_35;
	}

IL_013d:
	{
		String_t* L_36 = ___path0;
		String_t* L_37;
		L_37 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral1ED8A9EE5536D74DF44A6E16DA5AB12118240C68, L_36, NULL);
		int32_t L_38 = ___error1;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_39 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(L_39, L_37, ((int32_t)(((int32_t)-2147024896)|(int32_t)L_38)), NULL);
		return L_39;
	}

IL_0155:
	{
		String_t* L_40 = ___path0;
		String_t* L_41;
		L_41 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralDF6B82F2AEC4586E7225BDAA062B9B2B51F5B1C1, L_40, NULL);
		PathTooLongException_tAF7644094546C2BD93B829405B0199BF3B3FC2E5* L_42 = (PathTooLongException_tAF7644094546C2BD93B829405B0199BF3B3FC2E5*)il2cpp_codegen_object_new(PathTooLongException_tAF7644094546C2BD93B829405B0199BF3B3FC2E5_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		PathTooLongException__ctor_m2E98EE527C0503C02F7305BC57045AB86BB202A7(L_42, L_41, NULL);
		return L_42;
	}

IL_0166:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43;
		L_43 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		String_t* L_44;
		L_44 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral89228C2272C203A431928EA4D77EC3641DC74018, L_43, NULL);
		int32_t L_45 = ___error1;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_46 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(L_46, L_44, ((int32_t)(((int32_t)-2147024896)|(int32_t)L_45)), NULL);
		return L_46;
	}

IL_0182:
	{
		String_t* L_47 = ___path0;
		String_t* L_48;
		L_48 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral9FF46628166A3E3EA154B7D95D42166503C62220, L_47, NULL);
		int32_t L_49 = ___error1;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_50 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(L_50, L_48, ((int32_t)(((int32_t)-2147024896)|(int32_t)L_49)), NULL);
		return L_50;
	}

IL_019a:
	{
		String_t* L_51 = ___path0;
		String_t* L_52;
		L_52 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral92D2D6E357274775AD04DE0FFDE0AD3B993D0D99, L_51, NULL);
		int32_t L_53 = ___error1;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_54 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(L_54, L_52, ((int32_t)(((int32_t)-2147024896)|(int32_t)L_53)), NULL);
		return L_54;
	}

IL_01b2:
	{
		String_t* L_55 = ___path0;
		String_t* L_56;
		L_56 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralDFF2473A7BBBEF5B0A663B9AC66A798A65151FCF, L_55, NULL);
		int32_t L_57 = ___error1;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_58 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(L_58, L_56, ((int32_t)(((int32_t)-2147024896)|(int32_t)L_57)), NULL);
		return L_58;
	}

IL_01ca:
	{
		String_t* L_59 = ___path0;
		String_t* L_60;
		L_60 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralDD99D805A078DC2ADE236145CB8A33D8617F51FB, L_59, NULL);
		int32_t L_61 = ___error1;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_62 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_62);
		IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(L_62, L_60, ((int32_t)(((int32_t)-2147024896)|(int32_t)L_61)), NULL);
		return L_62;
	}

IL_01e2:
	{
		String_t* L_63 = ___path0;
		String_t* L_64;
		L_64 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralB13B0836EA95708673E059506B8B21DF07ECE287, L_63, NULL);
		int32_t L_65 = ___error1;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_66 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(L_66, L_64, ((int32_t)(((int32_t)-2147024896)|(int32_t)L_65)), NULL);
		return L_66;
	}

IL_01fa:
	{
		int32_t L_67 = ___error1;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_68 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(L_68, _stringLiteral5A182B180E626C1E1930FEC2AFFF5397AE62013D, ((int32_t)(((int32_t)-2147024896)|(int32_t)L_67)), NULL);
		return L_68;
	}

IL_020c:
	{
		String_t* L_69 = ___path0;
		String_t* L_70;
		L_70 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral713771722B208F5FC37F4ECC7686F62C2AAE6547, L_69, NULL);
		int32_t L_71 = ___error1;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_72 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_72);
		IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(L_72, L_70, ((int32_t)(((int32_t)-2147024896)|(int32_t)L_71)), NULL);
		return L_72;
	}

IL_0224:
	{
		int32_t L_73 = ___error1;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_74 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_74);
		IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(L_74, _stringLiteral9FD5FEB346EEA827BCC3F2949A87620F6DFAA5DB, ((int32_t)(((int32_t)-2147024896)|(int32_t)L_73)), NULL);
		return L_74;
	}

IL_0236:
	{
		int32_t L_75 = ___error1;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_76 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_76);
		IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(L_76, _stringLiteralB60A5DC327E3719B63E2509B4B166FECDBDBFB14, ((int32_t)(((int32_t)-2147024896)|(int32_t)L_75)), NULL);
		return L_76;
	}

IL_0248:
	{
		int32_t L_77 = ___error1;
		int32_t L_78 = L_77;
		RuntimeObject* L_79 = Box(MonoIOError_tC94D69F85D2C23B3229AE92B97381C7F9351D947_il2cpp_TypeInfo_var, &L_78);
		String_t* L_80 = ___path0;
		String_t* L_81;
		L_81 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral222287037E82D3568C7162E396BDBB9C749B086D, L_79, L_80, NULL);
		int32_t L_82 = ___error1;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_83 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_83);
		IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(L_83, L_81, ((int32_t)(((int32_t)-2147024896)|(int32_t)L_82)), NULL);
		return L_83;
	}
}
// System.String System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MonoIO_GetCurrentDirectory_m561A973EC60F6F78FE3A3142E389562E78EB6D8E (int32_t* ___error0, const RuntimeMethod* method) 
{
	typedef String_t* (*MonoIO_GetCurrentDirectory_m561A973EC60F6F78FE3A3142E389562E78EB6D8E_ftn) (int32_t*);
	using namespace il2cpp::icalls;
	return ((MonoIO_GetCurrentDirectory_m561A973EC60F6F78FE3A3142E389562E78EB6D8E_ftn)mscorlib::System::IO::MonoIO::GetCurrentDirectory) (___error0);
}
// System.IO.MonoFileType System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonoIO_GetFileType_m8A3AD74614ECB605B1B96EBA6815E9D03EF414C4 (intptr_t ___handle0, int32_t* ___error1, const RuntimeMethod* method) 
{
	typedef int32_t (*MonoIO_GetFileType_m8A3AD74614ECB605B1B96EBA6815E9D03EF414C4_ftn) (intptr_t, int32_t*);
	using namespace il2cpp::icalls;
	return ((MonoIO_GetFileType_m8A3AD74614ECB605B1B96EBA6815E9D03EF414C4_ftn)mscorlib::System::IO::MonoIO::GetFileType) (___handle0, ___error1);
}
// System.IO.MonoFileType System.IO.MonoIO::GetFileType(System.Runtime.InteropServices.SafeHandle,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonoIO_GetFileType_m0A5CC2F2B8991480EB82F6103D07DC72CE0D9418 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* ___safeHandle0, int32_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0019:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_0;
					if (!L_0)
					{
						goto IL_0022;
					}
				}
				{
					SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_1 = ___safeHandle0;
					NullCheck(L_1);
					SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(L_1, NULL);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_2 = ___safeHandle0;
			NullCheck(L_2);
			SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(L_2, (&V_0), NULL);
			SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_3 = ___safeHandle0;
			NullCheck(L_3);
			intptr_t L_4;
			L_4 = SafeHandle_DangerousGetHandle_mE7CB3F36EE7BB2E2623EF316C4B43D1CA44B7F9C_inline(L_3, NULL);
			int32_t* L_5 = ___error1;
			il2cpp_codegen_runtime_class_init_inline(MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
			int32_t L_6;
			L_6 = MonoIO_GetFileType_m8A3AD74614ECB605B1B96EBA6815E9D03EF414C4(L_4, L_5, NULL);
			V_1 = L_6;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.Boolean System.IO.MonoIO::FindCloseFile(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoIO_FindCloseFile_m7D477D1D83A2ABEEA2C9720DF64A53DA8E63CDC2 (intptr_t ___hnd0, const RuntimeMethod* method) 
{
	typedef bool (*MonoIO_FindCloseFile_m7D477D1D83A2ABEEA2C9720DF64A53DA8E63CDC2_ftn) (intptr_t);
	using namespace il2cpp::icalls;
	return ((MonoIO_FindCloseFile_m7D477D1D83A2ABEEA2C9720DF64A53DA8E63CDC2_ftn)mscorlib::System::IO::MonoIO::FindCloseFile) (___hnd0);
}
// System.IntPtr System.IO.MonoIO::Open(System.Char*,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MonoIO_Open_mA845F2D0E79777BCAB0BA7CC31D3D079188216BF (Il2CppChar* ___filename0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, int32_t ___options4, int32_t* ___error5, const RuntimeMethod* method) 
{
	typedef intptr_t (*MonoIO_Open_mA845F2D0E79777BCAB0BA7CC31D3D079188216BF_ftn) (Il2CppChar*, int32_t, int32_t, int32_t, int32_t, int32_t*);
	using namespace il2cpp::icalls;
	return ((MonoIO_Open_mA845F2D0E79777BCAB0BA7CC31D3D079188216BF_ftn)mscorlib::System::IO::MonoIO::Open) (___filename0, ___mode1, ___access2, ___share3, ___options4, ___error5);
}
// System.IntPtr System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MonoIO_Open_m8223DD4D0934DFDB37FFA3BAB992FB427CDF88A6 (String_t* ___filename0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, int32_t ___options4, int32_t* ___error5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___filename0;
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
		L_4 = RuntimeHelpers_get_OffsetToStringData_mBBE58AEA702864FB006771F4600D1D99B1234460(NULL);
		V_0 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, L_4));
	}

IL_0010:
	{
		Il2CppChar* L_5 = V_0;
		int32_t L_6 = ___mode1;
		int32_t L_7 = ___access2;
		int32_t L_8 = ___share3;
		int32_t L_9 = ___options4;
		int32_t* L_10 = ___error5;
		il2cpp_codegen_runtime_class_init_inline(MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		intptr_t L_11;
		L_11 = MonoIO_Open_mA845F2D0E79777BCAB0BA7CC31D3D079188216BF(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Boolean System.IO.MonoIO::Cancel_internal(System.IntPtr,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoIO_Cancel_internal_m27D0A4080002C7DA3EF09499101A5C89ABB5A0C0 (intptr_t ___handle0, int32_t* ___error1, const RuntimeMethod* method) 
{
	typedef bool (*MonoIO_Cancel_internal_m27D0A4080002C7DA3EF09499101A5C89ABB5A0C0_ftn) (intptr_t, int32_t*);
	using namespace il2cpp::icalls;
	return ((MonoIO_Cancel_internal_m27D0A4080002C7DA3EF09499101A5C89ABB5A0C0_ftn)mscorlib::System::IO::MonoIO::Cancel_internal) (___handle0, ___error1);
}
// System.Boolean System.IO.MonoIO::Cancel(System.Runtime.InteropServices.SafeHandle,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoIO_Cancel_mE222270191D0C50B3AA9334079CF9247868DB0EE (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* ___safeHandle0, int32_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0019:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_0;
					if (!L_0)
					{
						goto IL_0022;
					}
				}
				{
					SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_1 = ___safeHandle0;
					NullCheck(L_1);
					SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(L_1, NULL);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_2 = ___safeHandle0;
			NullCheck(L_2);
			SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(L_2, (&V_0), NULL);
			SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_3 = ___safeHandle0;
			NullCheck(L_3);
			intptr_t L_4;
			L_4 = SafeHandle_DangerousGetHandle_mE7CB3F36EE7BB2E2623EF316C4B43D1CA44B7F9C_inline(L_3, NULL);
			int32_t* L_5 = ___error1;
			il2cpp_codegen_runtime_class_init_inline(MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
			bool L_6;
			L_6 = MonoIO_Cancel_internal_m27D0A4080002C7DA3EF09499101A5C89ABB5A0C0(L_4, L_5, NULL);
			V_1 = L_6;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Boolean System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoIO_Close_m5DB53C15FB2AD4DB1257B58ABC950D4985B63C8C (intptr_t ___handle0, int32_t* ___error1, const RuntimeMethod* method) 
{
	typedef bool (*MonoIO_Close_m5DB53C15FB2AD4DB1257B58ABC950D4985B63C8C_ftn) (intptr_t, int32_t*);
	using namespace il2cpp::icalls;
	return ((MonoIO_Close_m5DB53C15FB2AD4DB1257B58ABC950D4985B63C8C_ftn)mscorlib::System::IO::MonoIO::Close) (___handle0, ___error1);
}
// System.Int32 System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonoIO_Read_m51A2830CE63D870654F2DBDC4CAB9A6E89A1BF9D (intptr_t ___handle0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dest1, int32_t ___dest_offset2, int32_t ___count3, int32_t* ___error4, const RuntimeMethod* method) 
{
	typedef int32_t (*MonoIO_Read_m51A2830CE63D870654F2DBDC4CAB9A6E89A1BF9D_ftn) (intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, int32_t*);
	using namespace il2cpp::icalls;
	return ((MonoIO_Read_m51A2830CE63D870654F2DBDC4CAB9A6E89A1BF9D_ftn)mscorlib::System::IO::MonoIO::Read) (___handle0, ___dest1, ___dest_offset2, ___count3, ___error4);
}
// System.Int32 System.IO.MonoIO::Read(System.Runtime.InteropServices.SafeHandle,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonoIO_Read_mFF1D1B20CD5F178CB7C596ECCD001054843DD8B9 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* ___safeHandle0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dest1, int32_t ___dest_offset2, int32_t ___count3, int32_t* ___error4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001d:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_0;
					if (!L_0)
					{
						goto IL_0026;
					}
				}
				{
					SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_1 = ___safeHandle0;
					NullCheck(L_1);
					SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(L_1, NULL);
				}

IL_0026:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_2 = ___safeHandle0;
			NullCheck(L_2);
			SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(L_2, (&V_0), NULL);
			SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_3 = ___safeHandle0;
			NullCheck(L_3);
			intptr_t L_4;
			L_4 = SafeHandle_DangerousGetHandle_mE7CB3F36EE7BB2E2623EF316C4B43D1CA44B7F9C_inline(L_3, NULL);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___dest1;
			int32_t L_6 = ___dest_offset2;
			int32_t L_7 = ___count3;
			int32_t* L_8 = ___error4;
			il2cpp_codegen_runtime_class_init_inline(MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
			int32_t L_9;
			L_9 = MonoIO_Read_m51A2830CE63D870654F2DBDC4CAB9A6E89A1BF9D(L_4, L_5, L_6, L_7, L_8, NULL);
			V_1 = L_9;
			goto IL_0027;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0027:
	{
		int32_t L_10 = V_1;
		return L_10;
	}
}
// System.Int32 System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonoIO_Write_m4868AB991DE3BFE39676EF37D77BD36D156AF22A (intptr_t ___handle0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src1, int32_t ___src_offset2, int32_t ___count3, int32_t* ___error4, const RuntimeMethod* method) 
{
	typedef int32_t (*MonoIO_Write_m4868AB991DE3BFE39676EF37D77BD36D156AF22A_ftn) (intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, int32_t*);
	using namespace il2cpp::icalls;
	return ((MonoIO_Write_m4868AB991DE3BFE39676EF37D77BD36D156AF22A_ftn)mscorlib::System::IO::MonoIO::Write) (___handle0, ___src1, ___src_offset2, ___count3, ___error4);
}
// System.Int32 System.IO.MonoIO::Write(System.Runtime.InteropServices.SafeHandle,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonoIO_Write_mD16233978A2C13FD25B91C9EAC06210515EA0C42 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* ___safeHandle0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src1, int32_t ___src_offset2, int32_t ___count3, int32_t* ___error4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001d:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_0;
					if (!L_0)
					{
						goto IL_0026;
					}
				}
				{
					SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_1 = ___safeHandle0;
					NullCheck(L_1);
					SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(L_1, NULL);
				}

IL_0026:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_2 = ___safeHandle0;
			NullCheck(L_2);
			SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(L_2, (&V_0), NULL);
			SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_3 = ___safeHandle0;
			NullCheck(L_3);
			intptr_t L_4;
			L_4 = SafeHandle_DangerousGetHandle_mE7CB3F36EE7BB2E2623EF316C4B43D1CA44B7F9C_inline(L_3, NULL);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___src1;
			int32_t L_6 = ___src_offset2;
			int32_t L_7 = ___count3;
			int32_t* L_8 = ___error4;
			il2cpp_codegen_runtime_class_init_inline(MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
			int32_t L_9;
			L_9 = MonoIO_Write_m4868AB991DE3BFE39676EF37D77BD36D156AF22A(L_4, L_5, L_6, L_7, L_8, NULL);
			V_1 = L_9;
			goto IL_0027;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0027:
	{
		int32_t L_10 = V_1;
		return L_10;
	}
}
// System.Int64 System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MonoIO_Seek_m4DECF02A76F506A915B53C3A089F25917B074FFE (intptr_t ___handle0, int64_t ___offset1, int32_t ___origin2, int32_t* ___error3, const RuntimeMethod* method) 
{
	typedef int64_t (*MonoIO_Seek_m4DECF02A76F506A915B53C3A089F25917B074FFE_ftn) (intptr_t, int64_t, int32_t, int32_t*);
	using namespace il2cpp::icalls;
	return ((MonoIO_Seek_m4DECF02A76F506A915B53C3A089F25917B074FFE_ftn)mscorlib::System::IO::MonoIO::Seek) (___handle0, ___offset1, ___origin2, ___error3);
}
// System.Int64 System.IO.MonoIO::Seek(System.Runtime.InteropServices.SafeHandle,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MonoIO_Seek_m58DF5955FACDCB81FE93E7C51FA3A3194270857C (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* ___safeHandle0, int64_t ___offset1, int32_t ___origin2, int32_t* ___error3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001b:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_0;
					if (!L_0)
					{
						goto IL_0024;
					}
				}
				{
					SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_1 = ___safeHandle0;
					NullCheck(L_1);
					SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(L_1, NULL);
				}

IL_0024:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_2 = ___safeHandle0;
			NullCheck(L_2);
			SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(L_2, (&V_0), NULL);
			SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_3 = ___safeHandle0;
			NullCheck(L_3);
			intptr_t L_4;
			L_4 = SafeHandle_DangerousGetHandle_mE7CB3F36EE7BB2E2623EF316C4B43D1CA44B7F9C_inline(L_3, NULL);
			int64_t L_5 = ___offset1;
			int32_t L_6 = ___origin2;
			int32_t* L_7 = ___error3;
			il2cpp_codegen_runtime_class_init_inline(MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
			int64_t L_8;
			L_8 = MonoIO_Seek_m4DECF02A76F506A915B53C3A089F25917B074FFE(L_4, L_5, L_6, L_7, NULL);
			V_1 = L_8;
			goto IL_0025;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0025:
	{
		int64_t L_9 = V_1;
		return L_9;
	}
}
// System.Int64 System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MonoIO_GetLength_m6C0D9ED1B60FA820E5C4EEACEAD3A86135B3FE0E (intptr_t ___handle0, int32_t* ___error1, const RuntimeMethod* method) 
{
	typedef int64_t (*MonoIO_GetLength_m6C0D9ED1B60FA820E5C4EEACEAD3A86135B3FE0E_ftn) (intptr_t, int32_t*);
	using namespace il2cpp::icalls;
	return ((MonoIO_GetLength_m6C0D9ED1B60FA820E5C4EEACEAD3A86135B3FE0E_ftn)mscorlib::System::IO::MonoIO::GetLength) (___handle0, ___error1);
}
// System.Int64 System.IO.MonoIO::GetLength(System.Runtime.InteropServices.SafeHandle,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MonoIO_GetLength_m9372511B5AAE11FB39579B024E5942A9832661AA (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* ___safeHandle0, int32_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0019:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_0;
					if (!L_0)
					{
						goto IL_0022;
					}
				}
				{
					SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_1 = ___safeHandle0;
					NullCheck(L_1);
					SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(L_1, NULL);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_2 = ___safeHandle0;
			NullCheck(L_2);
			SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(L_2, (&V_0), NULL);
			SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_3 = ___safeHandle0;
			NullCheck(L_3);
			intptr_t L_4;
			L_4 = SafeHandle_DangerousGetHandle_mE7CB3F36EE7BB2E2623EF316C4B43D1CA44B7F9C_inline(L_3, NULL);
			int32_t* L_5 = ___error1;
			il2cpp_codegen_runtime_class_init_inline(MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
			int64_t L_6;
			L_6 = MonoIO_GetLength_m6C0D9ED1B60FA820E5C4EEACEAD3A86135B3FE0E(L_4, L_5, NULL);
			V_1 = L_6;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		int64_t L_7 = V_1;
		return L_7;
	}
}
// System.IntPtr System.IO.MonoIO::get_ConsoleOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MonoIO_get_ConsoleOutput_m798D255DF977FB7BD303ECD5C350392D36B4FC9B (const RuntimeMethod* method) 
{
	typedef intptr_t (*MonoIO_get_ConsoleOutput_m798D255DF977FB7BD303ECD5C350392D36B4FC9B_ftn) ();
	using namespace il2cpp::icalls;
	return ((MonoIO_get_ConsoleOutput_m798D255DF977FB7BD303ECD5C350392D36B4FC9B_ftn)mscorlib::System::IO::MonoIO::get_ConsoleOutput) ();
}
// System.IntPtr System.IO.MonoIO::get_ConsoleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MonoIO_get_ConsoleInput_m114729A315D62A85E441DCF35F7D482BC3247CF6 (const RuntimeMethod* method) 
{
	typedef intptr_t (*MonoIO_get_ConsoleInput_m114729A315D62A85E441DCF35F7D482BC3247CF6_ftn) ();
	using namespace il2cpp::icalls;
	return ((MonoIO_get_ConsoleInput_m114729A315D62A85E441DCF35F7D482BC3247CF6_ftn)mscorlib::System::IO::MonoIO::get_ConsoleInput) ();
}
// System.IntPtr System.IO.MonoIO::get_ConsoleError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MonoIO_get_ConsoleError_m54D0748CF0BBAF13F891372440B45B2335ADFBA1 (const RuntimeMethod* method) 
{
	typedef intptr_t (*MonoIO_get_ConsoleError_m54D0748CF0BBAF13F891372440B45B2335ADFBA1_ftn) ();
	using namespace il2cpp::icalls;
	return ((MonoIO_get_ConsoleError_m54D0748CF0BBAF13F891372440B45B2335ADFBA1_ftn)mscorlib::System::IO::MonoIO::get_ConsoleError) ();
}
// System.Boolean System.IO.MonoIO::CreatePipe(System.IntPtr&,System.IntPtr&,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoIO_CreatePipe_mE5EECE2C56BCB71083E95A067E7178C26793395E (intptr_t* ___read_handle0, intptr_t* ___write_handle1, int32_t* ___error2, const RuntimeMethod* method) 
{
	typedef bool (*MonoIO_CreatePipe_mE5EECE2C56BCB71083E95A067E7178C26793395E_ftn) (intptr_t*, intptr_t*, int32_t*);
	using namespace il2cpp::icalls;
	return ((MonoIO_CreatePipe_mE5EECE2C56BCB71083E95A067E7178C26793395E_ftn)mscorlib::System::IO::MonoIO::CreatePipe) (___read_handle0, ___write_handle1, ___error2);
}
// System.Boolean System.IO.MonoIO::DuplicateHandle(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr&,System.Int32,System.Int32,System.Int32,System.IO.MonoIOError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoIO_DuplicateHandle_m2BB9CDF1578D80E0FCFA1199E13EC6C1E9855E98 (intptr_t ___source_process_handle0, intptr_t ___source_handle1, intptr_t ___target_process_handle2, intptr_t* ___target_handle3, int32_t ___access4, int32_t ___inherit5, int32_t ___options6, int32_t* ___error7, const RuntimeMethod* method) 
{
	typedef bool (*MonoIO_DuplicateHandle_m2BB9CDF1578D80E0FCFA1199E13EC6C1E9855E98_ftn) (intptr_t, intptr_t, intptr_t, intptr_t*, int32_t, int32_t, int32_t, int32_t*);
	using namespace il2cpp::icalls;
	return ((MonoIO_DuplicateHandle_m2BB9CDF1578D80E0FCFA1199E13EC6C1E9855E98_ftn)mscorlib::System::IO::MonoIO::DuplicateHandle) (___source_process_handle0, ___source_handle1, ___target_process_handle2, ___target_handle3, ___access4, ___inherit5, ___options6, ___error7);
}
// System.Char System.IO.MonoIO::get_VolumeSeparatorChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar MonoIO_get_VolumeSeparatorChar_m62746C64329B7051BA531069FE7380352184C28A (const RuntimeMethod* method) 
{
	typedef Il2CppChar (*MonoIO_get_VolumeSeparatorChar_m62746C64329B7051BA531069FE7380352184C28A_ftn) ();
	using namespace il2cpp::icalls;
	return ((MonoIO_get_VolumeSeparatorChar_m62746C64329B7051BA531069FE7380352184C28A_ftn)mscorlib::System::IO::MonoIO::get_VolumeSeparatorChar) ();
}
// System.Char System.IO.MonoIO::get_DirectorySeparatorChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar MonoIO_get_DirectorySeparatorChar_m6E78F519C72DE6B42D1A33FE6142A699CCF62CA0 (const RuntimeMethod* method) 
{
	typedef Il2CppChar (*MonoIO_get_DirectorySeparatorChar_m6E78F519C72DE6B42D1A33FE6142A699CCF62CA0_ftn) ();
	using namespace il2cpp::icalls;
	return ((MonoIO_get_DirectorySeparatorChar_m6E78F519C72DE6B42D1A33FE6142A699CCF62CA0_ftn)mscorlib::System::IO::MonoIO::get_DirectorySeparatorChar) ();
}
// System.Char System.IO.MonoIO::get_AltDirectorySeparatorChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar MonoIO_get_AltDirectorySeparatorChar_m17C1075AF7427FFCB8D916ACD6510675B85801D5 (const RuntimeMethod* method) 
{
	typedef Il2CppChar (*MonoIO_get_AltDirectorySeparatorChar_m17C1075AF7427FFCB8D916ACD6510675B85801D5_ftn) ();
	using namespace il2cpp::icalls;
	return ((MonoIO_get_AltDirectorySeparatorChar_m17C1075AF7427FFCB8D916ACD6510675B85801D5_ftn)mscorlib::System::IO::MonoIO::get_AltDirectorySeparatorChar) ();
}
// System.Char System.IO.MonoIO::get_PathSeparator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar MonoIO_get_PathSeparator_mD5ECF2C45AF5B456F7D8A96B90A6DAABF29FD4A5 (const RuntimeMethod* method) 
{
	typedef Il2CppChar (*MonoIO_get_PathSeparator_mD5ECF2C45AF5B456F7D8A96B90A6DAABF29FD4A5_ftn) ();
	using namespace il2cpp::icalls;
	return ((MonoIO_get_PathSeparator_mD5ECF2C45AF5B456F7D8A96B90A6DAABF29FD4A5_ftn)mscorlib::System::IO::MonoIO::get_PathSeparator) ();
}
// System.Void System.IO.MonoIO::DumpHandles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoIO_DumpHandles_m335F7A8DB8A832F834B208AEADCCF0CDA0F0E644 (const RuntimeMethod* method) 
{
	typedef void (*MonoIO_DumpHandles_m335F7A8DB8A832F834B208AEADCCF0CDA0F0E644_ftn) ();
	using namespace il2cpp::icalls;
	((MonoIO_DumpHandles_m335F7A8DB8A832F834B208AEADCCF0CDA0F0E644_ftn)mscorlib::System::IO::MonoIO::DumpHandles) ();
}
// System.Boolean System.IO.MonoIO::RemapPath(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoIO_RemapPath_mF901263DD105B28F8BFAA96337A3789248AB1C00 (String_t* ___path0, String_t** ___newPath1, const RuntimeMethod* method) 
{
	typedef bool (*MonoIO_RemapPath_mF901263DD105B28F8BFAA96337A3789248AB1C00_ftn) (String_t*, String_t**);
	using namespace il2cpp::icalls;
	return ((MonoIO_RemapPath_mF901263DD105B28F8BFAA96337A3789248AB1C00_ftn)mscorlib::System::IO::MonoIO::RemapPath) (___path0, ___newPath1);
}
// System.Void System.IO.MonoIO::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoIO__cctor_mAB249BCF891CB0754493E7C21B1A20609ACDF09F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7E8F4347CBCB3CFEB88C38EBC7540DC8045D76F);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_mAD35C3919D90848D6319343DC82CFEB64D75CC0F(((int64_t)(-1)), NULL);
		((MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_StaticFields*)il2cpp_codegen_static_fields_for(MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var))->___InvalidHandle_0 = L_0;
		String_t* L_1;
		L_1 = Environment_GetEnvironmentVariable_mFA1E83F28F2E74EF3312F9D4B582FFBE38804ED8(_stringLiteralF7E8F4347CBCB3CFEB88C38EBC7540DC8045D76F, NULL);
		((MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_StaticFields*)il2cpp_codegen_static_fields_for(MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var))->___dump_handles_1 = (bool)((!(((RuntimeObject*)(String_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		String_t* L_0 = ___path10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD999C15961E364746AD7ED275769D73DA5AD2EC9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___path21;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD022821CCC942F161E496B5F0F4FCF3CB5191B46)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = ___path10;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_6 = ___path21;
		return L_6;
	}

IL_0026:
	{
		String_t* L_7 = ___path21;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if (L_8)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_9 = ___path10;
		return L_9;
	}

IL_0030:
	{
		String_t* L_10 = ___path10;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___InvalidPathChars_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = String_IndexOfAny_mC7AA4AE42B38667BDB9B214AA6230F322306CFF6(L_10, L_11, NULL);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD36F2A1E2D9C14B427558FDF2106B8A8B2702189)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474_RuntimeMethod_var)));
	}

IL_0049:
	{
		String_t* L_14 = ___path21;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___InvalidPathChars_0;
		NullCheck(L_14);
		int32_t L_16;
		L_16 = String_IndexOfAny_mC7AA4AE42B38667BDB9B214AA6230F322306CFF6(L_14, L_15, NULL);
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD36F2A1E2D9C14B427558FDF2106B8A8B2702189)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474_RuntimeMethod_var)));
	}

IL_0062:
	{
		String_t* L_18 = ___path21;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Path_IsPathRooted_m3B275F519FBDF73A7667387F6FAC8F1CEC9DFF0E(L_18, NULL);
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_20 = ___path21;
		return L_20;
	}

IL_006c:
	{
		String_t* L_21 = ___path10;
		String_t* L_22 = ___path10;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_22, NULL);
		NullCheck(L_21);
		Il2CppChar L_24;
		L_24 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_21, ((int32_t)il2cpp_codegen_subtract(L_23, 1)), NULL);
		V_0 = L_24;
		Il2CppChar L_25 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_26 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00a0;
		}
	}
	{
		Il2CppChar L_27 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_28 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_27) == ((int32_t)L_28)))
		{
			goto IL_00a0;
		}
	}
	{
		Il2CppChar L_29 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_30 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___VolumeSeparatorChar_5;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00a0;
		}
	}
	{
		String_t* L_31 = ___path10;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_32 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorStr_4;
		String_t* L_33 = ___path21;
		String_t* L_34;
		L_34 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_31, L_32, L_33, NULL);
		return L_34;
	}

IL_00a0:
	{
		String_t* L_35 = ___path10;
		String_t* L_36 = ___path21;
		String_t* L_37;
		L_37 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_35, L_36, NULL);
		return L_37;
	}
}
// System.String System.IO.Path::CleanPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_CleanPath_mC359F720FD49EACE4B2B8A739139F85613C91B9A (String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_5 = NULL;
	int32_t V_6 = 0;
	Il2CppChar V_7 = 0x0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Il2CppChar V_10 = 0x0;
	{
		String_t* L_0 = ___s0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, 0, NULL);
		V_4 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) <= ((int32_t)2)))
		{
			goto IL_002d;
		}
	}
	{
		Il2CppChar L_5 = V_4;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, 1, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_002d;
		}
	}
	{
		V_3 = 2;
	}

IL_002d:
	{
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0045;
		}
	}
	{
		Il2CppChar L_9 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_10 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0043;
		}
	}
	{
		Il2CppChar L_11 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_12 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0045;
		}
	}

IL_0043:
	{
		String_t* L_13 = ___s0;
		return L_13;
	}

IL_0045:
	{
		int32_t L_14 = V_3;
		V_6 = L_14;
		goto IL_00b4;
	}

IL_004a:
	{
		String_t* L_15 = ___s0;
		int32_t L_16 = V_6;
		NullCheck(L_15);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, L_16, NULL);
		V_7 = L_17;
		Il2CppChar L_18 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_19 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			goto IL_0066;
		}
	}
	{
		Il2CppChar L_20 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_21 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_00ae;
		}
	}

IL_0066:
	{
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_22 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		Il2CppChar L_23 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_007f;
		}
	}
	{
		Il2CppChar L_24 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_25 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_007f:
	{
		int32_t L_27 = V_6;
		int32_t L_28 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_27, 1))) == ((uint32_t)L_28))))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		goto IL_00ae;
	}

IL_008c:
	{
		String_t* L_30 = ___s0;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		Il2CppChar L_32;
		L_32 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_30, ((int32_t)il2cpp_codegen_add(L_31, 1)), NULL);
		V_7 = L_32;
		Il2CppChar L_33 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_34 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((((int32_t)L_33) == ((int32_t)L_34)))
		{
			goto IL_00aa;
		}
	}
	{
		Il2CppChar L_35 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_36 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_36))))
		{
			goto IL_00ae;
		}
	}

IL_00aa:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00ae:
	{
		int32_t L_38 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b4:
	{
		int32_t L_39 = V_6;
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_41 = V_1;
		if (L_41)
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_42 = V_2;
		if (L_42)
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_43 = ___s0;
		return L_43;
	}

IL_00c1:
	{
		int32_t L_44 = V_0;
		int32_t L_45 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_46 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_44, L_45)));
		V_5 = L_46;
		int32_t L_47 = V_3;
		if (!L_47)
		{
			goto IL_00da;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_48 = V_5;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_49 = V_5;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)92));
	}

IL_00da:
	{
		int32_t L_50 = V_3;
		V_8 = L_50;
		int32_t L_51 = V_3;
		V_9 = L_51;
		goto IL_0158;
	}

IL_00e2:
	{
		String_t* L_52 = ___s0;
		int32_t L_53 = V_8;
		NullCheck(L_52);
		Il2CppChar L_54;
		L_54 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_52, L_53, NULL);
		V_10 = L_54;
		Il2CppChar L_55 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_56 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((((int32_t)L_55) == ((int32_t)L_56)))
		{
			goto IL_010c;
		}
	}
	{
		Il2CppChar L_57 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_58 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_57) == ((int32_t)L_58)))
		{
			goto IL_010c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59 = V_5;
		int32_t L_60 = V_9;
		int32_t L_61 = L_60;
		V_9 = ((int32_t)il2cpp_codegen_add(L_61, 1));
		Il2CppChar L_62 = V_10;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (Il2CppChar)L_62);
		goto IL_0152;
	}

IL_010c:
	{
		int32_t L_63 = V_9;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_64 = V_5;
		NullCheck(L_64);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_63, 1))) == ((int32_t)((int32_t)(((RuntimeArray*)L_64)->max_length)))))
		{
			goto IL_0152;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_65 = V_5;
		int32_t L_66 = V_9;
		int32_t L_67 = L_66;
		V_9 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_68 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (Il2CppChar)L_68);
		goto IL_014b;
	}

IL_0127:
	{
		String_t* L_69 = ___s0;
		int32_t L_70 = V_8;
		NullCheck(L_69);
		Il2CppChar L_71;
		L_71 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_69, ((int32_t)il2cpp_codegen_add(L_70, 1)), NULL);
		V_10 = L_71;
		Il2CppChar L_72 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_73 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((((int32_t)L_72) == ((int32_t)L_73)))
		{
			goto IL_0145;
		}
	}
	{
		Il2CppChar L_74 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_75 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		if ((!(((uint32_t)L_74) == ((uint32_t)L_75))))
		{
			goto IL_0152;
		}
	}

IL_0145:
	{
		int32_t L_76 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_014b:
	{
		int32_t L_77 = V_8;
		int32_t L_78 = V_0;
		if ((((int32_t)L_77) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_78, 1)))))
		{
			goto IL_0127;
		}
	}

IL_0152:
	{
		int32_t L_79 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_0158:
	{
		int32_t L_80 = V_8;
		int32_t L_81 = V_0;
		if ((((int32_t)L_80) >= ((int32_t)L_81)))
		{
			goto IL_0168;
		}
	}
	{
		int32_t L_82 = V_9;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_83 = V_5;
		NullCheck(L_83);
		if ((((int32_t)L_82) < ((int32_t)((int32_t)(((RuntimeArray*)L_83)->max_length)))))
		{
			goto IL_00e2;
		}
	}

IL_0168:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_84 = V_5;
		String_t* L_85;
		L_85 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_84, NULL);
		return L_85;
	}
}
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___path0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3AB4D2B45A34EA3A9E2747A578958B56872E44B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C_RuntimeMethod_var)));
	}

IL_0018:
	{
		String_t* L_4 = ___path0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_5 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Path_GetPathRoot_m6DDE2394DA53E1C4F4753406F0B48955DFF1E5EB(L_5, NULL);
		String_t* L_7 = ___path0;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (String_t*)NULL;
	}

IL_002b:
	{
		String_t* L_9 = ___path0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_9, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral252115912CA60CC88926239ECA0FAB133529A3C3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C_RuntimeMethod_var)));
	}

IL_0043:
	{
		String_t* L_13 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___InvalidPathChars_0;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = String_IndexOfAny_mC7AA4AE42B38667BDB9B214AA6230F322306CFF6(L_13, L_14, NULL);
		if ((((int32_t)L_15) <= ((int32_t)(-1))))
		{
			goto IL_005c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6481FC1636BEB597B430AECC275BB5A83EA4633B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C_RuntimeMethod_var)));
	}

IL_005c:
	{
		String_t* L_17 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___PathSeparatorChars_6;
		NullCheck(L_17);
		int32_t L_19;
		L_19 = String_LastIndexOfAny_m3A1F0D1FFE0F949789A425D25E0BEDB6D4F26BB4(L_17, L_18, NULL);
		V_0 = L_19;
		int32_t L_20 = V_0;
		if (L_20)
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_006f:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00ed;
		}
	}
	{
		String_t* L_23 = ___path0;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		String_t* L_25;
		L_25 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_23, 0, L_24, NULL);
		V_1 = L_25;
		String_t* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_26, NULL);
		V_2 = L_27;
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) < ((int32_t)2)))
		{
			goto IL_00b1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_29 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_30 = V_1;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		Il2CppChar L_32;
		L_32 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_30, ((int32_t)il2cpp_codegen_subtract(L_31, 1)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_33 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___VolumeSeparatorChar_5;
		if ((!(((uint32_t)L_32) == ((uint32_t)L_33))))
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_34 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_35;
		L_35 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2), NULL);
		String_t* L_36;
		L_36 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_34, L_35, NULL);
		return L_36;
	}

IL_00b1:
	{
		int32_t L_37 = V_2;
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_00e6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_38 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00e6;
		}
	}
	{
		String_t* L_39 = ___path0;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_39, NULL);
		if ((((int32_t)L_40) < ((int32_t)2)))
		{
			goto IL_00e6;
		}
	}
	{
		String_t* L_41 = ___path0;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		Il2CppChar L_43;
		L_43 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_41, L_42, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_44 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___VolumeSeparatorChar_5;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_00e6;
		}
	}
	{
		String_t* L_45 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_46;
		L_46 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___VolumeSeparatorChar_5), NULL);
		String_t* L_47;
		L_47 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_45, L_46, NULL);
		return L_47;
	}

IL_00e6:
	{
		String_t* L_48 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_49;
		L_49 = Path_CleanPath_mC359F720FD49EACE4B2B8A739139F85613C91B9A(L_48, NULL);
		return L_49;
	}

IL_00ed:
	{
		String_t* L_50 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_50;
	}
}
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_mEBC73E0C8D8C56214D1DA4BA8409C5B5F00457A5 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___path0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___path0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		String_t* L_3 = ___path0;
		return L_3;
	}

IL_000d:
	{
		String_t* L_4 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___InvalidPathChars_0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = String_IndexOfAny_mC7AA4AE42B38667BDB9B214AA6230F322306CFF6(L_4, L_5, NULL);
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD36F2A1E2D9C14B427558FDF2106B8A8B2702189)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_GetFileName_mEBC73E0C8D8C56214D1DA4BA8409C5B5F00457A5_RuntimeMethod_var)));
	}

IL_0026:
	{
		String_t* L_8 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___PathSeparatorChars_6;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = String_LastIndexOfAny_m3A1F0D1FFE0F949789A425D25E0BEDB6D4F26BB4(L_8, L_9, NULL);
		V_0 = L_10;
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_12 = ___path0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_12, ((int32_t)il2cpp_codegen_add(L_13, 1)), NULL);
		return L_14;
	}

IL_0040:
	{
		String_t* L_15 = ___path0;
		return L_15;
	}
}
// System.String System.IO.Path::GetFullPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFullPath_m17A1AD4E216D884E3DF3208BF44F4E40823BAA23 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_InsecureGetFullPath_mEC5058434A250282F37B367D212F0BCB530AD592(L_0, NULL);
		SecurityManager_EnsureElevatedPermissions_m7DBC4DC0657D1593766019B867E645D374E72D00(NULL);
		return L_1;
	}
}
// System.String System.IO.Path::GetFullPathInternal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFullPathInternal_m516C1A396E2EFDB63EA25415EFF8994404202806 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_InsecureGetFullPath_mEC5058434A250282F37B367D212F0BCB530AD592(L_0, NULL);
		return L_1;
	}
}
// System.Int32 System.IO.Path::GetFullPathName(System.String,System.Int32,System.Text.StringBuilder,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Path_GetFullPathName_mBA74382E7562781D204C71F5C8904850F84EDB81 (String_t* ___path0, int32_t ___numBufferChars1, StringBuilder_t* ___buffer2, intptr_t* ___lpFilePartOrNull3, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*, int32_t, Il2CppChar*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(int32_t) + sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Kernel32.dll"), "GetFullPathName", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___path0' to native representation
	Il2CppChar* ____path0_marshaled = NULL;
	if (___path0 != NULL)
	{
		____path0_marshaled = &___path0->____firstChar_5;
	}

	// Marshaling of parameter '___buffer2' to native representation
	Il2CppChar* ____buffer2_marshaled = NULL;
	____buffer2_marshaled = il2cpp_codegen_marshal_wstring_builder(___buffer2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetFullPathName)(____path0_marshaled, ___numBufferChars1, ____buffer2_marshaled, ___lpFilePartOrNull3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____path0_marshaled, ___numBufferChars1, ____buffer2_marshaled, ___lpFilePartOrNull3);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of parameter '___buffer2' back from native representation
	il2cpp_codegen_marshal_wstring_builder_result(___buffer2, ____buffer2_marshaled);

	// Marshaling cleanup of parameter '___buffer2' native representation
	il2cpp_codegen_marshal_free(____buffer2_marshaled);
	____buffer2_marshaled = NULL;

	return returnValue;
}
// System.String System.IO.Path::GetFullPathName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFullPathName_mC081C526B9439A93DCD9412655A3BC9CFDC71CC0 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)260), NULL);
		V_0 = L_0;
		V_1 = (0);
		String_t* L_1 = ___path0;
		StringBuilder_t* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Path_GetFullPathName_mBA74382E7562781D204C71F5C8904850F84EDB81(L_1, ((int32_t)260), L_2, (&V_1), NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (L_4)
		{
			goto IL_0040;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var)));
		int32_t L_5;
		L_5 = Marshal_GetLastWin32Error_m776667F265B8ABFFF13E3DD51B1BC5C2B5611F43(NULL);
		V_3 = L_5;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0F4BBBFA471C24196595235C87B3283075DB6F43)), L_6, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_8 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_GetFullPathName_mC081C526B9439A93DCD9412655A3BC9CFDC71CC0_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)260))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_10 = V_2;
		StringBuilder_t* L_11 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_11, L_10, NULL);
		V_0 = L_11;
		String_t* L_12 = ___path0;
		int32_t L_13 = V_2;
		StringBuilder_t* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = Path_GetFullPathName_mBA74382E7562781D204C71F5C8904850F84EDB81(L_12, L_13, L_14, (&V_1), NULL);
	}

IL_005a:
	{
		StringBuilder_t* L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		return L_17;
	}
}
// System.String System.IO.Path::WindowsDriveAdjustment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_WindowsDriveAdjustment_m014B3FED3090F2EC4301C0EFEE33A29A8FE9A505 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___path0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if ((((int32_t)L_1) >= ((int32_t)2)))
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_2 = ___path0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_4 = ___path0;
		NullCheck(L_4);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, 0, NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)92))))
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_6 = ___path0;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, 0, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		String_t* L_8;
		L_8 = Directory_GetCurrentDirectory_m7EA69F721BEEC05DC0FBF8E9189990BF9F856363(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Path_GetPathRoot_m6DDE2394DA53E1C4F4753406F0B48955DFF1E5EB(L_8, NULL);
		return L_9;
	}

IL_0033:
	{
		String_t* L_10 = ___path0;
		return L_10;
	}

IL_0035:
	{
		String_t* L_11 = ___path0;
		NullCheck(L_11);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, 1, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_13 = ___path0;
		NullCheck(L_13);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_13, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Char_IsLetter_m8AA5C1E0E24784F5B681E5A7DB6A28D11DC7E678(L_14, NULL);
		if (L_15)
		{
			goto IL_0050;
		}
	}

IL_004e:
	{
		String_t* L_16 = ___path0;
		return L_16;
	}

IL_0050:
	{
		String_t* L_17;
		L_17 = Directory_InsecureGetCurrentDirectory_mE70CBBC485163145FAA8B1274397E49460BDBAC5(NULL);
		V_0 = L_17;
		String_t* L_18 = ___path0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_18, NULL);
		if ((!(((uint32_t)L_19) == ((uint32_t)2))))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_20 = V_0;
		NullCheck(L_20);
		Il2CppChar L_21;
		L_21 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_20, 0, NULL);
		String_t* L_22 = ___path0;
		NullCheck(L_22);
		Il2CppChar L_23;
		L_23 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_22, 0, NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_23))))
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_24 = V_0;
		___path0 = L_24;
		goto IL_00cb;
	}

IL_0074:
	{
		String_t* L_25 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_26;
		L_26 = Path_GetFullPathName_mC081C526B9439A93DCD9412655A3BC9CFDC71CC0(L_25, NULL);
		___path0 = L_26;
		goto IL_00cb;
	}

IL_007e:
	{
		String_t* L_27 = ___path0;
		NullCheck(L_27);
		Il2CppChar L_28;
		L_28 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_27, 2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_29 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((((int32_t)L_28) == ((int32_t)L_29)))
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_30 = ___path0;
		NullCheck(L_30);
		Il2CppChar L_31;
		L_31 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_30, 2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_32 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_33 = V_0;
		NullCheck(L_33);
		Il2CppChar L_34;
		L_34 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_33, 0, NULL);
		String_t* L_35 = ___path0;
		NullCheck(L_35);
		Il2CppChar L_36;
		L_36 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_35, 0, NULL);
		if ((!(((uint32_t)L_34) == ((uint32_t)L_36))))
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_37 = V_0;
		String_t* L_38 = ___path0;
		String_t* L_39 = ___path0;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_39, NULL);
		NullCheck(L_38);
		String_t* L_41;
		L_41 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_38, 2, ((int32_t)il2cpp_codegen_subtract(L_40, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_42;
		L_42 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_37, L_41, NULL);
		___path0 = L_42;
		goto IL_00cb;
	}

IL_00c3:
	{
		String_t* L_43 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_44;
		L_44 = Path_GetFullPathName_mC081C526B9439A93DCD9412655A3BC9CFDC71CC0(L_43, NULL);
		___path0 = L_44;
	}

IL_00cb:
	{
		String_t* L_45 = ___path0;
		return L_45;
	}
}
// System.String System.IO.Path::InsecureGetFullPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_InsecureGetFullPath_mEC5058434A250282F37B367D212F0BCB530AD592 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	{
		String_t* L_0 = ___path0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_InsecureGetFullPath_mEC5058434A250282F37B367D212F0BCB530AD592_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___path0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_5;
		L_5 = Locale_GetText_mB5E9ECC1E9AAA230D967810285D49F3A0BCD99D6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3C8D23C90C9F01C333960195D4396A9F37637CD)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_InsecureGetFullPath_mEC5058434A250282F37B367D212F0BCB530AD592_RuntimeMethod_var)));
	}

IL_002b:
	{
		bool L_7;
		L_7 = Environment_get_IsRunningOnWindows_m3C4708D3BDAA9ABB6FCCEE446FD58B36A54F31F8(NULL);
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_8 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Path_WindowsDriveAdjustment_m014B3FED3090F2EC4301C0EFEE33A29A8FE9A505(L_8, NULL);
		___path0 = L_9;
	}

IL_003a:
	{
		String_t* L_10 = ___path0;
		String_t* L_11 = ___path0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		NullCheck(L_10);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), NULL);
		V_0 = L_13;
		V_1 = (bool)1;
		String_t* L_14 = ___path0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		if ((((int32_t)L_15) < ((int32_t)2)))
		{
			goto IL_00bd;
		}
	}
	{
		String_t* L_16 = ___path0;
		NullCheck(L_16);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_16, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_17, NULL);
		if (!L_18)
		{
			goto IL_00bd;
		}
	}
	{
		String_t* L_19 = ___path0;
		NullCheck(L_19);
		Il2CppChar L_20;
		L_20 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_19, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_20, NULL);
		if (!L_21)
		{
			goto IL_00bd;
		}
	}
	{
		String_t* L_22 = ___path0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_22, NULL);
		if ((((int32_t)L_23) == ((int32_t)2)))
		{
			goto IL_008a;
		}
	}
	{
		String_t* L_24 = ___path0;
		String_t* L_25 = ___path0;
		NullCheck(L_25);
		Il2CppChar L_26;
		L_26 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_25, 0, NULL);
		NullCheck(L_24);
		int32_t L_27;
		L_27 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_24, L_26, 2, NULL);
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_0095;
		}
	}

IL_008a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_28 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0D89B88FC94E8CC19BCE749B99496598C24D30F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_InsecureGetFullPath_mEC5058434A250282F37B367D212F0BCB530AD592_RuntimeMethod_var)));
	}

IL_0095:
	{
		String_t* L_29 = ___path0;
		NullCheck(L_29);
		Il2CppChar L_30;
		L_30 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_29, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_31 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((((int32_t)L_30) == ((int32_t)L_31)))
		{
			goto IL_01d8;
		}
	}
	{
		String_t* L_32 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_33 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		Il2CppChar L_34 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		NullCheck(L_32);
		String_t* L_35;
		L_35 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_32, L_33, L_34, NULL);
		___path0 = L_35;
		goto IL_01d8;
	}

IL_00bd:
	{
		String_t* L_36 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Path_IsPathRooted_m3B275F519FBDF73A7667387F6FAC8F1CEC9DFF0E(L_36, NULL);
		if (L_37)
		{
			goto IL_0158;
		}
	}
	{
		bool L_38;
		L_38 = Environment_get_IsRunningOnWindows_m3C4708D3BDAA9ABB6FCCEE446FD58B36A54F31F8(NULL);
		if (L_38)
		{
			goto IL_0117;
		}
	}
	{
		V_4 = 0;
		goto IL_0101;
	}

IL_00d4:
	{
		int32_t L_39 = V_4;
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		V_4 = L_40;
		String_t* L_41 = ___path0;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_41, NULL);
		if ((((int32_t)L_40) == ((int32_t)L_42)))
		{
			goto IL_0111;
		}
	}
	{
		String_t* L_43 = ___path0;
		int32_t L_44 = V_4;
		NullCheck(L_43);
		Il2CppChar L_45;
		L_45 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_43, L_44, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_46 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((((int32_t)L_45) == ((int32_t)L_46)))
		{
			goto IL_0111;
		}
	}
	{
		String_t* L_47 = ___path0;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Il2CppChar L_49;
		L_49 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_47, L_48, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_50 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_49) == ((int32_t)L_50)))
		{
			goto IL_0111;
		}
	}

IL_0101:
	{
		String_t* L_51 = ___path0;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		int32_t L_53;
		L_53 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_51, ((int32_t)46), L_52, NULL);
		int32_t L_54 = L_53;
		V_4 = L_54;
		if ((!(((uint32_t)L_54) == ((uint32_t)(-1)))))
		{
			goto IL_00d4;
		}
	}

IL_0111:
	{
		int32_t L_55 = V_4;
		V_1 = (bool)((((int32_t)L_55) > ((int32_t)0))? 1 : 0);
	}

IL_0117:
	{
		String_t* L_56;
		L_56 = Directory_InsecureGetCurrentDirectory_mE70CBBC485163145FAA8B1274397E49460BDBAC5(NULL);
		V_3 = L_56;
		String_t* L_57 = V_3;
		String_t* L_58 = V_3;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_58, NULL);
		NullCheck(L_57);
		Il2CppChar L_60;
		L_60 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_57, ((int32_t)il2cpp_codegen_subtract(L_59, 1)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_61 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_60) == ((uint32_t)L_61))))
		{
			goto IL_0140;
		}
	}
	{
		String_t* L_62 = V_3;
		String_t* L_63 = ___path0;
		String_t* L_64;
		L_64 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_62, L_63, NULL);
		___path0 = L_64;
		goto IL_01d8;
	}

IL_0140:
	{
		String_t* L_65 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_66;
		L_66 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2), NULL);
		String_t* L_67 = ___path0;
		String_t* L_68;
		L_68 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_65, L_66, L_67, NULL);
		___path0 = L_68;
		goto IL_01d8;
	}

IL_0158:
	{
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_69 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_69) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_01d8;
		}
	}
	{
		String_t* L_70 = ___path0;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_70, NULL);
		if ((((int32_t)L_71) < ((int32_t)2)))
		{
			goto IL_01d8;
		}
	}
	{
		String_t* L_72 = ___path0;
		NullCheck(L_72);
		Il2CppChar L_73;
		L_73 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_72, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_73, NULL);
		if (!L_74)
		{
			goto IL_01d8;
		}
	}
	{
		String_t* L_75 = ___path0;
		NullCheck(L_75);
		Il2CppChar L_76;
		L_76 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_75, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_77;
		L_77 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_76, NULL);
		if (L_77)
		{
			goto IL_01d8;
		}
	}
	{
		String_t* L_78;
		L_78 = Directory_InsecureGetCurrentDirectory_mE70CBBC485163145FAA8B1274397E49460BDBAC5(NULL);
		V_5 = L_78;
		String_t* L_79 = V_5;
		NullCheck(L_79);
		Il2CppChar L_80;
		L_80 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_79, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_81 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___VolumeSeparatorChar_5;
		if ((!(((uint32_t)L_80) == ((uint32_t)L_81))))
		{
			goto IL_01af;
		}
	}
	{
		String_t* L_82 = V_5;
		NullCheck(L_82);
		String_t* L_83;
		L_83 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_82, 0, 2, NULL);
		String_t* L_84 = ___path0;
		String_t* L_85;
		L_85 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_83, L_84, NULL);
		___path0 = L_85;
		goto IL_01d8;
	}

IL_01af:
	{
		String_t* L_86 = V_5;
		String_t* L_87 = V_5;
		String_t* L_88 = V_5;
		String_t* L_89 = V_5;
		NullCheck(L_89);
		int32_t L_90;
		L_90 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_89, NULL);
		NullCheck(L_88);
		int32_t L_91;
		L_91 = String_IndexOfUnchecked_mFADA04D6FCED11D71D76C4D91BA9A2CD3692E389(L_88, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, 0, L_90, NULL);
		NullCheck(L_87);
		int32_t L_92;
		L_92 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_87, ((int32_t)92), ((int32_t)il2cpp_codegen_add(L_91, 1)), NULL);
		NullCheck(L_86);
		String_t* L_93;
		L_93 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_86, 0, L_92, NULL);
		___path0 = L_93;
	}

IL_01d8:
	{
		bool L_94 = V_1;
		if (!L_94)
		{
			goto IL_01e3;
		}
	}
	{
		String_t* L_95 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_96;
		L_96 = Path_CanonicalizePath_mB665AB00F1D6CE61F99B92AA2F0F2DD4DF5CB989(L_95, NULL);
		___path0 = L_96;
	}

IL_01e3:
	{
		Il2CppChar L_97 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_98;
		L_98 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_97, NULL);
		if (!L_98)
		{
			goto IL_0212;
		}
	}
	{
		String_t* L_99 = ___path0;
		String_t* L_100 = ___path0;
		NullCheck(L_100);
		int32_t L_101;
		L_101 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_100, NULL);
		NullCheck(L_99);
		Il2CppChar L_102;
		L_102 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_99, ((int32_t)il2cpp_codegen_subtract(L_101, 1)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_103 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((((int32_t)L_102) == ((int32_t)L_103)))
		{
			goto IL_0212;
		}
	}
	{
		String_t* L_104 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_105;
		L_105 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2), NULL);
		String_t* L_106;
		L_106 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_104, L_105, NULL);
		___path0 = L_106;
	}

IL_0212:
	{
		String_t* L_107 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		bool L_108;
		L_108 = MonoIO_RemapPath_mF901263DD105B28F8BFAA96337A3789248AB1C00(L_107, (&V_2), NULL);
		if (!L_108)
		{
			goto IL_021f;
		}
	}
	{
		String_t* L_109 = V_2;
		___path0 = L_109;
	}

IL_021f:
	{
		String_t* L_110 = ___path0;
		return L_110;
	}
}
// System.Boolean System.IO.Path::IsDirectorySeparator(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7 (Il2CppChar ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_1 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_3 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		return (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
	}

IL_0011:
	{
		return (bool)1;
	}
}
// System.String System.IO.Path::GetPathRoot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetPathRoot_m6DDE2394DA53E1C4F4753406F0B48955DFF1E5EB (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___path0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___path0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB5E709D03D17E89AB189BBD7D746E0EFCDCA9798)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_GetPathRoot_m6DDE2394DA53E1C4F4753406F0B48955DFF1E5EB_RuntimeMethod_var)));
	}

IL_001d:
	{
		String_t* L_5 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Path_IsPathRooted_m3B275F519FBDF73A7667387F6FAC8F1CEC9DFF0E(L_5, NULL);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_7;
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_8 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_9 = ___path0;
		NullCheck(L_9);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_10, NULL);
		if (L_11)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_12;
	}

IL_0048:
	{
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_13 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorStr_4;
		return L_13;
	}

IL_004e:
	{
		V_0 = 2;
		String_t* L_14 = ___path0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_16 = ___path0;
		NullCheck(L_16);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_16, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_17, NULL);
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_19 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorStr_4;
		return L_19;
	}

IL_006d:
	{
		String_t* L_20 = ___path0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_20, NULL);
		if ((((int32_t)L_21) >= ((int32_t)2)))
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_22 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_22;
	}

IL_007c:
	{
		String_t* L_23 = ___path0;
		NullCheck(L_23);
		Il2CppChar L_24;
		L_24 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_24, NULL);
		if (!L_25)
		{
			goto IL_0108;
		}
	}
	{
		String_t* L_26 = ___path0;
		NullCheck(L_26);
		Il2CppChar L_27;
		L_27 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_26, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_27, NULL);
		if (!L_28)
		{
			goto IL_0108;
		}
	}
	{
		goto IL_009e;
	}

IL_009a:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_009e:
	{
		int32_t L_30 = V_0;
		String_t* L_31 = ___path0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_31, NULL);
		if ((((int32_t)L_30) >= ((int32_t)L_32)))
		{
			goto IL_00b5;
		}
	}
	{
		String_t* L_33 = ___path0;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		Il2CppChar L_35;
		L_35 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_33, L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_35, NULL);
		if (!L_36)
		{
			goto IL_009a;
		}
	}

IL_00b5:
	{
		int32_t L_37 = V_0;
		String_t* L_38 = ___path0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_38, NULL);
		if ((((int32_t)L_37) >= ((int32_t)L_39)))
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		goto IL_00c8;
	}

IL_00c4:
	{
		int32_t L_41 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00c8:
	{
		int32_t L_42 = V_0;
		String_t* L_43 = ___path0;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_43, NULL);
		if ((((int32_t)L_42) >= ((int32_t)L_44)))
		{
			goto IL_00df;
		}
	}
	{
		String_t* L_45 = ___path0;
		int32_t L_46 = V_0;
		NullCheck(L_45);
		Il2CppChar L_47;
		L_47 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_45, L_46, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_47, NULL);
		if (!L_48)
		{
			goto IL_00c4;
		}
	}

IL_00df:
	{
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_49 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorStr_4;
		String_t* L_50 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorStr_4;
		String_t* L_51 = ___path0;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		String_t* L_53;
		L_53 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_51, 2, ((int32_t)il2cpp_codegen_subtract(L_52, 2)), NULL);
		Il2CppChar L_54 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		Il2CppChar L_55 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		NullCheck(L_53);
		String_t* L_56;
		L_56 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_53, L_54, L_55, NULL);
		String_t* L_57;
		L_57 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_49, L_50, L_56, NULL);
		return L_57;
	}

IL_0108:
	{
		String_t* L_58 = ___path0;
		NullCheck(L_58);
		Il2CppChar L_59;
		L_59 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_58, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_60;
		L_60 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_59, NULL);
		if (!L_60)
		{
			goto IL_011c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_61 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorStr_4;
		return L_61;
	}

IL_011c:
	{
		String_t* L_62 = ___path0;
		NullCheck(L_62);
		Il2CppChar L_63;
		L_63 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_62, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_64 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___VolumeSeparatorChar_5;
		if ((!(((uint32_t)L_63) == ((uint32_t)L_64))))
		{
			goto IL_0147;
		}
	}
	{
		String_t* L_65 = ___path0;
		NullCheck(L_65);
		int32_t L_66;
		L_66 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_65, NULL);
		if ((((int32_t)L_66) < ((int32_t)3)))
		{
			goto IL_0154;
		}
	}
	{
		String_t* L_67 = ___path0;
		NullCheck(L_67);
		Il2CppChar L_68;
		L_68 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_67, 2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_68, NULL);
		if (!L_69)
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_70 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0154;
	}

IL_0147:
	{
		String_t* L_71;
		L_71 = Directory_GetCurrentDirectory_m7EA69F721BEEC05DC0FBF8E9189990BF9F856363(NULL);
		NullCheck(L_71);
		String_t* L_72;
		L_72 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_71, 0, 2, NULL);
		return L_72;
	}

IL_0154:
	{
		String_t* L_73 = ___path0;
		int32_t L_74 = V_0;
		NullCheck(L_73);
		String_t* L_75;
		L_75 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_73, 0, L_74, NULL);
		return L_75;
	}
}
// System.String System.IO.Path::GetTempPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetTempPath_mDA8E37E0E953CA9E70CD0953777615F2C2FFA3B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		SecurityManager_EnsureElevatedPermissions_m7DBC4DC0657D1593766019B867E645D374E72D00(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Path_get_temp_path_mDF1B882105F66D67EDC934537AD690C322B78E21(NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_3 = V_0;
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		NullCheck(L_3);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_7 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2), NULL);
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_8, L_9, NULL);
		return L_10;
	}

IL_003a:
	{
		String_t* L_11 = V_0;
		return L_11;
	}
}
// System.String System.IO.Path::get_temp_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_get_temp_path_mDF1B882105F66D67EDC934537AD690C322B78E21 (const RuntimeMethod* method) 
{
	typedef String_t* (*Path_get_temp_path_mDF1B882105F66D67EDC934537AD690C322B78E21_ftn) ();
	using namespace il2cpp::icalls;
	return ((Path_get_temp_path_mDF1B882105F66D67EDC934537AD690C322B78E21_ftn)mscorlib::System::IO::Path::get_temp_path) ();
}
// System.Boolean System.IO.Path::IsPathRooted(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Path_IsPathRooted_m419E334FD990E531F7B2CC0A65E5C1DEC8BEF794 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___path0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		Il2CppChar* L_1;
		L_1 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___path0))->____pointer_0))->value, (0), ((&___path0))->____length_1);
		int32_t L_2 = *((uint16_t*)L_1);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_4 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0049;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_6 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0049;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_7 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___dirEqualsVolume_7;
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8;
		L_8 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___path0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		Il2CppChar* L_9;
		L_9 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___path0))->____pointer_0))->value, (1), ((&___path0))->____length_1);
		int32_t L_10 = *((uint16_t*)L_9);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_11 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___VolumeSeparatorChar_5;
		return (bool)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0);
	}

IL_0047:
	{
		return (bool)0;
	}

IL_0049:
	{
		return (bool)1;
	}
}
// System.Boolean System.IO.Path::IsPathRooted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Path_IsPathRooted_m3B275F519FBDF73A7667387F6FAC8F1CEC9DFF0E (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___path0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		String_t* L_3 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___InvalidPathChars_0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = String_IndexOfAny_mC7AA4AE42B38667BDB9B214AA6230F322306CFF6(L_3, L_4, NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD36F2A1E2D9C14B427558FDF2106B8A8B2702189)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_IsPathRooted_m3B275F519FBDF73A7667387F6FAC8F1CEC9DFF0E_RuntimeMethod_var)));
	}

IL_0026:
	{
		String_t* L_7 = ___path0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8;
		L_8 = MemoryExtensions_AsSpan_m738C019A02A3B4B8BFEACFFA013409898B81D4FB_inline(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Path_IsPathRooted_m419E334FD990E531F7B2CC0A65E5C1DEC8BEF794(L_8, NULL);
		return L_9;
	}
}
// System.Char[] System.IO.Path::GetInvalidPathChars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Path_GetInvalidPathChars_m771E6754D2B0E556D0363B0F4C21A500D820E6DD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____510FDFA4743E58DD45DCDD7CB4F8509BF6294CC1D1D4958CA30A9E7604973006_22_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Environment_get_IsRunningOnWindows_m3C4708D3BDAA9ABB6FCCEE446FD58B36A54F31F8(NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)36));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____510FDFA4743E58DD45DCDD7CB4F8509BF6294CC1D1D4958CA30A9E7604973006_22_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_2, L_3, NULL);
		return L_2;
	}

IL_001a:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		return L_4;
	}
}
// System.Void System.IO.Path::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path__cctor_m30ED3A33541E2EB4D4BE0FC15109E97AAC79FBCD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____C95D810E738DB5F591EE691CE884EED2F110D9F82B1F7A8BE6ED257FDF4CDBEB_63_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)8);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____C95D810E738DB5F591EE691CE884EED2F110D9F82B1F7A8BE6ED257FDF4CDBEB_63_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___trimEndCharsWindows_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___trimEndCharsWindows_8), (void*)L_1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)0);
		((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___trimEndCharsUnix_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___trimEndCharsUnix_9), (void*)L_3);
		il2cpp_codegen_runtime_class_init_inline(MonoIO_t4111700E5C2D38E1B55C916719E4CB725CBE5FC7_il2cpp_TypeInfo_var);
		Il2CppChar L_4;
		L_4 = MonoIO_get_VolumeSeparatorChar_m62746C64329B7051BA531069FE7380352184C28A(NULL);
		((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___VolumeSeparatorChar_5 = L_4;
		Il2CppChar L_5;
		L_5 = MonoIO_get_DirectorySeparatorChar_m6E78F519C72DE6B42D1A33FE6142A699CCF62CA0(NULL);
		((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2 = L_5;
		Il2CppChar L_6;
		L_6 = MonoIO_get_AltDirectorySeparatorChar_m17C1075AF7427FFCB8D916ACD6510675B85801D5(NULL);
		((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1 = L_6;
		Il2CppChar L_7;
		L_7 = MonoIO_get_PathSeparator_mD5ECF2C45AF5B456F7D8A96B90A6DAABF29FD4A5(NULL);
		((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___PathSeparator_3 = L_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8;
		L_8 = Path_GetInvalidPathChars_m771E6754D2B0E556D0363B0F4C21A500D820E6DD(NULL);
		((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___InvalidPathChars_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___InvalidPathChars_0), (void*)L_8);
		String_t* L_9;
		L_9 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2), NULL);
		((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorStr_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorStr_4), (void*)L_9);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)3);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = L_10;
		Il2CppChar L_12 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_12);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = L_11;
		Il2CppChar L_14 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)L_14);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = L_13;
		Il2CppChar L_16 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___VolumeSeparatorChar_5;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppChar)L_16);
		((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___PathSeparatorChars_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___PathSeparatorChars_6), (void*)L_15);
		Il2CppChar L_17 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		Il2CppChar L_18 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___VolumeSeparatorChar_5;
		((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___dirEqualsVolume_7 = (bool)((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0);
		return;
	}
}
// System.String System.IO.Path::GetServerAndShare(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetServerAndShare_m23BF13411CF8F20DA1AFE0FFAD4534799258C1FC (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 2;
		goto IL_0008;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		String_t* L_2 = ___path0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_4 = ___path0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_6, NULL);
		if (!L_7)
		{
			goto IL_0004;
		}
	}

IL_001f:
	{
		int32_t L_8 = V_0;
		String_t* L_9 = ___path0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		goto IL_0032;
	}

IL_002e:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0032:
	{
		int32_t L_13 = V_0;
		String_t* L_14 = ___path0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_16 = ___path0;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		Il2CppChar L_18;
		L_18 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_16, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_18, NULL);
		if (!L_19)
		{
			goto IL_002e;
		}
	}

IL_0049:
	{
		String_t* L_20 = ___path0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		String_t* L_22;
		L_22 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_20, 2, ((int32_t)il2cpp_codegen_subtract(L_21, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_23 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		Il2CppChar L_24 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		NullCheck(L_22);
		String_t* L_25;
		L_25 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_22, L_23, L_24, NULL);
		return L_25;
	}
}
// System.Boolean System.IO.Path::SameRoot(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Path_SameRoot_m8237DEFE6670D349256DA0A45978F991201F9565 (String_t* ___root0, String_t* ___path1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	{
		String_t* L_0 = ___root0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___path1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		return (bool)0;
	}

IL_0014:
	{
		String_t* L_4 = ___root0;
		NullCheck(L_4);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_5, NULL);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_7 = ___root0;
		NullCheck(L_7);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_8, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_10 = ___path1;
		NullCheck(L_10);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_11, NULL);
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = ___path1;
		NullCheck(L_13);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_13, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_14, NULL);
		if (L_15)
		{
			goto IL_004e;
		}
	}

IL_004c:
	{
		return (bool)0;
	}

IL_004e:
	{
		String_t* L_16 = ___root0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = Path_GetServerAndShare_m23BF13411CF8F20DA1AFE0FFAD4534799258C1FC(L_16, NULL);
		String_t* L_18 = ___path1;
		String_t* L_19;
		L_19 = Path_GetServerAndShare_m23BF13411CF8F20DA1AFE0FFAD4534799258C1FC(L_18, NULL);
		V_0 = L_19;
		String_t* L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_21;
		L_21 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		int32_t L_22;
		L_22 = String_Compare_mCC9D98D7951772D5A6D2B1019F4077331C90E8C7(L_17, L_20, (bool)1, L_21, NULL);
		return (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
	}

IL_006b:
	{
		String_t* L_23 = ___root0;
		NullCheck(L_23);
		Il2CppChar L_24;
		L_24 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, 0, NULL);
		V_1 = L_24;
		String_t* L_25 = ___path1;
		NullCheck(L_25);
		Il2CppChar L_26;
		L_26 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_25, 0, NULL);
		bool L_27;
		L_27 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&V_1), L_26, NULL);
		if (L_27)
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0085:
	{
		String_t* L_28 = ___path1;
		NullCheck(L_28);
		Il2CppChar L_29;
		L_29 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_28, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_30 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___VolumeSeparatorChar_5;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_0095;
		}
	}
	{
		return (bool)0;
	}

IL_0095:
	{
		String_t* L_31 = ___root0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_31, NULL);
		if ((((int32_t)L_32) <= ((int32_t)2)))
		{
			goto IL_00c4;
		}
	}
	{
		String_t* L_33 = ___path1;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_33, NULL);
		if ((((int32_t)L_34) <= ((int32_t)2)))
		{
			goto IL_00c4;
		}
	}
	{
		String_t* L_35 = ___root0;
		NullCheck(L_35);
		Il2CppChar L_36;
		L_36 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_35, 2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_36, NULL);
		if (!L_37)
		{
			goto IL_00c2;
		}
	}
	{
		String_t* L_38 = ___path1;
		NullCheck(L_38);
		Il2CppChar L_39;
		L_39 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_38, 2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_39, NULL);
		return L_40;
	}

IL_00c2:
	{
		return (bool)0;
	}

IL_00c4:
	{
		return (bool)1;
	}
}
// System.String System.IO.Path::CanonicalizePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_CanonicalizePath_mB665AB00F1D6CE61F99B92AA2F0F2DD4DF5CB989 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	{
		String_t* L_0 = ___path0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		String_t* L_1 = ___path0;
		return L_1;
	}

IL_0005:
	{
		bool L_2;
		L_2 = Environment_get_IsRunningOnWindows_m3C4708D3BDAA9ABB6FCCEE446FD58B36A54F31F8(NULL);
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_3 = ___path0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_3, NULL);
		___path0 = L_4;
	}

IL_0014:
	{
		String_t* L_5 = ___path0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_7 = ___path0;
		return L_7;
	}

IL_001e:
	{
		String_t* L_8 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Path_GetPathRoot_m6DDE2394DA53E1C4F4753406F0B48955DFF1E5EB(L_8, NULL);
		V_0 = L_9;
		String_t* L_10 = ___path0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = L_11;
		Il2CppChar L_13 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_13);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = L_12;
		Il2CppChar L_15 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)L_15);
		NullCheck(L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16;
		L_16 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_10, L_14, NULL);
		V_1 = L_16;
		V_2 = 0;
		bool L_17;
		L_17 = Environment_get_IsRunningOnWindows_m3C4708D3BDAA9ABB6FCCEE446FD58B36A54F31F8(NULL);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_18, NULL);
		if ((((int32_t)L_19) <= ((int32_t)2)))
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_20 = V_0;
		NullCheck(L_20);
		Il2CppChar L_21;
		L_21 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_20, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_21, NULL);
		if (!L_22)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_23 = V_0;
		NullCheck(L_23);
		Il2CppChar L_24;
		L_24 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_24, NULL);
		G_B11_0 = ((int32_t)(L_25));
		goto IL_0071;
	}

IL_0070:
	{
		G_B11_0 = 0;
	}

IL_0071:
	{
		V_3 = (bool)G_B11_0;
		bool L_26 = V_3;
		if (L_26)
		{
			goto IL_0078;
		}
	}
	{
		G_B14_0 = 0;
		goto IL_0079;
	}

IL_0078:
	{
		G_B14_0 = 3;
	}

IL_0079:
	{
		V_4 = G_B14_0;
		V_5 = 0;
		goto IL_00e7;
	}

IL_0080:
	{
		bool L_27;
		L_27 = Environment_get_IsRunningOnWindows_m3C4708D3BDAA9ABB6FCCEE446FD58B36A54F31F8(NULL);
		if (!L_27)
		{
			goto IL_0094;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_1;
		int32_t L_29 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = V_1;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		String_t* L_34;
		L_34 = String_TrimEnd_m25B1EA658EE07ADFED51FED61D630E5625336AB5(L_33, NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_34);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (String_t*)L_34);
	}

IL_0094:
	{
		bool L_35 = V_3;
		if (!L_35)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_36 = V_5;
		if ((((int32_t)L_36) == ((int32_t)2)))
		{
			goto IL_00ac;
		}
	}

IL_009c:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = V_1;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		String_t* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		if (L_41)
		{
			goto IL_00e1;
		}
	}

IL_00ac:
	{
		int32_t L_42 = V_5;
		if (!L_42)
		{
			goto IL_00bb;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = V_1;
		int32_t L_44 = V_5;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		String_t* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		if (!L_47)
		{
			goto IL_00e1;
		}
	}

IL_00bb:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = V_1;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		String_t* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		bool L_52;
		L_52 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_51, _stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F, NULL);
		if (!L_52)
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_53 = V_2;
		int32_t L_54 = V_4;
		if ((((int32_t)L_53) <= ((int32_t)L_54)))
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_55 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
		goto IL_00e1;
	}

IL_00d6:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = V_1;
		int32_t L_57 = V_2;
		int32_t L_58 = L_57;
		V_2 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59 = V_1;
		int32_t L_60 = V_5;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		String_t* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_62);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (String_t*)L_62);
	}

IL_00e1:
	{
		int32_t L_63 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_00e7:
	{
		int32_t L_64 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = V_1;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_66 = V_2;
		if (!L_66)
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_67 = V_2;
		if ((!(((uint32_t)L_67) == ((uint32_t)1))))
		{
			goto IL_0106;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = V_1;
		NullCheck(L_68);
		int32_t L_69 = 0;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		bool L_71;
		L_71 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_70, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_71)
		{
			goto IL_0106;
		}
	}

IL_0104:
	{
		String_t* L_72 = V_0;
		return L_72;
	}

IL_0106:
	{
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_73 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorStr_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = V_1;
		int32_t L_75 = V_2;
		String_t* L_76;
		L_76 = String_Join_m9FD21210E351374C67CD671692B866CA6B02E3EF(L_73, L_74, 0, L_75, NULL);
		V_6 = L_76;
		bool L_77;
		L_77 = Environment_get_IsRunningOnWindows_m3C4708D3BDAA9ABB6FCCEE446FD58B36A54F31F8(NULL);
		if (!L_77)
		{
			goto IL_0226;
		}
	}
	{
		bool L_78 = V_3;
		if (!L_78)
		{
			goto IL_0130;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_79 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorStr_4;
		String_t* L_80 = V_6;
		String_t* L_81;
		L_81 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_79, L_80, NULL);
		V_6 = L_81;
	}

IL_0130:
	{
		String_t* L_82 = V_0;
		String_t* L_83 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_84;
		L_84 = Path_SameRoot_m8237DEFE6670D349256DA0A45978F991201F9565(L_82, L_83, NULL);
		if (L_84)
		{
			goto IL_0144;
		}
	}
	{
		String_t* L_85 = V_0;
		String_t* L_86 = V_6;
		String_t* L_87;
		L_87 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_85, L_86, NULL);
		V_6 = L_87;
	}

IL_0144:
	{
		bool L_88 = V_3;
		if (!L_88)
		{
			goto IL_014a;
		}
	}
	{
		String_t* L_89 = V_6;
		return L_89;
	}

IL_014a:
	{
		String_t* L_90 = ___path0;
		NullCheck(L_90);
		Il2CppChar L_91;
		L_91 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_90, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_92;
		L_92 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_91, NULL);
		if (L_92)
		{
			goto IL_018f;
		}
	}
	{
		String_t* L_93 = V_0;
		String_t* L_94 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_95;
		L_95 = Path_SameRoot_m8237DEFE6670D349256DA0A45978F991201F9565(L_93, L_94, NULL);
		if (!L_95)
		{
			goto IL_018f;
		}
	}
	{
		String_t* L_96 = V_6;
		NullCheck(L_96);
		int32_t L_97;
		L_97 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_96, NULL);
		if ((((int32_t)L_97) > ((int32_t)2)))
		{
			goto IL_018c;
		}
	}
	{
		String_t* L_98 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_99 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorStr_4;
		NullCheck(L_98);
		bool L_100;
		L_100 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_98, L_99, NULL);
		if (L_100)
		{
			goto IL_018c;
		}
	}
	{
		String_t* L_101 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_102;
		L_102 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2), NULL);
		String_t* L_103;
		L_103 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_101, L_102, NULL);
		V_6 = L_103;
	}

IL_018c:
	{
		String_t* L_104 = V_6;
		return L_104;
	}

IL_018f:
	{
		String_t* L_105;
		L_105 = Directory_GetCurrentDirectory_m7EA69F721BEEC05DC0FBF8E9189990BF9F856363(NULL);
		V_7 = L_105;
		String_t* L_106 = V_7;
		NullCheck(L_106);
		int32_t L_107;
		L_107 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_106, NULL);
		if ((((int32_t)L_107) <= ((int32_t)1)))
		{
			goto IL_01e6;
		}
	}
	{
		String_t* L_108 = V_7;
		NullCheck(L_108);
		Il2CppChar L_109;
		L_109 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_108, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_110 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___VolumeSeparatorChar_5;
		if ((!(((uint32_t)L_109) == ((uint32_t)L_110))))
		{
			goto IL_01e6;
		}
	}
	{
		String_t* L_111 = V_6;
		NullCheck(L_111);
		int32_t L_112;
		L_112 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_111, NULL);
		if (!L_112)
		{
			goto IL_01c7;
		}
	}
	{
		String_t* L_113 = V_6;
		NullCheck(L_113);
		Il2CppChar L_114;
		L_114 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_113, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_115;
		L_115 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_114, NULL);
		if (!L_115)
		{
			goto IL_01d5;
		}
	}

IL_01c7:
	{
		String_t* L_116 = V_6;
		String_t* L_117;
		L_117 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_116, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, NULL);
		V_6 = L_117;
	}

IL_01d5:
	{
		String_t* L_118 = V_7;
		NullCheck(L_118);
		String_t* L_119;
		L_119 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_118, 0, 2, NULL);
		String_t* L_120 = V_6;
		String_t* L_121;
		L_121 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_119, L_120, NULL);
		return L_121;
	}

IL_01e6:
	{
		String_t* L_122 = V_7;
		String_t* L_123 = V_7;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_123, NULL);
		NullCheck(L_122);
		Il2CppChar L_125;
		L_125 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_122, ((int32_t)il2cpp_codegen_subtract(L_124, 1)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_126;
		L_126 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_125, NULL);
		if (!L_126)
		{
			goto IL_021c;
		}
	}
	{
		String_t* L_127 = V_6;
		NullCheck(L_127);
		Il2CppChar L_128;
		L_128 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_127, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_129;
		L_129 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_128, NULL);
		if (!L_129)
		{
			goto IL_021c;
		}
	}
	{
		String_t* L_130 = V_7;
		String_t* L_131 = V_6;
		NullCheck(L_131);
		String_t* L_132;
		L_132 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_131, 1, NULL);
		String_t* L_133;
		L_133 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_130, L_132, NULL);
		return L_133;
	}

IL_021c:
	{
		String_t* L_134 = V_7;
		String_t* L_135 = V_6;
		String_t* L_136;
		L_136 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_134, L_135, NULL);
		return L_136;
	}

IL_0226:
	{
		String_t* L_137 = V_0;
		bool L_138;
		L_138 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_137, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_138)
		{
			goto IL_0253;
		}
	}
	{
		String_t* L_139 = V_6;
		NullCheck(L_139);
		int32_t L_140;
		L_140 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_139, NULL);
		if ((((int32_t)L_140) <= ((int32_t)0)))
		{
			goto IL_0253;
		}
	}
	{
		String_t* L_141 = V_6;
		NullCheck(L_141);
		Il2CppChar L_142;
		L_142 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_141, 0, NULL);
		if ((((int32_t)L_142) == ((int32_t)((int32_t)47))))
		{
			goto IL_0253;
		}
	}
	{
		String_t* L_143 = V_0;
		String_t* L_144 = V_6;
		String_t* L_145;
		L_145 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_143, L_144, NULL);
		V_6 = L_145;
	}

IL_0253:
	{
		String_t* L_146 = V_6;
		return L_146;
	}
}
// System.String System.IO.Path::Combine(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m414B2D97688304C226B1828FFCD5A3AF5824D0EF (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	Il2CppChar V_7 = 0x0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___paths0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral02693BE56D23D49FBADB98D7AF6D95B6C888CA51)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_Combine_m414B2D97688304C226B1828FFCD5A3AF5824D0EF_RuntimeMethod_var)));
	}

IL_000e:
	{
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_2, NULL);
		V_1 = L_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___paths0;
		NullCheck(L_3);
		V_2 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		V_0 = (bool)0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___paths0;
		V_4 = L_4;
		V_5 = 0;
		goto IL_00d3;
	}

IL_0025:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_4;
		int32_t L_6 = V_5;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_6 = L_8;
		String_t* L_9 = V_6;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_10 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99C191933128F806168ECE83CFFE154EA7BD6485)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral02693BE56D23D49FBADB98D7AF6D95B6C888CA51)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_Combine_m414B2D97688304C226B1828FFCD5A3AF5824D0EF_RuntimeMethod_var)));
	}

IL_0040:
	{
		String_t* L_11 = V_6;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		if (!L_12)
		{
			goto IL_00cd;
		}
	}
	{
		String_t* L_13 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___InvalidPathChars_0;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = String_IndexOfAny_mC7AA4AE42B38667BDB9B214AA6230F322306CFF6(L_13, L_14, NULL);
		if ((((int32_t)L_15) == ((int32_t)(-1))))
		{
			goto IL_0066;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD36F2A1E2D9C14B427558FDF2106B8A8B2702189)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_Combine_m414B2D97688304C226B1828FFCD5A3AF5824D0EF_RuntimeMethod_var)));
	}

IL_0066:
	{
		bool L_17 = V_0;
		if (!L_17)
		{
			goto IL_0077;
		}
	}
	{
		V_0 = (bool)0;
		StringBuilder_t* L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_19 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorStr_4;
		NullCheck(L_18);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, L_19, NULL);
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		String_t* L_22 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Path_IsPathRooted_m3B275F519FBDF73A7667387F6FAC8F1CEC9DFF0E(L_22, NULL);
		if (!L_23)
		{
			goto IL_008b;
		}
	}
	{
		StringBuilder_t* L_24 = V_1;
		NullCheck(L_24);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_24, 0, NULL);
	}

IL_008b:
	{
		StringBuilder_t* L_25 = V_1;
		String_t* L_26 = V_6;
		NullCheck(L_25);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, L_26, NULL);
		String_t* L_28 = V_6;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_28, NULL);
		V_3 = L_29;
		int32_t L_30 = V_3;
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		String_t* L_32 = V_6;
		int32_t L_33 = V_3;
		NullCheck(L_32);
		Il2CppChar L_34;
		L_34 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_32, ((int32_t)il2cpp_codegen_subtract(L_33, 1)), NULL);
		V_7 = L_34;
		Il2CppChar L_35 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_36 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		if ((((int32_t)L_35) == ((int32_t)L_36)))
		{
			goto IL_00cd;
		}
	}
	{
		Il2CppChar L_37 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_38 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_37) == ((int32_t)L_38)))
		{
			goto IL_00cd;
		}
	}
	{
		Il2CppChar L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_40 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___VolumeSeparatorChar_5;
		if ((((int32_t)L_39) == ((int32_t)L_40)))
		{
			goto IL_00cd;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_00cd:
	{
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00d3:
	{
		int32_t L_42 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = V_4;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t* L_44 = V_1;
		NullCheck(L_44);
		String_t* L_45;
		L_45 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_44);
		return L_45;
	}
}
// System.String System.IO.Path::Combine(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m21AD76E5168EE9430E587E3EFE3C6C73383F1DA1 (String_t* ___path10, String_t* ___path21, String_t* ___path32, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD999C15961E364746AD7ED275769D73DA5AD2EC9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_Combine_m21AD76E5168EE9430E587E3EFE3C6C73383F1DA1_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___path21;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD022821CCC942F161E496B5F0F4FCF3CB5191B46)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_Combine_m21AD76E5168EE9430E587E3EFE3C6C73383F1DA1_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = ___path32;
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral03CF13FCF21F7356CB29CA6878C545117C724E80)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Path_Combine_m21AD76E5168EE9430E587E3EFE3C6C73383F1DA1_RuntimeMethod_var)));
	}

IL_002a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = ___path10;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		String_t* L_10 = ___path21;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		String_t* L_12 = ___path32;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_12);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = Path_Combine_m414B2D97688304C226B1828FFCD5A3AF5824D0EF(L_11, NULL);
		return L_13;
	}
}
// System.ReadOnlySpan`1<System.Char> System.IO.Path::GetFileName(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Path_GetFileName_mB85CB53C20A6E938762C1A118F83A66D85F28339 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___path0;
		String_t* L_1;
		L_1 = String_CreateString_m1618CF9F1145C9832FC830A4BD6DD96A540012F8(NULL, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_GetPathRoot_m6DDE2394DA53E1C4F4753406F0B48955DFF1E5EB(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___path0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		V_1 = L_4;
		goto IL_0045;
	}

IL_001b:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_7 = V_1;
		Il2CppChar* L_8;
		L_8 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___path0))->____pointer_0))->value, (L_7), ((&___path0))->____length_1);
		int32_t L_9 = *((uint16_t*)L_8);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Path_IsDirectorySeparator_m2A38A2C11EDB85F68C2F5B4C9E08B10B5F291AA7(L_9, NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}

IL_002f:
	{
		int32_t L_11 = V_1;
		int32_t L_12;
		L_12 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___path0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_13 = V_1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_14;
		L_14 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&___path0), ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_12, L_13)), 1)), ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		return L_14;
	}

IL_0045:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		V_1 = L_16;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___path0;
		return L_17;
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
// System.Void System.IO.UnexceptionalStreamReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnexceptionalStreamReader__cctor_m6B97C9AE6ECF623B847FBDBA9F27ABAF7AD638BA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_1);
		((UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_StaticFields*)il2cpp_codegen_static_fields_for(UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var))->___newline_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_StaticFields*)il2cpp_codegen_static_fields_for(UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var))->___newline_18), (void*)L_2);
		String_t* L_3;
		L_3 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, 0, NULL);
		((UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_StaticFields*)il2cpp_codegen_static_fields_for(UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var))->___newlineChar_19 = L_7;
	}

IL_002f:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnexceptionalStreamReader__ctor_m46F97ECD314C035AAD8313BB7B3137B7F2BC1294 (UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = ___encoding1;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_m7712DDC735E99B6833E2666ADFD8A06CB96A58B1(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Int32 System.IO.UnexceptionalStreamReader::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnexceptionalStreamReader_Peek_mA24A3843FBA7783C7F47808F8474F2CD87D627A2 (UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		int32_t L_0;
		L_0 = StreamReader_Peek_m02A726104F658F68395E8D0CD77B741B9E267553(__this, NULL);
		V_0 = L_0;
		goto IL_000e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.IO.IOException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_000c;
	}// end catch (depth: 1)

IL_000c:
	{
		return (-1);
	}

IL_000e:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 System.IO.UnexceptionalStreamReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnexceptionalStreamReader_Read_mD9DF0142CBCE14EC8CAEDAAC9C6802A1D8FBA149 (UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		int32_t L_0;
		L_0 = StreamReader_Read_mB7DF78E453DA180AF0E360278016505417C7874E(__this, NULL);
		V_0 = L_0;
		goto IL_000e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.IO.IOException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_000c;
	}// end catch (depth: 1)

IL_000c:
	{
		return (-1);
	}

IL_000e:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 System.IO.UnexceptionalStreamReader::Read(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnexceptionalStreamReader_Read_m22BD0BB94B4575905541068A2BF813CEDCB1F513 (UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___dest_buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___dest_buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral93ED0449AC9AE5B2961E266396F4C4B0BE35BF4B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnexceptionalStreamReader_Read_m22BD0BB94B4575905541068A2BF813CEDCB1F513_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76090A3CE9567D0D26B5213CB891A873540230EE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnexceptionalStreamReader_Read_m22BD0BB94B4575905541068A2BF813CEDCB1F513_RuntimeMethod_var)));
	}

IL_0022:
	{
		int32_t L_4 = ___count2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76090A3CE9567D0D26B5213CB891A873540230EE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnexceptionalStreamReader_Read_m22BD0BB94B4575905541068A2BF813CEDCB1F513_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_6 = ___index1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___dest_buffer0;
		NullCheck(L_7);
		int32_t L_8 = ___count2;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8)))))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral313BEFF10E9EC86112EEAC5AF888D20BFE52F9C9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnexceptionalStreamReader_Read_m22BD0BB94B4575905541068A2BF813CEDCB1F513_RuntimeMethod_var)));
	}

IL_0049:
	{
		V_0 = 0;
		il2cpp_codegen_runtime_class_init_inline(UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var);
		Il2CppChar L_10 = ((UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_StaticFields*)il2cpp_codegen_static_fields_for(UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var))->___newlineChar_19;
		V_1 = L_10;
	}
	try
	{// begin try (depth: 1)
		{
			goto IL_008b_1;
		}

IL_0053_1:
		{
			int32_t L_11;
			L_11 = StreamReader_Read_mB7DF78E453DA180AF0E360278016505417C7874E(__this, NULL);
			V_2 = L_11;
			int32_t L_12 = V_2;
			if ((((int32_t)L_12) < ((int32_t)0)))
			{
				goto IL_008f_1;
			}
		}
		{
			int32_t L_13 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			int32_t L_14 = ___count2;
			___count2 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = ___dest_buffer0;
			int32_t L_16 = ___index1;
			int32_t L_17 = V_2;
			NullCheck(L_15);
			(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Il2CppChar)((int32_t)(uint16_t)L_17));
			Il2CppChar L_18 = V_1;
			if (!L_18)
			{
				goto IL_0078_1;
			}
		}
		{
			int32_t L_19 = V_2;
			Il2CppChar L_20 = V_1;
			if ((!(((uint32_t)((int32_t)(uint16_t)L_19)) == ((uint32_t)L_20))))
			{
				goto IL_0086_1;
			}
		}
		{
			int32_t L_21 = V_0;
			V_3 = L_21;
			goto IL_0096;
		}

IL_0078_1:
		{
			int32_t L_22 = V_2;
			bool L_23;
			L_23 = UnexceptionalStreamReader_CheckEOL_m200CB322B32C8859E4EC257C95757C8237193F28(__this, ((int32_t)(uint16_t)L_22), NULL);
			if (!L_23)
			{
				goto IL_0086_1;
			}
		}
		{
			int32_t L_24 = V_0;
			V_3 = L_24;
			goto IL_0096;
		}

IL_0086_1:
		{
			int32_t L_25 = ___index1;
			___index1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		}

IL_008b_1:
		{
			int32_t L_26 = ___count2;
			if ((((int32_t)L_26) > ((int32_t)0)))
			{
				goto IL_0053_1;
			}
		}

IL_008f_1:
		{
			goto IL_0094;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0091;
		}
		throw e;
	}

CATCH_0091:
	{// begin catch(System.IO.IOException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0094;
	}// end catch (depth: 1)

IL_0094:
	{
		int32_t L_27 = V_0;
		return L_27;
	}

IL_0096:
	{
		int32_t L_28 = V_3;
		return L_28;
	}
}
// System.Boolean System.IO.UnexceptionalStreamReader::CheckEOL(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnexceptionalStreamReader_CheckEOL_m200CB322B32C8859E4EC257C95757C8237193F28 (UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE* __this, Il2CppChar ___current0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0034;
	}

IL_0004:
	{
		il2cpp_codegen_runtime_class_init_inline(UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ((UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_StaticFields*)il2cpp_codegen_static_fields_for(UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var))->___newline_18;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (uint8_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		Il2CppChar L_4 = ___current0;
		String_t* L_5;
		L_5 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_7))))
		{
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = ((UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_StaticFields*)il2cpp_codegen_static_fields_for(UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var))->___newline_18;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (bool)1);
		int32_t L_10 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11 = ((UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_StaticFields*)il2cpp_codegen_static_fields_for(UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var))->___newline_18;
		NullCheck(L_11);
		return (bool)((((int32_t)L_10) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), 1))))? 1 : 0);
	}

IL_0030:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0034:
	{
		int32_t L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_14 = ((UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_StaticFields*)il2cpp_codegen_static_fields_for(UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var))->___newline_18;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0004;
		}
	}

IL_003e:
	{
		V_1 = 0;
		goto IL_004e;
	}

IL_0042:
	{
		il2cpp_codegen_runtime_class_init_inline(UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_15 = ((UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_StaticFields*)il2cpp_codegen_static_fields_for(UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var))->___newline_18;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (bool)0);
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004e:
	{
		int32_t L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_19 = ((UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_StaticFields*)il2cpp_codegen_static_fields_for(UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE_il2cpp_TypeInfo_var))->___newline_18;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}
}
// System.String System.IO.UnexceptionalStreamReader::ReadLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnexceptionalStreamReader_ReadLine_m5FCA4BF3924751D1F590731D33614C9BF93F1B65 (UnexceptionalStreamReader_tC2A87A1C1570111DE6003BF1891C8D2E3C9AA9FE* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		String_t* L_0;
		L_0 = StreamReader_ReadLine_m9E583F06F10408D5941F889F1ECC2A1CE545728F(__this, NULL);
		V_0 = L_0;
		goto IL_000e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.IO.IOException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_000c;
	}// end catch (depth: 1)

IL_000c:
	{
		return (String_t*)NULL;
	}

IL_000e:
	{
		String_t* L_1 = V_0;
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
// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnexceptionalStreamWriter__ctor_m53698D5B086CA5299A487D660E1290DCE67CD692 (UnexceptionalStreamWriter_tF3DBFED31D3D9EAB7CD7B58F89F817D69DE71EDD* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = ___encoding1;
		il2cpp_codegen_runtime_class_init_inline(StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		StreamWriter__ctor_m07CDDF5BC8553960286FA1BFF8BBA2159835EBCC(__this, L_0, L_1, ((int32_t)1024), (bool)1, NULL);
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnexceptionalStreamWriter_Write_m9732035F6E3A92A69095D023347D5C7C0F9EAC77 (UnexceptionalStreamWriter_tF3DBFED31D3D9EAB7CD7B58F89F817D69DE71EDD* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___buffer0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		StreamWriter_Write_mE02DD312AFCC5AF2794F96FC3A8E521F2587D333(__this, L_0, L_1, L_2, NULL);
		goto IL_000e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{// begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_000e;
	}// end catch (depth: 1)

IL_000e:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnexceptionalStreamWriter_Write_m42EE4C4A0BA015E6EADA14894261813E1D731D26 (UnexceptionalStreamWriter_tF3DBFED31D3D9EAB7CD7B58F89F817D69DE71EDD* __this, Il2CppChar ___value0, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		Il2CppChar L_0 = ___value0;
		StreamWriter_Write_m2A48056A5E6D0CCA8E813C5D1D1D44276415A11B(__this, L_0, NULL);
		goto IL_000c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_000c;
	}// end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnexceptionalStreamWriter_Write_mDD477599E98A5D8D74C737AD4F50555756B6C788 (UnexceptionalStreamWriter_tF3DBFED31D3D9EAB7CD7B58F89F817D69DE71EDD* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___value0;
		StreamWriter_Write_mA6EEDCFC293614704BFFF1FF1F1B1780E7C67E18(__this, L_0, NULL);
		goto IL_000c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_000c;
	}// end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnexceptionalStreamWriter_Write_m536D6C56F80D0F791FED3AB05B206FB50235BD35 (UnexceptionalStreamWriter_tF3DBFED31D3D9EAB7CD7B58F89F817D69DE71EDD* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		String_t* L_0 = ___value0;
		StreamWriter_Write_m1961836CD57985833261ABC980416118E24F83DA(__this, L_0, NULL);
		goto IL_000c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_000c;
	}// end catch (depth: 1)

IL_000c:
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
// System.Void System.IO.CStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStreamReader__ctor_m8339E35B2BA614508E617056486C49A9AA8E7B5B (CStreamReader_tA8A200A5C1352CF0A34EC40F7AFBFC0360589094* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleDriver_tC98607842465524D6078EB6C21FEA25BBC1A6E80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = ___encoding1;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_m7712DDC735E99B6833E2666ADFD8A06CB96A58B1(__this, L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConsoleDriver_tC98607842465524D6078EB6C21FEA25BBC1A6E80_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((ConsoleDriver_tC98607842465524D6078EB6C21FEA25BBC1A6E80_StaticFields*)il2cpp_codegen_static_fields_for(ConsoleDriver_tC98607842465524D6078EB6C21FEA25BBC1A6E80_il2cpp_TypeInfo_var))->___driver_0;
		__this->___driver_18 = ((TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF*)CastclassClass((RuntimeObject*)L_2, TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___driver_18), (void*)((TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF*)CastclassClass((RuntimeObject*)L_2, TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Int32 System.IO.CStreamReader::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CStreamReader_Peek_m4ADB9249F9E3984F19004DE42098A0ECAC52BE8D (CStreamReader_tA8A200A5C1352CF0A34EC40F7AFBFC0360589094* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		int32_t L_0;
		L_0 = StreamReader_Peek_m02A726104F658F68395E8D0CD77B741B9E267553(__this, NULL);
		V_0 = L_0;
		goto IL_000e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.IO.IOException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_000c;
	}// end catch (depth: 1)

IL_000c:
	{
		return (-1);
	}

IL_000e:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 System.IO.CStreamReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CStreamReader_Read_mE2C28F65F72910827112FC891EE2007B4BB847A8 (CStreamReader_tA8A200A5C1352CF0A34EC40F7AFBFC0360589094* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900 L_0;
		L_0 = Console_ReadKey_mBD5CE0AC56C4129A36D645577D5C8B1890144733(NULL);
		V_0 = L_0;
		Il2CppChar L_1;
		L_1 = ConsoleKeyInfo_get_KeyChar_m8138528816FDD8AD7B4CAD3ADB6D70EA2F2C7A63_inline((&V_0), NULL);
		V_1 = L_1;
		goto IL_0015;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.IO.IOException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0013;
	}// end catch (depth: 1)

IL_0013:
	{
		return (-1);
	}

IL_0015:
	{
		int32_t L_2 = V_1;
		return L_2;
	}
}
// System.Int32 System.IO.CStreamReader::Read(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CStreamReader_Read_mF326C19B1DCECDEE67D5FF17B3EA3A82D3602238 (CStreamReader_tA8A200A5C1352CF0A34EC40F7AFBFC0360589094* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___dest0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___dest0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral532F5429956965038FA49DA954E9A0D4D34B41A9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CStreamReader_Read_mF326C19B1DCECDEE67D5FF17B3EA3A82D3602238_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76090A3CE9567D0D26B5213CB891A873540230EE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CStreamReader_Read_mF326C19B1DCECDEE67D5FF17B3EA3A82D3602238_RuntimeMethod_var)));
	}

IL_0022:
	{
		int32_t L_4 = ___count2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76090A3CE9567D0D26B5213CB891A873540230EE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CStreamReader_Read_mF326C19B1DCECDEE67D5FF17B3EA3A82D3602238_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_6 = ___index1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___dest0;
		NullCheck(L_7);
		int32_t L_8 = ___count2;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8)))))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8FAFE0C7CF4DAF4B0E2865AE5128EAAA4A3DE940)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CStreamReader_Read_mF326C19B1DCECDEE67D5FF17B3EA3A82D3602238_RuntimeMethod_var)));
	}

IL_0049:
	{
	}
	try
	{// begin try (depth: 1)
		TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF* L_10 = __this->___driver_18;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = ___dest0;
		int32_t L_12 = ___index1;
		int32_t L_13 = ___count2;
		NullCheck(L_10);
		int32_t L_14;
		L_14 = TermInfoDriver_Read_mDD15CF4A7519DBDF41E68B9C4CEABED8FBDB933A(L_10, L_11, L_12, L_13, NULL);
		V_0 = L_14;
		goto IL_0060;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{// begin catch(System.IO.IOException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005e;
	}// end catch (depth: 1)

IL_005e:
	{
		return 0;
	}

IL_0060:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.String System.IO.CStreamReader::ReadLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CStreamReader_ReadLine_mF55ADCB05EF97E3BA9EBE72317DD35A152EF35D5 (CStreamReader_tA8A200A5C1352CF0A34EC40F7AFBFC0360589094* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF* L_0 = __this->___driver_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TermInfoDriver_ReadLine_m30B6FC262A7CAAD9B9731D259104DA53A2992E90(L_0, NULL);
		V_0 = L_1;
		goto IL_0013;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.IO.IOException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0011;
	}// end catch (depth: 1)

IL_0011:
	{
		return (String_t*)NULL;
	}

IL_0013:
	{
		String_t* L_2 = V_0;
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
// System.Void System.IO.CStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStreamWriter__ctor_m724255FB2BE27FB2D095AF9B727A7DEF9AF15350 (CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___leaveOpen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleDriver_tC98607842465524D6078EB6C21FEA25BBC1A6E80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = ___encoding1;
		bool L_2 = ___leaveOpen2;
		il2cpp_codegen_runtime_class_init_inline(StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		StreamWriter__ctor_m07CDDF5BC8553960286FA1BFF8BBA2159835EBCC(__this, L_0, L_1, ((int32_t)1024), L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConsoleDriver_tC98607842465524D6078EB6C21FEA25BBC1A6E80_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((ConsoleDriver_tC98607842465524D6078EB6C21FEA25BBC1A6E80_StaticFields*)il2cpp_codegen_static_fields_for(ConsoleDriver_tC98607842465524D6078EB6C21FEA25BBC1A6E80_il2cpp_TypeInfo_var))->___driver_0;
		__this->___driver_18 = ((TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF*)CastclassClass((RuntimeObject*)L_3, TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___driver_18), (void*)((TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF*)CastclassClass((RuntimeObject*)L_3, TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void System.IO.CStreamWriter::Write(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStreamWriter_Write_m526B4CD669F4540F508130C299EEC940032DD6F5 (CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) 
{
	CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = ___count2;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF* L_1 = __this->___driver_18;
		NullCheck(L_1);
		bool L_2;
		L_2 = TermInfoDriver_get_Initialized_mBD30B804687340F54636E76581E98ECF722352F7_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	try
	{// begin try (depth: 1)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = ___buffer0;
		int32_t L_4 = ___index1;
		int32_t L_5 = ___count2;
		StreamWriter_Write_mE02DD312AFCC5AF2794F96FC3A8E521F2587D333(__this, L_3, L_4, L_5, NULL);
		goto IL_0020;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001d;
		}
		throw e;
	}

CATCH_001d:
	{// begin catch(System.IO.IOException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0020;
	}// end catch (depth: 1)

IL_0020:
	{
		return;
	}

IL_0021:
	{
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{// begin finally (depth: 1)
				{
					bool L_6 = V_1;
					if (!L_6)
					{
						goto IL_00a0;
					}
				}
				{
					CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239* L_7 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_7, NULL);
				}

IL_00a0:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239* L_8 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_8, (&V_1), NULL);
				int32_t L_9 = ___index1;
				int32_t L_10 = ___count2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
				int32_t L_11 = ___index1;
				V_3 = L_11;
				V_4 = 0;
			}

IL_0036_1:
			{
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = ___buffer0;
				int32_t L_13 = V_3;
				int32_t L_14 = L_13;
				V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
				NullCheck(L_12);
				int32_t L_15 = L_14;
				uint16_t L_16 = (uint16_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
				V_5 = L_16;
				TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF* L_17 = __this->___driver_18;
				Il2CppChar L_18 = V_5;
				NullCheck(L_17);
				bool L_19;
				L_19 = TermInfoDriver_IsSpecialKey_m3CFB7E17BEB19DEB92484C7EEAF3F967DE9D3444(L_17, L_18, NULL);
				if (!L_19)
				{
					goto IL_0077_1;
				}
			}
			{
				int32_t L_20 = V_4;
				if ((((int32_t)L_20) <= ((int32_t)0)))
				{
					goto IL_0065_1;
				}
			}
			try
			{// begin try (depth: 2)
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = ___buffer0;
				int32_t L_22 = ___index1;
				int32_t L_23 = V_4;
				StreamWriter_Write_mE02DD312AFCC5AF2794F96FC3A8E521F2587D333(__this, L_21, L_22, L_23, NULL);
				goto IL_0062_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_005f_1;
				}
				throw e;
			}

CATCH_005f_1:
			{// begin catch(System.IO.IOException)
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0062_1;
			}// end catch (depth: 2)

IL_0062_1:
			{
				V_4 = 0;
			}

IL_0065_1:
			{
				TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF* L_24 = __this->___driver_18;
				Il2CppChar L_25 = V_5;
				NullCheck(L_24);
				TermInfoDriver_WriteSpecialKey_m1824ADD9FEA7C438DD16C72EB161FE27C1D2F8F0(L_24, L_25, NULL);
				int32_t L_26 = V_3;
				___index1 = L_26;
				goto IL_007d_1;
			}

IL_0077_1:
			{
				int32_t L_27 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_27, 1));
			}

IL_007d_1:
			{
				int32_t L_28 = V_3;
				int32_t L_29 = V_2;
				if ((((int32_t)L_28) < ((int32_t)L_29)))
				{
					goto IL_0036_1;
				}
			}
			{
				int32_t L_30 = V_4;
				if ((((int32_t)L_30) <= ((int32_t)0)))
				{
					goto IL_0095_1;
				}
			}
			try
			{// begin try (depth: 2)
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = ___buffer0;
				int32_t L_32 = ___index1;
				int32_t L_33 = V_4;
				StreamWriter_Write_mE02DD312AFCC5AF2794F96FC3A8E521F2587D333(__this, L_31, L_32, L_33, NULL);
				goto IL_00a1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0092_1;
				}
				throw e;
			}

CATCH_0092_1:
			{// begin catch(System.IO.IOException)
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00a1;
			}// end catch (depth: 2)

IL_0095_1:
			{
				goto IL_00a1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.IO.CStreamWriter::Write(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStreamWriter_Write_m7D5588F88FEC45B22EDAE98BD5164C063F7DE8A2 (CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239* __this, Il2CppChar ___val0, const RuntimeMethod* method) 
{
	CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_003d;
					}
				}
				{
					CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239* L_1 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_1, NULL);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239* L_2 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_2, (&V_1), NULL);
			}
			try
			{// begin try (depth: 2)
				{
					TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF* L_3 = __this->___driver_18;
					Il2CppChar L_4 = ___val0;
					NullCheck(L_3);
					bool L_5;
					L_5 = TermInfoDriver_IsSpecialKey_m3CFB7E17BEB19DEB92484C7EEAF3F967DE9D3444(L_3, L_4, NULL);
					if (!L_5)
					{
						goto IL_0028_2;
					}
				}
				{
					TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF* L_6 = __this->___driver_18;
					Il2CppChar L_7 = ___val0;
					NullCheck(L_6);
					TermInfoDriver_WriteSpecialKey_m1824ADD9FEA7C438DD16C72EB161FE27C1D2F8F0(L_6, L_7, NULL);
					goto IL_002f_2;
				}

IL_0028_2:
				{
					Il2CppChar L_8 = ___val0;
					CStreamWriter_InternalWriteChar_m34145F97CB254D0299E62B2303E4112F3FBF84E5(__this, L_8, NULL);
				}

IL_002f_2:
				{
					goto IL_003e;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0031_1;
				}
				throw e;
			}

CATCH_0031_1:
			{// begin catch(System.IO.IOException)
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_003e;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		return;
	}
}
// System.Void System.IO.CStreamWriter::InternalWriteString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStreamWriter_InternalWriteString_mA7F19C54F5E5B44B1B7ED789CCD988847FF822AC (CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239* __this, String_t* ___val0, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		String_t* L_0 = ___val0;
		StreamWriter_Write_m1961836CD57985833261ABC980416118E24F83DA(__this, L_0, NULL);
		goto IL_000c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.IO.IOException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_000c;
	}// end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
// System.Void System.IO.CStreamWriter::InternalWriteChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStreamWriter_InternalWriteChar_m34145F97CB254D0299E62B2303E4112F3FBF84E5 (CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239* __this, Il2CppChar ___val0, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		Il2CppChar L_0 = ___val0;
		StreamWriter_Write_m2A48056A5E6D0CCA8E813C5D1D1D44276415A11B(__this, L_0, NULL);
		goto IL_000c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.IO.IOException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_000c;
	}// end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
// System.Void System.IO.CStreamWriter::InternalWriteChars(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStreamWriter_InternalWriteChars_m8B87F8FB68A46E88514E58FFA29BB000E2A2843C (CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___buffer0, int32_t ___n1, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___buffer0;
		int32_t L_1 = ___n1;
		StreamWriter_Write_mE02DD312AFCC5AF2794F96FC3A8E521F2587D333(__this, L_0, 0, L_1, NULL);
		goto IL_000e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{// begin catch(System.IO.IOException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_000e;
	}// end catch (depth: 1)

IL_000e:
	{
		return;
	}
}
// System.Void System.IO.CStreamWriter::Write(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStreamWriter_Write_mBD4E67DACC8983690EBB734CD23DBB568DABCCFF (CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___val0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___val0;
		NullCheck(L_1);
		VirtualActionInvoker3< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t, int32_t >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, __this, L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)));
		return;
	}
}
// System.Void System.IO.CStreamWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStreamWriter_Write_m9074BCE272DB3F2C8CBC3C1F99C12B0A3361ED31 (CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239* __this, String_t* ___val0, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___val0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF* L_1 = __this->___driver_18;
		NullCheck(L_1);
		bool L_2;
		L_2 = TermInfoDriver_get_Initialized_mBD30B804687340F54636E76581E98ECF722352F7_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_3 = ___val0;
		NullCheck(L_3);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4;
		L_4 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_3, NULL);
		VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char[]) */, __this, L_4);
		return;
	}

IL_001e:
	{
	}
	try
	{// begin try (depth: 1)
		String_t* L_5 = ___val0;
		StreamWriter_Write_m1961836CD57985833261ABC980416118E24F83DA(__this, L_5, NULL);
		goto IL_002b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0028;
		}
		throw e;
	}

CATCH_0028:
	{// begin catch(System.IO.IOException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002b;
	}// end catch (depth: 1)

IL_002b:
	{
		return;
	}
}
// System.Void System.IO.CStreamWriter::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStreamWriter_WriteLine_mA01BC2C9A80D4B4A660C3480FAF8B5F16D77B940 (CStreamWriter_t3311453DAB9CB3E60FD80FD196E9421A8EDF8239* __this, String_t* ___val0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___val0;
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, __this, L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(10 /* System.String System.IO.TextWriter::get_NewLine() */, __this);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, __this, L_1);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6D7A35973B6DBEB3664F5C76AC1EAC65AB733088 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
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
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_mCF7A8540CD52C39F8262F7F8C01ACE4821CFB7B9 (const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_mCF7A8540CD52C39F8262F7F8C01ACE4821CFB7B9_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SafeHandle_DangerousGetHandle_mE7CB3F36EE7BB2E2623EF316C4B43D1CA44B7F9C_inline (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m738C019A02A3B4B8BFEACFFA013409898B81D4FB_inline (String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___text0;
		NullCheck(L_2);
		Il2CppChar* L_3;
		L_3 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_2, NULL);
		String_t* L_4 = ___text0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_6), L_3, L_5, /*hidden argument*/ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar ConsoleKeyInfo_get_KeyChar_m8138528816FDD8AD7B4CAD3ADB6D70EA2F2C7A63_inline (ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900* __this, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = __this->____keyChar_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TermInfoDriver_get_Initialized_mBD30B804687340F54636E76581E98ECF722352F7_inline (TermInfoDriver_t3FC9001561C5019958E953942242EED72C4AA2CF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___inited_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___start0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___start0;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		int32_t L_9 = ___length1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}

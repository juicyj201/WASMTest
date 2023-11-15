#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
177,
182,
183,
184,
185,
186,
187,
188,
190,
191,
238,
239,
241,
263,
264,
265,
274,
275,
276,
277,
350,
351,
352,
355,
384,
385,
387,
389,
391,
393,
398,
406,
407,
408,
409,
410,
411,
412,
413,
414,
516,
524,
527,
529,
534,
535,
537,
538,
542,
543,
545,
546,
549,
550,
551,
554,
557,
559,
561,
621,
623,
625,
634,
635,
636,
638,
644,
645,
646,
647,
648,
656,
657,
658,
662,
663,
665,
667,
846,
987,
988,
4665,
4666,
4668,
4669,
4670,
4671,
4672,
4674,
4676,
4678,
4684,
4686,
4690,
4691,
4693,
4695,
4697,
4708,
4717,
4718,
4720,
4721,
4722,
4723,
4724,
4726,
4728,
5559,
5563,
5565,
5566,
5567,
5568,
5666,
5667,
5668,
5669,
5687,
5688,
5689,
5726,
5773,
5784,
5785,
5786,
6016,
6018,
6019,
6042,
6060,
6066,
6073,
6083,
6086,
6160,
6168,
6170,
6176,
6189,
6209,
6210,
6218,
6220,
6227,
6228,
6231,
6233,
6238,
6244,
6245,
6252,
6254,
6266,
6269,
6270,
6271,
6282,
6291,
6297,
6298,
6299,
6301,
6302,
6320,
6322,
6336,
6356,
6376,
6400,
6401,
6756,
6885,
7060,
7061,
7064,
7067,
7115,
7361,
7362,
7977,
7998,
8005,
8007,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 177,
ves_icall_System_Array_InternalCreate,
// token 182,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 183,
ves_icall_System_Array_CanChangePrimitive,
// token 184,
ves_icall_System_Array_FastCopy_raw,
// token 185,
ves_icall_System_Array_GetLength_raw,
// token 186,
ves_icall_System_Array_GetLowerBound_raw,
// token 187,
ves_icall_System_Array_GetGenericValue_icall,
// token 188,
ves_icall_System_Array_GetValueImpl_raw,
// token 190,
ves_icall_System_Array_SetValueImpl_raw,
// token 191,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 238,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 239,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 241,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 263,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 264,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 265,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 274,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 275,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 276,
ves_icall_System_Enum_InternalGetCorElementType,
// token 277,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 350,
ves_icall_System_Environment_get_ProcessorCount,
// token 351,
ves_icall_System_Environment_get_TickCount,
// token 352,
ves_icall_System_Environment_get_TickCount64,
// token 355,
ves_icall_System_Environment_FailFast_raw,
// token 384,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 385,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 387,
ves_icall_System_GC_SuppressFinalize_raw,
// token 389,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 391,
ves_icall_System_GC_GetGCMemoryInfo,
// token 393,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 398,
ves_icall_System_Object_MemberwiseClone_raw,
// token 406,
ves_icall_System_Math_Ceiling,
// token 407,
ves_icall_System_Math_Cos,
// token 408,
ves_icall_System_Math_Floor,
// token 409,
ves_icall_System_Math_Log10,
// token 410,
ves_icall_System_Math_Pow,
// token 411,
ves_icall_System_Math_Sin,
// token 412,
ves_icall_System_Math_Sqrt,
// token 413,
ves_icall_System_Math_Tan,
// token 414,
ves_icall_System_Math_ModF,
// token 516,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 524,
ves_icall_RuntimeType_make_array_type_raw,
// token 527,
ves_icall_RuntimeType_make_byref_type_raw,
// token 529,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 534,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 535,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 537,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 538,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 542,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 543,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 545,
ves_icall_System_RuntimeType_getFullName_raw,
// token 546,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 549,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 550,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 551,
ves_icall_RuntimeType_GetFields_native_raw,
// token 554,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 557,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 559,
ves_icall_RuntimeType_GetName_raw,
// token 561,
ves_icall_RuntimeType_GetNamespace_raw,
// token 621,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 623,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 625,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 634,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 635,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 636,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 638,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 644,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 645,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 646,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 647,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 648,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 656,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 657,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 658,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 662,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 663,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 665,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 667,
ves_icall_System_String_FastAllocateString_raw,
// token 846,
ves_icall_System_Type_internal_from_handle_raw,
// token 987,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 988,
ves_icall_System_ValueType_Equals_raw,
// token 4665,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 4666,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 4668,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 4669,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 4670,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 4671,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 4672,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 4674,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 4676,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 4678,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 4684,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 4686,
mono_monitor_exit_icall_raw,
// token 4690,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 4691,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 4693,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 4695,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 4697,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 4708,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 4717,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 4718,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 4720,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 4721,
ves_icall_System_Threading_Thread_GetState_raw,
// token 4722,
ves_icall_System_Threading_Thread_SetState_raw,
// token 4723,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 4724,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 4726,
ves_icall_System_Threading_Thread_YieldInternal,
// token 4728,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 5559,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 5563,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 5565,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 5566,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 5567,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 5568,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 5666,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 5667,
ves_icall_System_GCHandle_InternalFree_raw,
// token 5668,
ves_icall_System_GCHandle_InternalGet_raw,
// token 5669,
ves_icall_System_GCHandle_InternalSet_raw,
// token 5687,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 5688,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 5689,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 5726,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 5773,
mono_object_hash_icall_raw,
// token 5784,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 5785,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 5786,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6016,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6018,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6019,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6042,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6060,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6066,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6073,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6083,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6086,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6160,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 6168,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 6170,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 6176,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 6189,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 6209,
ves_icall_reflection_get_token_raw,
// token 6210,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 6218,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 6220,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 6227,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 6228,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 6231,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 6233,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 6238,
ves_icall_reflection_get_token_raw,
// token 6244,
ves_icall_get_method_info_raw,
// token 6245,
ves_icall_get_method_attributes,
// token 6252,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 6254,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 6266,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 6269,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 6270,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 6271,
ves_icall_reflection_get_token_raw,
// token 6282,
ves_icall_InternalInvoke_raw,
// token 6291,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 6297,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 6298,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 6299,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 6301,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 6302,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 6320,
ves_icall_InvokeClassConstructor_raw,
// token 6322,
ves_icall_InternalInvoke_raw,
// token 6336,
ves_icall_reflection_get_token_raw,
// token 6356,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 6376,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 6400,
ves_icall_reflection_get_token_raw,
// token 6401,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 6756,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 6885,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7060,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7061,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7064,
ves_icall_ModuleBuilder_getToken_raw,
// token 7067,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7115,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 7361,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 7362,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 7977,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 7998,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 8005,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 8007,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
};

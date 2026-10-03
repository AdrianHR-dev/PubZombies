// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectZomb/WeaponCompCPP.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponCompCPP() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
PROJECTZOMB_API UClass* Z_Construct_UClass_AFirstPersonCharCPP_NoRegister();
PROJECTZOMB_API UClass* Z_Construct_UClass_UWeaponCompCPP();
PROJECTZOMB_API UClass* Z_Construct_UClass_UWeaponCompCPP_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectZomb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWeaponCompCPP Function m_Initialise *************************************
struct Z_Construct_UFunction_UWeaponCompCPP_m_Initialise_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponCompCPP_m_Initialise_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponCompCPP, nullptr, "m_Initialise", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCompCPP_m_Initialise_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponCompCPP_m_Initialise_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponCompCPP_m_Initialise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponCompCPP_m_Initialise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponCompCPP::execm_Initialise)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->m_Initialise();
	P_NATIVE_END;
}
// ********** End Class UWeaponCompCPP Function m_Initialise ***************************************

// ********** Begin Class UWeaponCompCPP Function m_Reload *****************************************
struct Z_Construct_UFunction_UWeaponCompCPP_m_Reload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponCompCPP_m_Reload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponCompCPP, nullptr, "m_Reload", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCompCPP_m_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponCompCPP_m_Reload_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponCompCPP_m_Reload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponCompCPP_m_Reload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponCompCPP::execm_Reload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->m_Reload();
	P_NATIVE_END;
}
// ********** End Class UWeaponCompCPP Function m_Reload *******************************************

// ********** Begin Class UWeaponCompCPP Function m_Shoot ******************************************
struct Z_Construct_UFunction_UWeaponCompCPP_m_Shoot_Statics
{
	struct WeaponCompCPP_eventm_Shoot_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite) FDataTableRowHandle m_weapon;\n" },
#endif
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite) FDataTableRowHandle m_weapon;" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponCompCPP_m_Shoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponCompCPP_eventm_Shoot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponCompCPP_m_Shoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponCompCPP_eventm_Shoot_Parms), &Z_Construct_UFunction_UWeaponCompCPP_m_Shoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponCompCPP_m_Shoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponCompCPP_m_Shoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCompCPP_m_Shoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponCompCPP_m_Shoot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponCompCPP, nullptr, "m_Shoot", Z_Construct_UFunction_UWeaponCompCPP_m_Shoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCompCPP_m_Shoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponCompCPP_m_Shoot_Statics::WeaponCompCPP_eventm_Shoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCompCPP_m_Shoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponCompCPP_m_Shoot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponCompCPP_m_Shoot_Statics::WeaponCompCPP_eventm_Shoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponCompCPP_m_Shoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponCompCPP_m_Shoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponCompCPP::execm_Shoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->m_Shoot();
	P_NATIVE_END;
}
// ********** End Class UWeaponCompCPP Function m_Shoot ********************************************

// ********** Begin Class UWeaponCompCPP ***********************************************************
void UWeaponCompCPP::StaticRegisterNativesUWeaponCompCPP()
{
	UClass* Class = UWeaponCompCPP::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "m_Initialise", &UWeaponCompCPP::execm_Initialise },
		{ "m_Reload", &UWeaponCompCPP::execm_Reload },
		{ "m_Shoot", &UWeaponCompCPP::execm_Shoot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWeaponCompCPP;
UClass* UWeaponCompCPP::GetPrivateStaticClass()
{
	using TClass = UWeaponCompCPP;
	if (!Z_Registration_Info_UClass_UWeaponCompCPP.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponCompCPP"),
			Z_Registration_Info_UClass_UWeaponCompCPP.InnerSingleton,
			StaticRegisterNativesUWeaponCompCPP,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UWeaponCompCPP.InnerSingleton;
}
UClass* Z_Construct_UClass_UWeaponCompCPP_NoRegister()
{
	return UWeaponCompCPP::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWeaponCompCPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "WeaponCompCPP.h" },
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_playerRef_MetaData[] = {
		{ "Category", "WeaponCompCPP" },
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_weaponDamage_MetaData[] = {
		{ "Category", "WeaponCompCPP" },
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_weaponName_MetaData[] = {
		{ "Category", "WeaponCompCPP" },
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_stock_MetaData[] = {
		{ "Category", "WeaponCompCPP" },
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_reserve_MetaData[] = {
		{ "Category", "WeaponCompCPP" },
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_clip_MetaData[] = {
		{ "Category", "WeaponCompCPP" },
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_reloading_MetaData[] = {
		{ "Category", "WeaponCompCPP" },
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_reloadTime_MetaData[] = {
		{ "Category", "WeaponCompCPP" },
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_range_MetaData[] = {
		{ "Category", "WeaponCompCPP" },
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_timerHandle_MetaData[] = {
		{ "Category", "WeaponCompCPP" },
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_playerRef;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_weaponDamage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_m_weaponName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_stock;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_reserve;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_clip;
	static void NewProp_m_reloading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_reloading;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_reloadTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_range;
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_timerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponCompCPP_m_Initialise, "m_Initialise" }, // 2756515048
		{ &Z_Construct_UFunction_UWeaponCompCPP_m_Reload, "m_Reload" }, // 1501325068
		{ &Z_Construct_UFunction_UWeaponCompCPP_m_Shoot, "m_Shoot" }, // 3201151101
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponCompCPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_playerRef = { "m_playerRef", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponCompCPP, m_playerRef), Z_Construct_UClass_AFirstPersonCharCPP_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_playerRef_MetaData), NewProp_m_playerRef_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_weaponDamage = { "m_weaponDamage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponCompCPP, m_weaponDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_weaponDamage_MetaData), NewProp_m_weaponDamage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_weaponName = { "m_weaponName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponCompCPP, m_weaponName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_weaponName_MetaData), NewProp_m_weaponName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_stock = { "m_stock", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponCompCPP, m_stock), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_stock_MetaData), NewProp_m_stock_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_reserve = { "m_reserve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponCompCPP, m_reserve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_reserve_MetaData), NewProp_m_reserve_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_clip = { "m_clip", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponCompCPP, m_clip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_clip_MetaData), NewProp_m_clip_MetaData) };
void Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_reloading_SetBit(void* Obj)
{
	((UWeaponCompCPP*)Obj)->m_reloading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_reloading = { "m_reloading", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponCompCPP), &Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_reloading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_reloading_MetaData), NewProp_m_reloading_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_reloadTime = { "m_reloadTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponCompCPP, m_reloadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_reloadTime_MetaData), NewProp_m_reloadTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_range = { "m_range", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponCompCPP, m_range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_range_MetaData), NewProp_m_range_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_timerHandle = { "m_timerHandle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponCompCPP, m_timerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_timerHandle_MetaData), NewProp_m_timerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponCompCPP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_playerRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_weaponDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_weaponName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_stock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_reserve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_clip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_reloading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_reloadTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_m_timerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponCompCPP_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponCompCPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectZomb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponCompCPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponCompCPP_Statics::ClassParams = {
	&UWeaponCompCPP::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponCompCPP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponCompCPP_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponCompCPP_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponCompCPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponCompCPP()
{
	if (!Z_Registration_Info_UClass_UWeaponCompCPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponCompCPP.OuterSingleton, Z_Construct_UClass_UWeaponCompCPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponCompCPP.OuterSingleton;
}
UWeaponCompCPP::UWeaponCompCPP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponCompCPP);
UWeaponCompCPP::~UWeaponCompCPP() {}
// ********** End Class UWeaponCompCPP *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_WeaponCompCPP_h__Script_ProjectZomb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponCompCPP, UWeaponCompCPP::StaticClass, TEXT("UWeaponCompCPP"), &Z_Registration_Info_UClass_UWeaponCompCPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponCompCPP), 1884433026U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_WeaponCompCPP_h__Script_ProjectZomb_2637335403(TEXT("/Script/ProjectZomb"),
	Z_CompiledInDeferFile_FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_WeaponCompCPP_h__Script_ProjectZomb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_WeaponCompCPP_h__Script_ProjectZomb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

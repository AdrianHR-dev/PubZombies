// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectZomb/FirstPersonCharCPP.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFirstPersonCharCPP() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
PROJECTZOMB_API UClass* Z_Construct_UClass_AFirstPersonCharCPP();
PROJECTZOMB_API UClass* Z_Construct_UClass_AFirstPersonCharCPP_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectZomb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFirstPersonCharCPP Function m_BuyWallWeapon *****************************
struct Z_Construct_UFunction_AFirstPersonCharCPP_m_BuyWallWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstPersonCharCPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharCPP_m_BuyWallWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharCPP, nullptr, "m_BuyWallWeapon", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharCPP_m_BuyWallWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPersonCharCPP_m_BuyWallWeapon_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFirstPersonCharCPP_m_BuyWallWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharCPP_m_BuyWallWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirstPersonCharCPP::execm_BuyWallWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->m_BuyWallWeapon();
	P_NATIVE_END;
}
// ********** End Class AFirstPersonCharCPP Function m_BuyWallWeapon *******************************

// ********** Begin Class AFirstPersonCharCPP Function m_Heal **************************************
struct Z_Construct_UFunction_AFirstPersonCharCPP_m_Heal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstPersonCharCPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharCPP_m_Heal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharCPP, nullptr, "m_Heal", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharCPP_m_Heal_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPersonCharCPP_m_Heal_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFirstPersonCharCPP_m_Heal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharCPP_m_Heal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirstPersonCharCPP::execm_Heal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->m_Heal();
	P_NATIVE_END;
}
// ********** End Class AFirstPersonCharCPP Function m_Heal ****************************************

// ********** Begin Class AFirstPersonCharCPP Function m_TakeDamage ********************************
struct Z_Construct_UFunction_AFirstPersonCharCPP_m_TakeDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstPersonCharCPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharCPP_m_TakeDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharCPP, nullptr, "m_TakeDamage", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharCPP_m_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPersonCharCPP_m_TakeDamage_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFirstPersonCharCPP_m_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharCPP_m_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirstPersonCharCPP::execm_TakeDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->m_TakeDamage();
	P_NATIVE_END;
}
// ********** End Class AFirstPersonCharCPP Function m_TakeDamage **********************************

// ********** Begin Class AFirstPersonCharCPP ******************************************************
void AFirstPersonCharCPP::StaticRegisterNativesAFirstPersonCharCPP()
{
	UClass* Class = AFirstPersonCharCPP::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "m_BuyWallWeapon", &AFirstPersonCharCPP::execm_BuyWallWeapon },
		{ "m_Heal", &AFirstPersonCharCPP::execm_Heal },
		{ "m_TakeDamage", &AFirstPersonCharCPP::execm_TakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFirstPersonCharCPP;
UClass* AFirstPersonCharCPP::GetPrivateStaticClass()
{
	using TClass = AFirstPersonCharCPP;
	if (!Z_Registration_Info_UClass_AFirstPersonCharCPP.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FirstPersonCharCPP"),
			Z_Registration_Info_UClass_AFirstPersonCharCPP.InnerSingleton,
			StaticRegisterNativesAFirstPersonCharCPP,
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
	return Z_Registration_Info_UClass_AFirstPersonCharCPP.InnerSingleton;
}
UClass* Z_Construct_UClass_AFirstPersonCharCPP_NoRegister()
{
	return AFirstPersonCharCPP::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFirstPersonCharCPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FirstPersonCharCPP.h" },
		{ "ModuleRelativePath", "FirstPersonCharCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_health_MetaData[] = {
		{ "Category", "FirstPersonCharCPP" },
		{ "ModuleRelativePath", "FirstPersonCharCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_maxHealth_MetaData[] = {
		{ "Category", "FirstPersonCharCPP" },
		{ "ModuleRelativePath", "FirstPersonCharCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_startHealth_MetaData[] = {
		{ "Category", "FirstPersonCharCPP" },
		{ "ModuleRelativePath", "FirstPersonCharCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_score_MetaData[] = {
		{ "Category", "FirstPersonCharCPP" },
		{ "ModuleRelativePath", "FirstPersonCharCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_takingDamage_MetaData[] = {
		{ "Category", "FirstPersonCharCPP" },
		{ "ModuleRelativePath", "FirstPersonCharCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_ads_MetaData[] = {
		{ "Category", "FirstPersonCharCPP" },
		{ "ModuleRelativePath", "FirstPersonCharCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_interactRange_MetaData[] = {
		{ "Category", "FirstPersonCharCPP" },
		{ "ModuleRelativePath", "FirstPersonCharCPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_maxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_startHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_score;
	static void NewProp_m_takingDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_takingDamage;
	static void NewProp_m_ads_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_ads;
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_interactRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstPersonCharCPP_m_BuyWallWeapon, "m_BuyWallWeapon" }, // 1533211259
		{ &Z_Construct_UFunction_AFirstPersonCharCPP_m_Heal, "m_Heal" }, // 4079994890
		{ &Z_Construct_UFunction_AFirstPersonCharCPP_m_TakeDamage, "m_TakeDamage" }, // 1647671183
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonCharCPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_health = { "m_health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharCPP, m_health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_health_MetaData), NewProp_m_health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_maxHealth = { "m_maxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharCPP, m_maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_maxHealth_MetaData), NewProp_m_maxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_startHealth = { "m_startHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharCPP, m_startHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_startHealth_MetaData), NewProp_m_startHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_score = { "m_score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharCPP, m_score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_score_MetaData), NewProp_m_score_MetaData) };
void Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_takingDamage_SetBit(void* Obj)
{
	((AFirstPersonCharCPP*)Obj)->m_takingDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_takingDamage = { "m_takingDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharCPP), &Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_takingDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_takingDamage_MetaData), NewProp_m_takingDamage_MetaData) };
void Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_ads_SetBit(void* Obj)
{
	((AFirstPersonCharCPP*)Obj)->m_ads = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_ads = { "m_ads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharCPP), &Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_ads_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_ads_MetaData), NewProp_m_ads_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_interactRange = { "m_interactRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharCPP, m_interactRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_interactRange_MetaData), NewProp_m_interactRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonCharCPP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_maxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_startHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_takingDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_ads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharCPP_Statics::NewProp_m_interactRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharCPP_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFirstPersonCharCPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectZomb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharCPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonCharCPP_Statics::ClassParams = {
	&AFirstPersonCharCPP::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFirstPersonCharCPP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharCPP_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharCPP_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstPersonCharCPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFirstPersonCharCPP()
{
	if (!Z_Registration_Info_UClass_AFirstPersonCharCPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPersonCharCPP.OuterSingleton, Z_Construct_UClass_AFirstPersonCharCPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFirstPersonCharCPP.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonCharCPP);
AFirstPersonCharCPP::~AFirstPersonCharCPP() {}
// ********** End Class AFirstPersonCharCPP ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_FirstPersonCharCPP_h__Script_ProjectZomb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPersonCharCPP, AFirstPersonCharCPP::StaticClass, TEXT("AFirstPersonCharCPP"), &Z_Registration_Info_UClass_AFirstPersonCharCPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPersonCharCPP), 2665224846U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_FirstPersonCharCPP_h__Script_ProjectZomb_3562944408(TEXT("/Script/ProjectZomb"),
	Z_CompiledInDeferFile_FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_FirstPersonCharCPP_h__Script_ProjectZomb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_FirstPersonCharCPP_h__Script_ProjectZomb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeaponCompCPP.h"

#ifdef PROJECTZOMB_WeaponCompCPP_generated_h
#error "WeaponCompCPP.generated.h already included, missing '#pragma once' in WeaponCompCPP.h"
#endif
#define PROJECTZOMB_WeaponCompCPP_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWeaponCompCPP ***********************************************************
#define FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_WeaponCompCPP_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execm_Initialise); \
	DECLARE_FUNCTION(execm_Reload); \
	DECLARE_FUNCTION(execm_Shoot);


PROJECTZOMB_API UClass* Z_Construct_UClass_UWeaponCompCPP_NoRegister();

#define FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_WeaponCompCPP_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponCompCPP(); \
	friend struct Z_Construct_UClass_UWeaponCompCPP_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTZOMB_API UClass* Z_Construct_UClass_UWeaponCompCPP_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeaponCompCPP, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectZomb"), Z_Construct_UClass_UWeaponCompCPP_NoRegister) \
	DECLARE_SERIALIZER(UWeaponCompCPP)


#define FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_WeaponCompCPP_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponCompCPP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeaponCompCPP(UWeaponCompCPP&&) = delete; \
	UWeaponCompCPP(const UWeaponCompCPP&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponCompCPP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponCompCPP); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponCompCPP) \
	NO_API virtual ~UWeaponCompCPP();


#define FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_WeaponCompCPP_h_13_PROLOG
#define FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_WeaponCompCPP_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_WeaponCompCPP_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_WeaponCompCPP_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_WeaponCompCPP_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeaponCompCPP;

// ********** End Class UWeaponCompCPP *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_WeaponCompCPP_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

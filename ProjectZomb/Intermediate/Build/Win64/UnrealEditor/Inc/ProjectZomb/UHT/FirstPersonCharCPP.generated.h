// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirstPersonCharCPP.h"

#ifdef PROJECTZOMB_FirstPersonCharCPP_generated_h
#error "FirstPersonCharCPP.generated.h already included, missing '#pragma once' in FirstPersonCharCPP.h"
#endif
#define PROJECTZOMB_FirstPersonCharCPP_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFirstPersonCharCPP ******************************************************
#define FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_FirstPersonCharCPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execm_BuyWallWeapon); \
	DECLARE_FUNCTION(execm_Heal); \
	DECLARE_FUNCTION(execm_TakeDamage);


PROJECTZOMB_API UClass* Z_Construct_UClass_AFirstPersonCharCPP_NoRegister();

#define FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_FirstPersonCharCPP_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonCharCPP(); \
	friend struct Z_Construct_UClass_AFirstPersonCharCPP_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTZOMB_API UClass* Z_Construct_UClass_AFirstPersonCharCPP_NoRegister(); \
public: \
	DECLARE_CLASS2(AFirstPersonCharCPP, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectZomb"), Z_Construct_UClass_AFirstPersonCharCPP_NoRegister) \
	DECLARE_SERIALIZER(AFirstPersonCharCPP)


#define FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_FirstPersonCharCPP_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFirstPersonCharCPP(AFirstPersonCharCPP&&) = delete; \
	AFirstPersonCharCPP(const AFirstPersonCharCPP&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonCharCPP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonCharCPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPersonCharCPP) \
	NO_API virtual ~AFirstPersonCharCPP();


#define FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_FirstPersonCharCPP_h_9_PROLOG
#define FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_FirstPersonCharCPP_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_FirstPersonCharCPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_FirstPersonCharCPP_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_FirstPersonCharCPP_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFirstPersonCharCPP;

// ********** End Class AFirstPersonCharCPP ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_aherr_Documents_Github_PubZombies_ProjectZomb_Source_ProjectZomb_FirstPersonCharCPP_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

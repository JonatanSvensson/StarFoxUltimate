// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFOX_Crosshair_generated_h
#error "Crosshair.generated.h already included, missing '#pragma once' in Crosshair.h"
#endif
#define STARFOX_Crosshair_generated_h

#define StarFox_Source_StarFox_Crosshair_h_14_RPC_WRAPPERS
#define StarFox_Source_StarFox_Crosshair_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define StarFox_Source_StarFox_Crosshair_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesACrosshair(); \
	friend STARFOX_API class UClass* Z_Construct_UClass_ACrosshair(); \
	public: \
	DECLARE_CLASS(ACrosshair, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, StarFox, NO_API) \
	DECLARE_SERIALIZER(ACrosshair) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ACrosshair*>(this); }


#define StarFox_Source_StarFox_Crosshair_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesACrosshair(); \
	friend STARFOX_API class UClass* Z_Construct_UClass_ACrosshair(); \
	public: \
	DECLARE_CLASS(ACrosshair, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, StarFox, NO_API) \
	DECLARE_SERIALIZER(ACrosshair) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ACrosshair*>(this); }


#define StarFox_Source_StarFox_Crosshair_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACrosshair(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACrosshair) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrosshair); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrosshair); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ACrosshair(const ACrosshair& InCopy); \
public:


#define StarFox_Source_StarFox_Crosshair_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ACrosshair(const ACrosshair& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrosshair); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrosshair); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACrosshair)


#define StarFox_Source_StarFox_Crosshair_h_11_PROLOG
#define StarFox_Source_StarFox_Crosshair_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFox_Source_StarFox_Crosshair_h_14_RPC_WRAPPERS \
	StarFox_Source_StarFox_Crosshair_h_14_INCLASS \
	StarFox_Source_StarFox_Crosshair_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFox_Source_StarFox_Crosshair_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFox_Source_StarFox_Crosshair_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFox_Source_StarFox_Crosshair_h_14_INCLASS_NO_PURE_DECLS \
	StarFox_Source_StarFox_Crosshair_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFox_Source_StarFox_Crosshair_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

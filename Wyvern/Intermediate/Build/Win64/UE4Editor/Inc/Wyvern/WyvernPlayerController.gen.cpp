// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "WyvernPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWyvernPlayerController() {}
// Cross Module References
	WYVERN_API UClass* Z_Construct_UClass_AWyvernPlayerController_NoRegister();
	WYVERN_API UClass* Z_Construct_UClass_AWyvernPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Wyvern();
// End Cross Module References
	void AWyvernPlayerController::StaticRegisterNativesAWyvernPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AWyvernPlayerController_NoRegister()
	{
		return AWyvernPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AWyvernPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_Wyvern,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "WyvernPlayerController.h" },
				{ "ModuleRelativePath", "WyvernPlayerController.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWyvernPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWyvernPlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800284u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWyvernPlayerController, 2551104744);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWyvernPlayerController(Z_Construct_UClass_AWyvernPlayerController, &AWyvernPlayerController::StaticClass, TEXT("/Script/Wyvern"), TEXT("AWyvernPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWyvernPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

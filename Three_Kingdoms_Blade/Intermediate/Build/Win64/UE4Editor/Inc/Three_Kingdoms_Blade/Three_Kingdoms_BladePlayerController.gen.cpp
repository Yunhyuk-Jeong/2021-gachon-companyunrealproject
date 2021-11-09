// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Three_Kingdoms_Blade/Three_Kingdoms_BladePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThree_Kingdoms_BladePlayerController() {}
// Cross Module References
	THREE_KINGDOMS_BLADE_API UClass* Z_Construct_UClass_AThree_Kingdoms_BladePlayerController_NoRegister();
	THREE_KINGDOMS_BLADE_API UClass* Z_Construct_UClass_AThree_Kingdoms_BladePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Three_Kingdoms_Blade();
// End Cross Module References
	void AThree_Kingdoms_BladePlayerController::StaticRegisterNativesAThree_Kingdoms_BladePlayerController()
	{
	}
	UClass* Z_Construct_UClass_AThree_Kingdoms_BladePlayerController_NoRegister()
	{
		return AThree_Kingdoms_BladePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AThree_Kingdoms_BladePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThree_Kingdoms_BladePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Three_Kingdoms_Blade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThree_Kingdoms_BladePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Three_Kingdoms_BladePlayerController.h" },
		{ "ModuleRelativePath", "Three_Kingdoms_BladePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThree_Kingdoms_BladePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThree_Kingdoms_BladePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThree_Kingdoms_BladePlayerController_Statics::ClassParams = {
		&AThree_Kingdoms_BladePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThree_Kingdoms_BladePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThree_Kingdoms_BladePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThree_Kingdoms_BladePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThree_Kingdoms_BladePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThree_Kingdoms_BladePlayerController, 1169517398);
	template<> THREE_KINGDOMS_BLADE_API UClass* StaticClass<AThree_Kingdoms_BladePlayerController>()
	{
		return AThree_Kingdoms_BladePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThree_Kingdoms_BladePlayerController(Z_Construct_UClass_AThree_Kingdoms_BladePlayerController, &AThree_Kingdoms_BladePlayerController::StaticClass, TEXT("/Script/Three_Kingdoms_Blade"), TEXT("AThree_Kingdoms_BladePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThree_Kingdoms_BladePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

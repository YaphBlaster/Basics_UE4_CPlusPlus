// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Basics_UE4_CPlusPlusEditorTarget : TargetRules
{
	public Basics_UE4_CPlusPlusEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Basics_UE4_CPlusPlus" } );
	}
}

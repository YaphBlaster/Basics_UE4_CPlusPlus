// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Basics_UE4_CPlusPlusTarget : TargetRules
{
	public Basics_UE4_CPlusPlusTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Basics_UE4_CPlusPlus" } );
	}
}

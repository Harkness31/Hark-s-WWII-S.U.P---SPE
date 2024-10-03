class CfgPatches {
	class Sig_soundsa3_COMPAT_CDLC_SPE_Launchers {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"Sig_Sounds","WW2_SPE_Assets_s_Weapons_Ammo_s", "WW2_SPE_Assets_s_Weapons_Explosions_s", "WW2_SPE_Assets_s_Weapons_Launchers_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Heavy_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Light_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Sub_s", "WW2_SPE_Assets_s_Weapons_Misc_s", "WW2_SPE_Assets_s_Weapons_Pistols_s", "WW2_SPE_Assets_s_Weapons_Rifles_s", "WW2_SPE_Assets_s_Weapons_SniperRifles_s", "WW2_SPE_Assets_s_Weapons_Sounds_s","WW2_SPE_Assets_c_Weapons_Ammoboxes_c", "WW2_SPE_Assets_c_Weapons_Backpacks_c", "WW2_SPE_Assets_c_Weapons_Effects_c", "WW2_SPE_Assets_c_Weapons_Misc_c", "WW2_SPE_Assets_c_Weapons_Recoil_c", "WW2_SPE_Assets_c_Weapons_SoundsFeedback_c", "WW2_SPE_Assets_c_Weapons_WeaponHandling_c", "WW2_SPE_Assets_c_Weapons_InfantryWeapons_c", "WW2_SPE_Assets_c_Weapons_Mines_c", "WW2_SPE_Assets_c_Weapons_Misc_c_Arsenal", "WW2_SPE_Assets_c_Weapons_Misc_c_TaskForceRadioItems_Compatibility", "WW2_SPE_Assets_c_Weapons_SimpleObjects_c", "WW2_SPE_Assets_c_Weapons_AmmoParameters_c", "WW2_SPE_Assets_c_Weapons_Misc_c_AdvancedCombatRadioEnvironment2RadioItems_Compatibility", "WW2_SPE_Assets_c_Weapons_ZZZ_LastLoaded_c", "WW2_SPE_Assets_c_Weapons_Sounds_c"};
		author = "Sigliskovich";
		skipWhenMissingDependencies = 1;		
	};
};

class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference

class CfgWeapons{
	class SPE_LAUNCHER;
	class SPE_M1A1_Bazooka: SPE_LAUNCHER{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"Sig_Bazooka_Shot_SoundSet", "Launcher_Reflection_SoundSet"};
			};
		};
	};
	class SPE_M9_Bazooka: SPE_LAUNCHER{
		class Single: Mode_SemiAuto	{		
		class baseSoundModeType;		
		class StandardSound: baseSoundModeType{
				soundSetShot[] = {"Sig_Bazooka_Shot_SoundSet", "Launcher_Reflection_SoundSet"};
			};
		};
		drySound[] = {"\WW2\SPE_Assets_s\Weapons\Launchers_s\Bazooka\Bazooka_Dry.wss", 1, 1, 10};
		reloadMagazineSound[] = {"\WW2\SPE_Assets_s\Weapons\Launchers_s\Bazooka\Bazooka_ReloadMagazine.wss", 0.5623, 1, 50};
	};	
	class SPE_PzFaust_30m: SPE_LAUNCHER{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"Sig_Pzf60_Shot_SoundSet", "Launcher_Reflection_SoundSet"};
			};
		};
	};	
};
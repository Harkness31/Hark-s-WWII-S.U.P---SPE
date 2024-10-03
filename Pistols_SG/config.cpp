class CfgPatches {
	class Harks_SPE_SUP_Pistols {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"Sig_soundsa3_COMPAT_CDLC_SPE_Pistols_SG","squad_weapon_soundmod","Sig_Sounds","WW2_SPE_Assets_s_Weapons_Ammo_s", "WW2_SPE_Assets_s_Weapons_Explosions_s", "WW2_SPE_Assets_s_Weapons_Launchers_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Heavy_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Light_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Sub_s", "WW2_SPE_Assets_s_Weapons_Misc_s", "WW2_SPE_Assets_s_Weapons_Pistols_s", "WW2_SPE_Assets_s_Weapons_Rifles_s", "WW2_SPE_Assets_s_Weapons_SniperRifles_s", "WW2_SPE_Assets_s_Weapons_Sounds_s","WW2_SPE_Assets_c_Weapons_Ammoboxes_c", "WW2_SPE_Assets_c_Weapons_Backpacks_c", "WW2_SPE_Assets_c_Weapons_Effects_c", "WW2_SPE_Assets_c_Weapons_Misc_c", "WW2_SPE_Assets_c_Weapons_Recoil_c", "WW2_SPE_Assets_c_Weapons_SoundsFeedback_c", "WW2_SPE_Assets_c_Weapons_WeaponHandling_c", "WW2_SPE_Assets_c_Weapons_InfantryWeapons_c", "WW2_SPE_Assets_c_Weapons_Mines_c", "WW2_SPE_Assets_c_Weapons_Misc_c_Arsenal", "WW2_SPE_Assets_c_Weapons_Misc_c_TaskForceRadioItems_Compatibility", "WW2_SPE_Assets_c_Weapons_SimpleObjects_c", "WW2_SPE_Assets_c_Weapons_AmmoParameters_c", "WW2_SPE_Assets_c_Weapons_Misc_c_AdvancedCombatRadioEnvironment2RadioItems_Compatibility", "WW2_SPE_Assets_c_Weapons_ZZZ_LastLoaded_c", "WW2_SPE_Assets_c_Weapons_Sounds_c"};
		authors[] = {"Sigliskovich","Harkness31"};
	};
};

class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference

class CfgWeapons{
	class Pistol_Base_F;
	class SPE_PISTOL: Pistol_Base_F{
		class SAFE;
		class Eventhandlers;
	};
	class SPE_M1911: SPE_PISTOL{
		class Single: Mode_SemiAuto{
			class StandardSound{
				soundSetShot[] = {"Squad_M1911_Sets","Squad9_BulletCasings_Sets","Small_Reflection_SoundSet","4Five_Tail_SoundSet"};
			};
			class SilencedSound{
				soundSetShot[] = {""};
			};
		};
	};
	class SPE_P08: SPE_PISTOL{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"Squad_M9_Sets","Squad9_BulletCasings_Sets","4Five_Tail_SoundSet","Small_Reflection_SoundSet"};
			};
			class SilencedSound: baseSoundModeType{
				soundSetShot[] = {"P07_silencerShot_SoundSet","Squad9_BulletCasings_Sets","Small_SD_Reflection_SoundSet"};
			};
		};
	};	
	class SPE_Shotgun;
	class SPE_Model_37_Trenchgun: SPE_Shotgun{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {""};
			};
		};
	};
	class SPE_Fusil_Mle_208_12: SPE_Shotgun{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {""};
			};
		};
		class Double: Single{};
		class Single_Close: Single{
			showToPlayer = 0;
		};
		class Single_Far: Single_Close{};
	};
	class SPE_Fusil_Mle_208_12_Sawedoff: SPE_Fusil_Mle_208_12{
		class Single: Single{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {""};
			};
		};
		class Double: Single{};
		class Single_Close: Single{
			showToPlayer = 0;
		};
		class Single_Far: Single_Close{};
	};
};

class CfgSounds{
	class SPE_emptyBoltSnap_1911{
		name = "SPE_emptyBoltSnap_1911";
		sound[] = {"WW2\SPE_Assets_s\Weapons\Sounds_s\sounds\specific\1911\emptyBoltSnap", 1.95, 1, 110};
		titles[] = {};
	};	
	class SPE_p08_reload{
		name = "SPE_p08_reload";
		sound[] = {"WW2\SPE_Assets_s\Weapons\Sounds_s\sounds\specific\luger\reload", 0.5623, 1, 30};
		titles[] = {};
	};	
	class SPE_emptyBoltSnap_luger{
		name = "SPE_emptyBoltSnap_luger";
		sound[] = {"WW2\SPE_Assets_s\Weapons\Sounds_s\sounds\specific\luger\emptyBoltSnap", 1.75, 1, 110};
		titles[] = {};
	};		
};
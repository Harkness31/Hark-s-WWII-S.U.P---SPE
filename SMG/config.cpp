class CfgPatches {
	class Harks_SPE_SMG_SUP {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"Sig_soundsa3_COMPAT_CDLC_SPE_SMG","squad_weapon_soundmod","Sig_Sounds","WW2_SPE_Assets_s_Weapons_Ammo_s", "WW2_SPE_Assets_s_Weapons_Explosions_s", "WW2_SPE_Assets_s_Weapons_Launchers_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Heavy_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Light_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Sub_s", "WW2_SPE_Assets_s_Weapons_Misc_s", "WW2_SPE_Assets_s_Weapons_Pistols_s", "WW2_SPE_Assets_s_Weapons_Rifles_s", "WW2_SPE_Assets_s_Weapons_SniperRifles_s", "WW2_SPE_Assets_s_Weapons_Sounds_s","WW2_SPE_Assets_c_Weapons_Ammoboxes_c", "WW2_SPE_Assets_c_Weapons_Backpacks_c", "WW2_SPE_Assets_c_Weapons_Effects_c", "WW2_SPE_Assets_c_Weapons_Misc_c", "WW2_SPE_Assets_c_Weapons_Recoil_c", "WW2_SPE_Assets_c_Weapons_SoundsFeedback_c", "WW2_SPE_Assets_c_Weapons_WeaponHandling_c", "WW2_SPE_Assets_c_Weapons_InfantryWeapons_c", "WW2_SPE_Assets_c_Weapons_Mines_c", "WW2_SPE_Assets_c_Weapons_Misc_c_Arsenal", "WW2_SPE_Assets_c_Weapons_Misc_c_TaskForceRadioItems_Compatibility", "WW2_SPE_Assets_c_Weapons_SimpleObjects_c", "WW2_SPE_Assets_c_Weapons_AmmoParameters_c", "WW2_SPE_Assets_c_Weapons_Misc_c_AdvancedCombatRadioEnvironment2RadioItems_Compatibility", "WW2_SPE_Assets_c_Weapons_ZZZ_LastLoaded_c", "WW2_SPE_Assets_c_Weapons_Sounds_c"};
		authors[] = {"GeorgRavioli","Sigliskovich","Harkness31"};
	};
};

class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference

class CfgWeapons{
	class SPE_SMG;
	class SPE_Sten_Mk2: SPE_SMG{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;			
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"Squad_VHSD2_Sets","Small_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
		};
		class Full: Mode_FullAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"Squad_VHSD2_Sets","Small_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
		};
		class Far: Full{
			autoFire = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Medium{
			showToPlayer = 0;
		};
	};
	class SPE_Sten_Mk2_Suppressed: SPE_Sten_Mk2{
		class baseSoundModeType;		
		class Single: Single{
			class StandardSound: StandardSound{
				SoundSetShot[] = {"Squad_M4Suppressed_Sets","Squad556_BulletCasings_Sets","MX_silencerTail_SoundSet"};
			};
		};
		class Far: Single{
			autoFire = 0;
		};
		class Medium: Single{
			showToPlayer = 0;

		};
		class Short: Single{
			showToPlayer = 0;
		};
	};	
	class SPE_MP40: SPE_SMG{
		class Full: Mode_FullAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PS_MP40_Sets","PS_MP402_Sets","PS_MP403_Sets","SPAR01_tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class Far: Full
		{
			showToPlayer = 0;
		};
		class Medium: Full
		{
			showToPlayer = 0;
		};
		class Short: Medium{
			showToPlayer = 0;
		};
	};
	class SPE_M1A1_Thompson: SPE_SMG{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PS_Thompson_Sets", "Small_Reflection_SoundSet", "Squad556_BulletCasings_Sets", "SPAR01_tail_SoundSet"};
			};
		};
		class Full: Mode_FullAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PS_Thompson_Sets", "Small_Reflection_SoundSet", "Squad556_BulletCasings_Sets", "SPAR01_tail_SoundSet"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Medium{
			showToPlayer = 0;
		};
	};
	class SPE_MP35: SPE_SMG{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_Scorpion_Sets","Small_Reflection_SoundSet","Squad556_BulletCasings_Sets","4Five_Tail_SoundSet"};
			};
		};
		class Full: Mode_FullAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_Scorpion_Sets","Small_Reflection_SoundSet","Squad556_BulletCasings_Sets","4Five_Tail_SoundSet"};
			};
		};
		class Far: Full
		{
			showToPlayer = 0;
		};
		class Medium: Full
		{
			showToPlayer = 0;
		};
		class Short: Medium{
			showToPlayer = 0;
		};
	};
	class SPE_M3_GreaseGun: SPE_SMG{
		class Full: Mode_FullAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"Squad_M3GreaseGun_Sets","Small_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
			class SilencedSound: baseSoundModeType{
				SoundSetShot[] = {"Sig_M3GreaseGun_silencerShot_SoundSet","Small_SD_Reflection_SoundSet","Sig_bulletcasing_small_soundset"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Medium{
			showToPlayer = 0;
		};
	};
};
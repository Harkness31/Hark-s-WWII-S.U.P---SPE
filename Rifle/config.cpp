class CfgPatches {
	class Harks_SPE_RIFLE_SUP {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"Sig_soundsa3_COMPAT_CDLC_SPE_Rifle","Sig_soundsa3_COMPAT_CDLC_SPE","squad_weapon_soundmod","Sig_Sounds","WW2_SPE_Assets_s_Weapons_Ammo_s", "WW2_SPE_Assets_s_Weapons_Explosions_s", "WW2_SPE_Assets_s_Weapons_Launchers_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Heavy_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Light_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Sub_s", "WW2_SPE_Assets_s_Weapons_Misc_s", "WW2_SPE_Assets_s_Weapons_Pistols_s", "WW2_SPE_Assets_s_Weapons_Rifles_s", "WW2_SPE_Assets_s_Weapons_SniperRifles_s", "WW2_SPE_Assets_s_Weapons_Sounds_s","WW2_SPE_Assets_c_Weapons_Ammoboxes_c", "WW2_SPE_Assets_c_Weapons_Backpacks_c", "WW2_SPE_Assets_c_Weapons_Effects_c", "WW2_SPE_Assets_c_Weapons_Misc_c", "WW2_SPE_Assets_c_Weapons_Recoil_c", "WW2_SPE_Assets_c_Weapons_SoundsFeedback_c", "WW2_SPE_Assets_c_Weapons_WeaponHandling_c", "WW2_SPE_Assets_c_Weapons_InfantryWeapons_c", "WW2_SPE_Assets_c_Weapons_Mines_c", "WW2_SPE_Assets_c_Weapons_Misc_c_Arsenal", "WW2_SPE_Assets_c_Weapons_Misc_c_TaskForceRadioItems_Compatibility", "WW2_SPE_Assets_c_Weapons_SimpleObjects_c", "WW2_SPE_Assets_c_Weapons_AmmoParameters_c", "WW2_SPE_Assets_c_Weapons_Misc_c_AdvancedCombatRadioEnvironment2RadioItems_Compatibility", "WW2_SPE_Assets_c_Weapons_ZZZ_LastLoaded_c", "WW2_SPE_Assets_c_Weapons_Sounds_c"};
		authors[] = {"GeorgRavioli","Sigliskovich","Harkness31"};		
	};
};

class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference

class CfgWeapons{
	class Rifle_Base_F;
	class SPE_RIFLE: Rifle_Base_F{
		class SAFE;
		class Eventhandlers;
	};

	class SPE_STG44: SPE_RIFLE{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"Squad_MP44_Semi_Sets","Squad762_BulletCasings_Sets","Medium_Reflection_SoundSet","SPAR01_tail_SoundSet"};
			};
		};
		class Full: Mode_FullAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"Squad_MP44_Semi_Sets","Squad762_BulletCasings_Sets","Medium_Reflection_SoundSet","SPAR01_tail_SoundSet"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Medium{};
	};
	class SPE_M1_Garand: SPE_RIFLE{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"SPE_garand_Shot_SoundSet","SPE_rifle2_Tail_SoundSet","SPE_garand_stereoLayer_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
	class SPE_MAS_36: SPE_RIFLE{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {""};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
	class SPE_G43: SPE_RIFLE{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PS_G43_Sets", "SPAR_17_Tail_SoundSet","Squad762_BulletCasings_Sets","Large_Reflection_DMR_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
	class SPE_No3_Mk1_Enfield: SPE_RIFLE{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PS_Lee_Enfield_Sets","PS_Lee_Enfield2_Sets","Squad762_BulletCasings_Sets","SPAR_17_Tail_SoundSet"};
			};
		};
	};	
	class SPE_SRIFLE;
	class SPE_K98: SPE_RIFLE{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"Squad_Kar98k_Sets","Squad762_BulletCasings_Sets","SPAR_17_Tail_SoundSet","Large_Reflection_DMR_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
	class SPE_K98ZF39: SPE_SRIFLE{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"Squad_Kar98k_Sets","Squad762_BulletCasings_Sets","SPAR_17_Tail_SoundSet","Large_Reflection_DMR_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};		
	class SPE_M1_Carbine: SPE_RIFLE{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PS_M1Carbine_Sets", "SPAR01_tail_SoundSet", "Squad556_BulletCasings_Sets"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
//Springfield! Springfield! It's a helluva gun!		
	class SPE_M1903A4_Springfield: SPE_SRIFLE{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PS_Springfield_Sets","PS_Springfield2_Sets","Squad762_BulletCasings_Sets","SPAR_17_Tail_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
	class SPE_M1903A3_Springfield: SPE_RIFLE{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PS_Springfield_Sets","PS_Springfield2_Sets","Squad762_BulletCasings_Sets","SPAR_17_Tail_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};	
	class SPE_FG42_E: SPE_RIFLE{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PS_FG42_Sets","PS_FG422_Sets","SPAR_17_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class Full: Mode_FullAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PS_FG42_Sets","PS_FG422_Sets","SPAR_17_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
	};
};
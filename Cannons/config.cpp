class CfgPatches {
	class Sig_soundsa3_COMPAT_CDLC_SPE_Cannons {
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
	class CannonCore;
	class SPE_CannonCore: CannonCore{
		class player;
		class close;
		class short;
		class medium;
		class far;
	};
	class SPE_TankCannon_base: SPE_CannonCore{
		class player;
		class close;
		class short;
		class medium;
		class far;
	};
	
	class SPE_StaticGunCannon_base: SPE_TankCannon_base{};

	class SPE_Flak36_L56_base: SPE_StaticGunCannon_base{
		class player: player{
			class baseSoundModeType;
			class StandardSound{
				SoundSetShot[] = {"Sig_Flak88_Shot_SoundSet","Sig_Cannon_Medium_Reflection_SoundSet"};
			};
		};
		class close: close{
			class baseSoundModeType;
			class StandardSound{
				SoundSetShot[] = {"Sig_Flak88_Shot_SoundSet","Sig_Cannon_Medium_Reflection_SoundSet"};
			};
		};
		class short: short{
			class baseSoundModeType;
			class StandardSound{
				SoundSetShot[] = {"Sig_Flak88_Shot_SoundSet","Sig_Cannon_Medium_Reflection_SoundSet"};
			};
		};
		class medium: medium{
			class baseSoundModeType;
			class StandardSound{
				SoundSetShot[] = {"Sig_Flak88_Shot_SoundSet","Sig_Cannon_Medium_Reflection_SoundSet"};
			};
		};
		class far: far{
			class baseSoundModeType;
			class StandardSound{
				SoundSetShot[] = {"Sig_Flak88_Shot_SoundSet","Sig_Cannon_Medium_Reflection_SoundSet"};
			};
		};
	};
	class SPE_AntiAirCannon_base: CannonCore{
		class manual;
		class close; 
		class short;
		class medium;
		class far;
	};		
	class SPE_FlaK_38: SPE_AntiAirCannon_base{
		class manual: manual{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Sig_Flak38_Shot_SoundSet","Sig_Cannon_Small_Reflection_AA_SoundSet"};
			};
		};
		class close: close{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Sig_Flak38_Shot_SoundSet","Sig_Cannon_Small_Reflection_AA_SoundSet"};
			};
		};
		class short: short{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Sig_Flak38_Shot_SoundSet","Sig_Cannon_Small_Reflection_AA_SoundSet"};
			};
		};
		class medium: medium{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Sig_Flak38_Shot_SoundSet","Sig_Cannon_Small_Reflection_AA_SoundSet"};
			};
		};
		class far: far{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Sig_Flak38_Shot_SoundSet","Sig_Cannon_Small_Reflection_AA_SoundSet"};
			};
		};
	};	
	class SPE_FlaK_30: SPE_FlaK_38{
		class manual: manual{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Sig_Flak38_Shot_SoundSet","Sig_Cannon_Small_Reflection_AA_SoundSet"};
			};
		};
		class close: close{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Sig_Flak38_Shot_SoundSet","Sig_Cannon_Small_Reflection_AA_SoundSet"};
			};
		};
		class short: short{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Sig_Flak38_Shot_SoundSet","Sig_Cannon_Small_Reflection_AA_SoundSet"};
			};
		};
		class medium: medium{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Sig_Flak38_Shot_SoundSet","Sig_Cannon_Small_Reflection_AA_SoundSet"};
			};
		};
		class far: far{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Sig_Flak38_Shot_SoundSet","Sig_Cannon_Small_Reflection_AA_SoundSet"};
			};
		};
	};		
	
	class SPE_Pak40_base: SPE_StaticGunCannon_base{
		class player: player{
			class StandardSound{
				soundSetShot[] = {"Sig_Pak38_Shot_SoundSet", "Sig_Cannon_Medium_Reflection_SoundSet"};
			};
		};
		class close: close{
			class StandardSound{
				soundSetShot[] = {"Sig_Pak38_Shot_SoundSet", "Sig_Cannon_Medium_Reflection_SoundSet"};
			};
		};
		class short: short{
			class StandardSound{
				soundSetShot[] = {"Sig_Pak38_Shot_SoundSet", "Sig_Cannon_Medium_Reflection_SoundSet"};
			};
		};
		class medium: medium{
			class StandardSound{
				soundSetShot[] = {"Sig_Pak38_Shot_SoundSet", "Sig_Cannon_Medium_Reflection_SoundSet"};
			};
		};
		class far: far{
			class StandardSound{
				soundSetShot[] = {"Sig_Pak38_Shot_SoundSet", "Sig_Cannon_Medium_Reflection_SoundSet"};
			};
		};
	};
};
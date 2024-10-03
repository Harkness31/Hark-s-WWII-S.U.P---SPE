class CfgPatches {
	class Harks_SPE_MG_SUP {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"Sig_soundsa3_COMPAT_CDLC_SPE_MG","squad_weapon_soundmod","Sig_Sounds","WW2_SPE_Assets_s_Weapons_Ammo_s", "WW2_SPE_Assets_s_Weapons_Explosions_s", "WW2_SPE_Assets_s_Weapons_Launchers_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Heavy_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Light_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Sub_s", "WW2_SPE_Assets_s_Weapons_Misc_s", "WW2_SPE_Assets_s_Weapons_Pistols_s", "WW2_SPE_Assets_s_Weapons_Rifles_s", "WW2_SPE_Assets_s_Weapons_SniperRifles_s", "WW2_SPE_Assets_s_Weapons_Sounds_s","WW2_SPE_Assets_c_Weapons_Ammoboxes_c", "WW2_SPE_Assets_c_Weapons_Backpacks_c", "WW2_SPE_Assets_c_Weapons_Effects_c", "WW2_SPE_Assets_c_Weapons_Misc_c", "WW2_SPE_Assets_c_Weapons_Recoil_c", "WW2_SPE_Assets_c_Weapons_SoundsFeedback_c", "WW2_SPE_Assets_c_Weapons_WeaponHandling_c", "WW2_SPE_Assets_c_Weapons_InfantryWeapons_c", "WW2_SPE_Assets_c_Weapons_Mines_c", "WW2_SPE_Assets_c_Weapons_Misc_c_Arsenal", "WW2_SPE_Assets_c_Weapons_Misc_c_TaskForceRadioItems_Compatibility", "WW2_SPE_Assets_c_Weapons_SimpleObjects_c", "WW2_SPE_Assets_c_WeaponsAmmoParameters_c", "WW2_SPE_Assets_c_Weapons_Misc_c_AdvancedCombatRadioEnvironment2RadioItems_Compatibility", "WW2_SPE_Assets_c_Weapons_ZZZ_LastLoaded_c", "WW2_SPE_Assets_c_Weapons_Sounds_c"};
		authors[] = {"GeorgRavioli","Sigliskovich","Harkness31"};		
	};
};

class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference

class CfgWeapons{
	class SPE_LMG;
	class SPE_M1918A2_BAR: SPE_LMG{
		class Full: Mode_FullAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"FoW_Bar_Firing", "FoW_MG_EFX", "FoW_Interior_Reverb", "SPAR_17_Tail_SoundSet"};
			};
		};
		class Full_Rapid: Full{};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Full_Rapid{
			showToPlayer = 0;
		};
		class Close: Full_Rapid{
			showToPlayer = 0;
		};
	};
	class SPE_M1918A0_BAR: SPE_M1918A2_BAR{
		class Full: Mode_FullAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"FoW_Bar_Firing", "FoW_MG_EFX", "FoW_Interior_Reverb", "SPAR_17_Tail_SoundSet"};
			};
		};
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"FoW_Bar_Firing", "FoW_MG_EFX", "FoW_Interior_Reverb", "SPAR_17_Tail_SoundSet"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Full_Rapid{
			showToPlayer = 0;
		};
		class Close: Full_Rapid{
			showToPlayer = 0;
		};
	};
	class SPE_FM_24_M29: SPE_LMG{
		class Full: Mode_FullAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","Mk200_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","Mk200_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","Mk200_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class Medium: Full{
			showToPlayer = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","Mk200_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class Short: Full{
			showToPlayer = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","Mk200_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
	};
	class MGun;
	class SPE_MLMG_base: MGun {
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class SPE_FM_24_M29_Bipod: SPE_MLMG_base{
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","Mk200_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
			
		};
		class Full: Mode_FullAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","Mk200_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
			
		};
		class close: close{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","Mk200_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
			showToPlayer = 0;
		};
		class short: short{
			class baseSoundModeType;			
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","Mk200_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
			showToPlayer = 0;
		};
		class medium: medium{
			class baseSoundModeType;			
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","Mk200_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
			showToPlayer = 0;
		};
		class far: far{
			class baseSoundModeType;			
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","Mk200_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
			showToPlayer = 0;
		};
	};
	
	class SPE_LMG_303_Mk2: SPE_LMG{
		class Full: Mode_FullAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","Mk200_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class Single: Mode_SemiAuto{
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","Mk200_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","Mk200_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class Medium: Full{
			showToPlayer = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","Mk200_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class Short: Full{
			showToPlayer = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","Mk200_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
	};
	class SPE_TankMGun_base: MGun{
		class manual;
		class close;
		class short;
		class medium;
		class far;	
	};		
	class SPE_M1919A4: SPE_LMG{
		class Full: Mode_FullAuto{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Full{
			showToPlayer = 0;
		};
		class Close: Full{
			showToPlayer = 0;
		};
	};	
	class SPE_M1919A4_tripod: SPE_MLMG_base{
		class manual: manual{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class close: close{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class short: short{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class medium: medium{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class far: far{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
	};	
	class SPE_M1919A4_Pintle: SPE_M1919A4_tripod{
		class manual: manual{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class close: close{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class short: short{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class medium: medium{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class far: far{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
	};
	class SPE_M1919A4_coax: SPE_TankMGun_base{
		class manual: manual{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"PSM1919_Sets","PSM1919EXTCoax_Sets","PSM1919INTCoax_Sets","Mk200_Tail_SoundSet"};
			};
		};
		class close: close{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"PSM1919_Sets","PSM1919EXTCoax_Sets","PSM1919INTCoax_Sets","Mk200_Tail_SoundSet"};
			};
		};
		class short: short{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"PSM1919_Sets","PSM1919EXTCoax_Sets","PSM1919INTCoax_Sets","Mk200_Tail_SoundSet"};
			};
		};
		class medium: medium{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"PSM1919_Sets","PSM1919EXTCoax_Sets","PSM1919INTCoax_Sets","Mk200_Tail_SoundSet"};
			};
		};
		class far: far{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"PSM1919_Sets","PSM1919EXTCoax_Sets","PSM1919INTCoax_Sets","Mk200_Tail_SoundSet"};
			};
		};
	};	
	class SPE_MG34: SPE_LMG{
		class Single: Mode_SemiAuto{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class Full: Mode_FullAuto{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Full{
			showToPlayer = 0;
		};
		class Close: Full{
			showToPlayer = 0;
		};
	};
	class SPE_MG34_Tripod: SPE_MLMG_base{
		class manual: manual{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class close: close{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class short: short{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class medium: medium{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class far: far{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
	};
	class SPE_MG34_Veh: SPE_MG34_Tripod{
		class manual: manual{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class close: close{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class short: short{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class medium: medium{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class far: far{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
	};	
	class SPE_MG34_coax: SPE_TankMGun_base{
		class manual: manual{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSMG34INTCoax_Sets","PSMG34EXTCoax_Sets","Squad556_BulletCasings_Sets","SyndikatLMG_Tail_SoundSet"};
			};
		};
		class close: close{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSMG34INTCoax_Sets","PSMG34EXTCoax_Sets","Squad556_BulletCasings_Sets","SyndikatLMG_Tail_SoundSet"};
			};
		};
		class short: short{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSMG34INTCoax_Sets","PSMG34EXTCoax_Sets","Squad556_BulletCasings_Sets","SyndikatLMG_Tail_SoundSet"};
			};
		};
		class medium: medium{		
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSMG34INTCoax_Sets","PSMG34EXTCoax_Sets","Squad556_BulletCasings_Sets","SyndikatLMG_Tail_SoundSet"};
			};
		};
		class far: far{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"PSMG34INTCoax_Sets","PSMG34EXTCoax_Sets","Squad556_BulletCasings_Sets","SyndikatLMG_Tail_SoundSet"};
			};
		};
	};	
	class SPE_MG42: SPE_LMG{
		class Full: Mode_FullAuto{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"Squad_MG42_Sets","Medium_Reflection_Capped_SoundSet","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
			soundContinuous = 0;
			soundBurst = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Full{
			showToPlayer = 0;
		};
		class Close: Full{
			showToPlayer = 0;
		};
	};	
	class SPE_MLMG42: SPE_MLMG_base{
		class manual: manual{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"Squad_MG42_Sets","Medium_Reflection_Capped_SoundSet","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class close: close{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"Squad_MG42_Sets","Medium_Reflection_Capped_SoundSet","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class short: short{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"Squad_MG42_Sets","Medium_Reflection_Capped_SoundSet","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class medium: medium{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"Squad_MG42_Sets","Medium_Reflection_Capped_SoundSet","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class far: far{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundSetShot[] = {"Squad_MG42_Sets","Medium_Reflection_Capped_SoundSet","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
	};	
	class SPE_M2: SPE_MLMG_base{
		class manual: manual{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;			
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
		class close: close{
			showToPlayer = 0;
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
		class short: short{
			showToPlayer = 0;
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
		class medium: medium{
			showToPlayer = 0;
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
		class far: far{
			showToPlayer = 0;
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
	};
	class SPE_M2_Pintle: SPE_M2{
			class manual: manual{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
		class close: close{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
		class short: short{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
		class medium: medium{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
		class far: far{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
	};
	class CannonCore;
	class SPE_AntiAirCannon_base: CannonCore{
		class manual;
		class close; 
		class short;
		class medium;
		class far;
	};			
	class SPE_M2_x4: SPE_AntiAirCannon_base{
		class manual: manual{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
		class close: close{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
		class short: short{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
		class medium: medium{
			soundContinuous = 0;
			soundBurst = 0;
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
		class far: far{
			soundContinuous = 0;
			soundBurst = 0;			
			class baseSoundModeType;
			class StandardSound: baseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};		
	};
};

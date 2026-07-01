class CfgPatches
{
	class NDS_M224_mortar
	{
		addonRootClass="A3_Static_F";
		requiredAddons[]=
		{
			"A3_Static_F",
			"A3_Weapons_F",
			"A3_Anims_F",
			"A3_Anims_F_Config_Sdr",
			"A3_Data_F",
			"A3_Ui_F",
			"A3_Data_F_ParticleEffects",
			"A3_Weapons_F_Ammoboxes"
		};
		requiredVersion=0.1;
		units[]=
		{
			"NDS_M224_mortar",
			"NDS_M224_mortar_AI",
			"NDS_B_M224_mortar",
			"NDS_M224_B_Ammo"
		};
		weapons[]=
		{
			"NDS_W_M224_mortar"
		};
		magazines[]=
		{
			"NDS_M_6Rnd_60mm_HE",
			"NDS_M_6Rnd_60mm_HE_0",
			"NDS_M_6Rnd_60mm_ILLUM",
			"NDS_M_6Rnd_60mm_SMOKE",
			"NDS_M224_mag_empty_m"
		};
		version="0.0.2";
		versionStr="0.0.2";
		versionAr[]={0,0,2};
		ammo[]=
		{
			"NDS_A_60mm_HE",
			"NDS_A_60mm_HE_0",
			"NDS_A_60mm_ILLUM",
			"NDS_A_60mm_SMOKE"
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		NDS_M224_gunner="NDS_M224_gunner";
		NDS_M224_getin="NDS_M224_getin";
		NDS_M224_getout="NDS_M224_getout";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class AmovPercMstpSnonWnonDnon;
		class NDS_M224_gunner: Crew
		{
			file="NDS_M224_mortar\Cannon\data\anim\NDS_M224_gunner.rtm";
			interpolateTo[]=
			{
				"Mortar_01_F_Dead",
				1
			};
		};
		class NDS_M224_getin: AmovPercMstpSnonWnonDnon
		{
			variantsPlayer[]={};
			file="NDS_M224_mortar\Cannon\data\anim\NDS_M224_in.rtm";
			speed=2;
			looped=0;
			soundOverride="Walk";
			disableWeapons=1;
			enableOptics=0;
			leaningFactorBeg=1;
			minPlayTime=0.94999999;
			ignoreMinPlayTime[]=
			{
				"Unconscious"
			};
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPercMstpSnonWnonDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class NDS_M224_getout: NDS_M224_getin
		{
			file="NDS_M224_mortar\Cannon\data\anim\NDS_M224_out.rtm";
			speed=1.5;
			ConnectTo[]=
			{
				"AmovPercMstpSnonWnonDnon",
				0.1
			};
		};
	};
};
class RscText;
class RscControlsGroup;
class RscInGameUi
{
	class RscUnitInfo_AH64D_gunner
	{
		class CA_Heading;
	};
	class RscNDS_M224: RscUnitInfo_AH64D_gunner
	{
		idd=-1;
		controls[]=
		{
			"NDS_Heading"
		};
		class NDS_Heading: RscText
		{
			idc=156;
			x=0.23199999;
			y=0.72000003;
			w=0.30000001;
			h=0.050000001;
			colorText[]={0,0,0,1};
		};
	};
};
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgCloudlets
{
	class Default;
	class WPtrails;
	class NDS_WPCloud: Default
	{
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=10;
		volume=7.9000001;
		rubbing=0.1;
		size[]={5,10,13,16,18,20,21,22};
		color[]=
		{
			{1,1,1,1},
			{1,1,1,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="NDS_M224_mortar\scripts\NDS_WPsmoke.sqf";
		lifeTimeVar=0;
		positionVar[]={4,3,4};
		MoveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
};
class NDS_WPExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,0,0};
		intensity=0.001;
		interval=1;
		lifeTime=1;
	};
	class Explosion1
	{
		simulation="particles";
		type="WPCloud";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Explosion2
	{
		simulation="particles";
		type="NDS_WPCloud";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Trails
	{
		simulation="particles";
		type="WPTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class CfgWeapons
{
	class CannonCore;
	class mortar_82mm: CannonCore
	{
		class Single1;
		class Single2;
		class Single3;
		class Burst1;
		class Burst2;
		class Burst3;
	};
	class NDS_W_M224_mortar: mortar_82mm
	{
		displayname="M224 Mortar 60mm";
		artilleryCharge=0.50999999;
		magazines[]=
		{
			"NDS_M_6Rnd_60mm_HE",
			"NDS_M_6Rnd_60mm_HE_0",
			"NDS_M_6Rnd_60mm_ILLUM",
			"NDS_M_6Rnd_60mm_SMOKE"
		};
		class Single1: Single1
		{
			displayName="Ammo Dependant";
			artilleryCharge=0.50999999;
		};
		class Single2: Single2
		{
			artilleryCharge=0.64999998;
			showtoplayer=0;
		};
		class Single3: Single3
		{
			showtoplayer=0;
			artilleryCharge=1;
		};
		class Burst1: Burst1
		{
			artilleryCharge=0.50999999;
			burst=6;
		};
		class Burst2: Burst2
		{
			artilleryCharge=0.50999999;
			burst=6;
		};
		class Burst3: Burst3
		{
			artilleryCharge=0.50999999;
			burst=6;
		};
		modes[]=
		{
			"Single3",
			"Single1",
			"Single2",
			"Burst1",
			"Burst2",
			"Burst3"
		};
	};
};
class CfgMagazines
{
	class 8Rnd_82mm_Mo_shells;
	class 8Rnd_82mm_Mo_Flare_white;
	class 8Rnd_82mm_Mo_Smoke_white;
	class CA_Magazine;
	class NDS_M_6Rnd_60mm_HE: CA_Magazine
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Neddles";
		displayName="M768 60mm HE Charge 1";
		displayNameShort="M768 HE Chg 1";
		count=6;
		picture="\NDS_M224_mortar\cannon\data\ui\ammo_mag_he";
		model="NDS_M224_mortar\magazines\NDS_M224_mag_he1.p3d";
		ammo="NDS_A_60mm_HE";
		initSpeed=222;
		mass=60;
	};
	class NDS_M_6Rnd_60mm_HE_0: NDS_M_6Rnd_60mm_HE
	{
		displayName="M768 60mm HE Charge 0";
		displayNameShort="M768 HE Chg 0";
		ammo="NDS_A_60mm_HE_0";
		model="NDS_M224_mortar\magazines\NDS_M224_mag_he0.p3d";
		initSpeed=124;
	};
	class NDS_M_6Rnd_60mm_ILLUM: CA_Magazine
	{
		scopeCurator=2;
		scopeArsenal=2;
		author="Neddles";
		displayName="M761 60mm ILLUM";
		displayNameShort="ILLUM";
		count=6;
		picture="\NDS_M224_mortar\cannon\data\ui\ammo_mag_illum";
		model="NDS_M224_mortar\magazines\NDS_M224_mag_illum.p3d";
		ammo="NDS_A_60mm_ILLUM";
		initSpeed=222;
		mass=60;
	};
	class NDS_M_6Rnd_60mm_SMOKE: CA_Magazine
	{
		scopeCurator=2;
		scopeArsenal=2;
		author="Neddles";
		ammo="NDS_A_60mm_SMOKE";
		displayName="M722 60mm WP Charge 1";
		displayNameShort="M722 WP Chg 1";
		model="NDS_M224_mortar\magazines\NDS_M224_mag_wp1.p3d";
		count=6;
		picture="\NDS_M224_mortar\cannon\data\ui\ammo_mag_smoke";
		initSpeed=222;
		mass=60;
	};
	class NDS_M224_mag_empty_m: CA_Magazine
	{
		scope=1;
		scopeCurator=1;
		ScopeArsenal=1;
		count=1;
		_generalMacro="NDS_M224_mag_empty";
		displayName="M224 60mm Ammo can";
		author="Neddles";
		model="NDS_M224_mortar\magazines\NDS_M224_mag_empty.p3d";
	};
};
class CfgAmmo
{
	class Sh_82mm_AMOS;
	class Flare_82mm_AMOS_White;
	class Smoke_82mm_AMOS_White;
	class SmokeShellArty;
	class G_40mm_Smoke;
	class NDS_A_60mm_HE: Sh_82mm_AMOS
	{
		caliber=24;
		hit=125;
		indirectHit=32.5;
		indirectHitRange=12.5;
		dangerRadiusHit=242.5;
		suppressionRadiusHit=53.25;
		artilleryCharge=0.50999999;
	};
	class NDS_A_60mm_HE_0: NDS_A_60mm_HE
	{
		artilleryCharge=0.50999999;
	};
	class NDS_A_60mm_ILLUM: Flare_82mm_AMOS_White
	{
		caliber=24;
		timeToLive=60;
		intensity=10000;
		brightness=60;
		size=-5;
		artilleryCharge=0.50999999;
	};
	class NDS_A_60mm_SMOKE: Sh_82mm_AMOS
	{
		hit=50;
		indirectHit=30;
		indirectHitRange=6;
		dangerRadiusHit=-1;
		suppressionRadiusHit=15;
		CraterEffects="HEShellCrater";
		CraterWaterEffects="ImpactEffectsWaterHE";
		ExplosionEffects="NDS_WPExplosion";
		artilleryCharge=0.50999999;
	};
};
class CfgVehicles
{
	class Staticmortar;
	class Mortar_01_base_F: Staticmortar
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class NDS_M224_mortar_base: Mortar_01_base_F
	{
		features="Randomization: No      <br />Camo selections: 1 - the whole weapon with pod      <br />Script door sources: None      <br />Script animations: None      <br />Executed scripts: None      <br />Firing from vehicles: Just the weapon      <br />Slingload: No      <br />Cargo proxy indexes: None";
		author="Neddles";
		_generalMacro="NDS_M224_mortar_base";
		scope=0;
		displayname="M224 Mortar base";
		class Library
		{
			libTextDesc="The M224 60 mm Lightweight Mortar is a smooth bore, muzzle-loading, high-angle-of-fire weapon used for close-in support of ground troops.";
		};
		transportSoldier=0;
		cargoAction[]=
		{
			"NDS_M224_gunner"
		};
		getInAction="NDS_M224_getin";
		getOutAction="NDS_M224_getout";
		editorSubcategory="EdSubcat_Turrets";
		picture="NDS_M224_mortar\cannon\data\ui\NDS_M224_icon_ca.paa";
		icon="NDS_M224_mortar\cannon\data\ui\NDS_M224_map_ca.paa";
		cost=150000;
		accuracy=0.25;
		threat[]={1,0.30000001,0.1};
		gunnerCanSee="2+4+16";
		htMin=1;
		htMax=480;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		class HitPoints
		{
			class HitBody
			{
				armor=4;
				material=-1;
				name="hit_body";
				visual="zbytek";
				passThrough=0.1;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"NDS_M224_mortar\cannon\data\NDS_M224_mortar.rvmat",
				"NDS_M224_mortar\cannon\data\NDS_M224_damage.rvmat",
				"NDS_M224_mortar\cannon\data\NDS_M224_damage.rvmat",
				"NDS_M224_mortar\cannon\data\NDS_M224_range.rvmat",
				"NDS_M224_mortar\cannon\data\NDS_M224_damage.rvmat",
				"NDS_M224_mortar\cannon\data\NDS_M224_damage.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				primaryGunner=1;
				gunnerGetInAction="NDS_M224_getin";
				gunnerGetOutAction="NDS_M224_getout";
				memoryPointsGetInGunner="pos_gunner";
				memoryPointsGetInGunnerDir="pos_gunner_dir";
				memoryPointsGetInGunnerPrecise="pos_gunner";
				preciseGetInOut=1;
				gunnerLeftHandAnimName="otochlaven";
				gunnerRightHandAnimName="otochlaven";
				gunnerAction="NDS_M224_gunner";
				weapons[]=
				{
					"NDS_W_M224_mortar"
				};
				magazines[]=
				{
					"NDS_M_6Rnd_60mm_HE",
					"NDS_M_6Rnd_60mm_HE",
					"NDS_M_6Rnd_60mm_HE_0",
					"NDS_M_6Rnd_60mm_HE_0",
					"NDS_M_6Rnd_60mm_SMOKE",
					"NDS_M_6Rnd_60mm_SMOKE"
				};
				minTurn=-45;
				maxTurn=45;
				minelev=0;
				maxelev=38;
				stabilizedInAxes=1;
				maxVerticalRotSpeed=1;
				initCamElev=-90;
				minCamElev=-100;
				maxCamElev=65;
				cameraDir="eye";
				turretInfoType="RscNDS_M224";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerForceOptics=1;
				hideWeaponsGunner=0;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.75;
					minFov=0.75;
					maxFov=0.75;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					minMoveX=0;
					maxMoveX=0;
					minMoveY=0;
					maxMoveY=0;
					minMoveZ=0;
					maxMoveZ=0;
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.75;
					minFov=0.75;
					maxFov=0.75;
					minMoveX=0;
					maxMoveX=0;
					minMoveY=0;
					maxMoveY=0;
					minMoveZ=0;
					maxMoveZ=0;
					continuous=0;
				};
			};
		};
		class DestructionEffects
		{
			class Smoke
			{
				simulation="particles";
				type="WeaponWreckSmoke";
				position="destructionEffect";
				intensity=1;
				interval=1;
				lifeTime=5;
			};
		};
		model="NDS_M224_mortar\cannon\NDS_M224_mortar";
		artilleryScanner=1;
		class assembleinfo
		{
			base="";
			displayName="";
			assembleTo="";
			primary=1;
			dissasembleTo[]=
			{
				"NDS_B_M224_mortar"
			};
		};
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"NDS_M224_mortar\cannon\data\NDS_M224_co.paa"
		};
		class UserActions
		{
			class Reposition
			{
				displayNameDefault="Realign Mortar";
				displayName="Realign Mortar";
				position="";
				priority=3;
				showWindow=0;
				radius=2.7;
				onlyForPlayer=0;
				condition="alive this AND (count crew this == 0 || isAutonomous this)";
				statement="[this,(getDir player)] spawn fn_NDS_M224_repos;";
			};
			class Reload
			{
				displayNameDefault="<t color='#D4EFDF'>Rearm from ammo boxes</t>";
				displayName="<t color='#D4EFDF'>Rearm from ammo boxes</t>";
				position="";
				priority=3;
				showWindow=0;
				radius=2.7;
				onlyForPlayer=0;
				condition="alive this AND (count magazinesAmmo this <= 5 )";
				statement="[this,0 ] call fn_NDS_M224_rearm;";
			};
			class Unload
			{
				displayNameDefault="<t color='#F5B7B1'>Unload all Ammo</t>";
				displayName="<t color='#F5B7B1'>Unload all Ammo</t>";
				position="";
				priority=1;
				showWindow=0;
				radius=1;
				onlyForPlayer=0;
				condition="alive this AND (count magazinesAmmo this >= 1 ) AND (count crew this == 0)";
				statement="[this,1 ] call fn_NDS_M224_rearm;";
			};
		};
		class AnimationSources
		{
			class foldweapon
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class unfoldweapon
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class Proxy
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
		class EventHandlers
		{
			init="(_this select 0) execVM ""\NDS_M224_mortar\scripts\NDS_M224_init.sqf"" ";
			fired="_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			GetIn="if (local (_this select 0)) then {   (_this select 0) animatesource [""foldweapon"",1];[(_this select 0),(_this select 2)] spawn fn_NDS_M224_in; } ";
			GetOut="if (local (_this select 0)) then {   (_this select 0) animatesource [""foldweapon"",0]; } ";
		};
	};
	class NDS_M224_mortar: NDS_M224_mortar_base
	{
		author="Neddles";
		class SimpleObject
		{
			animate[]=
			{
				
				{
					"foldweapon",
					0
				}
			};
			hide[]={};
			verticalOffset=0;
		};
		editorPreview="NDS_M224_mortar\cannon\data\ui\NDS_M224_eden.jpg";
		_generalMacro="NDS_M224_mortar";
		scope=2;
		scopecurator=2;
		side=1;
		displayname="M224 60mm Mortar";
		editorSubcategory="EdSubcat_Turrets";
		faction="BLU_F";
		crew="B_Soldier_F";
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		hiddenSelectionsTextures[]=
		{
			"NDS_M224_mortar\cannon\data\NDS_M224_co.paa"
		};
	};
	class NDS_M224_mortar_AI: NDS_M224_mortar
	{
		scope=1;
		scopecurator=1;
		_generalMacro="NDS_M224_mortar_F";
		displayname="M224 60mm Mortar - AI";
		editorSubcategory="EdSubcat_Turrets";
		faction="BLU_F";
		crew="B_Soldier_F";
		model="NDS_M224_mortar\cannon\NDS_M224_mortar_AI";
		class assembleinfo
		{
			base="";
			displayName="";
			assembleTo="";
			primary=1;
			dissasembleTo[]=
			{
				"NDS_B_M224_mortar_F"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"NDS_M224_mortar\cannon\data\NDS_M224_co.paa"
		};
		class EventHandlers
		{
			fired="_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			GetIn="if (local (_this select 0)) then {   (_this select 0) animatesource [""foldweapon"",1]; } ";
			GetOut="if (local (_this select 0)) then {  (_this select 0) animatesource [""foldweapon"",0];[(_this select 0),(_this select 2)] call fn_NDS_M224_out; } ";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn=-90;
				maxTurn=90;
			};
		};
	};
	class Weapon_Bag_Base;
	class Bag_Base;
	class B_Mortar_01_weapon_F: Weapon_Bag_Base
	{
		class assembleinfo;
	};
	class NDS_B_M224_mortar: Bag_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="M224 60mm Mortar";
		picture="NDS_M224_mortar\Backpack\data\ui\NDS_M224_B_UI_CA.paa";
		mass=310;
		autocenter=0;
		editorPreview="NDS_M224_mortar\cannon\data\ui\NDS_M224_bag_eden.jpg";
		model="NDS_M224_mortar\Backpack\NDS_M224_bag.p3d";
		class assembleinfo
		{
			primary=1;
			base="";
			assembleTo="NDS_M224_mortar";
			displayName="60mm Mortar";
			dissasembleTo[]={};
		};
	};
	class B_Carryall_Base;
	class NDS_M224_B_Ammo: B_Carryall_Base
	{
		scope=2;
		scopeCurator=2;
		author="Neddles";
		displayName="M224 Ammo Backpack";
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		editorPreview="NDS_M224_mortar\Backpack\data\ui\NDS_M224_ammo_bag_eden.jpg";
		maximumLoad=240;
		mass=250;
		class TransportItems
		{
		};
		class TransportMagazines
		{
			class _xx_NDS_M_6Rnd_60mm_HE
			{
				magazine="NDS_M_6Rnd_60mm_HE";
				count=2;
			};
			class _xx_NDS_M_6Rnd_60mm_HE_0
			{
				magazine="NDS_M_6Rnd_60mm_HE_0";
				count=1;
			};
			class _xx_NDS_M_6Rnd_60mm_SMOKE
			{
				magazine="NDS_M_6Rnd_60mm_SMOKE";
				count=1;
			};
		};
	};
};

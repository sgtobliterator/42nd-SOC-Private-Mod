class CfgPatches
{
	class avs_base
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class XtdGearModels {

	class CfgWeapons {

		class cct_vest {
			label="CCT Vest";
			author="Sergeant";
			options[]= {
				"android"
			};
			class android {
				label="Android";
				changeingame=1;
				values[]= {
					"deployed",
					"stowed"
				};
				class deployed {
					label="Deployed";
				};
				class stowed {
					label="Stowed";
				};
			};	
		}	;
	};
};

class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class VestItem;
	class JPC_J1: ItemCore
	{
		author="Michael";
		picture="\Michael_CCT\logo.paa";
		scope=2;
		weaponPoolAvailable=1;
		displayName="CCT (UP)";
		model="\Michael_CCT\Michael_Vest.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=20;
			uniformModel="\Michael_CCT\Michael_Vest";
			containerClass="Supply500";
			modelSides[]={3,1};
			armor="20*0.5";
			passThrough=0.30000001;
			hiddenSelections[]=
			{
				""
			};
		};
		class XtdGearInfo
		{
			model="cct_vest";
			android="stowed";
		};
	};
	class JPC_J2: ItemCore
	{
		author="Michael";
		picture="\Michael_CCT\logo.paa";
		scope=2;
		weaponPoolAvailable=1;
		displayName="CCT (Down) ";
		model="\Michael_CCT\Michael_Vest_Down.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=20;
			uniformModel="\Michael_CCT\Michael_Vest_Down.p3d";
			containerClass="Supply500";
			modelSides[]={3,1};
			armor="20*0.5";
			passThrough=0.30000001;
			hiddenSelections[]=
			{
				""
			};
		};
		class XtdGearInfo
		{
			model="cct_vest";
			android="deployed";
		};
	};
};
class CfgVehicles
{
	class ContainerSupply;
	class Supply400: ContainerSupply
	{
		maximumLoad=400;
	};
};
class cfgMods
{
	author="Michael";
	timepacked="1678405990";
};

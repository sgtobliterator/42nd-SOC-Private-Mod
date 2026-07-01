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
		displayName="Michael CCT (UP) ";
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
	};
	class JPC_J2: ItemCore
	{
		author="Michael";
		picture="\Michael_CCT\logo.paa";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Michael CCT (Down) ";
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
	};
};
class CfgVehicles
{
	class Man;
	class ContainerSupply;
	class Supply400: ContainerSupply
	{
		maximumLoad=400;
	};
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class Viking_3rdSFGZ_Equipment_Actions
				{
					displayName="Vest Modifications";
					icon="avs\data\.paa";
					class unfoldjugg
					{
						displayName="Unfold Jugg";
						condition="vest player == 'JPC_J1'";
						exceptions[]={};
						statement="                    _items = VestItems player;                    _player addVest 'JPC_J2';                    {player addItemToVest _x;} forEach _items;					[ace_player, 'AVS_J2'] remoteExec ['switchMove', 0];                    ";
					};
					class foldjugg
					{
						displayName="Fold Jugg";
						condition="vest player == 'JPC_J2'";
						exceptions[]={};
						statement="                    _items = vestItems player;                    _player addVest 'JPC_J1';                    {player addItemToVest _x;} forEach _items;					[ace_player, 'AVS_J1'] remoteExec ['switchMove', 0];                    ";
					};
				};
			};
		};
	};
};
class cfgMods
{
	author="Michael";
	timepacked="1678405990";
};

class CfgPatches
{
	class amtgopro
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class cfgWeapons
{
	class NVGoggles;
	class amtgopro1: NVGoggles
	{
		author="Oguzhan";
		displayName="GoPro";
		picture="amtgopro2\siyah.paa";
		model="amtgopro2\gopro1.p3d";
		modelOptics="-";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="amtgopro2\gopro1.p3d";
			modelOff="amtgopro2\gopro1.p3d";
			mass=10;
		};
	};
	class amtgopro2: NVGoggles
	{
		author="Oguzhan";
		displayName="GoPro Action";
		picture="amtgopro2\siyah.paa";
		model="amtgopro2\goproaksiyon.p3d";
		modelOptics="-";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="amtgopro2\goproaksiyon.p3d";
			modelOff="amtgopro2\goproaksiyon.p3d";
			mass=10;
		};
	};
};
class cfgMods
{
	author="Oguzhan Arslan[TOB]";
	timepacked="1606680094";
};

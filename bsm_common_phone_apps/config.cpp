// PREFIX = bsm_apptest

#include "\bsm_polyliner\GUI\defines.hpp"
#include "\bsm_polyliner\GUI\phone_base.hpp"
#include "\bsm_polyliner\GUI\BSM_TestAppProject.hpp"

class CfgPatches
{
	class Broken_Skull_Polyliner
	{
		author = "by You";
		name = "Broken Skull Mods™ - Testing App Project";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "Broken_Skull_ChestPhone" };
	};
};

class CfgFunctions {
	class BrokenSkullMods {
		class PhoneApp_Test {
			file = "\bsm_apptest\functions\PhoneApp_Test";
			class initiliazeAppRegistration { postInit = 1;  };
		};
	};
};


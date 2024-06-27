// PREFIX = bsm_app_radio

#include "\bsm_polyliner\GUI\defines.hpp"
#include "\bsm_polyliner\GUI\phone_base.hpp"
#include "\bsm_polyliner\GUI\custom_app.hpp"

class CfgPatches
{
	class bsm_app_radio
	{
		author = "by You";
		name = "Broken Skull Mods™ - App Radio";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "Broken_Skull_ChestPhone" };
	};
};

class CfgFunctions {
	class bsm { // TODO: Change to General Prefix for Apps eg: BSM
		class bsm_app_radio {
			file = "\bsm_app_radio\functions";
			class initiliazeAppRegistration { postInit = 1;  };
		};
	};
};


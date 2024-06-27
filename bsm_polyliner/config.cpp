// PREFIX = bsm_polyliner

#include "\bsm_polyliner\data\gui\defines.hpp"
#include "\bsm_polyliner\data\gui\Polyliner.hpp"

class CfgPatches
{
	class Broken_Skull_Polyliner
	{
		author = "Broken Skull Mods™";
		name = "Broken Skull Mods™ - Letingi Mission Maker";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "Broken_Skull_ChestPhone" };
	};
};


// bs_hider
class CfgFunctions {
	class BrokenSkullMods {
		class Polyliner {
			file = "\bsm_polyliner\functions\polyliner";
			class hideOutsideCoverMap { postInit = 1; };
			class generatePolylines { };
			class stupidInitializerForPolylinerApp { postInit = 1;  };
		};
	};
};


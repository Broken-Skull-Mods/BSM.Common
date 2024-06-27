## How to Create an App Screen

### First Create GUI Classes [**myui.hpp**]
```
// Import Controls
#include "defines.hpp"
// Import Base Class
class BSM_DT_Tablet_BASE {
    class controls {
		class Frame_Base;
		class Frame_Base_Picture;
		class Button_Home_Base;
		class Button_Up_Base;
		class Button_Down_Base;
		class Button_Exit_Base;
    };
};

// Setup and Create Your Own App
class MyAddon_FirstApp : BSM_DT_Tablet_BASE {
	idd = -1; // idd should be unique, usually should not use it... all behavior should be done through events
	// onLoad="[(_this # 0)] spawn BrokenSkullMods_fnc_chestPhoneHomeScreenOnLoad";
	class controls : controls {
		// Import Base Control Layout;
		class Frame_Base : Frame_Base { };
		class Frame_Base_Picture : Frame_Base_Picture { };
		class Button_Home_Base : Button_Home_Base { };
		class Button_Up_Base : Button_Up_Base { 
			// action = "[(_this # 0)] call BrokenSkullMods_fnc_chestPhoneHomeScreenUp;";
		};
		class Button_Down_Base : Button_Down_Base {
			// action = "[(_this # 0)] call BrokenSkullMods_fnc_chestPhoneHomeScreenDown;";
		};
		class Button_Exit_Base : Button_Exit_Base { };
	};
};
```

### Create a Registering Function (Optional) [**config.cpp**]
```
// You need to register your UI otherwise you will have to do it in the mission to access it from the phone app system.
class CfgPatches
{
	class My_MOD_ADDON
	{
		author = "Broken Skull Mods™";
		name = "Broken Skull Mods™ - My Custom Application";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "Broken_Skull_ChestPhone" }; // Very Important
	};
};

class CfgFunctions {
	class MyModFunctions {
		class ChestPhone {
			class initializeChestPhone { postInit = 1;  };
		};
	};
};

// Register App without phone application, could be link, ingame action or external gui.
["Test App", "\bsm_chest_phone\data\icons\App_Icon_BSM.paa", { [] call BrokenSkullMods_fnc_chestPhoneExit; hint "Cracked Skull"; }] call BrokenSkullMods_fnc_chestPhoneRegisterApp; 

// Register GUI App with will create a dialog for the specified GUI
["Test App", "\bsm_chest_phone\data\icons\App_Icon_Debug.paa", "PREFIX_MYAPP"] call BrokenSkullMods_fnc_chestPhoneRegisterApp; 
```

### Register All Apps (Optional) [**fn_initializeChestPhone.sqf**]
```
// Register GUI App with will create a dialog for the specified GUI
["Test App", "\bsm_chest_phone\data\icons\App_Icon_Debug.paa", "MyAddon_FirstApp"] call BrokenSkullMods_fnc_chestPhoneRegisterApp;

// Register App without phone application, could be link, ingame action or external gui.
["Test App", "\bsm_chest_phone\data\icons\App_Icon_BSM.paa", { createDialog "MyAddon_FirstApp"; }] call BrokenSkullMods_fnc_chestPhoneRegisterApp; 

```
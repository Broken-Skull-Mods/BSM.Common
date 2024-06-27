class BSM_TestAppProject : BSM_DT_Tablet_BASE {
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
        class RscStructuredText_1100: RscStructuredText {
            idc = 1100;
            text = "This is a Test App";
            x = 0.304062 * safezoneW + safezoneX;
            y = 0.35 * safezoneH + safezoneY;
            w = 0.154687 * safezoneW;
            h = 0.22 * safezoneH;
        };
	};
};










	




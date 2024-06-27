

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
class BSM_Polyliner_Tool : BSM_DT_Tablet_BASE {
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
        class RscStructuredText_1100: RscStructuredText
        {
            idc = 1100;
            text = "We  made a hide all not needed stuff out side the mission area by using the Hide Map area Moduel, it vill boost frames just name it bs_hide .";
            x = 0.304062 * safezoneW + safezoneX;
            y = 0.35 * safezoneH + safezoneY;
            w = 0.154687 * safezoneW;
            h = 0.22 * safezoneH;
        };
        
        class RscStructuredText_1101: RscStructuredText
        {
            idc = 1101;
            text = "To save a drawing on the map so you can paste it again after reload.. good for like mission briefing drawings.   Start by Drawing a Picture then klick the Button to save it to memory.";
            x = 0.304062 * safezoneW + safezoneX;
            y = 0.54 * safezoneH + safezoneY;
            w = 0.144375 * safezoneW;
            h = 0.12 * safezoneH;
        };

        class RscStructuredText_1102: RscStructuredText
        {
            idc = 1102;
            text = "Then Paste (CTRL-V) it to any init that is loaded befor the Briefing Screen or to a file in the mission folder."; 
            x = 0.304062 * safezoneW + safezoneX;
            y = 0.704 * safezoneH + safezoneY;
            w = 0.144375 * safezoneW;
            h = 0.088 * safezoneH;
        };

        class RscButton_1602: RscButton
        {
            idc = 1602;
            periodFocus = 0;
            periodOver = 0;
            period = 0;

            x = 0.304688 * safezoneW + safezoneX;
            y = 0.51 * safezoneH + safezoneY;
            w = 0.144375 * safezoneW;
            h = 0.002 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {1,1,1,1};
            colorActive[] = {1,1,1,1};
        };
        class RscButton_1600: RscButton
        {
            idc = 1600;
            action = "copyToClipboard 'bs_hide';";
            periodFocus = 0;
            periodOver = 0;
            period = 0;

            text = "Click Here To Save bs_ hide to memory"; //--- ToDo: Localize;
            x = 0.304062 * safezoneW + safezoneX;
            y = 0.45 * safezoneH + safezoneY;
            w = 0.144375 * safezoneW;
            h = 0.044 * safezoneH;
            tooltip = "Archer Company is recruting"; //--- ToDo: Localize;
        };
        class RscButton_1601: RscButton
        {
            idc = 1601;
            action = "[] call BrokenSkullMods_fnc_generatePolylines;";
            //action = "execVM 'broken_skull_mods\Menu\functions\fn_generatePolylines.sqf';";
            periodFocus = 0;
            periodOver = 0;
            period = 0;

            text = "Click Here To Create The Line Code"; //--- ToDo: Localize;
            x = 0.304062 * safezoneW + safezoneX;
            y = 0.66 * safezoneH + safezoneY;
            w = 0.144375 * safezoneW;
            h = 0.044 * safezoneH;
            tooltip = "Archer Company is recruting"; //--- ToDo: Localize;
        };
	};
};










	




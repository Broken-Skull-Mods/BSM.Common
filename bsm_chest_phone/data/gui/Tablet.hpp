class BSM_DT_Tablet_BASE
{
	idd = -1;
	class controls
	{
		class Frame_Base: RscFrame {
			idc = 1800;

			text = ""; //--- ToDo: Localize;
			x = (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2)) / 2);
			y = (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2)) / 2);
			w = ((safeZoneW / safeZoneH) min 1.2);
			h = (((safeZoneW / safeZoneH) min 1.2) / 1.2);
			colorText[] = { 0, 0, 0, 0 };
		};

		class Frame_Base_Picture: RscPicture {
			idc = 1200;

			text = "\bsm_chest_phone\data\pictures\picture.paa";
			x = 0.17 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.66 * safezoneW;
			h = 0.671 * safezoneH;
		};

		class Button_Home_Base: RscShortcutButton {
			action = "closeDialog 0;";

			idc = 1700;
			text = ""; //--- ToDo: Localize;
			x = 0.715531 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;		
			autoAdjustTexture = true;
			animTextureFocused = "\bsm_chest_phone\data\pictures\baseHome.paa";
			animTextureNormal = "\bsm_chest_phone\data\pictures\baseHome.paa";
			animTextureOver = "\bsm_chest_phone\data\pictures\baseHome.paa";
			animTexturePressed = "\bsm_chest_phone\data\pictures\baseHome.paa";
			colorBackgroundFocused[] = {1, 1, 1, 1 };
			colorBackground[] = {1, 1, 1, 1 };
			periodFocus = 0;
			periodOver  = 0;
			period = 0;
			tooltip = "Home"; 
		};

		class Button_Up_Base : RscShortcutButton {
			action = "closeDialog 0;";

			idc = 1701;
			text = ""; //--- ToDo: Localize;
			x = 0.7145 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;		
			autoAdjustTexture = true;
			animTextureFocused = "\bsm_chest_phone\data\pictures\baseUp.paa";
			animTextureNormal = "\bsm_chest_phone\data\pictures\baseUp.paa";
			animTextureOver = "\bsm_chest_phone\data\pictures\baseUp.paa";
			animTexturePressed = "\bsm_chest_phone\data\pictures\baseUp.paa";
			colorBackgroundFocused[] = {1, 1, 1, 1 };
			colorBackground[] = {1, 1, 1, 1 };
			periodFocus = 0;
			periodOver  = 0;
			period = 0;
			tooltip = "Up";
		};

		class Button_Down_Base: RscShortcutButton {
			action = "closeDialog 0;";

			idc = 1702;
			text = ""; //--- ToDo: Localize;
			x = 0.716562 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;		
			autoAdjustTexture = true;
			animTextureFocused = "\bsm_chest_phone\data\pictures\baseDown.paa";
			animTextureNormal = "\bsm_chest_phone\data\pictures\baseDown.paa";
			animTextureOver = "\bsm_chest_phone\data\pictures\baseDown.paa";
			animTexturePressed = "\bsm_chest_phone\data\pictures\baseDown.paa";
			colorBackgroundFocused[] = {1, 1, 1, 1 };
			colorBackground[] = {1, 1, 1, 1 };
			periodFocus = 0;
			periodOver  = 0;
			period = 0;
			tooltip = "Down";
		};

		class Button_Exit_Base: RscShortcutButton {
			action = "call BrokenSkullMods_fnc_chestPhoneExit;";

			idc = 1703;
			text = ""; //--- ToDo: Localize;
			x = 0.469062 * safezoneW + safezoneX;
			y = 0.896 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;		
			autoAdjustTexture = true;
			animTextureFocused = "\bsm_chest_phone\data\pictures\baseExit.paa";
			animTextureNormal = "\bsm_chest_phone\data\pictures\baseExit.paa";
			animTextureOver = "\bsm_chest_phone\data\pictures\baseExit.paa";
			animTexturePressed = "\bsm_chest_phone\data\pictures\baseExit.paa";
			colorBackgroundFocused[] = {1, 1, 1, 1 };
			colorBackground[] = {1, 1, 1, 1 };
			periodFocus = 0;
			periodOver  = 0;
			period = 0;
			tooltip = "Exit";				
		};
		
	};
};



class BSM_DT_Tablet_Home : BSM_DT_Tablet_BASE {
	
	idd = 9999;
	onLoad="[(_this # 0)] spawn BrokenSkullMods_fnc_chestPhoneHomeScreenOnLoad";
	class controls : controls {
		class Frame_Base : Frame_Base { };
		class Frame_Base_Picture : Frame_Base_Picture { };
		class Button_Home_Base : Button_Home_Base { };
		class Button_Up_Base : Button_Up_Base { 
			action = "[(_this # 0)] call BrokenSkullMods_fnc_chestPhoneHomeScreenUp;";
		};
		class Button_Down_Base : Button_Down_Base {
			action = "[(_this # 0)] call BrokenSkullMods_fnc_chestPhoneHomeScreenDown;";
		};
		class Button_Exit_Base : Button_Exit_Base { };

		// App Slots
		class App_0: RscPicture
		{
			idc = 1727;
			text = "\bsm_chest_phone\data\pictures\appBloody.paa";
			colorBackgroundFocused[] = {1,1,1,1};
			periodFocus = 0;
			periodOver = 0;
			period = 0;
			onMouseButtonClick="[(_this # 0)] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp";

			x = 0.278281 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};

		class App_0_Button: RscShortcutButton
		{
			idc = 2727;
			text = "";
			colorBackgroundFocused[] = {1,1,1,0};
			periodFocus = 0;
			periodOver = 0;
			period = 0;
			action="[1727] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp";
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			animTextureOver = "\bsm_chest_phone\data\icons\App_Icon_Overlay.paa";
			autoAdjustTexture = true;
			colorBackground[] = {1,1,1,0};
		};

		class App_1: App_0
		{
			idc = 1704;

			x = 0.350469 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};

		class App_1_Button: App_0_Button {
			idc = 2704;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH; 
			action="[1704] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_2: App_0
		{
			idc = 1705;

			x = 0.422656 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_2_Button: App_0_Button { 
			idc = 2705;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1705] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};
		
		class App_3: App_0
		{
			idc = 1706;

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_3_Button: App_0_Button {
			idc = 2706;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1706] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};
		
		class App_4: App_0
		{
			idc = 1707;

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_4_Button: App_0_Button { 
			idc = 2707;
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1707] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};
		
		class App_5: App_0
		{
			idc = 1708;

			x = 0.639219 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_5_Button: App_0_Button { 
			idc = 2708;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1708] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_6: App_0
		{
			idc = 1709;

			x = 0.278281 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_6_Button: App_0_Button { 
			idc = 2709;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1709] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_7: App_0
		{
			idc = 1710;

			x = 0.350469 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_7_Button: App_0_Button { 
			idc = 2710;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1710] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};


		class App_8: App_0
		{
			idc = 1711;

			x = 0.422656 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_8_Button: App_0_Button { 
			idc = 2711;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1711] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_9: App_0
		{
			idc = 1712;

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_9_Button: App_0_Button { 
			idc = 2712;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1712] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_10: App_0
		{
			idc = 1713;

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_10_Button: App_0_Button { 
			idc = 2713;
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1713] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_11: App_0
		{
			idc = 1714;

			x = 0.639219 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_11_Button: App_0_Button { 
			idc = 2714;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1714] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_12: App_0
		{
			idc = 1715;

			x = 0.278281 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_12_Button: App_0_Button { 
			idc = 2715;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1715] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_13: App_0
		{
			idc = 1716;

			x = 0.350469 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_13_Button: App_0_Button { 
			idc = 2716;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1716] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_14: App_0
		{
			idc = 1717;

			x = 0.422656 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_14_Button: App_0_Button { 
			idc = 2717;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1717] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_15: App_0
		{
			idc = 1718;

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_15_Button: App_0_Button { 
			idc = 2718;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1718] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_16: App_0
		{
			idc = 1719;

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_16_Button: App_0_Button { 
			idc = 2719;
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1719] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_17: App_0
		{
			idc = 1720;

			x = 0.639219 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_17_Button: App_0_Button { 
			idc = 2720;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1720] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_18: App_0
		{
			idc = 1721;

			x = 0.278281 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_18_Button: App_0_Button { 
			idc = 2721;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1721] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_19: App_0
		{
			idc = 1722;

			x = 0.350469 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_19_Button: App_0_Button { 
			idc = 2722;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1722] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_20: App_0
		{
			idc = 1723;

			x = 0.422656 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_20_Button: App_0_Button { 
			idc = 2723;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1723] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_21: App_0
		{
			idc = 1724;

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_21_Button: App_0_Button { 
			idc = 2724;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1724] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_22: App_0
		{
			idc = 1725;

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_22_Button: App_0_Button { 
			idc = 2725;
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1725] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

		class App_23: App_0
		{
			idc = 1726;

			x = 0.639219 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_23_Button: App_0_Button { 
			idc = 2726;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			action="[1726] call BrokenSkullMods_fnc_chestPhoneHomeScreenClickApp"; 
		};

	};
};



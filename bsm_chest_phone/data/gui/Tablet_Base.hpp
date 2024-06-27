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


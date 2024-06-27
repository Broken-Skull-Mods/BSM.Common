[h3] What is Polyline? [/h3]
The polyline mod allows you to save drawings on the map as code to load at the mission start... so you don't have to draw all the lines during the briefing thus saving load time and increasing the fun time.
<code>[] call BrokenSkullMods_fnc_generatePolylines;</code>
[h3] Extra Feature for FPS boosting! [/h3]
Boost local FPS by hiding all non-important terrain objects that are located outside of the cover map module.
To make it work assign variable name of the cover map module to [b]bs_hider[/b].

[h3] Credits [/h3]
[list]
    [*] [url=brokenskulllunatics.com](Broken Skull Lunatics™)[/url] for providing great community to supporting our moddings through playtests.
    [*] [b]Orka[/b] for providing UI and sleepless night of tests and experiements.
    [*] [b]BloodyMystik™[/b] for sticking symbol and magic word that turns into function that somehow works.
[/list]

cd "D:\SteamLibrary\steamapps\common\Arma 3 Tools\AddonBuilder\"

./AddonBuilder.exe "E:\Arma 3 Projects\polyline_addons\polyliner" "E:\Arma 3 Projects\archer_company\addons" -packonly -prefix="tft_so_editor" -sign="D:\SteamLibrary\steamapps\common\Arma 3 Tools\DSSignFile\bloodypvk.biprivatekey" -include="*.p3d;*.paa;*.hpp;*.sqf"




## Gain FPS using the Cover Map Module
We made it very simple to use the cover map to improve FPS on the clients.

It works by hiding all terrain objects outside of the playable area defined by the cover map.

## How to use?
1. Go to 3Den Editor.
1. Open your mission.
1. Place Cover Map module.
1. Set the ```Variable Name``` to ```bs_hider```

[--HighlightCode(Language="sqf")--]
namespace OpenCodeDev.Blazor.Foundation.Doc.Core.Plugins
{
    public static class MDILoader{
        public static async Task LoadMdi(HttpClient client, NavigationManager navigator)
        {
            try
            {
                byte[] licenseResult = await client.GetByteArrayAsync($"{navigator.BaseUri}/_content/OpenCodeDev.Blazor.Foundation.Doc.Core/mdi_database.txt");
                string MDIRawDB = Encoding.UTF8.GetString(licenseResult);
                string pattern = @"(?<=\}\.)(.*?)(?=\:)";
                Regex rg = new Regex(pattern);
                MatchCollection matches = rg.Matches(MDIRawDB);
                Mdi.MdiDatabase = matches.Select(p => p.Value).ToList();
            }
            catch (Exception ex)
            {
                Console.WriteLine($"{ex.Message}");
            }

        }
    }
}
[--/HighlightCode--]

1. Set the desired area and launch the scenario.
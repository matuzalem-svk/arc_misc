#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "ARC Misc: ACE Tweaks";
		author = "ARCOMM";
        url = "https://github.com/ARCOMM/arc_misc";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"arc_misc_main",
			"ace_minedetector"
		};
        VERSION_CONFIG;
	};
};

#include "ACE_detector.hpp"
#include "CfgEventHandlers.hpp"

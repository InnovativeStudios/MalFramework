#include "script_component.hpp"

class GVARMAIN(IncomingQRF) {
    title = "ENEMY QRF";  // Title displayed as text on black background. Filled by arguments.
    iconPicture = "\A3\ui_f\data\Map\VehicleIcons\iconTruck_ca.paa";  // Small icon displayed in left side.
    iconText = "";  // Short text displayed over the icon..
    description = "An enemy QRF was spotted near your location";  // Brief description displayed as structured text.
    color[] = {1, 1, 1, 1};  // Icon and text color
    duration = 5;  // How many seconds will the notification be displayed
    priority = 3;  // Priority; higher number = more important; tasks in queue are selected by priority
    difficulty[] = {};  // Required difficulty settings. All listed difficulties has to be enabled
};

class GVARMAIN(Warning) {
    title = "WARNING";
    iconPicture = "\A3\ui_f\data\Map\Markers\Military\warning_CA.paa";
    iconText = "";
    description = "%1";
    color[] = {1, 0, 0, 1};
    duration = 7;
    priority = 5;
    difficulty[] = {};
};

class GVARMAIN(JipTeleport) {
    title = "JIP";
    iconPicture = "\A3\ui_f\data\GUI\Cfg\Hints\Timing_ca.paa";
    iconText = "";
    description = "Join In Progress: Use self-interaction to TP back to your squad.";
    color[] = {1, 1, 1, 1};
    duration = 5;
    priority = 4;
    difficulty[] = {};
};

class GVARMAIN(IntelAdded) {
    title = "INTEL FOUND";
    iconPicture = "\A3\ui_f\data\Map\Markers\Military\warning_CA.paa";
    iconText = "";
    description = "%1";
    color[] = {1, 1, 1, 1};
    duration = 7;
    priority = 3;
    difficulty[] = {};
};

class GVARMAIN(RespawnCalled) {
    title = "RESPAWN";
    iconPicture = "\A3\ui_f\data\Map\Markers\Military\flag_CA.paa";
    iconText = "";
    description = "The CO has called for reinforcements. Respawning in 5 seconds...";
    color[] = {0, 0.8, 0, 1};
    duration = 5;
    priority = 5;
    difficulty[] = {};
};

class GVARMAIN(Info) {
    title = "INFO";
    iconPicture = "\A3\ui_f\data\GUI\Cfg\CommunicationMenu\instructor_ca.paa";
    iconText = "";
    description = "%1";
    color[] = {1, 1, 1, 1};
    duration = 5;
    priority = 4;
    difficulty[] = {};
};

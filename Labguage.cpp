//
// Created by Hans Wornik on 13.10.22.
//

#include "Labguage.h"

Labguage::Labguage() {
    lang=0;
}

wxString Labguage::getTitle() {
    switch(lang) {
        case 0:
            return "Michou Chess Gui 0.1";
        default:
            return "Michou Chess Gui 0.1";
    }
}

wxString Labguage::getMenuGame() {
    switch(lang) {
        case 0:
            return "Game";
        default:
            return "Game";
    }
}

wxString Labguage::getMenuEngine() {
    switch(lang) {
        case 0:
            return "Engine";
        default:
            return "Engine";
    }
}

wxString Labguage::getMenuBoard() {
    switch(lang) {
        case 0:
            return "Board";
        default:
            return "Board";
    }
}

wxString Labguage::getMenuDatabase() {
    switch(lang) {
        case 0:
            return "Database";
        default:
            return "Database";
    }
}

wxString Labguage::getMenuOnline() {
    switch(lang) {
        case 0:
            return "Online";
        default:
            return "Online";
    }
}

wxString Labguage::getMenuHelp() {
    switch(lang) {
        case 0:
            return "Help";
        default:
            return "Help";
    }
}

wxString Labguage::getUMenuEload() {
    switch(lang) {
        case 0:
            return "&Load\tCtrl-L";
        default:
            return "&Load\tCtrl-L";
    }
}

wxString Labguage::getUMenuEloadHelp() {
    switch(lang) {
        case 0:
            return "Load new Engine and Set it up";
        default:
            return "Load new Engine and Set it up";
    }
}

wxString Labguage::getUMenuEAnalyze() {
    switch(lang) {
        case 0:
            return "&Analyze\tCtrl-A";
        default:
            return "&Analyze\tCtrl-A";
    }
}

wxString Labguage::getUMenuEAnalyzeHelp() {
    switch(lang) {
        case 0:
            return "Analyze current Position";
        default:
            return "Analyze current Position";
    }
}

wxString Labguage::getUMenuEStop() {
    switch(lang) {
        case 0:
            return "&Stop\tCtrl-S";
        default:
            return "&Stop\tCtrl-S";
    }
}

wxString Labguage::getUMenuEStopHelp() {
    switch(lang) {
        case 0:
            return "Stop Engine";
        default:
            return "Stop Engine";
    }
}

wxString Labguage::getUMenuESett() {
    switch(lang) {
        case 0:
            return "&Settings\tCtrl-S";
        default:
            return "&Settings\tCtrl-S";
    }
}

wxString Labguage::getUMenuESettHelp() {
    switch(lang) {
        case 0:
            return "Change Engine Parameters";
        default:
            return "Change Engine Parameters";
    }
}

wxString Labguage::getUMenuGNew() {
    switch(lang) {
        case 0:
            return "&New";
        default:
            return "&New";
    }
}

wxString Labguage::getUMenuGNewHelp() {
    switch(lang) {
        case 0:
            return "Start new game with timecontrol";
        default:
            return "Start new game with timecontrol";
    }
}

wxString Labguage::getUMenuGRestart() {
    switch(lang) {
        case 0:
            return "&Restart";
        default:
            return "&Restart";
    }
}

wxString Labguage::getUMenuGRestartHelp() {
    switch(lang) {
        case 0:
            return "Start new game with current timecontrol";
        default:
            return "Start new game with current timecontrol";
    }
}

wxString Labguage::getUMenuGStart() {
    switch(lang) {
        case 0:
            return "&Start";
        default:
            return "&Start";
    }
}

wxString Labguage::getUMenuGStartHelp() {
    switch(lang) {
        case 0:
            return "Start new game with current position and new timecontrol";
        default:
            return "Start new game with current position and new timecontrol";
    }
}

wxString Labguage::getUMenuGRemi() {
    switch(lang) {
        case 0:
            return "&Remi";
        default:
            return "&Remi";
    }
}

wxString Labguage::getUMenuGRemiHelp() {
    switch(lang) {
        case 0:
            return "Make remi offer";
        default:
            return "Make remi offer";
    }
}

wxString Labguage::getUMenuGGiveup() {
    switch(lang) {
        case 0:
            return "&Give up";
        default:
            return "&Give up";
    }
}

wxString Labguage::getUMenuGGiveupHelp() {
    switch(lang) {
        case 0:
            return "Give up current game";
        default:
            return "Give up current game";
    }
}

wxString Labguage::getUMenuGSettings() {
    switch(lang) {
        case 0:
            return "&Settings";
        default:
            return "&Settings";
    }
}

wxString Labguage::getUMenuGSettingsHelp() {
    switch(lang) {
        case 0:
            return "Set Gui Preferences";
        default:
            return "Set Gui Preferences";
    }
}

wxString Labguage::getUMenuGQuit() {
    switch(lang) {
        case 0:
            return "&Quit";
        default:
            return "&Quit";
    }
}

wxString Labguage::getUMenuGQuitHelp() {
    switch(lang) {
        case 0:
            return "Close Michou Chess Gui";
        default:
            return "Close Michou Chess Gui";
    }
}

wxString Labguage::getUMenuBRotate() {
    switch(lang) {
        case 0:
            return "&Rotate";
        default:
            return "$Rotate";
    }
}

wxString Labguage::getUMenuBRotateHelp() {
    switch(lang) {
        case 0:
            return "Flip board";
        default:
            return "Flip board";
    }
}

wxString Labguage::getUMenuBSetup() {
    switch(lang) {
        case 0:
            return "Setup";
        default:
            return "Setup";
    }
}

wxString Labguage::getUMenuBSetupHelp() {
    switch(lang) {
        case 0:
            return "Set up a new board position";
        default:
            return "Set up a new board position";
    }
}

wxString Labguage::getUMenuBNewW() {
    switch(lang) {
        case 0:
            return "&New White";
        default:
            return "&New White";
    }
}

wxString Labguage::getUMenuBNewWHelp() {
    switch(lang) {
        case 0:
            return "Set board to white start position";
        default:
            return "Set board to white start position";
    }
}

wxString Labguage::getUMenuBNewB() {
    switch(lang) {
        case 0:
            return "&New Black";
        default:
            return "&New Black";
    }
}

wxString Labguage::getUMenuBNewBHelp() {
    switch(lang) {
        case 0:
            return "Set board to black start position";
        default:
            return "Set board to black start position";
    }
}

wxString Labguage::getUMenuDOpen() {
    switch(lang) {
        case 0:
            return "&Open";
        default:
            return "&Open";
    }
}

wxString Labguage::getUMenuDOpenHelp() {
    switch(lang) {
        case 0:
            return "Open database browser";
        default:
            return "Open database browser";
    }
}

wxString Labguage::getUMenuDStell() {
    switch(lang) {
        case 0:
            return "&Position";
        default:
            return "&Position";
    }
}

wxString Labguage::getUMenuDStellHelp() {
    switch(lang) {
        case 0:
            return "Find Position in Database";
        default:
            return "Find Position in Database";
    }
}

wxString Labguage::getUMenuORetrieve() {
    switch(lang) {
        case 0:
            return "&Retrieve";
        default:
            return "&Retrieve";
    }
}

wxString Labguage::getUMenuORetrieveHelp() {
    switch(lang) {
        case 0:
            return "Get shared games from my friends";
        default:
            return "Get shared games from my friends";
    }
}

wxString Labguage::getUMenuOSend() {
    switch(lang) {
        case 0:
            return "&Send";
        default:
            return "&Send";
    }
}

wxString Labguage::getUMenuOSendHelp() {
    switch(lang) {
        case 0:
            return "Share actual game with my friends";
        default:
            return "Share actual game with my friends";
    }
}

wxString Labguage::getUMenuOFriends() {
    switch(lang) {
        case 0:
            return "&Friends";
        default:
            return "&Friends";
    }
}

wxString Labguage::getUMenuOFriendsHelp() {
    switch(lang) {
        case 0:
            return "View, add, remove Friends";
        default:
            return "View, add, remove Friends";
    }
}

wxString Labguage::getUMenuHOnline() {
    switch(lang) {
        case 0:
            return "&Online Help";
        default:
            return  "&Online Help";
    }
}

wxString Labguage::getUMenuHOnlineHelp() {
    switch(lang) {
        case 0:
            return "Open help in Browser";
        default:
            return "Open help in Browser";
    }
}

wxString Labguage::getUMenuHAbout() {
    switch(lang) {
        case 0:
            return "&About";
        default:
            return "&About";
    }
}

wxString Labguage::getUMenuHAboutHelp() {
    switch(lang) {
        case 0:
            return "About this Programm";
        default:
            return "About this Programm";
    }
}


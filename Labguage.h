//
// Created by Hans Wornik on 13.10.22.
//

#ifndef MICHOUCHESSGUIWXW_LABGUAGE_H
#define MICHOUCHESSGUIWXW_LABGUAGE_H
#include <wx/string.h>
#include <wx/wx.h>

class Labguage {
    int lang;
public:
    Labguage();
    // Hauptmenus
    wxString getTitle();
    wxString getMenuGame();
    wxString getMenuEngine();
    wxString getMenuBoard();
    wxString getMenuDatabase();
    wxString getMenuOnline();
    wxString getMenuHelp();
    // Untermenu Engine
    wxString getUMenuEload();
    wxString getUMenuEloadHelp();
    wxString getUMenuEAnalyze();
    wxString getUMenuEAnalyzeHelp();
    wxString getUMenuEStop();
    wxString getUMenuEStopHelp();
    wxString getUMenuESett();
    wxString getUMenuESettHelp();
    //Untermenu Game
    wxString getUMenuGNew();
    wxString getUMenuGNewHelp();
    wxString getUMenuGRestart();
    wxString getUMenuGRestartHelp();
    wxString getUMenuGStart();
    wxString getUMenuGStartHelp();
    wxString getUMenuGRemi();
    wxString getUMenuGRemiHelp();
    wxString getUMenuGGiveup();
    wxString getUMenuGGiveupHelp();
    wxString getUMenuGSettings();
    wxString getUMenuGSettingsHelp();
    wxString getUMenuGQuit();
    wxString getUMenuGQuitHelp();
    // Untermenu Brett
    wxString getUMenuBRotate();
    wxString getUMenuBRotateHelp();
    wxString getUMenuBSetup();
    wxString getUMenuBSetupHelp();
    wxString getUMenuBNewW();
    wxString getUMenuBNewWHelp();
    wxString getUMenuBNewB();
    wxString getUMenuBNewBHelp();
    // Untermenu Database
    wxString getUMenuDOpen();
    wxString getUMenuDOpenHelp();
    wxString getUMenuDStell();
    wxString getUMenuDStellHelp();
    // Untermenu Online
    wxString getUMenuORetrieve();
    wxString getUMenuORetrieveHelp();
    wxString getUMenuOSend();
    wxString getUMenuOSendHelp();
    wxString getUMenuOFriends();
    wxString getUMenuOFriendsHelp();
    // Untermenu Help
    wxString getUMenuHOnline();
    wxString getUMenuHOnlineHelp();
    wxString getUMenuHAbout();
    wxString getUMenuHAboutHelp();
};


#endif //MICHOUCHESSGUIWXW_LABGUAGE_H

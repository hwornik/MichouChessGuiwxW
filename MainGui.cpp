//
// Created by hworn on 13.10.2022.
//

#include "MainGui.h"


wxBEGIN_EVENT_TABLE(MainGui, wxFrame)
                EVT_MENU(ID_Hello,   MainGui::OnHello)
                EVT_MENU(wxID_EXIT,  MainGui::OnExit)
                EVT_MENU(ID_Game, MainGui::OnAbout)
                EVT_MENU(ID_Brett,  MainGui::OnBrett)
                EVT_MENU(ID_DataB,  MainGui::OnDataB)
                EVT_MENU(ID_Online,  MainGui::OnOnline)
                EVT_MENU(wxID_HELP,  MainGui::OnHelp)
                EVT_MENU(ID_Remi,  MainGui::OnRemi)
                EVT_MENU(ID_GiveUP,  MainGui::OnGiveUP)
                EVT_MENU(ID_Restart,  MainGui::OnRestart)
                EVT_MENU(wxID_PREFERENCES,  MainGui::OnSettings)
                EVT_MENU(ID_Analyze,  MainGui::OnAnalyze)
                EVT_MENU(ID_Stop,  MainGui::OnStop)
wxEND_EVENT_TABLE()

MainGui::MainGui(const wxString& title, const wxPoint& pos, const wxSize& size)
        : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    wxMenu *menuEngine = new wxMenu;
    menuEngine->Append(ID_Hello, "&Load\tCtrl-L");
    menuEngine->Append(ID_Analyze, "&Analyze\tCtrl-A");
    menuEngine->Append(ID_Stop, "&Stop\tCtrl-S");

    wxMenu *menuGame = new wxMenu;
    menuGame->Append(ID_Game,"&New");
    menuGame->Append(ID_Remi,"&Remi");
    menuGame->Append(ID_GiveUP,"&GiveUp");
    menuGame->Append(ID_Restart,"&Restart");
    menuGame->Append(wxID_PREFERENCES,"&Settings");
    menuGame->AppendSeparator();
    menuGame->Append(wxID_EXIT);
    wxMenu *menuBrett = new wxMenu;
    //menuBrett->Append( ID_Brett, "&Board");
    wxMenu *menuDataB = new wxMenu;
    //menuDataB->Append( ID_DataB, "&Database");
    wxMenu *menuOnline = new wxMenu;
    //menuOnline->Append( ID_Online, "&Online");
    wxMenu *menuHelp = new wxMenu;
    //menuHelp->Append(wxID_HELP);
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append( menuGame, "&Game" );
    menuBar->Append( menuEngine, "&Engine" );
    menuBar->Append( menuBrett, "&Board" );
    menuBar->Append( menuDataB, "&Database" );
    menuBar->Append( menuOnline, "&Online" );
    menuBar->Append( menuHelp, "&Help" );
    SetMenuBar( menuBar );
    /*CreateStatusBar();
    SetStatusText( "Welcome to wxWidgets!" );*/
}
void MainGui::OnExit(wxCommandEvent& event)
{
    Close( true );
}
void MainGui::OnAbout(wxCommandEvent& event)
{
    wxMessageBox( "This is a wxWidgets' Hello world sample",
                  "About Hello World", wxOK | wxICON_INFORMATION );
}
void MainGui::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello world from wxWidgets!");
}

void MainGui::OnBrett(wxCommandEvent& event) {

}

void MainGui::OnDataB(wxCommandEvent& event) {

}

void MainGui::OnOnline(wxCommandEvent& event) {

}

void MainGui::OnHelp(wxCommandEvent& event) {

}

void MainGui::OnRemi(wxCommandEvent &) {

}

void MainGui::OnRestart(wxCommandEvent &) {

}

void MainGui::OnGiveUP(wxCommandEvent &) {

}

void MainGui::OnSettings(wxCommandEvent &) {

}

void MainGui::OnAnalyze(wxCommandEvent &) {

}

void MainGui::OnStop(wxCommandEvent &) {

}

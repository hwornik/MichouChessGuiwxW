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
                EVT_MENU(ID_Hilfe,  MainGui::OnHelp)
                EVT_MENU(ID_Remi,  MainGui::OnRemi)
                EVT_MENU(ID_GiveUP,  MainGui::OnGiveUP)
                EVT_MENU(ID_Restart,  MainGui::OnRestart)
                EVT_MENU(wxID_PREFERENCES,  MainGui::OnSettings)
                EVT_MENU(ID_Analyze,  MainGui::OnAnalyze)
                EVT_MENU(ID_Stop,  MainGui::OnStop)
                EVT_MENU(ID_Nstart,  MainGui::OnNstart)
                EVT_MENU(ID_Rotate,  MainGui::OnRotate)
                EVT_MENU(ID_NewW,  MainGui::OnNewW)
                EVT_MENU(ID_NewB,  MainGui::OnNewB)
                EVT_MENU(ID_DBStellg,  MainGui::OnDBStellg)
                EVT_MENU(ID_Retrieve,  MainGui::OnRetrieve)
                EVT_MENU(ID_Send,  MainGui::OnSend)
                EVT_MENU(wxID_ABOUT,  MainGui::OnAbout)
wxEND_EVENT_TABLE()

MainGui::MainGui(const wxString& title, const wxPoint& pos, const wxSize& size)
        : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    wxMenu *menuEngine = new wxMenu;
    menuEngine->Append(ID_Hello, "&Load\tCtrl-L",  "Help string shown in status bar for this menu item");
    menuEngine->Append(ID_Analyze, "&Analyze\tCtrl-A");
    menuEngine->Append(ID_Stop, "&Stop\tCtrl-S");

    wxMenu *menuGame = new wxMenu;
    menuGame->Append(ID_Game,"&New");
    menuGame->Append(ID_Restart,"&Restart");
    menuGame->Append(ID_Nstart,"&Start");
    menuGame->AppendSeparator();
    menuGame->Append(ID_Remi,"&Remi");
    menuGame->Append(ID_GiveUP,"&GiveUp");
    menuGame->AppendSeparator();
    menuGame->Append(wxID_PREFERENCES,"&Settings");
    menuGame->AppendSeparator();
    menuGame->Append(wxID_EXIT);
    wxMenu *menuBrett = new wxMenu;
    menuBrett->Append( ID_Rotate ,"&Rotate");
    menuBrett->Append( ID_Set_Up ,"&Set Up");
    menuBrett->Append( ID_NewW ,"&New White");
    menuBrett->Append( ID_NewB ,"&New Black");
    wxMenu *menuDataB = new wxMenu;
    menuDataB->Append( ID_DataB, "&Open");
    menuDataB->Append( ID_DBStellg, "&Stellung");
    wxMenu *menuOnline = new wxMenu;
    menuOnline->Append( ID_Retrieve, "&Retrieve");
    menuOnline->Append( ID_Send, "&Send");
    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(ID_Hilfe,"&Online Help");
    menuHelp->Append(wxID_ABOUT,"&About");
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append( menuGame, "&Game" );
    menuBar->Append( menuEngine, "&Engine" );
    menuBar->Append( menuBrett, "&Board" );
    menuBar->Append( menuDataB, "&Database" );
    menuBar->Append( menuOnline, "&Online" );
    menuBar->Append( menuHelp, "&Help" );
    SetMenuBar( menuBar );
    this->CreateStatusBar();
    // Panel Setup
    textctrl = new wxTextCtrl(this, TEXT_Main, "Hi!");
   // wxSize screen = this->GetSize();
   /* textctrl->SetSize(screen.GetWidth()-10,50);
    wxPoint textpos;
    textpos.x=5;
    textpos.y=screen.GetHeight()-110;
    textctrl->SetPosition(textpos);*/
    schbr= new Schachbrett(this,wxT("/home/hans/CLionProjects/MichouChessGuiwxW/SchachfigurenFinal/Schachbrettblue.jpg"), wxBITMAP_TYPE_JPEG);
    /*wxPoint brettpos;
    brettpos.x=20;
    brettpos.y=20;*/
    //schbr->SetSize(screen.GetHeight()-150,screen.GetHeight()-150);
    //schbr->SetPosition(brettpos);
    Bind(wxEVT_SIZE , &MainGui::OnSize, this, wxID_ANY);
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
    wxLaunchDefaultBrowser("https://www.wornik.work",0    );
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

void MainGui::OnNstart(wxCommandEvent &) {

}

void MainGui::OnNewW(wxCommandEvent &) {

}

void MainGui::OnRotate(wxCommandEvent &) {

}

void MainGui::OnNewB(wxCommandEvent &) {

}

void MainGui::OnDBStellg(wxCommandEvent &) {

}

void MainGui::OnSend(wxCommandEvent &) {

}

void MainGui::OnRetrieve(wxCommandEvent &) {

}

void MainGui::OnSize(wxSizeEvent& event) {
    wxSize screen = this->GetClientSize();
    textctrl->SetSize(screen.GetWidth()-10,50);
    wxPoint textpos;
    textpos.x=5;
    textpos.y=screen.GetHeight()-55;
    textctrl->SetPosition(textpos);
    wxPoint brettpos;
    brettpos.x=20;
    brettpos.y=20;
    schbr->SetSize(screen.GetHeight()-100,screen.GetHeight()-100);
    schbr->SetPosition(brettpos);
}

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
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append( menuGame, "&Game" );
    menuBar->Append( menuEngine, "&Engine" );
    menuBar->Append( menuBrett, "&Board" );
    menuBar->Append( menuDataB, "&Database" );
    menuBar->Append( menuOnline, "&Online" );
    menuBar->Append( menuHelp, "&Help" );
    SetMenuBar( menuBar );
    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer *vboxv = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer *hbox = new wxBoxSizer(wxHORIZONTAL);
    wxPanel *midPan = new wxPanel(this, wxID_ANY);
    wxPanel *bottPan = new wxPanel(this, wxID_ANY);
    this->SetSizer(vboxv);
    wxSize bottsize;
    vboxv->Add(midPan, 1, wxEXPAND | wxALL, 2);
    vboxv->Add(bottPan, 1, wxEXPAND | wxALL, 2);
    bottsize=this->GetSize();
    bottsize.SetHeight(100);
    bottsize.SetWidth(bottsize.GetWidth()-2);
    bottPan->SetMaxSize(bottsize);
    bottsize.SetWidth(bottsize.GetWidth()-2);
    textctrl = new wxTextCtrl(bottPan, TEXT_Main, "Hi!", wxDefaultPosition, bottsize,
                              wxTE_MULTILINE | wxTE_RICH , wxDefaultValidator, wxTextCtrlNameStr);
    //textctrl->SetMinSize(bottPan->GetSize());
    //hbox->Add(textctrl, 1, wxEXPAND | TEXT_Main , 20);
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

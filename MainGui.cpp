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
                EVT_MENU(ID_ESet,  MainGui::OnEset)
                EVT_MENU(ID_Friends,  MainGui::OnFriends)
                EVT_MENU(ID_Hide,  MainGui::OnHide)
wxEND_EVENT_TABLE()

MainGui::MainGui(const wxString& title, const wxPoint& pos, const wxSize& size)
        : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    //HWND hwd=wxWindow::GetHandle();
    //SetWindowTheme(hwd, L" ", L" ");
    //SetWindowTheme(hwd, L"Explorer", NULL);

    wxInitAllImageHandlers();
    /*menuEngine = new wxMenu();
    menuEngine->Append(ID_Hello, lang.getUMenuEload(),  lang.getUMenuEloadHelp());
    menuEngine->Append(ID_Analyze, lang.getUMenuEAnalyze(),lang.getUMenuEAnalyzeHelp());
    menuEngine->Append(ID_Stop, lang.getUMenuEStop(),lang.getUMenuEStopHelp());
    menuEngine->Append(ID_ESet, lang.getUMenuESett(),lang.getUMenuESettHelp());

    menuGame = new wxMenu();
    menuGame->Append(ID_Game,lang.getUMenuGNew(),lang.getUMenuGNewHelp());
    menuGame->Append(ID_Restart,lang.getUMenuGRestart(),lang.getUMenuGRestartHelp());
    menuGame->Append(ID_Nstart,lang.getUMenuGStart(), lang.getUMenuGStartHelp());
    menuGame->AppendSeparator();
    menuGame->Append(ID_Remi,lang.getUMenuGRemi(),lang.getUMenuGRemiHelp());
    menuGame->Append(ID_GiveUP,lang.getUMenuGGiveup(),lang.getUMenuGGiveupHelp());
    menuGame->AppendSeparator();
    menuGame->Append(wxID_PREFERENCES,lang.getUMenuGSettings(),lang.getUMenuGSettingsHelp());
    menuGame->AppendSeparator();
    menuGame->Append(wxID_EXIT,lang.getUMenuGQuit(),lang.getUMenuGQuitHelp());
    menuBrett = new wxMenu();
    menuBrett->Append( ID_Rotate ,lang.getUMenuBRotate(),lang.getUMenuBRotateHelp());
    menuBrett->Append( ID_Set_Up ,lang.getUMenuBSetup(),lang.getUMenuBSetupHelp());
    menuBrett->Append( ID_NewW ,lang.getUMenuBNewW(),lang.getUMenuBNewWHelp());
    menuBrett->Append( ID_NewB ,lang.getUMenuBNewB(),lang.getUMenuBNewBHelp());
    menuDataB = new wxMenu;
    menuDataB->Append( ID_DataB, lang.getUMenuDOpen(),lang.getUMenuDOpenHelp());
    menuDataB->Append( ID_DBStellg, lang.getUMenuDStell(),lang.getUMenuDStellHelp());
    menuOnline = new wxMenu();
    menuOnline->Append( ID_Retrieve, lang.getUMenuORetrieve(),lang.getUMenuORetrieveHelp());
    menuOnline->Append( ID_Send, lang.getUMenuOSend(),lang.getUMenuOSendHelp());
    menuOnline->Append( ID_Friends, lang.getUMenuOFriends(),lang.getUMenuOFriendsHelp());
    menuHelp = new wxMenu();
    menuHelp->Append(ID_Hilfe,lang.getUMenuHOnline(),lang.getUMenuHOnlineHelp());
    menuHelp->Append(wxID_ABOUT,lang.getUMenuHAbout(),lang.getUMenuHAboutHelp());
    menuBar = new wxMenuBar();
    menuBar->Append( menuGame, lang.getMenuGame() );
    menuBar->Append( menuEngine, lang.getMenuEngine() );
    menuBar->Append( menuBrett, lang.getMenuBoard() );
    menuBar->Append( menuDataB, lang.getMenuDatabase() );
    menuBar->Append( menuOnline, lang.getMenuOnline());
    SetMenuBar( menuBar );*/

    this->CreateStatusBar();
    PushStatusText("Hallo");
    // Panel Setup

    textctrl = new wxTextCtrl(this, TEXT_Main, "Hi!");
    textctrl->SetEditable(false);
    sysapp = new wxSystemSettings();
    if(sysapp->GetAppearance().IsDark()) {
#ifdef _WIN32
            schbr = new Schachbrett(this, wxT("C:\\Users\\hworn\\CLionProjects\\MichouChessGuiwxW\\SchachfigurenFinal\\Schachbrettdark.png"), wxBITMAP_TYPE_PNG);
#else
            schbr = new Schachbrett(this, wxT("./SchachfigurenFinal/Schachbrettdark.png"), wxBITMAP_TYPE_PNG);
#endif
    } else {
#ifdef _WIN32

            this->SetBackgroundColour(wxSystemSettings::GetColour	(	wxSYS_COLOUR_MENU    	));
            schbr = new Schachbrett(this, wxT("C:\\Users\\hworn\\CLionProjects\\MichouChessGuiwxW\\SchachfigurenFinal\\Schachbrettblue.jpg"), wxBITMAP_TYPE_JPEG);
#else
            schbr = new Schachbrett(this, wxT("./SchachfigurenFinal/Schachbrettblue.jpg"), wxBITMAP_TYPE_JPEG);
#endif
    }

    Bind(wxEVT_SIZE , &MainGui::OnSize, this, wxID_ANY);
    Bind(wxEVT_SYS_COLOUR_CHANGED , &MainGui::OnCHClr, this, wxID_ANY);
}


void MainGui::OnExit(wxCommandEvent& event)
{
    Close( true );
}
void MainGui::OnAbout(wxCommandEvent& event)
{
    wxMessageBox( "Programmer:    Ing. Hans Wornik\n www.wornik.work.solutions",
                  "About Michou Chess Gui", wxOK | wxICON_INFORMATION );
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
    schbr->Show();
}

void MainGui::OnEset(wxCommandEvent &) {

}

void MainGui::OnFriends(wxCommandEvent &) {

}

void MainGui::OnHide(wxCommandEvent &) {

}

void MainGui::OnCHClr(wxSysColourChangedEvent& ) {
    if(sysapp->GetAppearance().IsDark()){
        delete schbr;
#ifdef _WIN32
            schbr = new Schachbrett(this, wxT("C:\\Users\\hworn\\CLionProjects\\MichouChessGuiwxW\\SchachfigurenFinal\\Schachbrettdark.png"), wxBITMAP_TYPE_PNG);
#else
            schbr= new Schachbrett(this,wxT("./SchachfigurenFinal/Schachbrettdark.png"), wxBITMAP_TYPE_PNG);
#endif
            wxSize screen = this->GetClientSize();
        wxPoint brettpos;
        brettpos.x=20;
        brettpos.y=20;
        schbr->SetSize(screen.GetHeight()-100,screen.GetHeight()-100);
        schbr->SetPosition(brettpos);
        schbr->Show();
    }
    else {
        delete schbr;
#ifdef _WIN32S
            schbr = new Schachbrett(this, wxT("C:\\Users\\hworn\\CLionProjects\\MichouChessGuiwxW\\SchachfigurenFinal\\Schachbrettblue.jpg"), wxBITMAP_TYPE_JPEG);
#else
        this->SetBackgroundColour(wxSystemSettings::GetColour	(	wxSYS_COLOUR_MENU    	));
             schbr= new Schachbrett(this,wxT("./SchachfigurenFinal/Schachbrettblue.jpg"), wxBITMAP_TYPE_JPEG);
#endif
         wxSize screen = this->GetClientSize();
        wxPoint brettpos;
        brettpos.x=20;
        brettpos.y=20;
        schbr->SetSize(screen.GetHeight()-100,screen.GetHeight()-100);
        schbr->SetPosition(brettpos);
        schbr->Show();
        }

}

void MainGui::RightSideBook() {

}

void MainGui::RightSideDataB() {

}

void MainGui::RightSideOnline() {

}

void MainGui::changeRightSideView(int) {

}

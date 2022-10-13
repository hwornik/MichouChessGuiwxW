#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
#include <wx/app.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/event.h>

#include "globals.h"
#include "MainGui.h"
class MyApp: public wxApp
{
public:
    virtual bool OnInit();
};


wxBEGIN_EVENT_TABLE(MainGui, wxFrame)
EVT_MENU(ID_Hello,   MainGui::OnHello)
EVT_MENU(wxID_EXIT,  MainGui::OnExit)
EVT_MENU(wxID_ABOUT, MainGui::OnAbout)
wxEND_EVENT_TABLE()
wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{
    MainGui *frame = new MainGui( "Hello World", wxPoint(50, 50), wxSize(450, 340) );
    frame->Show( true );
    return true;
}

int main(int argc, char **argv){;
    argv[1]="Hallo";
    argv[2]="24.9";

    return wxEntry(argc, argv);
}

//
// Created by hworn on 13.10.2022.
//

#ifndef MICHOUCHESSGUIWXW_MAINGUI_H
#define MICHOUCHESSGUIWXW_MAINGUI_H
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
#include <wx/app.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/event.h>
#include <wx/artprov.h>
#include <map>


enum
{
    ID_Hello = 1,
    ID_Brett= 2,
    ID_DataB= 3,
    ID_Online= 4,
    ID_Game= 5,
    ID_Remi= 6,
    ID_GiveUP= 7,
    ID_Restart= 8,
    ID_Analyze= 9,
    ID_Stop= 10,
    ID_Nstart=11,
    ID_Hilfe=12,
    ID_Rotate=13,
    ID_Set_Up=14,
    ID_NewW=15,
    ID_NewB=16,
    ID_DBStellg=17,
    ID_Retrieve=18,
    ID_Send=19,
    TEXT_Main=20
};

class MainGui : public wxFrame
    {
    public:
        MainGui(const wxString& title, const wxPoint& pos, const wxSize& size);
        void OnHello(wxCommandEvent& event);
        void OnExit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnBrett(wxCommandEvent& event);
        void OnDataB(wxCommandEvent& event);


        wxDECLARE_EVENT_TABLE();

    void OnOnline(wxCommandEvent& event);

    void OnHelp(wxCommandEvent& event);

    void OnRemi(wxCommandEvent &);

    void OnGiveUP(wxCommandEvent &);

    void OnRestart(wxCommandEvent &);

    void OnSettings(wxCommandEvent &);

    void OnAnalyze(wxCommandEvent &);

    void OnStop(wxCommandEvent &);

    void OnNstart(wxCommandEvent &);

    void OnRotate(wxCommandEvent &);

    void OnNewW(wxCommandEvent &);

    void OnNewB(wxCommandEvent &);

    void OnDBStellg(wxCommandEvent &);

    void OnRetrieve(wxCommandEvent &);

    void OnSend(wxCommandEvent &);

    wxTextCtrl *textctrl;
};



#endif //MICHOUCHESSGUIWXW_MAINGUI_H

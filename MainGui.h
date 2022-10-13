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

#include "globals.h"

class MainGui : public wxFrame
    {
    public:
    MainGui(const wxString& title, const wxPoint& pos, const wxSize& size);
        void OnHello(wxCommandEvent& event);
        void OnExit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        wxDECLARE_EVENT_TABLE();


};



#endif //MICHOUCHESSGUIWXW_MAINGUI_H

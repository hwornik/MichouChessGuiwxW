//
// Created by hans on 13.10.22.
//

#ifndef MICHOUCHESSGUIWXW_MICHOUAPP_H
#define MICHOUCHESSGUIWXW_MICHOUAPP_H
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
#include <wx/app.h>
#include <wx/event.h>
#include <wx/frame.h>
#include "MainGui.h"


class MichouApp : public wxApp
{
public:
    bool OnInit();

};


#endif //MICHOUCHESSGUIWXW_MICHOUAPP_H

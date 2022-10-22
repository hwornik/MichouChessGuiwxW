//
// Created by hans on 13.10.22.
//

#include "MichouApp.h"
#include <windows.h>
//#include <microsoft.ui.xaml.window.h>

bool MichouApp::OnInit()
{

    //this->SetUseBestVisual(true,false);
    MainGui *frame = new MainGui( lab.getTitle(), wxPoint(50, 50), wxSize(800, 600) );
    frame->Show( true );
    return true;
}


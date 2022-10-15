//
// Created by hans on 13.10.22.
//

#include "MichouApp.h"

bool MichouApp::OnInit()
{
    MainGui *frame = new MainGui( "Michou Chess Gui", wxPoint(50, 50), wxSize(800, 600) );
    frame->Show( true );
    return true;
}


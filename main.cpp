#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
#include <wx/app.h>

#include "MichouApp.h"



wxIMPLEMENT_APP(MichouApp);
#ifdef WIN32
int main(int argc, char **argv){;
    argv[1]="Hallo";
    argv[2]="24.9";;
    return wxEntry(argc, argv);
}
#endif
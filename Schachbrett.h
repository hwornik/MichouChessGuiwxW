//
// Created by hans on 16.10.22.
//

#ifndef MICHOUCHESSGUIWXW_SCHACHBRETT_H
#define MICHOUCHESSGUIWXW_SCHACHBRETT_H
#include <wx/wx.h>
#include <wx/sizer.h>

class Schachbrett : public wxPanel
{
    wxImage image;
    wxBitmap resized;
    int w, h;

public:
    Schachbrett(wxFrame* parent, wxString file, wxBitmapType format);

    void paintEvent(wxPaintEvent & evt);
    void paintNow();
    void OnSize(wxSizeEvent& event);
    void render(wxDC& dc);

    // some useful events
    /*
     void mouseMoved(wxMouseEvent& event);
     void mouseDown(wxMouseEvent& event);
     void mouseWheelMoved(wxMouseEvent& event);
     void mouseReleased(wxMouseEvent& event);
     void rightClick(wxMouseEvent& event);
     void mouseLeftWindow(wxMouseEvent& event);
     void keyPressed(wxKeyEvent& event);
     void keyReleased(wxKeyEvent& event);
     */

DECLARE_EVENT_TABLE()
};


#endif //MICHOUCHESSGUIWXW_SCHACHBRETT_H

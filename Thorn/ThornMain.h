/***************************************************************
 * Name:      ThornMain.h
 * Purpose:   Defines Application Frame
 * Author:    Ian Martinez ()
 * Created:   2018-08-28
 * Copyright: Ian Martinez (ianmtz.com)
 * License:
 **************************************************************/

#ifndef THORNMAIN_H
#define THORNMAIN_H

//(*Headers(ThornFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/splitter.h>
#include <wx/statusbr.h>
#include <wx/treectrl.h>
//*)

class ThornFrame: public wxFrame
{
    public:

        ThornFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~ThornFrame();

    private:

        //(*Handlers(ThornFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(ThornFrame)
        static const long ID_TREECTRL1;
        static const long ID_PANEL1;
        static const long ID_SPLITTERWINDOW1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(ThornFrame)
        wxPanel* Panel1;
        wxSplitterWindow* SplitterWindow1;
        wxStatusBar* StatusBar1;
        wxTreeCtrl* TreeCtrl1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // THORNMAIN_H

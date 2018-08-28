/***************************************************************
 * Name:      ThornApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Ian Martinez ()
 * Created:   2018-08-28
 * Copyright: Ian Martinez (ianmtz.com)
 * License:
 **************************************************************/

#include "ThornApp.h"

//(*AppHeaders
#include "ThornMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(ThornApp);

bool ThornApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	ThornFrame* Frame = new ThornFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}

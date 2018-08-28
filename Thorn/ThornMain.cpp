/***************************************************************
 * Name:      ThornMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Ian Martinez ()
 * Created:   2018-08-28
 * Copyright: Ian Martinez (ianmtz.com)
 * License:
 **************************************************************/

#include "ThornMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(ThornFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(ThornFrame)
const long ThornFrame::ID_TREECTRL1 = wxNewId();
const long ThornFrame::ID_PANEL1 = wxNewId();
const long ThornFrame::ID_SPLITTERWINDOW1 = wxNewId();
const long ThornFrame::idMenuQuit = wxNewId();
const long ThornFrame::idMenuAbout = wxNewId();
const long ThornFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ThornFrame,wxFrame)
    //(*EventTable(ThornFrame)
    //*)
END_EVENT_TABLE()

ThornFrame::ThornFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(ThornFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(669,512));
    SplitterWindow1 = new wxSplitterWindow(this, ID_SPLITTERWINDOW1, wxPoint(312,400), wxDefaultSize, wxSP_3D, _T("ID_SPLITTERWINDOW1"));
    SplitterWindow1->SetMinimumPaneSize(10);
    SplitterWindow1->SetSashGravity(0.5);
    Panel1 = new wxPanel(SplitterWindow1, ID_PANEL1, wxPoint(88,277), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    TreeCtrl1 = new wxTreeCtrl(Panel1, ID_TREECTRL1, wxPoint(272,112), wxSize(272,264), wxTR_DEFAULT_STYLE, wxDefaultValidator, _T("ID_TREECTRL1"));
    wxTreeItemId TreeCtrl1_Item1 = TreeCtrl1->AddRoot(_T("root"));
    TreeCtrl1->SetItemTextColour(TreeCtrl1_Item1, wxColour(255,128,0));
    wxTreeItemId TreeCtrl1_Item2 = TreeCtrl1->AppendItem(TreeCtrl1_Item1, _T("item 1"));
    TreeCtrl1->SetItemTextColour(TreeCtrl1_Item2, wxColour(255,128,0));
    wxTreeItemId TreeCtrl1_Item3 = TreeCtrl1->AppendItem(TreeCtrl1_Item1, _T("item 2"));
    TreeCtrl1->SetItemTextColour(TreeCtrl1_Item3, wxColour(255,128,0));
    wxTreeItemId TreeCtrl1_Item4 = TreeCtrl1->AppendItem(TreeCtrl1_Item1, _T("item 3"));
    TreeCtrl1->SetItemTextColour(TreeCtrl1_Item4, wxColour(255,128,0));
    wxTreeItemId TreeCtrl1_Item5 = TreeCtrl1->AppendItem(TreeCtrl1_Item1, _T("item 4"));
    TreeCtrl1->SetItemTextColour(TreeCtrl1_Item5, wxColour(255,128,0));
    wxTreeItemId TreeCtrl1_Item6 = TreeCtrl1->AppendItem(TreeCtrl1_Item1, _T("item 5"));
    TreeCtrl1->SetItemTextColour(TreeCtrl1_Item6, wxColour(255,128,0));
    wxTreeItemId TreeCtrl1_Item7 = TreeCtrl1->AppendItem(TreeCtrl1_Item1, _T("item 6"));
    TreeCtrl1->SetItemTextColour(TreeCtrl1_Item7, wxColour(255,128,0));
    TreeCtrl1->ScrollTo(TreeCtrl1_Item2);
    SplitterWindow1->Initialize(Panel1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&ThornFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&ThornFrame::OnAbout);
    //*)
}

ThornFrame::~ThornFrame()
{
    //(*Destroy(ThornFrame)
    //*)
}

void ThornFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void ThornFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

#include "terSerUI.h"

#include <wx/msgdlg.h>

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

//(*InternalHeaders(TerSerUI)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(TerSerUI)
const long TerSerUI::ID_PANEL2 = wxNewId();
const long TerSerUI::ID_PANEL3 = wxNewId();
const long TerSerUI::ID_PANEL5 = wxNewId();
const long TerSerUI::ID_PANEL6 = wxNewId();
const long TerSerUI::ID_PANEL7 = wxNewId();
const long TerSerUI::ID_PANEL1 = wxNewId();
const long TerSerUI::ID_TOOLBARITEM1 = wxNewId();
const long TerSerUI::ID_TOOLBAR1 = wxNewId();
const long TerSerUI::ID_MENUITEM1 = wxNewId();
const long TerSerUI::ID_MENUITEM3 = wxNewId();
const long TerSerUI::ID_MENUITEM2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(TerSerUI,wxFrame)
	//(*EventTable(TerSerUI)
	//*)
END_EVENT_TABLE()

TerSerUI::TerSerUI(wxWindow* parent, wxWindowID  id)
{
	this->Center();

	//(*Initialize(TerSerUI)
	wxBoxSizer* BoxSizer10;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	connectionStatusPanel = new ConnectionStatusPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxSize(109,58), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	connectionStatusPanel->SetMinSize(wxSize(-1,-1));
	BoxSizer7->Add(connectionStatusPanel, 1, wxALL|wxEXPAND, 0);
	BoxSizer3->Add(BoxSizer7, 1, wxRIGHT|wxEXPAND, 5);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	serverStatusPanel = new ServerStatusPanel(Panel1, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	serverStatusPanel->SetMinSize(wxSize(-1,-1));
	BoxSizer8->Add(serverStatusPanel, 1, wxALL|wxEXPAND, 0);
	BoxSizer3->Add(BoxSizer8, 1, wxALL|wxEXPAND, 0);
	BoxSizer2->Add(BoxSizer3, 2, wxTOP|wxLEFT|wxRIGHT|wxEXPAND, 5);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer5 = new wxBoxSizer(wxVERTICAL);
	devicePanel = new DevicePanel(Panel1, ID_PANEL5, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL5"));
	BoxSizer5->Add(devicePanel, 1, wxALL|wxEXPAND, 0);
	BoxSizer4->Add(BoxSizer5, 1, wxALL|wxEXPAND, 5);
	BoxSizer6 = new wxBoxSizer(wxVERTICAL);
	FlexGridSizer1 = new wxFlexGridSizer(0, 0, 0, 0);
	FlexGridSizer1->AddGrowableCol(0);
	FlexGridSizer1->AddGrowableRow(0);
	deviceControlPanel = new DeviceControlPanel(Panel1, ID_PANEL6, wxDefaultPosition, wxSize(161,123), wxTAB_TRAVERSAL, _T("ID_PANEL6"));
	FlexGridSizer1->Add(deviceControlPanel, 1, wxALL|wxEXPAND, 0);
	BoxSizer6->Add(FlexGridSizer1, 1, wxALL|wxEXPAND, 5);
	BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
	tabPanel = new TabPanel(Panel1, ID_PANEL7, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL7"));
	BoxSizer10->Add(tabPanel, 1, wxALL|wxEXPAND, 0);
	BoxSizer6->Add(BoxSizer10, 1, wxALL|wxEXPAND, 5);
	BoxSizer4->Add(BoxSizer6, 2, wxALL|wxEXPAND, 0);
	BoxSizer2->Add(BoxSizer4, 7, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND, 0);
	Panel1->SetSizer(BoxSizer2);
	BoxSizer2->Fit(Panel1);
	BoxSizer2->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND, 0);
	SetSizer(BoxSizer1);
	ToolBar1 = new wxToolBar(this, ID_TOOLBAR1, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxNO_BORDER, _T("ID_TOOLBAR1"));
	ToolBarItem1 = ToolBar1->AddTool(ID_TOOLBARITEM1, _("Connect"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_MISSING_IMAGE")),wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
	ToolBar1->Realize();
	SetToolBar(ToolBar1);
	MenuBar1 = new wxMenuBar();
	Menu1 = new wxMenu();
	Menu2 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Quit"), wxEmptyString, wxITEM_NORMAL);
	Menu1->Append(Menu2);
	MenuBar1->Append(Menu1, _("File"));
	Menu5 = new wxMenu();
	MenuBar1->Append(Menu5, _("View"));
	Menu3 = new wxMenu();
	MenuItem2 = new wxMenuItem(Menu3, ID_MENUITEM3, _("Connection"), wxEmptyString, wxITEM_NORMAL);
	Menu3->Append(MenuItem2);
	MenuBar1->Append(Menu3, _("Settings"));
	Menu4 = new wxMenu();
	MenuItem1 = new wxMenuItem(Menu4, ID_MENUITEM2, _("About"), wxEmptyString, wxITEM_NORMAL);
	Menu4->Append(MenuItem1);
	MenuBar1->Append(Menu4, _("Help"));
	SetMenuBar(MenuBar1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_TOOLBARITEM1,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&TerSerUI::OnButtonConnectClick);
	Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TerSerUI::OnQuit);
	Connect(ID_MENUITEM3,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TerSerUI::OnMenuSettingsConnectionClicked);
	Connect(ID_MENUITEM2,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TerSerUI::OnAbout);
	//*)


	terSerLogic.setRelativeTabPanel(tabPanel);
	terSerLogic.setRelativeDevicePanel(devicePanel);
	terSerLogic.setRelativeDeviceControlPanel(deviceControlPanel);
	terSerLogic.setRelativeServerStatusPanel(serverStatusPanel);
	terSerLogic.setRelativeConnectionStatusPanel(connectionStatusPanel);

}

TerSerUI::~TerSerUI()
{
	//(*Destroy(TerSerUI)
	//*)
}


void TerSerUI::OnMenuSettingsConnectionClicked(wxCommandEvent& event)
{
	m_connectionSettingsFrame = new ConnectionSettingsFrame(this, ID_CONSETFRAME);
	m_connectionSettingsFrame->setSerialOptions(terSerLogic.getSerialOptions());
	m_connectionSettingsFrame->setRelative(this);
	m_connectionSettingsFrame->SetTitle(wxT("Connection settings"));
	m_connectionSettingsFrame->Show(true);

}


void TerSerUI::OnButtonConnectClick(wxCommandEvent& event)
{
    terSerLogic.connectToSerial();
}


void TerSerUI::OnAbout(wxCommandEvent& event)
{
    wxString label = _("Author: ");
	label += "Karol Szykula";

    wxMessageBox(label, _("About"));
}

void TerSerUI::OnQuit(wxCommandEvent& event)
{
    this->Close();
}



#include "devicePanel.h"

//(*InternalHeaders(DevicePanel)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(DevicePanel)
const long DevicePanel::ID_TEXTCTRL1 = wxNewId();
const long DevicePanel::ID_BUTTON1 = wxNewId();
const long DevicePanel::ID_BUTTON2 = wxNewId();
const long DevicePanel::ID_PANEL1 = wxNewId();
const long DevicePanel::ID_NOTEBOOK1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(DevicePanel,wxPanel)
	//(*EventTable(DevicePanel)
	//*)
END_EVENT_TABLE()

DevicePanel::DevicePanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,long style, const wxString& name)
{
	//(*Initialize(DevicePanel)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxStaticBoxSizer* StaticBoxSizer1;

	Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	StaticBoxSizer1 = new wxStaticBoxSizer(wxVERTICAL, this, _("Devices"));
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Device"), wxDefaultPosition, wxDefaultSize, wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl1->SetMaxSize(wxSize(-1,-1));
	BoxSizer4->Add(TextCtrl1, 1, wxBOTTOM|wxLEFT|wxALIGN_BOTTOM, 5);
	BoxSizer5 = new wxBoxSizer(wxVERTICAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("Add"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer5->Add(Button1, 0, wxEXPAND, 0);
	Button2 = new wxButton(this, ID_BUTTON2, _("Remove"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer5->Add(Button2, 0, wxEXPAND, 0);
	BoxSizer4->Add(BoxSizer5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer4, 0, wxALL|wxEXPAND, 0);
	BoxSizer3 = new wxBoxSizer(wxVERTICAL);
	Notebook1 = new wxNotebook(this, ID_NOTEBOOK1, wxDefaultPosition, wxDefaultSize, 0, _T("ID_NOTEBOOK1"));
	Panel1 = new wxPanel(Notebook1, ID_PANEL1, wxDefaultPosition, wxSize(172,120), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Notebook1->AddPage(Panel1, _("Device"), false);
	BoxSizer3->Add(Notebook1, 1, wxALL|wxEXPAND, 5);
	StaticBoxSizer1->Add(BoxSizer3, 2, wxALL|wxEXPAND, 0);
	BoxSizer1->Add(StaticBoxSizer1, 1, wxALL|wxEXPAND, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

DevicePanel::~DevicePanel()
{
	//(*Destroy(DevicePanel)
	//*)
}


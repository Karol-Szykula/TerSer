#include "serverStatusPanel.h"

//(*InternalHeaders(ServerStatusPanel)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(ServerStatusPanel)
const long ServerStatusPanel::ID_STATICTEXT1 = wxNewId();
const long ServerStatusPanel::ID_STATICTEXT2 = wxNewId();
const long ServerStatusPanel::ID_STATICTEXT3 = wxNewId();
const long ServerStatusPanel::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ServerStatusPanel,wxPanel)
	//(*EventTable(ServerStatusPanel)
	//*)
END_EVENT_TABLE()

ServerStatusPanel::ServerStatusPanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,long style,  const wxString& name)
{
	//(*Initialize(ServerStatusPanel)
	wxBoxSizer* BoxSizer1;
	wxStaticBoxSizer* StaticBoxSizer1;
	wxStaticBoxSizer* StaticBoxSizer2;
	wxStaticBoxSizer* StaticBoxSizer3;
	wxStaticBoxSizer* StaticBoxSizer4;

	Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxID_ANY"));
	StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Server status"));
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	StaticBoxSizer2 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("Event repeat time [ms]"));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("-"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
	StaticBoxSizer2->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(StaticBoxSizer2, 1, wxRIGHT|wxEXPAND, 2);
	StaticBoxSizer3 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("Command interval [ms]"));
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("-"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT2"));
	StaticBoxSizer3->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(StaticBoxSizer3, 1, wxLEFT|wxRIGHT|wxEXPAND, 2);
	StaticBoxSizer4 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("Query response time [ms]"));
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("-"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT3"));
	StaticBoxSizer4->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(StaticBoxSizer4, 1, wxLEFT|wxEXPAND, 2);
	Panel1->SetSizer(BoxSizer1);
	BoxSizer1->Fit(Panel1);
	BoxSizer1->SetSizeHints(Panel1);
	StaticBoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND, 0);
	SetSizer(StaticBoxSizer1);
	StaticBoxSizer1->Fit(this);
	StaticBoxSizer1->SetSizeHints(this);
	//*)
}

ServerStatusPanel::~ServerStatusPanel()
{
	//(*Destroy(ServerStatusPanel)
	//*)
}


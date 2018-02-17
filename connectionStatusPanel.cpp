#include "connectionStatusPanel.h"

//(*InternalHeaders(ConnectionStatusPanel)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(ConnectionStatusPanel)
const long ConnectionStatusPanel::ID_STATICTEXT1 = wxNewId();
const long ConnectionStatusPanel::ID_STATICTEXT3 = wxNewId();
const long ConnectionStatusPanel::ID_STATICTEXT4 = wxNewId();
const long ConnectionStatusPanel::ID_STATICTEXT2 = wxNewId();
const long ConnectionStatusPanel::ID_PANEL2 = wxNewId();
const long ConnectionStatusPanel::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ConnectionStatusPanel,wxPanel)
	//(*EventTable(ConnectionStatusPanel)
	//*)
END_EVENT_TABLE()

ConnectionStatusPanel::ConnectionStatusPanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,long style, const wxString& name)
{
	//(*Initialize(ConnectionStatusPanel)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxStaticBoxSizer* StaticBoxSizer1;
	wxStaticBoxSizer* StaticBoxSizer2;
	wxStaticBoxSizer* StaticBoxSizer3;
	wxStaticBoxSizer* StaticBoxSizer4;
	wxStaticBoxSizer* StaticBoxSizer5;

	Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("Connection status"));
	Panel2 = new wxPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	StaticBoxSizer2 = new wxStaticBoxSizer(wxVERTICAL, Panel2, _("Speed"));
	StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("-"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
	StaticBoxSizer2->Add(StaticText1, 1, wxALL|wxEXPAND, 0);
	BoxSizer3->Add(StaticBoxSizer2, 1, wxALL|wxEXPAND, 5);
	StaticBoxSizer4 = new wxStaticBoxSizer(wxVERTICAL, Panel2, _("Parity"));
	StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _("-"), wxDefaultPosition, wxSize(38,28), wxALIGN_CENTRE, _T("ID_STATICTEXT3"));
	StaticBoxSizer4->Add(StaticText3, 1, wxALL|wxEXPAND, 0);
	BoxSizer3->Add(StaticBoxSizer4, 1, wxALL|wxEXPAND, 5);
	StaticBoxSizer5 = new wxStaticBoxSizer(wxVERTICAL, Panel2, _("Stop bits"));
	StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT4, _("-"), wxDefaultPosition, wxSize(53,32), wxALIGN_CENTRE, _T("ID_STATICTEXT4"));
	StaticBoxSizer5->Add(StaticText4, 1, wxALL|wxEXPAND, 0);
	BoxSizer3->Add(StaticBoxSizer5, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer3, 2, wxALL|wxEXPAND, 0);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	StaticBoxSizer3 = new wxStaticBoxSizer(wxHORIZONTAL, Panel2, _("Status"));
	StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("N/A"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT2"));
	StaticBoxSizer3->Add(StaticText2, 1, wxALL|wxEXPAND, 0);
	BoxSizer4->Add(StaticBoxSizer3, 1, wxALL|wxEXPAND, 0);
	BoxSizer2->Add(BoxSizer4, 0, wxALL|wxEXPAND, 0);
	Panel2->SetSizer(BoxSizer2);
	BoxSizer2->Fit(Panel2);
	BoxSizer2->SetSizeHints(Panel2);
	StaticBoxSizer1->Add(Panel2, 1, wxALL|wxEXPAND, 0);
	Panel1->SetSizer(StaticBoxSizer1);
	StaticBoxSizer1->Fit(Panel1);
	StaticBoxSizer1->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

ConnectionStatusPanel::~ConnectionStatusPanel()
{
	//(*Destroy(ConnectionStatusPanel)
	//*)
}


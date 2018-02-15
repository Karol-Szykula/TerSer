#include "connectionStatusPanel.h"

//(*InternalHeaders(ConnectionStatusPanel)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(ConnectionStatusPanel)
const long ConnectionStatusPanel::ID_STATICTEXT2 = wxNewId();
const long ConnectionStatusPanel::ID_STATICTEXT3 = wxNewId();
const long ConnectionStatusPanel::ID_STATICTEXT4 = wxNewId();
const long ConnectionStatusPanel::ID_STATICTEXT5 = wxNewId();
const long ConnectionStatusPanel::ID_STATICTEXT6 = wxNewId();
const long ConnectionStatusPanel::ID_STATICTEXT7 = wxNewId();
const long ConnectionStatusPanel::ID_STATICTEXT1 = wxNewId();
const long ConnectionStatusPanel::ID_CHECKBOX1 = wxNewId();
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
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;

	Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer4 = new wxBoxSizer(wxVERTICAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT2, _("Speed"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	BoxSizer4->Add(StaticText1, 1, wxALL|wxEXPAND, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT3, _("9600"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	BoxSizer4->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer4, 1, wxALL|wxEXPAND, 0);
	BoxSizer5 = new wxBoxSizer(wxVERTICAL);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT4, _("Stop bits"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	BoxSizer5->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT5, _("8n1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	BoxSizer5->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer5, 1, wxALL|wxEXPAND, 0);
	BoxSizer6 = new wxBoxSizer(wxVERTICAL);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT6, _("Opt3"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	BoxSizer6->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT7, _("False"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	BoxSizer6->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer6, 1, wxALL|wxEXPAND, 0);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 0);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	StatusStatusText = new wxStaticText(this, ID_STATICTEXT1, _("Status"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	BoxSizer3->Add(StatusStatusText, 1, wxALL|wxEXPAND, 5);
	CheckBox1 = new wxCheckBox(this, ID_CHECKBOX1, _("Label"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
	CheckBox1->SetValue(false);
	BoxSizer3->Add(CheckBox1, 1, wxALL|wxEXPAND, 0);
	BoxSizer1->Add(BoxSizer3, 1, wxALL|wxEXPAND, 0);
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


#include "dataFrameStatusPanel.h"

//(*InternalHeaders(DataFrameStatusPanel)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(DataFrameStatusPanel)
const long DataFrameStatusPanel::ID_STATICTEXT1 = wxNewId();
const long DataFrameStatusPanel::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(DataFrameStatusPanel,wxPanel)
	//(*EventTable(DataFrameStatusPanel)
	//*)
END_EVENT_TABLE()

DataFrameStatusPanel::DataFrameStatusPanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,long style, const wxString& name)
{
	//(*Initialize(DataFrameStatusPanel)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxStaticBoxSizer* StaticBoxSizer1;
	wxStaticBoxSizer* StaticBoxSizer2;
	wxStaticBoxSizer* StaticBoxSizer3;
	wxStaticBoxSizer* StaticBoxSizer4;
	wxStaticBoxSizer* StaticBoxSizer5;
	wxStaticBoxSizer* StaticBoxSizer6;
	wxStaticBoxSizer* StaticBoxSizer7;
	wxStaticBoxSizer* StaticBoxSizer8;
	wxStaticBoxSizer* StaticBoxSizer9;

	Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	StaticBoxSizer1 = new wxStaticBoxSizer(wxVERTICAL, Panel1, _("Label"));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticBoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(StaticBoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2 = new wxStaticBoxSizer(wxVERTICAL, Panel1, _("Label"));
	BoxSizer3->Add(StaticBoxSizer2, 1, wxALL|wxEXPAND, 5);
	StaticBoxSizer3 = new wxStaticBoxSizer(wxVERTICAL, Panel1, _("Label"));
	BoxSizer3->Add(StaticBoxSizer3, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	StaticBoxSizer4 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("Label"));
	BoxSizer4->Add(StaticBoxSizer4, 1, wxALL|wxEXPAND, 5);
	StaticBoxSizer5 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("Label"));
	BoxSizer4->Add(StaticBoxSizer5, 1, wxALL|wxEXPAND, 5);
	StaticBoxSizer6 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("Label"));
	BoxSizer4->Add(StaticBoxSizer6, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer4, 1, wxALL|wxEXPAND, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	StaticBoxSizer7 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("Label"));
	BoxSizer5->Add(StaticBoxSizer7, 1, wxALL|wxEXPAND, 5);
	StaticBoxSizer8 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("Label"));
	BoxSizer5->Add(StaticBoxSizer8, 1, wxALL|wxEXPAND, 5);
	StaticBoxSizer9 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("Label"));
	BoxSizer5->Add(StaticBoxSizer9, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer5, 1, wxALL|wxEXPAND, 5);
	Panel1->SetSizer(BoxSizer2);
	BoxSizer2->Fit(Panel1);
	BoxSizer2->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

DataFrameStatusPanel::~DataFrameStatusPanel()
{
	//(*Destroy(DataFrameStatusPanel)
	//*)
}


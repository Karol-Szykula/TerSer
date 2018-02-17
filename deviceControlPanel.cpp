#include "deviceControlPanel.h"

//(*InternalHeaders(DeviceControlPanel)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(DeviceControlPanel)
const long DeviceControlPanel::ID_PANEL2 = wxNewId();
const long DeviceControlPanel::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(DeviceControlPanel,wxPanel)
	//(*EventTable(DeviceControlPanel)
	//*)
END_EVENT_TABLE()

DeviceControlPanel::DeviceControlPanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,long style, const wxString& name)
{
	//(*Initialize(DeviceControlPanel)
	wxBoxSizer* BoxSizer1;
	wxStaticBoxSizer* StaticBoxSizer1;

	Create(parent, id, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("id"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("Device control"));
	Panel2 = new wxPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxSize(101,90), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
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

DeviceControlPanel::~DeviceControlPanel()
{
	//(*Destroy(DeviceControlPanel)
	//*)
}


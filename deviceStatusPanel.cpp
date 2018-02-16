#include "deviceStatusPanel.h"

//(*InternalHeaders(DeviceStatusPanel)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(DeviceStatusPanel)
const long DeviceStatusPanel::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(DeviceStatusPanel,wxPanel)
	//(*EventTable(DeviceStatusPanel)
	//*)
END_EVENT_TABLE()

DeviceStatusPanel::DeviceStatusPanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,long style, const wxString& name)
{
	//(*Initialize(DeviceStatusPanel)
	wxStaticBoxSizer* StaticBoxSizer1;

	Create(parent, id, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("id"));
	StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Device status"));
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(147,57), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	StaticBoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND, 5);
	SetSizer(StaticBoxSizer1);
	StaticBoxSizer1->Fit(this);
	StaticBoxSizer1->SetSizeHints(this);
	//*)
}

DeviceStatusPanel::~DeviceStatusPanel()
{
	//(*Destroy(DeviceStatusPanel)
	//*)
}


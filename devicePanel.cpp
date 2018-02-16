#include "devicePanel.h"

//(*InternalHeaders(DevicePanel)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(DevicePanel)
const long DevicePanel::ID_TEXTCTRL1 = wxNewId();
const long DevicePanel::ID_BUTTON1 = wxNewId();
const long DevicePanel::ID_BUTTON2 = wxNewId();
const long DevicePanel::ID_TREECTRL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(DevicePanel,wxPanel)
	//(*EventTable(DevicePanel)
	//*)
END_EVENT_TABLE()

DevicePanel::DevicePanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,long style, const wxString& name)
{
	//(*Initialize(DevicePanel)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;

	Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Device"), wxDefaultPosition, wxDefaultSize, wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl1->SetMaxSize(wxSize(-1,-1));
	BoxSizer4->Add(TextCtrl1, 1, wxALIGN_CENTER_VERTICAL, 2);
	BoxSizer5 = new wxBoxSizer(wxVERTICAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("Add"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer5->Add(Button1, 0, wxEXPAND, 0);
	Button2 = new wxButton(this, ID_BUTTON2, _("Remove"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer5->Add(Button2, 0, wxEXPAND, 0);
	BoxSizer4->Add(BoxSizer5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer4, 0, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer2, 0, wxEXPAND, 0);
	BoxSizer3 = new wxBoxSizer(wxVERTICAL);
	TreeCtrl1 = new wxTreeCtrl(this, ID_TREECTRL1, wxDefaultPosition, wxSize(240,157), wxTR_DEFAULT_STYLE, wxDefaultValidator, _T("ID_TREECTRL1"));
	wxTreeItemId TreeCtrl1_Item1 = TreeCtrl1->AddRoot(_T("None"));
	BoxSizer3->Add(TreeCtrl1, 1, wxEXPAND, 2);
	BoxSizer1->Add(BoxSizer3, 2, wxALL|wxEXPAND, 5);
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


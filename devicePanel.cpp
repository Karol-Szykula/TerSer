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

	Create(parent, id, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("id"));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxDefaultPosition, wxSize(120,22), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer2->Add(TextCtrl1, 1, wxALL|wxEXPAND, 5);
	Button1 = new wxButton(this, ID_BUTTON1, _("Label"), wxDefaultPosition, wxSize(115,25), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer2->Add(Button1, 1, wxALL|wxEXPAND, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("Label"), wxDefaultPosition, wxSize(122,27), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer2->Add(Button2, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3 = new wxBoxSizer(wxVERTICAL);
	TreeCtrl1 = new wxTreeCtrl(this, ID_TREECTRL1, wxDefaultPosition, wxSize(119,224), wxTR_DEFAULT_STYLE, wxDefaultValidator, _T("ID_TREECTRL1"));
	BoxSizer3->Add(TreeCtrl1, 1, wxALL|wxEXPAND, 5);
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


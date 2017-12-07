#include "WindowSettingsDialog.h"

//(*InternalHeaders(WindowSettingsDialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(WindowSettingsDialog)
const long WindowSettingsDialog::ID_CHECKBOX1 = wxNewId();
const long WindowSettingsDialog::ID_BUTTON1 = wxNewId();
const long WindowSettingsDialog::ID_BUTTON2 = wxNewId();
const long WindowSettingsDialog::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(WindowSettingsDialog,wxDialog)
	//(*EventTable(WindowSettingsDialog)
	//*)
END_EVENT_TABLE()

WindowSettingsDialog::WindowSettingsDialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(WindowSettingsDialog)
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer1;
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, id, _("Window settings"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	FlexGridSizer1 = new wxFlexGridSizer(2, 1, 0, 0);
	FlexGridSizer1->AddGrowableCol(0);
	FlexGridSizer1->AddGrowableRow(0);
	CheckBox1 = new wxCheckBox(Panel1, ID_CHECKBOX1, _("Auto scroll"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
	CheckBox1->SetValue(false);
	FlexGridSizer1->Add(CheckBox1, 1, wxALL|wxEXPAND, 5);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("OK"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer2->Add(Button1, 1, wxALL|wxEXPAND, 5);
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("CANCEL"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer2->Add(Button2, 1, wxALL|wxEXPAND, 5);
	FlexGridSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Panel1->SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(Panel1);
	FlexGridSizer1->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&WindowSettingsDialog::OnWindowSettingsOkButtonClicked);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&WindowSettingsDialog::OnWindowSettingsCancelButtonClicked);
	//*)

	SetMinSize(GetSize());
	SetMaxSize(GetSize());
}

WindowSettingsDialog::~WindowSettingsDialog()
{
	//(*Destroy(WindowSettingsDialog)
	//*)
}


void WindowSettingsDialog::OnWindowSettingsOkButtonClicked(wxCommandEvent& event)
{

	this->Close();
}

void WindowSettingsDialog::OnWindowSettingsCancelButtonClicked(wxCommandEvent& event)
{
	this->Close();
}

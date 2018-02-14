#include "TerSerUI.h"

//(*InternalHeaders(TerSerUI)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(TerSerUI)
const long TerSerUI::ID_PANEL2 = wxNewId();
const long TerSerUI::ID_TEXTCTRL1 = wxNewId();
const long TerSerUI::ID_BUTTON2 = wxNewId();
const long TerSerUI::ID_BUTTON1 = wxNewId();
const long TerSerUI::ID_TREEBOOK1 = wxNewId();
const long TerSerUI::ID_PANEL3 = wxNewId();
const long TerSerUI::ID_TREEBOOK2 = wxNewId();
const long TerSerUI::ID_PANEL4 = wxNewId();
const long TerSerUI::ID_NOTEBOOK1 = wxNewId();
const long TerSerUI::ID_PANEL1 = wxNewId();
const long TerSerUI::ID_TOOLBAR1 = wxNewId();
const long TerSerUI::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(TerSerUI,wxFrame)
	//(*EventTable(TerSerUI)
	//*)
END_EVENT_TABLE()

TerSerUI::TerSerUI(wxWindow* parent)
{
	//(*Initialize(TerSerUI)
	wxBoxSizer* BoxSizer10;
	wxBoxSizer* BoxSizer11;
	wxBoxSizer* BoxSizer12;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer9;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	Panel2 = new wxPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	BoxSizer3->Add(Panel2, 1, wxALL|wxEXPAND, 1);
	BoxSizer2->Add(BoxSizer3, 5, wxALL|wxEXPAND, 5);
	BoxSizer4 = new wxBoxSizer(wxVERTICAL);
	BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer10 = new wxBoxSizer(wxVERTICAL);
	BoxSizer11 = new wxBoxSizer(wxVERTICAL);
	BoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, _("Device Name"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer12->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("Add"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer12->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer11->Add(BoxSizer12, 1, wxALL|wxEXPAND, 5);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Remove"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer11->Add(Button1, 1, wxALL|wxEXPAND, 5);
	BoxSizer10->Add(BoxSizer11, 1, wxALL|wxEXPAND, 5);
	Notebook1 = new wxNotebook(Panel1, ID_NOTEBOOK1, wxDefaultPosition, wxDefaultSize, 0, _T("ID_NOTEBOOK1"));
	Panel3 = new wxPanel(Notebook1, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	BoxSizer5 = new wxBoxSizer(wxVERTICAL);
	Treebook1 = new wxTreebook(Panel3, ID_TREEBOOK1, wxDefaultPosition, wxDefaultSize, wxBK_DEFAULT, _T("ID_TREEBOOK1"));
	BoxSizer5->Add(Treebook1, 1, wxALL|wxEXPAND, 5);
	Panel3->SetSizer(BoxSizer5);
	BoxSizer5->Fit(Panel3);
	BoxSizer5->SetSizeHints(Panel3);
	Panel4 = new wxPanel(Notebook1, ID_PANEL4, wxDefaultPosition, wxSize(108,180), wxTAB_TRAVERSAL, _T("ID_PANEL4"));
	BoxSizer8 = new wxBoxSizer(wxVERTICAL);
	Treebook2 = new wxTreebook(Panel4, ID_TREEBOOK2, wxDefaultPosition, wxDefaultSize, wxBK_DEFAULT, _T("ID_TREEBOOK2"));
	BoxSizer8->Add(Treebook2, 1, wxALL|wxEXPAND, 5);
	Panel4->SetSizer(BoxSizer8);
	SetSizer(BoxSizer8);
	Layout();
	Notebook1->AddPage(Panel3, _("Devices"), false);
	Notebook1->AddPage(Panel4, _("Groups"), false);
	BoxSizer10->Add(Notebook1, 2, wxALL|wxEXPAND, 1);
	BoxSizer6->Add(BoxSizer10, 1, wxALL|wxEXPAND, 5);
	BoxSizer7 = new wxBoxSizer(wxVERTICAL);
	BoxSizer9 = new wxBoxSizer(wxVERTICAL);
	BoxSizer7->Add(BoxSizer9, 4, wxALL|wxEXPAND, 5);
	BoxSizer6->Add(BoxSizer7, 1, wxALL|wxEXPAND, 5);
	BoxSizer4->Add(BoxSizer6, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer4, 40, wxALL|wxEXPAND, 5);
	Panel1->SetSizer(BoxSizer2);
	BoxSizer2->Fit(Panel1);
	BoxSizer2->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND, 0);
	SetSizer(BoxSizer1);
	StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
	int __wxStatusBarWidths_1[1] = { -10 };
	int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
	StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
	StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
	SetStatusBar(StatusBar1);
	MenuBar1 = new wxMenuBar();
	SetMenuBar(MenuBar1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_NOTEBOOK1,wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED,(wxObjectEventFunction)&TerSerUI::OnNotebook1PageChanged);
	//*)
}

TerSerUI::~TerSerUI()
{
	//(*Destroy(TerSerUI)
	//*)
}


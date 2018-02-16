#include "tabPanel.h"

//(*InternalHeaders(TabPanel)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(TabPanel)
const long TabPanel::ID_PANEL1 = wxNewId();
const long TabPanel::ID_NOTEBOOK1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(TabPanel,wxPanel)
	//(*EventTable(TabPanel)
	//*)
END_EVENT_TABLE()

TabPanel::TabPanel(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size,
         long style, const wxString& name)
{
	//(*Initialize(TabPanel)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;

	Create(parent, id, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("id"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Notebook1 = new wxNotebook(this, ID_NOTEBOOK1, wxDefaultPosition, wxSize(178,107), 0, _T("ID_NOTEBOOK1"));
	Panel1 = new wxPanel(Notebook1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	Panel1->SetSizer(BoxSizer2);
	BoxSizer2->Fit(Panel1);
	BoxSizer2->SetSizeHints(Panel1);
	Notebook1->AddPage(Panel1, _("Terminal"), false);
	BoxSizer1->Add(Notebook1, 1, wxALL|wxEXPAND, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

TabPanel::~TabPanel()
{
	//(*Destroy(TabPanel)
	//*)
}


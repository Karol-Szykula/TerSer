#ifndef TABPANEL_H
#define TABPANEL_H

//(*Headers(TabPanel)
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/sizer.h>
//*)

class TabPanel: public wxPanel
{
	public:

		TabPanel(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size,
         long style, const wxString& name);
		virtual ~TabPanel();

	private:

		//(*Declarations(TabPanel)
		wxNotebook* Notebook1;
		wxPanel* Panel1;
		//*)

		//(*Identifiers(TabPanel)
		static const long ID_PANEL1;
		static const long ID_NOTEBOOK1;
		//*)

		//(*Handlers(TabPanel)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif

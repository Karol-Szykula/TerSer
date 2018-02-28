#ifndef TABPANEL_H
#define TABPANEL_H

#include <string>
#include <boost/weak_ptr.hpp>


//(*Headers(TabPanel)
#include <wx/button.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class TabPanel: public wxPanel
{
	public:

		TabPanel(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size,
                long style, const wxString& name);
		virtual ~TabPanel();

		void appendTextToTerminal(std::string inText);

		std::string getTextFromSendWidget();

	private:

	    wxWindow * m_parent;

		//(*Declarations(TabPanel)
		wxButton* Button1;
		wxNotebook* Notebook1;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxTextCtrl* sendTextWidget;
		wxTextCtrl* terminalTextWidget;
		//*)

		//(*Identifiers(TabPanel)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		static const long ID_TEXTCTRL2;
		static const long ID_PANEL1;
		static const long ID_NOTEBOOK1;
		//*)

		//(*Handlers(TabPanel)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif

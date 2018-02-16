#ifndef CONNECTIONSTATUSPANEL_H
#define CONNECTIONSTATUSPANEL_H

//(*Headers(ConnectionStatusPanel)
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class ConnectionStatusPanel: public wxPanel
{
	public:

		ConnectionStatusPanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,long style, const wxString& name);
		virtual ~ConnectionStatusPanel();

	private:

		//(*Declarations(ConnectionStatusPanel)
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		//*)

		//(*Identifiers(ConnectionStatusPanel)
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT4;
		static const long ID_PANEL2;
		static const long ID_PANEL1;
		//*)

		//(*Handlers(ConnectionStatusPanel)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif

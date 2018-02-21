#ifndef SERVERSTATUSPANEL_H
#define SERVERSTATUSPANEL_H

//(*Headers(ServerStatusPanel)
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class ServerStatusPanel: public wxPanel
{
	public:

		ServerStatusPanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,long style,  const wxString& name);
		virtual ~ServerStatusPanel();

	private:

		//(*Declarations(ServerStatusPanel)
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		//*)

		//(*Identifiers(ServerStatusPanel)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_PANEL1;
		static const long ID_STATICTEXT4;
		//*)

		//(*Handlers(ServerStatusPanel)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif

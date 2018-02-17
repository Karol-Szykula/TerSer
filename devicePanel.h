#ifndef DEVICEPANEL_H
#define DEVICEPANEL_H

//(*Headers(DevicePanel)
#include <wx/button.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
//*)

class DevicePanel: public wxPanel
{
	public:

		DevicePanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,long style, const wxString& name);
		virtual ~DevicePanel();

	private:

		//(*Declarations(DevicePanel)
		wxButton* Button1;
		wxButton* Button2;
		wxNotebook* Notebook1;
		wxPanel* Panel1;
		wxTextCtrl* TextCtrl1;
		//*)

		//(*Identifiers(DevicePanel)
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_PANEL1;
		static const long ID_NOTEBOOK1;
		//*)

		//(*Handlers(DevicePanel)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif

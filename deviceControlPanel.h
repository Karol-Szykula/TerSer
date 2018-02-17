#ifndef DEVICECONTROLPANEL_H
#define DEVICECONTROLPANEL_H

//(*Headers(DeviceControlPanel)
#include <wx/panel.h>
#include <wx/sizer.h>
//*)

class DeviceControlPanel: public wxPanel
{
	public:

		DeviceControlPanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,long style, const wxString& name);
		virtual ~DeviceControlPanel();

	private:

		//(*Declarations(DeviceControlPanel)
		wxPanel* Panel1;
		wxPanel* Panel2;
		//*)

		//(*Identifiers(DeviceControlPanel)
		static const long ID_PANEL2;
		static const long ID_PANEL1;
		//*)

		//(*Handlers(DeviceControlPanel)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif

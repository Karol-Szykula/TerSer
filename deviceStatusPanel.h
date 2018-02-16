#ifndef DEVICESTATUSPANEL_H
#define DEVICESTATUSPANEL_H

//(*Headers(DeviceStatusPanel)
#include <wx/panel.h>
#include <wx/sizer.h>
//*)

class DeviceStatusPanel: public wxPanel
{
	public:

		DeviceStatusPanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,long style, const wxString& name);
		virtual ~DeviceStatusPanel();

	private:

		//(*Declarations(DeviceStatusPanel)
		wxPanel* Panel1;
		//*)

		//(*Identifiers(DeviceStatusPanel)
		static const long ID_PANEL1;
		//*)

		//(*Handlers(DeviceStatusPanel)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif

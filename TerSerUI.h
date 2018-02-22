#ifndef TERSERUI_H
#define TERSERUI_H

//(*Headers(TerSerUI)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/toolbar.h>
//*)

#include "connectionStatusPanel.h"
#include "tabPanel.h"
#include "devicePanel.h"
#include "deviceControlPanel.h"
#include "serverStatusPanel.h"

class TerSerUI: public wxFrame
{
	public:

		TerSerUI(wxWindow* parent, wxWindowID  id = -1);
		virtual ~TerSerUI();

	private:

		//(*Declarations(TerSerUI)
		ConnectionStatusPanel* Panel2;
		DeviceControlPanel* Panel6;
		DevicePanel* Panel5;
		ServerStatusPanel* Panel3;
		TabPanel* Panel7;
		wxFlexGridSizer* FlexGridSizer1;
		wxMenu* Menu1;
		wxMenu* Menu3;
		wxMenu* Menu4;
		wxMenuBar* MenuBar1;
		wxMenuItem* Menu2;
		wxMenuItem* MenuItem1;
		wxMenuItem* MenuItem2;
		wxPanel* Panel1;
		wxToolBar* ToolBar1;
		//*)

		//(*Identifiers(TerSerUI)
		static const long ID_PANEL2;
		static const long ID_PANEL3;
		static const long ID_PANEL5;
		static const long ID_PANEL6;
		static const long ID_PANEL7;
		static const long ID_PANEL1;
		static const long ID_TOOLBAR1;
		static const long ID_MENUITEM1;
		static const long ID_MENUITEM3;
		static const long ID_MENUITEM2;
		//*)

		//(*Handlers(TerSerUI)
		void OnPanel6Paint(wxPaintEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif

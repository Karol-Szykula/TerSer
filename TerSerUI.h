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

#include <wx/timer.h>
#include <vector>

#include "ConnectionSettingsFrame.h"
#include "bufferedasyncserial/BufferedAsyncSerial.h"
#include "bufferedasyncserial/serialoptions.h"

class TerSerUI: public wxFrame
{
	public:

		TerSerUI(wxWindow* parent, wxWindowID  id = -1);
		virtual ~TerSerUI();

	private:

		//! An id variable for connection settings frame.
        wxWindowID ID_CONSETFRAME;

        //! An id object for window settings dialog.
        wxWindowID ID_WINSETDIALOG;

        //! An id for nuia1 frame
        wxWindowID ID_NUIA1;



		//! A frame for the settings.
		/*!
			Displays and saves application settings.
		*/
        ConnectionSettingsFrame * m_connectionSettingsFrame;	// frame for connection settings


//==========================================================================
//==========================================================================

		//(*Declarations(TerSerUI)
		ConnectionStatusPanel* Panel2;
		DeviceControlPanel* Panel6;
		DevicePanel* Panel5;
		ServerStatusPanel* Panel3;
		TabPanel* tabPanel;
		wxFlexGridSizer* FlexGridSizer1;
		wxMenu* Menu1;
		wxMenu* Menu3;
		wxMenu* Menu4;
		wxMenu* Menu5;
		wxMenuBar* MenuBar1;
		wxMenuItem* Menu2;
		wxMenuItem* MenuItem1;
		wxMenuItem* MenuItem2;
		wxPanel* Panel1;
		wxToolBar* ToolBar1;
		wxToolBarToolBase* ToolBarItem1;
		//*)

		//(*Identifiers(TerSerUI)
		static const long ID_PANEL2;
		static const long ID_PANEL3;
		static const long ID_PANEL5;
		static const long ID_PANEL6;
		static const long ID_PANEL7;
		static const long ID_PANEL1;
		static const long ID_TOOLBARITEM1;
		static const long ID_TOOLBAR1;
		static const long ID_MENUITEM1;
		static const long ID_MENUITEM3;
		static const long ID_MENUITEM2;
		//*)

		//(*Handlers(TerSerUI)
		void OnAbout(wxCommandEvent& event);
		void OnButtonConnectClick(wxCommandEvent& event);
		void OnMenuSettingsConnectionClicked(wxCommandEvent& event);
		void OnQuit(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif

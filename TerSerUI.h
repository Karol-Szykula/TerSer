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



        //! A public member function, sets main SerialOptions object.
        /*!
			\param newSerialOptions passes new serial connection options.
        */
        void setSerialOptions(SerialOptions newSerialOptions);

		//! A public member function, returns main SerialOptions object.
        /*!
			\return SerialOptions object.
        */
        SerialOptions getSerialOptions();

	private:

	    //! A private member function, callback function for the AsyncSerial library.
        /*!
			\param data is a char array where received signs will be stored.
			\param len is size_t variable, it stores array size.
        */
		void OnSerialRecived(const char * data, std::size_t len);	// serial callback function

		//! A private event function, it reads checks every specified interval whether data arrived.
        /*!
			\param event is wxTimerEvent type.
        */
		void OnTimerSerialRead(wxTimerEvent  & event);

		//! A private function, it allow checking whether serial connection is open.
        /*!
			\return bool type.
        */
        bool isSerialOpen();

        //! A private function, it stops the serial read timer.
        void stopSerialReadTimer();

        //! A private function, it starts the serial read timer.
        void startSerialReadTimer();


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

        //! An wxTimer object for serial read sample interval.
        wxTimer m_serialReadTimer;

		//! An BufferedAsyncSerial object for serial device abstraction.
		BufferedAsyncSerial m_serialConnection;

		//! A string for received message.
		std::string m_serialReceived;

		//! An object which stores serial device options.
		SerialOptions m_serialOptions;

		friend class TabPanel;

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
		void OnPanel6Paint(wxPaintEvent& event);
		void OnAbout(wxCommandEvent& event);
		void OnButtonConnectClick(wxCommandEvent& event);
		void OnMenuSettingsConnectionClicked(wxCommandEvent& event);
		void OnQuit(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif

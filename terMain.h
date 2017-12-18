/***************************************************************
 * Name:      terMain.h
 * Purpose:   Defines Application Frame
 * Author:    Karol Szykula (karol.szykula@gmail.com)
 * Created:   2017-11-30
 * Copyright: Karol Szykula ()
 * License:
 **************************************************************/

#ifndef TERMAIN_H
#define TERMAIN_H
#include "ConnectionSettingsFrame.h"
#include "WindowSettingsDialog.h"
#include "bufferedasyncserial/BufferedAsyncSerial.h"
#include <wx/timer.h>



//(*Headers(terFrame)
#include <wx/notebook.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/toolbar.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

#include <vector>
#include "serialoptions.h"

//!  A main frame class.
/*!
  The class inherits from wxWidgets wxFrame class.
*/

class terFrame: public wxFrame
{

	public:
		//! A constructor.
		/*!
            \param parent a pointer to wxWindow parent window.
            \param id stores a wxWindowID number, default -1.
		*/
        terFrame(wxWindow* parent,wxWindowID id = -1);
        //! A virtual destructor.
        virtual ~terFrame();

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

        //(*Handlers(terFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnTerminalSendTextCtrlTextEnter(wxCommandEvent& event);
        void OnTerminalSendTextEnter(wxCommandEvent& event);
        void OnToolBarSettingsClicked(wxCommandEvent& event);
        void OnMenuItemWindowClicked(wxCommandEvent& event);
        void OnButtonConnectClick(wxCommandEvent& event);
        void OnButtonStartServerClick(wxCommandEvent& event);
        //*)

        //(*Identifiers(terFrame)
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT4;
        static const long ID_STATICTEXT5;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL2;
        static const long ID_TEXTCTRL1;
        static const long ID_PANEL2;
        static const long ID_PANEL3;
        static const long ID_NOTEBOOK1;
        static const long ID_PANEL1;
        static const long ID_MENUQUIT;
        static const long ID_MENUCONNECTION;
        static const long ID_MENUWINDOW;
        static const long ID_MENUABOUT;
        static const long ID_STATUSBAR1;
        static const long wxID_PROPERTIES ;
        static const long ID_TOOLBARITEMQUIT;
        static const long ID_TOOLBAR1;
        //*)

        //(*Declarations(terFrame)
        wxButton* ButtonStartServer;
        wxMenuItem* MenuItem2;
        wxPanel* RadiatorsPanelWidget;
        wxToolBar* toolBar;
        wxStaticText* TerminalSendLabel;
        wxTextCtrl* TerminalSendTextCtrl;
        wxPanel* FramePanel;
        wxStaticText* StaticText1;
        wxStaticText* StaticText3;
        wxStaticText* LabelConnectionStatus;
        wxToolBarToolBase* ToolBarItem1;
        wxTextCtrl* TerminalTextCtrlWidget;
        wxMenuItem* MenuItem3;
        wxNotebook* NotebookWidget;
        wxStatusBar* statusBar;
        wxToolBarToolBase* toolBarItemQuit;
        wxButton* ButtonConnect;
        wxStaticText* LabelServerStatus;
        wxPanel* TerminalPanelWidget;
        wxMenu* MenuItem1;
        //*)

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

		//void startSerialReadTimer();
		//void stopSerialReadTimer();

		//! An id variable for connection settings frame.
        wxWindowID ID_CONSETFRAME;

        //! An id object for window settings dialog.
        wxWindowID ID_WINSETDIALOG;


		//! A frame for the settings.
		/*!
			Displays and saves application settings.
		*/
        ConnectionSettingsFrame * connectionSettingsFrame;	// frame for connection settings

        //! A dialog for the window settings.
		/*!
			\deprecated when settings will become a part of the application settings.
			Displays and saves window settings.
		*/
        WindowSettingsDialog * windowSettingsDialog;		// dialog for window settings

        //! An wxTimer object for serial read sample interval.
        wxTimer SerialReadTimer;

		//! An BufferedAsyncSerial object for serial device abstraction.
		BufferedAsyncSerial serialConnection;

		//! A string for received message.
		std::string serialReceived;

		//! An object which stores serial device options.
		SerialOptions serialOptions;

		//SerialTerminalHandler
		//SerialServerHandler

		//! A macro which declares events.
        DECLARE_EVENT_TABLE()
};

#endif // TERMAIN_H

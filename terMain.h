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

#include <wx/timer.h>
#include <wx/mstream.h>
#include <vector>

#include <boost/scoped_ptr.hpp>

#include "ConnectionSettingsFrame.h"
#include "bufferedasyncserial/BufferedAsyncSerial.h"
#include "bufferedasyncserial/serialoptions.h"
#include "terSerUI.h"


//(*Headers(terFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
#include <wx/toolbar.h>
//*)

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
        void OnButtonConnectClick(wxCommandEvent& event);
        void OnButtonStartServerClick(wxCommandEvent& event);
        void OnToolBarNewUiClicked(wxCommandEvent& event);
        //*)

        //(*Identifiers(terFrame)
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_BUTTON1;
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL2;
        static const long ID_TEXTCTRL1;
        static const long ID_PANEL2;
        static const long ID_NOTEBOOK1;
        static const long ID_PANEL1;
        static const long ID_MENUQUIT;
        static const long ID_MENUCONNECTION;
        static const long ID_MENUABOUT;
        static const long ID_STATUSBAR1;
        static const long wxID_PROPERTIES ;
        static const long ID_TOOLBARITEMQUIT;
        static const long ID_TOOLBAR1;
        //*)

        //(*Declarations(terFrame)
        wxButton* ButtonConnect;
        wxMenu* Menu1;
        wxMenu* MenuItem1;
        wxMenuItem* MenuItem2;
        wxNotebook* NotebookWidget;
        wxPanel* FramePanel;
        wxPanel* TerminalPanelWidget;
        wxStaticText* LabelConnectionStatus;
        wxStaticText* StaticText1;
        wxStaticText* TerminalSendLabel;
        wxStatusBar* statusBar;
        wxTextCtrl* TerminalSendTextCtrl;
        wxTextCtrl* TerminalTextCtrlWidget;
        wxToolBar* toolBar;
        wxToolBarToolBase* ToolBarItem1;
        wxToolBarToolBase* toolBarItemQuit;
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

        //! An id for nuia1 frame
        wxWindowID ID_NUIA1;

        //! A smart pointer for nuia1 frame
        TerSerUI * ptrTerSerUI;

		//! A frame for the settings.
		/*!
			Displays and saves application settings.
		*/
        ConnectionSettingsFrame * connectionSettingsFrame;	// frame for connection settings

        //! An wxTimer object for serial read sample interval.
        wxTimer SerialReadTimer;

		//! An BufferedAsyncSerial object for serial device abstraction.
		BufferedAsyncSerial serialConnection;

		//! A string for received message.
		std::string serialReceived;

		//! An object which stores serial device options.
		SerialOptions serialOptions;


		//! A private function, the function converts an array with raw data to bitmap.
        /*!
			\param data is unsigned char array type.
			\param length is int type
        */
		inline wxBitmap _wxGetBitmapFromMemory(const unsigned char *data, int length);

		//! A macro which declares events.
        DECLARE_EVENT_TABLE()
};


inline wxBitmap terFrame::_wxGetBitmapFromMemory(const unsigned char *data, int length)
{
        wxMemoryInputStream is(data, length);
        return wxBitmap(wxImage(is, wxBITMAP_TYPE_ANY, -1), -1);
}

#endif // TERMAIN_H

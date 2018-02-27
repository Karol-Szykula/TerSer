#ifndef TERSERLOGIC_H
#define TERSERLOGIC_H

#include <wx/timer.h>
#include <vector>

#include <wx/msgdlg.h>

#ifdef _WIN32
    #include <winsock2.h> // include for boost::asio in asyncserial
#endif

#include "../bufferedasyncserial/BufferedAsyncSerial.h"
#include "../bufferedasyncserial/serialoptions.h"
#include <boost/shared_ptr.hpp>

#include "../connectionStatusPanel.h"
#include "../tabPanel.h"
#include "../devicePanel.h"
#include "../deviceControlPanel.h"
#include "../serverStatusPanel.h"


class TerSerLogic : public wxEvtHandler
{
public:
        TerSerLogic();
        ~TerSerLogic();

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

        void connectToSerial();

        void disconnectFromSerial();

        void setRelativeTabPanel(TabPanel* newPtrTabPanel);

        void setRelativeDevicePanel(DevicePanel* newPtrDeviceControlPanel);

        void setRelativeDeviceControlPanel(DeviceControlPanel* newPtrDeviceControlPanel);

        void setRelativeServerStatusPanel(ServerStatusPanel* newPtrServerStatusPanel);

        void setRelativeConnectionStatusPanel(ConnectionStatusPanel * newPtrConnectionStatusPanel);

        bool isSerialConnectionOpen();

        //! A public function, it stops the serial read timer.
        void stopSerialReadTimer();

        //! A public function, it starts the serial read timer.
        void startSerialReadTimer();

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



        //! An wxTimer object for serial read sample interval.
        wxTimer m_serialReadTimer;

        //! An BufferedAsyncSerial object for serial device abstraction.
		BufferedAsyncSerial m_serialConnection;

		//! A string for received message.
		std::string m_serialReceived;

		//! An object which stores serial device options.
		SerialOptions m_serialOptions;

		TabPanel* ptrTabPanel;

		DevicePanel* ptrDevicePanel;

		DeviceControlPanel* ptrDeviceControlPanel;

		ServerStatusPanel* ptrServerStatusPanel;

		ConnectionStatusPanel * ptrConnectionStatusPanel;

};

#endif // TERSERLOGIC_H

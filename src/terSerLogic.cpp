#include "../headers/terSerLogic.h"



TerSerLogic::TerSerLogic()
{
    m_serialReadTimer.SetOwner( this );
	this->Connect( m_serialReadTimer.GetId(), wxEVT_TIMER, wxTimerEventHandler( TerSerLogic::OnTimerSerialRead ), NULL, this );
}
TerSerLogic::~TerSerLogic() {}

void TerSerLogic::OnTimerSerialRead(wxTimerEvent  & event)
{
	if(m_serialConnection.isOpen() == true)
	{
		m_serialReceived = m_serialConnection.readString();
		//! \todo TerminalTextCtrlWidget has to be changed to a textCtrlWidget to a parser object
		//TerminalTextCtrlWidget->AppendText(serialReceived);
	}
}

void TerSerLogic::setSerialOptions(SerialOptions newSerialOptions)
{
	m_serialOptions = newSerialOptions;
}

SerialOptions TerSerLogic::getSerialOptions()
{
	return m_serialOptions;
}

void TerSerLogic::connectToSerial()
{
    if(m_serialConnection.isOpen() == false)
	{
		try{

		m_serialConnection.open(m_serialOptions.getPortName(), m_serialOptions.getBaudRate(), m_serialOptions.getParity(),
							m_serialOptions.getDataBits(), m_serialOptions.getFlowControl(), m_serialOptions.getStopBits());
		}catch(boost::system::system_error& e)
		{
		    std::string err(e.what());

		    wxMessageDialog *dial = new wxMessageDialog(NULL,
                                                  wxT("Cannot connect to specified port"),
                                                  wxT("Error"), wxOK | wxICON_ERROR);
            dial->ShowWindowModal();
		}

		if(m_serialConnection.isOpen() == true)   // if serial connection opened
		{
			m_serialReadTimer.Start(30, wxTIMER_CONTINUOUS);
			//!\todo LabelConnectionStatus has to be changed to a label in connectionStatusPanel
			//LabelConnectionStatus->SetLabel(wxT("CONNECTED"));
		}

	}else if(m_serialConnection.isOpen() == true)
	{
		try{

		m_serialConnection.close();

		}catch(boost::system::system_error& e)
		{}

		if(m_serialConnection.isOpen() == false)
		{
			m_serialReadTimer.Stop();
            //!\todo LabelConnectionStatus has to be changed to a label in connectionStatusPanel
			//LabelConnectionStatus->SetLabel(wxT("DISCONNECTED"));
		}
	}

}

void TerSerLogic::disconnectFromSerial()
{
    connectToSerial();
}

void TerSerLogic::setRelativeTabPanel(TabPanel* newPtrTabPanel)
{
    ptrTabPanel = newPtrTabPanel;
}

void TerSerLogic::setRelativeDevicePanel(DevicePanel* newPtrDeviceControlPanel)
{
    ptrDevicePanel = newPtrDeviceControlPanel;
}

void TerSerLogic::setRelativeDeviceControlPanel(DeviceControlPanel* newPtrDeviceControlPanel)
{
    ptrDeviceControlPanel = newPtrDeviceControlPanel;
}

void TerSerLogic::setRelativeServerStatusPanel(ServerStatusPanel* newPtrServerStatusPanel)
{
    ptrServerStatusPanel = newPtrServerStatusPanel;
}

void TerSerLogic::setRelativeConnectionStatusPanel(ConnectionStatusPanel * newPtrConnectionStatusPanel)
{
    ptrConnectionStatusPanel = newPtrConnectionStatusPanel;
}

bool TerSerLogic::isSerialConnectionOpen()
{
    return m_serialConnection.isOpen();
}





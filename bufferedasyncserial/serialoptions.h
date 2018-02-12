#ifndef SERIALOPTIONS_H
#define SERIALOPTIONS_H

#include <winsock2.h>
#include <boost/asio.hpp>

class SerialOptions
{
public:
		SerialOptions(std::string portName = "COM5", unsigned int baud_rate = 9600);
		virtual ~SerialOptions();

	// setters
	void setPortName(std::string newDeviceName);
	void setBaudRate(unsigned int newBaudRate);
	void setParity(boost::asio::serial_port_base::parity newParity);
	void setDataBits(boost::asio::serial_port_base::character_size  newDataBits);
	void setStopBits(boost::asio::serial_port_base::stop_bits newStopBits);
	void setFlowControl(boost::asio::serial_port_base::flow_control newFlowControl);

	//getters
	std::string getPortName() const;
	unsigned int getBaudRate() const;
	boost::asio::serial_port_base::parity getParity() const;
	boost::asio::serial_port_base::character_size getDataBits() const;
	boost::asio::serial_port_base::stop_bits getStopBits() const;
	boost::asio::serial_port_base::flow_control getFlowControl() const;

protected:

private:

    //! A  private std::string variable.
    std::string portName;
    //! A  private unsigned intunsigned int variable.
    unsigned int baud_rate;
    //! A  private variable.
    boost::asio::serial_port_base::parity opt_parity;
    //! A  private variable.
    boost::asio::serial_port_base::character_size opt_csize;
    //! A  private variable.
    boost::asio::serial_port_base::flow_control opt_flow;
    //! A  private variable.
    boost::asio::serial_port_base::stop_bits opt_stop;

};

#endif // SERIALOPTIONS_H

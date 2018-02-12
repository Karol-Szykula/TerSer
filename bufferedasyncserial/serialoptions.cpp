#include "serialoptions.h"

SerialOptions::SerialOptions(std::string newPortName, unsigned int newBaudRate)
{
	//ctor
	portName = newPortName;
	baud_rate = newBaudRate;
	opt_parity = boost::asio::serial_port_base::parity(boost::asio::serial_port_base::parity::none);
	opt_csize = boost::asio::serial_port_base::character_size(8);
	opt_flow = boost::asio::serial_port_base::flow_control(boost::asio::serial_port_base::flow_control::none);
    opt_stop = boost::asio::serial_port_base::stop_bits(boost::asio::serial_port_base::stop_bits::one);
}

SerialOptions::~SerialOptions()
{
	//dtor
}

// setters
void SerialOptions::setPortName(std::string newPortName)
{
	portName = newPortName;
}
void SerialOptions::setBaudRate(unsigned int newBaudRate)
{
	baud_rate = newBaudRate;
}
void SerialOptions::setParity(boost::asio::serial_port_base::parity newParity)
{
	opt_parity = newParity;
}
void SerialOptions::setDataBits(boost::asio::serial_port_base::character_size  newDataBits)
{
	opt_csize = newDataBits;
}
void SerialOptions::setStopBits(boost::asio::serial_port_base::stop_bits newStopBits)
{
	opt_stop = newStopBits;
}
void SerialOptions::setFlowControl(boost::asio::serial_port_base::flow_control newFlowControl)
{
	opt_flow = newFlowControl;
}

//getters
std::string SerialOptions::getPortName() const
{
	return portName;
}
unsigned int SerialOptions::getBaudRate() const
{
	return baud_rate;
}
boost::asio::serial_port_base::parity SerialOptions::getParity() const
{
	return opt_parity;
}

boost::asio::serial_port_base::character_size SerialOptions::getDataBits() const
{
	return opt_csize;
}
boost::asio::serial_port_base::stop_bits SerialOptions::getStopBits() const
{
	return opt_stop;
}
boost::asio::serial_port_base::flow_control SerialOptions::getFlowControl() const
{
	return opt_flow;
}

#pragma once
#include "AbstractCommunication.h"
class SerialPort232 :  AbstractCommunication
{
public:
	SerialPort232();
	~SerialPort232();

	void connect() override;
	void disconnect() override;
};


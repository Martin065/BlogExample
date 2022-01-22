#include "stdafx.h"
#include "communication.h"


communication::communication(communicationType type)
{
	switch (type)
	{
	case communication::EthernetType:
		commObj = new Ethernet();
		break;
	case communication::SerialType:
		commObj = new SerialPort232();
		break;
	default:
		break;
	}
}


communication::~communication()
{
}

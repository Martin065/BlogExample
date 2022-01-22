#include "stdafx.h"
#include "Ethernet.h"

Ethernet::Ethernet() : Ethernet(".\\LogInfo\\")
{
}

Ethernet::Ethernet(string LogFilePath) : Ethernet(999 ,  LogFilePath)
{
}

Ethernet::Ethernet(int machineIndex, string LogFilePath)
{
	m_machineIndex = machineIndex;
	m_LogFilePath = LogFilePath;
	log = new Log(LogFilePath);
}

Ethernet::~Ethernet()
{
	delete log;
}

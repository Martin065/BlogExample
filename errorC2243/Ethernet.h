#pragma once

#include "AbstractCommunication.h"
#include <string>

using namespace std;

class Ethernet :  AbstractCommunication
{
public:
	Ethernet();
	Ethernet(string LogFilePath);
	Ethernet(int machineIndex , string LogFilePath);
	~Ethernet();

	void connect() override;
	void disconnect() override;
private:
	int m_machineIndex;
	string m_LogFilePath;

};


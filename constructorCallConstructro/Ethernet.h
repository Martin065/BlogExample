#pragma once

#include <string>
#include "Log.h"

using namespace std;

class Ethernet
{
public:
	Ethernet();
	Ethernet(string LogFilePath);
	Ethernet(int machineIndex , string LogFilePath);
	~Ethernet();

private:
	int m_machineIndex;
	string m_LogFilePath;
	Log *log;
};


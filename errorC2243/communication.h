#include "AbstractCommunication.h"
#include "Ethernet.h"
#include "SerialPort232.h"

class communication
{
private:
	AbstractCommunication *commObj;
public:
	enum communicationType
	{
		EthernetType = 0,
		SerialType = 1,
	};

	communication(communicationType type);
	~communication();
};


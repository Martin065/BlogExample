#pragma once
class AbstractCommunication
{
public:

	virtual void connect() = 0;
	virtual void disconnect() = 0;
};


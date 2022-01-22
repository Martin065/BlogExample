// constructorCallConstructro.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <string>
#include "Ethernet.h"

using namespace std;

int main()
{
	Ethernet *ethernet = new Ethernet();

	delete ethernet;
    return 0;
}


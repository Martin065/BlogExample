// constructorCallConstructro.cpp : �w�q�D���x���ε{�����i�J�I�C
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


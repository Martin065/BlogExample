// ConsoleApplication1.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "ConsoleApplication1.h"

void pass_by_value(int* p) 
{
	p = new int;
}
void pass_by_reference(int*& p) 
{
	p = new int;
	*p = 5;
}
void pass_by_point_changerValue(int* p) 
{
	*p = 5;
}
void pass_by_reference_changeValue(int*& p)
{
	*p = 5;
}
int main()
{
	int* p1 = NULL;
	int* p2 = NULL;

	pass_by_value(p1);
	pass_by_reference(p2);

	int* p3 = new int;
	int* p4 = new int;

	pass_by_point_changerValue(p3);
	pass_by_reference_changeValue(p4);

    return 0;
}


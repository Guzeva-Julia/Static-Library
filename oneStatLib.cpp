#include <iostream>
#include <Windows.h>
#include "AngleStatLib.h"
using namespace std;


int main()
{
	Angle one;
	one = one.Init(118, 0.45);
	one.Display();
	one.toString();
	one.constrainAngle360();
	system("PAUSE");

}

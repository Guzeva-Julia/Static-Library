/*Copyright (C) 2022 Huzieva Iyliia*/

#include<iostream>
#include "/Users/Baza service/source/repos/StatLib/Static_Library/AngleStatLib.h"

using namespace std;

int test() {
	int minutes = 90;
	double degrees = 0.36;
	cout << "Minutes the Angle =" << minutes << endl;
	cout << "Degrees the Angle =" << degrees << endl;
	cout << " "<<
	Angle::Angle::comparsionAngle() << endl;
	cout << "Span Angle 0-360 is "<<
	Angle::Angle:: constrainAngle360(minutes, degrees)<< endl;
	cout << "Radian Angle = "<<
	Angle::Angle::Radian() << endl;
	cout << "Increase the Angle by 50 degrees = " <<
	Angle::Angle::increaseAngle() << endl;
	cout << "Reduction the Angle by 50 degrees = " <<
	Angle::Angle::reductionAngle() << endl;
	cout << "Sinus the Angle = " <<
	Angle::Angle::Sinus() << endl;
	
	
	return 0;
}
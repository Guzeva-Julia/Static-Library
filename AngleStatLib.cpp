/*Copyright (C) 2022 Huzieva Iyliia*/
#include <iostream>
#include <math.h>

/*Завдання 
1.  Використовуючі  проект,  розроблений  в  лабораторній  роботі  №4, створити статичну бібліотеку.
2.  Сторити додаток, який демонструє  функціонал статичної бібліотеки
*/

class Angle {

private:
	int degrees; //Значення градусів
	double minutes;  //Значення хвилин
	/*Розділення значень градусів і кутів було зроблено для зручного підрахунку значення кута в радіанах,
									бо значення хвилин рахується окремо. Хвилини треба поділити на 60. */
	


public:
	Angle Init(int d, float m);
	Angle Read(int d, float m);
	void Display();
	char toString();

	Angle();
	Angle(const Angle& ref_angle);
	Angle(int m_degrees, double m_minutes);

	Angle& operator++ ();
	Angle& operator-- ();
	Angle operator+(const Angle& ref_angle);

	float Radian();
	float constrainAngle360();
	float increaseAngle();
	float reductionAngle();
	float Sinus();
	float comparsionAngle();

};

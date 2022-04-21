#include "Circle.h"
#include <windows.h>
#include <conio.h>
#include <iostream>
void Circle::gets()
{
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	setlocale(LC_ALL, "Russian");
	cout << endl;
	cout << "введите радиус: ";
	cin >> rad;
	cout << endl;
}
void Circle::square() 
{

	setlocale(LC_ALL, "Russian");
	cout << "площадь окружности равна: " << pi * rad * rad;
	cout << endl;
}
void Circle::length()
{
	setlocale(LC_ALL, "Russian");
	cout << "длина окружности равна: " << 2 * pi * rad ;
	cout << endl;
}

void Circle::draw()
{
	
	setlocale(LC_ALL, "Russian");
	HDC t = GetDC(GetConsoleWindow());
	HPEN P = CreatePen(PS_SOLID, 4, RGB(255, 0, 0));
	SelectObject(t, P);
	Ellipse(t, rad, rad, 10, 10);
	DeleteObject(P);
	ReleaseDC(NULL, t);
	_getch();
}

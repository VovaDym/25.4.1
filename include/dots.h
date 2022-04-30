#pragma once
#include <iostream>

struct Dots
{
	double x = 0.0;
	double y = 0.0;
};

Dots enterDot()
{
	Dots dot;
	std::cout << "Enter the coordinates of the dot: ";
	std::cin >> dot.x >> dot.y;

	return dot;
}

bool compareDots(Dots& dot1, Dots& dot2)
{
	return (dot1.x == dot2.x && dot1.y == dot2.y);
}
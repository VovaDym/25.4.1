#pragma once
#include <iostream>
#include "dot.h"

void scalpel(Dots& dot1, Dots& dot2)
{
	system("cls");
	std::cout << "A cut was made between the entered coordinates (" << dot1.x << ", " << dot1.y << ") and ("
		<< dot2.x << ", " << dot2.y << ")" << std::endl;
}

void hemostat(Dots& dot)
{
	system("cls");
	std::cout << "The hemostat was used at a point with (" << dot.x << ", " << dot.y << ")" << " coordinates. " << std::endl;
}

void tweezers(Dots& dot)
{
	system("cls");
	std::cout << "The tweezers was used at a point with (" << dot.x << ", " << dot.y << ")" << " coordinates. " << std::endl;
}

void suture(Dots& dot1, Dots& dot2)
{
	system("cls");
	std::cout << "Suture was applied" << std::endl;
}
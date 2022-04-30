#include "dots.h"
#include "instruments.h"
#include <iostream>


bool isCorrectInstrument(std::string&);

std::string instruments[]{ "scalpel", "hemostat", "tweezers", "suture" };


int main()
{
	std::string instrument{ "" };
	std::cout << "To start operation enter \"scalpel\"" << std::endl;
	do
	{
		std::cin >> instrument;
	} while (instrument != "scalpel");

	Dots cutStart, cutFinish;
	Dots sutureStart, sutureFinish;
	std::cout << "Enter coordinate of start cut: ";
	std::cin >> cutStart.x >> cutStart.y;
	std::cout << "Enter coordinate of finish cut: ";
	std::cin >> cutFinish.x >> cutFinish.y;
	scalpel(cutStart, cutFinish);

	if (cutFinish.x < cutStart.x)
		std::swap(cutStart, cutFinish);
	do
	{
		std::cout << "Choose instrument: " << std::endl;
		std::cout << " - " << instruments[0] << ";" << std::endl;
		std::cout << " - " << instruments[1] << ";" << std::endl;
		std::cout << " - " << instruments[2] << ";" << std::endl;
		std::cout << " - " << instruments[3] << ";" << std::endl;

		do
		{
			std::cin >> instrument;
		} while (!isCorrectInstrument(instrument));

		int chosen = 0;
		while (instrument != instruments[chosen])
		{
			++chosen;
		}

		switch (chosen)
		{
		case 0:
		{
			scalpel(enterDot(), enterDot());
			break;
		}
		case 1:
		{
			hemostat(enterDot());
			break;
		}
		case 2:
		{
			tweezers(enterDot());
			break;
		}
		case 3:
		{
			std::wcout << "Coordinates of the section: (" << cutStart.x << ", " << cutStart.y << ") " << "and ("
				<< cutFinish.x << ", " << cutFinish.y << ") " << std::endl;
			std::cout << "The starting point of the cut" << std::endl;
			sutureStart = enterDot();
			std::cout << "The finish point of the cut" << std::endl;
			sutureFinish = enterDot();
			suture(sutureStart, sutureFinish);

			if (sutureFinish.x < sutureStart.x)
			{
				std::swap(sutureStart, sutureFinish);
			}
			break;
		}
		}
	} while (!(compareDots(cutStart, sutureStart) && compareDots(cutFinish, sutureFinish)));

	std::cout << std::endl << "Operation completed " << std::endl;
}

bool isCorrectInstrument(std::string& instrument)
{
	for (int i = 0; i < 4; ++i)
	{
		if (instrument == instruments[i])
		{
			return true;
		}
	}
	return false;
}
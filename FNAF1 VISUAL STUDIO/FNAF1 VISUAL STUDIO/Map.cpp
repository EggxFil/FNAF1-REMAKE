#include <iostream>


std::string leftdoor = "   ";
std::string rightdoor = "   ";
void printMap()
{

	std::cout << "               oCAM1-----------o               " << '\n';
	std::cout << "               |     STAGE     |               " << '\n';
	std::cout << "         o-----o---------------o-----o         " << '\n';
	std::cout << "    o--o-o  CAM2                     o--------o" << '\n';
	std::cout << "    |                                         |" << '\n';
	std::cout << "    o--o-o                           o--o  o--o" << '\n';
	std::cout << "         |CAM3                       |  |     |" << '\n';
	std::cout << "         o---o    o---------o    o---o  o--o--o" << '\n';
	std::cout << "             |    |         |    | o---o       " << '\n';
	std::cout << "             |CAM4|         |CAM6| |   |       " << '\n';
	std::cout << "      o---o  |    |         |    | |   |       " << '\n';
	std::cout << "      |   o--o    o-o-----o-o    o-o   |       " << '\n';
	std::cout << "      |           " << leftdoor << " YOU " << rightdoor << "          |       " << '\n';
	std::cout << "      o---o--o    o-o-----o-o    o-o---o       " << '\n';
	std::cout << "             |    |         |    |             " << '\n';
	std::cout << "             |CAM5|         |CAM7|             " << '\n';
}

void Mapupdate(const int&& num)
{
	if (num == 0)
	{
		leftdoor = "   ";
		rightdoor = "   ";
		printMap();
	}

	else if (num == 1)
	{
		leftdoor = "|||";
		printMap();
	}
	else if (num == 2)
	{
		rightdoor = "|||";
		printMap();
	}
	else if (num == 3)
	{
		leftdoor = "   ";
		printMap();
	}
	else if (num == 4)
	{
		rightdoor = "   ";
		printMap();
	}
}
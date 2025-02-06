#pragma once
#include <iostream>
#include "Main.cpp"
bool doorclosedLEFT = false;
bool doorclosedRIGHT = false;
class Mapupdate
{
public:
	std::string leftdoor = "   ";
	std::string rightdoor = "   ";
	Mapupdate(const int& doornum)
	{
		leftdoor = "|||";
		std::cout << "this works" << '\n';
	}
	void printMap()
	{

		std::cout << "               oCAM1A----------o               " << '\n';
		std::cout << "               |     STAGE     |               " << '\n';
		std::cout << "         o-----o---------------o-----o         " << '\n';
		std::cout << "    o--o-o  CAM1B                    o---CAM7-o" << '\n';
		std::cout << "CAM5|                                         |" << '\n';
		std::cout << "    o--o-o                           o--o  o--o" << '\n';
		std::cout << "         |CAM1C                      |  |     |" << '\n';
		std::cout << "         o---o    o---------o    o---o  o--o--o" << '\n';
		std::cout << "             |    |         |    | o---o       " << '\n';
		std::cout << "             |CAM2A         |CAM4A |   |       " << '\n';
		std::cout << "      o---o  |    |         |    | |   |CAM6   " << '\n';
		std::cout << "  CAM3|   o--o    o-o-----o-o    o-o   |       " << '\n';
		std::cout << "      |           " << leftdoor << " YOU " << rightdoor << "          |       " << '\n';
		std::cout << "      o---o--o    o-o-----o-o    o-o---o       " << '\n';
		std::cout << "             |    |         |    |             " << '\n';
		std::cout << "             |CAM2B         |CAM4B             " << '\n';
	}
	void updatemap(std::string door, std::string state)
	{

		std::cout << "               oCAM1A----------o               " << '\n';
		std::cout << "               |     STAGE     |               " << '\n';
		std::cout << "         o-----o---------------o-----o         " << '\n';
		std::cout << "    o--o-o  CAM1B                    o---CAM7-o" << '\n';
		std::cout << "CAM5|                                         |" << '\n';
		std::cout << "    o--o-o                           o--o  o--o" << '\n';
		std::cout << "         |CAM1C                      |  |     |" << '\n';
		std::cout << "         o---o    o---------o    o---o  o--o--o" << '\n';
		std::cout << "             |    |         |    | o---o       " << '\n';
		std::cout << "             |CAM2A         |CAM4A |   |       " << '\n';
		std::cout << "      o---o  |    |         |    | |   |CAM6   " << '\n';
		std::cout << "  CAM3|   o--o    o-o-----o-o    o-o   |       " << '\n';
		std::cout << "      |           " << leftdoor << " YOU " << rightdoor << "          |       " << '\n';
		std::cout << "      o---o--o    o-o-----o-o    o-o---o       " << '\n';
		std::cout << "             |    |         |    |             " << '\n';
		std::cout << "             |CAM2B         |CAM4B             " << '\n';
	}
};
std::string leftdoor = "   ";
std::string rightdoor = "   ";

void printMap()
{

	std::cout << "               oCAM1A----------o               " << '\n';
	std::cout << "               |     STAGE     |               " << '\n';
	std::cout << "         o-----o---------------o-----o         " << '\n';
	std::cout << "    o--o-o  CAM1B                    o---CAM7-o" << '\n';
	std::cout << "CAM5|                                         |" << '\n';
	std::cout << "    o--o-o                           o--o  o--o" << '\n';
	std::cout << "         |CAM1C                      |  |     |" << '\n';
	std::cout << "         o---o    o---------o    o---o  o--o--o" << '\n';
	std::cout << "             |    |         |    | o---o       " << '\n';
	std::cout << "             |CAM2A         |CAM4A |   |       " << '\n';
	std::cout << "      o---o  |    |         |    | |   |CAM6   " << '\n';
	std::cout << "  CAM3|   o--o    o-o-----o-o    o-o   |       " << '\n';
	std::cout << "      |           " << leftdoor << " YOU " << rightdoor << "          |       " << '\n';
	std::cout << "      o---o--o    o-o-----o-o    o-o---o       " << '\n';
	std::cout << "             |    |         |    |             " << '\n';
	std::cout << "             |CAM2B         |CAM4B             " << '\n';
}
void updatemap(std::string door, std::string state)
{

	std::cout << "               oCAM1A----------o               " << '\n';
	std::cout << "               |     STAGE     |               " << '\n';
	std::cout << "         o-----o---------------o-----o         " << '\n';
	std::cout << "    o--o-o  CAM1B                    o---CAM7-o" << '\n';
	std::cout << "CAM5|                                         |" << '\n';
	std::cout << "    o--o-o                           o--o  o--o" << '\n';
	std::cout << "         |CAM1C                      |  |     |" << '\n';
	std::cout << "         o---o    o---------o    o---o  o--o--o" << '\n';
	std::cout << "             |    |         |    | o---o       " << '\n';
	std::cout << "             |CAM2A         |CAM4A |   |       " << '\n';
	std::cout << "      o---o  |    |         |    | |   |CAM6   " << '\n';
	std::cout << "  CAM3|   o--o    o-o-----o-o    o-o   |       " << '\n';
	std::cout << "      |           " << leftdoor << " YOU " << rightdoor << "          |       " << '\n';
	std::cout << "      o---o--o    o-o-----o-o    o-o---o       " << '\n';
	std::cout << "             |    |         |    |             " << '\n';
	std::cout << "             |CAM2B         |CAM4B             " << '\n';
}


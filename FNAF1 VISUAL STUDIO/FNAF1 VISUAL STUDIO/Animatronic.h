#pragma once
#include <string>
#include "Print.h"
class animatronicStages
{
public:
	int* harray;
	int arraybuffer;
	animatronicStages();
	
	int returnarray(const int& index);
	
	~animatronicStages();
	

};
class animatronic
{
public:
	//int* stagebuffer;
	int stage;
	animatronic(std::string name, int stages);
};

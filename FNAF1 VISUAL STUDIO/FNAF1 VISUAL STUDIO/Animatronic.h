#pragma once
#include <string>
#include "Print.h"
#include <memory>
class animatronicStages
{
public:
	int* harray = nullptr;
	int arraybuffer = 0;

	animatronicStages()
	{

		harray = new int[5];

		for (int i = 0; 5 > i; i++)
		{
			arraybuffer++;
			harray[i] = arraybuffer;
			Print(harray[i]);
		}
	}
	int& operator[](const unsigned int index)
	{
		return harray[index];
	}
	int returnarray(const int& index)
	{
		return harray[index];
	}

	~animatronicStages()
	{
		delete[] harray;
	}

};
class animatronic
{
public:
	std::unique_ptr<animatronicStages> ptr;
	int stage = 0;
	animatronic(std::string&& name, const int& stages)
	{
		ptr = new animatronicStages();
		stage = ptr->returnarray(0);
		//stage = ptr[0];
		Print(stage);
		//stage = ptr->returnarray(0);
	}
	void takeStep()
	{
		Print("step taken");
	}
	~animatronic()
	{
	    //delete[] ptr;
	}
};

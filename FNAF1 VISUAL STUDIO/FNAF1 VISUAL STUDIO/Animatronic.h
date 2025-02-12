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
	int returnarray(const int& index)
	{
		return harray[index];
	}

	~animatronicStages()
	{
		delete harray;
	}

};
class animatronic
{
public:
	//int* stagebuffer;
	int stage = 0;
	animatronic(std::string name, int stages)
	{
		std::unique_ptr<animatronicStages> ptr(new animatronicStages());
		//animatronicStages* newstage = new animatronicStages();
		//stage = newstage->returnarray(0);
		//Print(stage);
		stage = ptr->returnarray(0);
	}
	void takeStep()
	{
		Print(stage);
	}
	~animatronic()
	{
		Print(stage);
		Print("deleted ptr");
		//delete newstage;
	}
};

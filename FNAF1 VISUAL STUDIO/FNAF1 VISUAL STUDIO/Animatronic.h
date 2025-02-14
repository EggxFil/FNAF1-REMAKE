#pragma once
#include <string>
#include "Print.h"
#include <memory>
#include "Main.h"
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
	int& operator[](const unsigned int& index) const
	{
		return harray[index];
		//if used with a pointer, dereference
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
		:ptr(new animatronicStages())
	{
		
		
		stage = (*ptr)[0];
		Print(stage);
		
	}
	void takeStep()
	{
		Print("step taken");
		if (stage != 5)
		{
			stage++;
		}
		if (stage == 5)
		{
			GameOver();
		}
		else
		{
			Print("what even happened here?");
		}
		
	}
	~animatronic()
	{
	}
};

#pragma once
#include <string>
#include "Print.h"
#include <memory>
#include "Main.h"
#include <cstdlib>
#include <ctime>
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

	int randomNum = 2;
	
	int* arrayPointer = nullptr;
	animatronicStages obj;

	animatronic(std::string&& name)
		:arrayPointer(obj.harray)
	{
		
		
		Print(*arrayPointer);
		
		
		
	}

	void RandStep()
	{
		srand(time(0));
		randomNum = rand() % 2;
		if(randomNum == 0)
		{
			takeStep();
		}
		else if (randomNum == 1)
		{
			Print("step not taken");
		}
	}

	void takeStep()
	{
		Print("step taken");
		if (*arrayPointer != 5)
		{
			*arrayPointer++;
			Print(*arrayPointer);
			
		}
		if (*arrayPointer == 5)
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

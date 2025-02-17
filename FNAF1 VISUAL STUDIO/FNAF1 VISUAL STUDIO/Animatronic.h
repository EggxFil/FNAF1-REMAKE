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

		harray = new int[6];

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
	{
		
		arrayPointer = obj.harray;
		(*arrayPointer)++;
		
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
		if (*arrayPointer != 6)
		{
			(*arrayPointer)++;
			Print(*arrayPointer);
			
		}
		else if (*arrayPointer == 6)
		{
			GameOver();
		}
		else
		{
			Print("what even happened here?");
		}
		
	}
	void CheckStage(int stage)
	{
		/*
		1 = foxys cove
		2 = stage
		3 = main hall
		4 = left and right hallways
		5 = right next to door
		6 = dead
		 */
		if (*arrayPointer == stage)
		{
			Print("An animatronic is here");
		}
		else if (*arrayPointer == 5)
		{
			Print("An animatronic is right outside your door");
		}
		else
		{
			Print("No one's here.");
		}
	}

	~animatronic()
	{
	}
};

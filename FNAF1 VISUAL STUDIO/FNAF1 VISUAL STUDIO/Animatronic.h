#pragma once
#include <string>
#include "Print.h"
#include <memory>
#include "Main.h"
#include <cstdlib>
#include <ctime>

class animatronicStages
{
	const int m = 2;
	const int n = 5;
	
public:
	int* harray = nullptr;
	int arraybuffer = 0;

	animatronicStages()
		
	{

		harray = new int[2 * 5];

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
		
	/*  1) 1 = stage, 2 = main hall,   3 = left hallway, 4 = next to left door, 5 = dead
		2) 1 = 0,     2 = foxies cove, 3 = right hallway,4 = next to right door,5 = dead*/
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

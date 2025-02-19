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
	int harray[5];
	int Larray[4];
	int arraybuffer = 0;

	animatronicStages()
	{
		
		
		for (int i = 0; 5 > i; i++)
		{
			arraybuffer++;
			harray[i] = arraybuffer;
			Print(harray[i]);
			
		}
		arraybuffer = 0;
		for (int i = 0; 4 > i; i++)
		{
			arraybuffer++;
			Larray[i] = arraybuffer;
			Print(Larray[i]);
		}
		
		
	}
	animatronicStages(const animatronicStages& other)
	{

	}
	

	~animatronicStages()
	{
		delete[] harray;
	}

};

class animatronic
{
	std::string m_name;
public:
	
	int randomNum = 2;
	
	//int* arrayPointer = nullptr;
	animatronicStages obj;
	std::unique_ptr<int> arrayPointer;

	animatronic(std::string&& name)
		:arrayPointer(obj.harray),m_name(name)
	{
		
		//arrayPointer(obj.harray);
		
		Print(*arrayPointer);
		
		
		
	}

	void RandStep()
	{
		srand(time(0));
		randomNum = rand() % 2;
		if(randomNum == 0)
		{
			takeStep(m_name);
		}
		else if (randomNum == 1)
		{
			Print("step not taken");
		}
	}

	void takeStep(const std::string& Name)
	{
		if(Name == "Freddy" || Name == )
		Print("step taken");
		if (*arrayPointer != 5)
		{
			(*arrayPointer)++;
			Print(*arrayPointer);
			
		}
		else if (*arrayPointer == 5)
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

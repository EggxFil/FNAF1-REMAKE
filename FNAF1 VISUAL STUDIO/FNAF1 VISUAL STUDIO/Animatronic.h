#pragma once
#include <string>
#include "Print.h"
#include <memory>
#include "Main.h"
#include <cstdlib>
#include <ctime>

class animatronicStages
{
	int arraybuffer = 0;
public:
	int Rarray[5];
	int Larray[4];
	

	animatronicStages()
	{
		
		
		for (int i = 0; 5 > i; i++)
		{
			arraybuffer++;
			Rarray[i] = arraybuffer;
			Print(Rarray[i]);
			
		}
		arraybuffer = 0;
		for (int i = 0; 4 > i; i++)
		{
			arraybuffer++;
			Larray[i] = arraybuffer;
			Print(Larray[i]);
		}
		
		
	}
};

class animatronic
{
	std::string m_name;
public:
	
	int randomNum = 2;
	
	//int* arrayPointer = nullptr;
	animatronicStages obj;
	std::unique_ptr<int> RightHall;
	std::unique_ptr<int> LeftHall;

	animatronic(std::string&& name)
		:RightHall(obj.Rarray),LeftHall(obj.Larray), m_name(name)
	{
		
		//arrayPointer(obj.harray);
		
		Print(*RightHall);
		
		
		
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
		if (Name == "Freddy" || Name == "Chika")
		{
			Print("step taken");
			if (*RightHall != 5)
			{
				(*RightHall)++;
				Print(*RightHall);

			}
			else if (*RightHall == 5)
			{
				GameOver();
			}
			else
			{
				Print("what even happened here?");
			}
		}
		
		
	}
	void CheckStage(const int& stage, const int& hall)
	{
		
	/*  hall 1) 1 = stage, 2 = main hall,   3 = left hallway, 4 = next to left door, 5 = dead
		hall 2) 1 = 0,     2 = foxies cove, 3 = right hallway,4 = next to right door,5 = dead
	*/
		if (hall == 1)
		{
			if (*RightHall == stage)
			{
				Print("An animatronic is here");
			}
			else if (*RightHall == 5)
			{
				Print("An animatronic is right outside your door");
			}
			else
			{
				Print("No one's here.");
			}
		}
		else if (hall == 2)
		{
			if (*LeftHall == stage)
			{
				Print("An animatronic is here");
			}
			else if (*LeftHall == 4)
			{
				Print("An animatronic is right outside your door");
			}
			else
			{
				Print("No one's here.");
			}
		}
	}

	~animatronic()
	{
	}
};

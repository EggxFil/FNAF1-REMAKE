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
	int Larray[5];
	

	animatronicStages()
	{
		
		
		for (int i = 0; 5 > i; i++)
		{
			arraybuffer++;
			Rarray[i] = arraybuffer;
			
			
		}
		arraybuffer = 0;
		for (int i = 0; 5 > i; i++)
		{
			arraybuffer++;
			Larray[i] = arraybuffer;
			
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
	int* RightHall;
	int* LeftHall;

	animatronic(std::string&& name)
		:RightHall(obj.Rarray),LeftHall(obj.Larray), m_name(name)
	{
		
	}
	void RandStep()
	{
		
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
				
				GameOver(1, this);
			}
			else
			{
				Print("what even happened here?");
			}
		}
		else if (Name == "Bonnie" || Name == "Foxy")
		{
			Print("step taken");
			if (*LeftHall != 5)
			{
				LeftHall++;
				Print(*LeftHall);

			}
			else if (*LeftHall == 5)
			{
				GameOver(2, this);
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
		hall 2) 1 = stage, 2 = foxies cove, 3 = right hallway,4 = next to right door,5 = dead
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
			else if (*RightHall != stage)
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
			else if (*LeftHall == 5)
			{
				Print("An animatronic is right outside your door");
			}
			else if(*LeftHall != stage)
			{
				Print("No one's here.");
			}
		}
	}

};

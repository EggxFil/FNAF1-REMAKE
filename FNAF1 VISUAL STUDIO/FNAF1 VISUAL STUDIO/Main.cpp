

#include <string>
#include "Print.h"
#include "Animatronic.h"
#include "Map.h"



bool isgameon = true;
std::string a = " ";

animatronic Foxy("Foxy");
animatronic Freddy("Freddy");
animatronic Bonnie("Bonnie");
animatronic Chika("Chika");
enum cameras 
{
 CAM1,
 CAM2,
 CAM3,
 CAM4,
 CAM5,
 CAM6,
 CAM7
};

void GameOver(const int& hall)
{

	Print("GameOver :(");
	isgameon = false;
}

void Actions(std::string& action)
{
	if (action == "doors")
	{
		Print("open or close?");
		returnInput(action);
		if (action == "close")
		{
			Print("which door?");
			returnInput(action);

			if (action == "left")
			{
				Print("left door called");
				Mapupdate(1);

			}
			else if (action == "right")
			{
				Print("right door called");
				Mapupdate(2);

			}
			else
			{
				Print("oops");
			}
		}
		else if (action == "open")
		{
			Print("which door?");
			returnInput(action);

			if (action == "left")
			{
				Print("left door called");
				Mapupdate(3);

			}
			else if (action == "right")
			{
				Print("right door called");
				Mapupdate(4);

			}
			else
			{
				Print("oops");
			}
		}
		
	}
	

	else if (action == "cameras")
	{
		int newAction;
		Print("Which camera? (example: type 4 to select CAM4)");
		returnInput(newAction);
		switch (cameras);
		if (newAction == 1)
		{
			Freddy.CheckStage(1,1);
			Chika.CheckStage(1, 1);
			Bonnie.CheckStage(1, 1);
		}
		else if (action == "CAM1C")
		{
			Foxy.CheckStage(2,1);
			
		}
		else if (action == "CAM1B")
		{
			Freddy.CheckStage(1, 2);
			Chika.CheckStage(1, 2);
			Bonnie.CheckStage(2, 2);
			Foxy.CheckStage(2, 2);
		}
		else if (action == "CAM4A")
		{
			Freddy.CheckStage(1, 3);
			Chika.CheckStage(1, 3);
		}
		else if (action == "CAM4B")
		{
			Freddy.CheckStage(1, 4);
			Chika.CheckStage(1, 4);
		}
		else if (action == "right")
		{
			Freddy.CheckStage(1, 5);
			Chika.CheckStage(1, 5);
		}
		else if (action == "CAM2A")
		{
			Bonnie.CheckStage(2, 3);
			Foxy.CheckStage(2, 3);
		}
		else if (action == "CAM2B")
		{
			Bonnie.CheckStage(2, 4);
			Foxy.CheckStage(2, 4);
		}
		else if (action == "left")
		{
			Bonnie.CheckStage(2, 5);
			Foxy.CheckStage(2, 5);
		}
		else
		{
			Print("Spelling error");
		}
	}
	
	
}

void gameloop()
{
	while (isgameon == true)
	{
		Print("What do you want to interact with?");
		returnInput(a);
		Actions(a);
		Foxy.RandStep();
		Freddy.RandStep();
		Bonnie.RandStep();
		Chika.RandStep();
		
	}
}


int main()
{
	Mapupdate(0);
	gameloop();
}



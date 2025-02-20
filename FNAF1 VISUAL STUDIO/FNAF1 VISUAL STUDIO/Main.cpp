

#include <string>
#include "Print.h"
#include "Animatronic.h"
#include "Map.h"



bool isgameon = true;
std::string a = " ";

animatronic Foxy("Foxy");
animatronic Freddy("Freddy");



void GameOver()
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
		Print("Which camera? (Reference the map for camera names");
		returnInput(action);
		if (action == "CAM1A")
		{
			Freddy.CheckStage(1,1);
			
		}
		else if (action == "CAM1B")
		{
			Freddy.CheckStage(2,1);

		}
	}
	
	
}

void gameloop()
{

	while (isgameon == true)
	{
		//Foxy.RandStep();
		Freddy.RandStep();
		Print("What do you want to interact with?");
		returnInput(a);
		Actions(a);
	}
}


int main()
{
	Mapupdate(0);
	gameloop();
}



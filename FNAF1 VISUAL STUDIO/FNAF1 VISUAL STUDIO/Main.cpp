

#include <string>
#include "Print.h"
#include "Animatronic.h"
#include "Map.h"



bool isgameon = true;
std::string a = " ";

void GameOver()
{
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
	}
	
	
}
void gameloop()
{
	animatronic Freddy("freddy");
	while (isgameon == true)
	{
		
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



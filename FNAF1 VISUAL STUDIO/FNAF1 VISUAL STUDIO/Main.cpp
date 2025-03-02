

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


void GameOver(const int hall, animatronic* caller)
{
	if (hall == 1 || Rdoorclosed == false)
	{
		Print("Gameover :(");
		isgameon = false;
	}
	else if (hall == 2 || Ldoorclosed == false)
	{
		Print("Gameover :(");
		isgameon = false;
	}
	else if (Ldoorclosed == true)
	{
		while (caller->RightHall != 0)
		{
			caller->RightHall--;
		}
		Print("pointer reset");
	}
	else if (Rdoorclosed == true)
	{
		while (caller->LeftHall != 0)
		{
			caller->LeftHall--;
		}
		Print("pointer reset");
	}
	
	
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
		cameras myCams = static_cast<cameras>(newAction);


		switch (myCams)
		{
		case 1:
			Freddy.CheckStage(1, 1);
			Chika.CheckStage(1, 1);
			Bonnie.CheckStage(1, 1);
			break;
		case 2:
			Freddy.CheckStage(2, 1);
			Chika.CheckStage(2, 1);
			Bonnie.CheckStage(2, 2);
			Foxy.CheckStage(2, 2);
			break;
		case 3:
			Foxy.CheckStage(1, 2);
			break;
		case 4:
			Foxy.CheckStage(3, 2);
			Bonnie.CheckStage(3, 2);
			break;
		case 5:
			Foxy.CheckStage(4, 2);
			Bonnie.CheckStage(4, 2);
			break;
		case 6:
			Freddy.CheckStage(3, 1);
			Chika.CheckStage(3, 1);
			break;
		case 7:
			Freddy.CheckStage(4, 1);
			Chika.CheckStage(4, 1);
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
		Print("----------------------------------------------------");
	}
}


int main()
{
	srand(time(0));
	Mapupdate(0);
	gameloop();
}



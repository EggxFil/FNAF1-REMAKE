
//#include "Map.h"
#include "Print.h"
#include <string>

void Mapupdate(const int& num);

bool isgameon = true;
std::string a;


void Actions(std::string action)
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
	
	
}
void gameloop()
{
	while (isgameon == true)
	{
		Print("what do you want to change?");
		returnInput(a);
		Actions(a);
	}
}



int main()
{
	Mapupdate(0);
	gameloop();
}


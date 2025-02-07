#include <iostream>
#include "Map.h"
#include "Print.h"

bool isgameon = true;
std::string a;


void Actions(std::string action)
{
	if (action == "door")
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
	
	
}




int main()
{
	Mapupdate(0);
	returnInput(a);
	Actions(a);
	
	

}

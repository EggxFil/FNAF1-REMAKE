#include <iostream>
#include "Map.h"
#include "Print.h"

bool isgameon = true;
std::string a;
class Actions
{
public:
	std::string b = "left";
	std::string c = "right";
	Actions()
	{
		std::cout << "error";
	}

	Actions(std::string action)
	{
		
		if (action == b)
		{
			Print("left door called");
			Mapupdate leftdoorupdate(1);
			
		}
		else if (action == c)
		{
			Print("right door called");
			Mapupdate rightdoorupdate(2);

		}
		else
		{
			Print("oops");
		}
		Print("if statment missed");
		
	}
};




int main()
{
	Mapupdate orignialprint(0);

	std::cin >> a;
	Actions newaction(a);
	
	

}

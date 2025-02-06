#include <iostream>
#include "Map.h"

std::string a;
class Actions
{
public:
	Actions()
	{
		std::cout << "error";
	}

	Actions(std::string& action)
	{
		if (action == "close left door" || "Close right door")
		{
			Mapupdate leftdoorupdate(1);
			//printMap();
		}
	}
};




int main()
{
	printMap();
	std::cin >> a;
	Actions newaction(a);

}

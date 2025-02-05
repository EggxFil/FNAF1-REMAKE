#include <iostream>
#include "Map.h"

//std::string action;
std::string a;
class Actions
{
public:

	Actions(std::string action)
	{
		if (action == "close left door" || "Close right door")
		{
			leftdoor = "|||";
			printMap();
		}
	}
};




int main()
{
	printMap();
	std::cin >> a;
	Actions newaction(a);

}

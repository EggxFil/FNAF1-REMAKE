#include <iostream>
#include "Map.h"

std::string action;
void Actions(const std::string newaction)
{
	if (newaction == "close left door" || "Close right door")
	{
		leftdoor = "|||";
	}
}
int main()
{
	printMap();
	std::cin >> action;
	Actions(action);

}

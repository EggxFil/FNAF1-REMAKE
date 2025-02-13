#include <string>
#include "Print.h"
#include <iostream>
#include "Animatronic.h"


class animatronicStages
{
public:
	int* harray = nullptr;
	int arraybuffer = 0;

	animatronicStages()
	{
		
		harray = new int[5];

		for (int i = 0; 5 > i; i++)
		{
			arraybuffer++;
			harray[i] = arraybuffer;
			Print(harray[i]);
		}
	}
	int returnarray(const int& index)
	{
		return harray[index];
	}

	~animatronicStages()
	{
		delete harray;
	}

};
class animatronic
{
public:
	//int* stagebuffer;
	int stage = 0;
	animatronic(std::string name, int stages)
	{
		animatronicStages newstage();
		stage = newstage().returnarray(0);
		Print(stage);
	}
};

#include <string>
#include "Print.h"
#include <iostream>

class animatronicStages
{
public:
	int* harray;
	int arraybuffer = 0;
	animatronicStages()
	{
		harray = new int[5];

		for (int i = 0; 5 > i; i++)
		{
			arraybuffer++;
			harray[i] = arraybuffer;
			std::cout << harray[i] << '\n';
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
	int* stagebuffer;
	int stage;
	animatronic(std::string name, int stage)
	{
		animatronicStages newstage();
		stage = newstage().returnarray(0);
		Print(stage);
	}
};

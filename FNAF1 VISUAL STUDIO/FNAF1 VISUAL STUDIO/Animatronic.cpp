
#include "Print.h"

class animatronicArray
{
public:
	int* harray;
	animatronicArray()
	{
		harray = new int[5];
	}
	~animatronicArray()
	{
		delete harray;
	}

};
class animatronic
{
public:
	int* stage;
	animatronic()
	{

	}
};

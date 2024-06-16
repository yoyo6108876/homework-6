#include<iostream>
#include"LoadedDice.h"
using namespace std;
namespace dice
{
	LoadedDice::LoadedDice()
	{
		this->numSides = 6;
		srand(time(NULL)); // Seeds random number generator	
	}

	LoadedDice::LoadedDice(int numside)
	{
		this->numSides = numside;
		srand(time(NULL)); // Seeds random number generator	
	}
	int LoadedDice::rollDice()const 
	{
			if ((rand()%10)<=5)
			{
				cout << "It return numside " << endl;
				return numSides;
			}
			else
			{
				Dice::rollDice();
			}

	}



}



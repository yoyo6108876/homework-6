#ifndef  LOADEDDICE_H
#define LOADEDDICE_H
#include<iostream>
#include"dice.h"
using namespace std;
namespace dice
{
	class LoadedDice :public Dice
	{
	public:
		LoadedDice ();
		LoadedDice (int numside);
		int rollDice()const override;
	private:

	};

	



}



#endif // ! LOADEDDICE_H


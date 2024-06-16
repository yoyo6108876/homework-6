#ifndef DICE_H
#define DICE_H
#include<iostream>
using namespace std;
namespace dice
{
	class Dice
	{
	public:
		Dice();
		Dice(int numSides);
		virtual int rollDice()const;
	protected:
		int numSides;
	};
 }









#endif // !DICE_H


#include<iostream>
#include"LoadedDice.h"
using namespace std;
using namespace dice;
int rollTwoDice(const LoadedDice& die1, const LoadedDice& die2);
int 
main()
{
	LoadedDice fir_dice, sec_dice;
	int total_num;
	for (int i = 1; i <= 10; i++)
	{
		total_num = 0;
		total_num = rollTwoDice(fir_dice, sec_dice);
		cout << "Turn " << i << " the sum is " << total_num << endl;
	}





} 
int rollTwoDice(const LoadedDice& die1, const LoadedDice& die2)
{
	return die1.rollDice() + die2.rollDice();
}
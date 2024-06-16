#include<iostream>
#include"Demon.h"
using namespace std;

namespace Creaturelist
{
	Demon::Demon() :Creature(999, 10, 10) {};
	Demon::Demon(int newtype, int newattack, int newblood) :Creature(newtype, newattack, newblood) {};
	int Demon::getDamage()
	{
		int damage;
		damage = (rand() % strength) + 1;
		if ((rand() % 100) < 5)
		{
			damage = damage + 50;
		}
		return damage;
	}
}
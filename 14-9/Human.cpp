#include<iostream>
#include"Human.h"
using namespace std;

namespace Creaturelist
{
	Human::Human() :Creature(0, 10, 100) {};
	int Human::getDamage()
	{
		int damage;

		damage = (rand() % strength) + 1;
		cout << "Human get the " << damage << endl;
		return damage;
	}
	string Human::getSpecies()
	{
		return "Human";
	}
	int Human::gethp()
	{
		return strength;
	}
}
#include<iostream>
#include"Cyberdemon.h"
using namespace std;

namespace Creaturelist
{
	Cyberdemon::Cyberdemon(): Demon(1, 10, 10){}
	int Cyberdemon::getDamage()
	{
		int damage;
		damage = Demon::getDamage();
		cout << "Cyberdemon get " << damage << endl;
		return damage;
	}
	string Cyberdemon::getSpecies()
	{
		return "Cyberdemon";
	}
	int Cyberdemon::gethp()
	{
		return strength;
	}
}
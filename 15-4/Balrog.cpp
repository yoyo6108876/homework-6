#include<iostream>
#include"Balrog.h"

using namespace std;

namespace Creaturelist
{

	Balrog::Balrog() :Demon(2, 10, 10) {}
	int Balrog::getDamage()
	{
	
		int damage;
		damage = Demon::getDamage();
		int damage2 = (rand() % 10) + 1;
		cout << "Balrog speed attack inflicts " << damage2 <<
			" additional damage points!" << endl;
		damage = damage + damage2;
		return damage;
	}
	string Balrog::getSpecies()
	{
		return "Balrog";
	}
	int Balrog::gethp()
	{
		return strength;
	}
}
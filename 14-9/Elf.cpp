#include<iostream>
#include"Elf.h"
using namespace std;

namespace Creaturelist
{
	Elf::Elf() :Creature(3, 10, 10) {};

	int Elf::getDamange() {
		
		int damage;

		damage = (rand() % strength) + 1;
		if ((rand() % 10) == 0)
		{
			cout << "Magical attack inflicts " << damage <<
				" additional damage points!" << endl;
			damage = damage * 2;
		}
		return damage;
	}
	string Elf::getSpecies()
	{
		return "Elf";
	}
	int Elf::gethp()
	{
		return strength;
	}
}
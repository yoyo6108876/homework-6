#ifndef ELF_H
#define ELF_H
#endif // !ELF_H

#include<iostream>
using namespace std;
#include"Creature.h"
namespace Creaturelist
{
	class Elf :public Creature
	{
	public:
		Elf();
		int getDamange();
		string getSpecies();
		int gethp();
	private:

	};

}


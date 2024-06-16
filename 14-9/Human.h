#ifndef HUMAN_H
#define HUMAN_H
#endif // !HUMAN_H

#include<iostream>
using namespace std;
#include"Creature.h"
namespace Creaturelist
{
	class Human:public Creature
	{
	public:
		Human();
		int getDamage();
		string getSpecies();
		int gethp();
	private:

	};

}

#ifndef CREATRUE_H
#define CREATRUE_H
#include<iostream>
using namespace std;

namespace Creaturelist
{
	class Creature
	{
	protected:
		int type; // 0 human, 1 cyberdemon, 2 balrog, 3 elf
		 // How much damage we can inflict
		int hitpoints; // How much damage we can sustain
		int strength;
		 // Returns type of species
	public:
		virtual string getSpecies();
		Creature();
		// Initialize to human, 10 strength, 10 hit points
		Creature(int newType, int newStrength, int newHit);
		virtual int getDamage();
		// Returns amount of damage this creature
		// inflicts in one round of combat
		virtual int gethp() =0;
	};
}
#endif // !CREATRUE_H

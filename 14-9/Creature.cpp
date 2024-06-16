#include<iostream>
#include"Creature.h"
#include<time.h>
using namespace std;


namespace Creaturelist
{
	string Creature::getSpecies()
	{
		switch (type)
		{
		case 0: return "Human";
		case 1: return "Cyberdemon";
		case 2: return "Balrog";
		case 3: return "Elf";
		}
		return "Unknown";
	}
	Creature::Creature() :type(0), strength(10), hitpoints(10) {};
	Creature::Creature(int newType, int newStrength, int newHit) :type(newType), strength(newStrength), hitpoints(newHit) {};
	int Creature::getDamage()
	{
		int damage;
		damage = (rand() % strength) + 1;
		return damage;
	}




}
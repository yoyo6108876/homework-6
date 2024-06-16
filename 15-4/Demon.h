#ifndef DEMON_H
#define DEMON_H
#include<iostream>
using namespace std;
#include"Creature.h"
namespace Creaturelist
{
	class Demon :public Creature
	{
	public:
		Demon();
		Demon(int,int newattack, int newblood);
		int getDamage();
		virtual string getSpecies()=0;
		virtual int gethp ()=0;
	private:

	};

}
#endif // !DEMON_H
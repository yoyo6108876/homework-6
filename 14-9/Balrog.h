#ifndef BALROG_H
#define BALROG_H
#endif // !BALROG_H

#include<iostream>
using namespace std;
#include"Demon.h"
namespace Creaturelist
{
	class Balrog :public Demon
	{
	public:
		Balrog();
		int getDamage();
		string getSpecies();
		int gethp();
	private:

	};

}


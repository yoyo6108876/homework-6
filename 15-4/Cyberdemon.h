#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#endif // !CYBERDEMON_H

#include<iostream>
using namespace std;
#include"Demon.h"
namespace Creaturelist
{
	class Cyberdemon :public Demon
	{
	public:
		Cyberdemon();
		int getDamage();
		string getSpecies();
		int gethp();
	private:

	};

}


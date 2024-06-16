#include<iostream>
#include"Balrog.h"
#include"Cyberdemon.h"
#include"Human.h"
#include"Elf.h"
using namespace std;
using namespace Creaturelist;
void battleArena(Creature& creature1, Creature& creature2);
int 
main()
{
	Balrog a;
	Human b;
	battleArena(a, b);




}
void
battleArena(Creature& creature1, Creature& creature2)
{
	int creature1_hp = creature1.gethp();
	int creature2_hp = creature2.gethp();
	do
	{
		creature2_hp -= creature1.getDamage();
		cout << creature2.getSpecies() << " is left " << creature2_hp << " hp." << endl;
		creature1_hp -= creature2.getDamage();
		cout << creature1.getSpecies() << " is left " << creature1_hp << " hp." << endl;
		
		cout << "_______________________________________" << endl;
	} while (creature1_hp>0&&creature2_hp>0);
	if (creature1_hp<=0&&creature2_hp<=0)
	{
		cout << "The battle is draw" << endl;
	}
	else if (creature1_hp<=0)
	{
		cout << creature2.getSpecies() << " is the winner.";
	}
	else if (creature2_hp <= 0)
	{
		cout << creature1.getSpecies() << " is the winner.";
	}





}
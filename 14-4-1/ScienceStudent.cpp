#include<iostream>
using namespace std;
#include"ScienceStudent.h"


namespace studentlist
{
	sciencestudent::sciencestudent() {};
	sciencestudent::sciencestudent(string &name,int num)
		:student(name,num){}
	

	void sciencestudent::Setdiscipline(string dis)
	{
		discipline = dis;
	}
	void sciencestudent::Setundergraduate(string un)
	{

		undergraduate = un;
	}
	string sciencestudent::Getdiscipline()
	{
		return discipline;
	}
	string sciencestudent::Getundergraduate()
	{
		return undergraduate;
	}
}
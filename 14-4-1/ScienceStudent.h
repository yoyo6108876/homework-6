#ifndef SCIENCESTUDENT_H
#define SCIENCESTUDENT_H
#include<iostream>
using namespace std;
#include"student.h"
namespace studentlist
{
	class sciencestudent :public student
	{
	public:
		sciencestudent();
		sciencestudent(string &,int);
		void Setdiscipline(string );
		void Setundergraduate(string);
		string Getdiscipline();
		string Getundergraduate();
	private:
		string discipline;
		string undergraduate;
	};





}
#endif // !SCIENCESTUDENT_H

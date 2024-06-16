#include<iostream>
#include<string>
#include"ScienceStudent.h"
using namespace std;
using namespace studentlist;
int 
main()
{
	sciencestudent a;
	string universe;
	cout << "Enter the universite name>>" << endl;
	cin >> universe;
	a.SetUniversiteName(universe);
	int Registrationnum;
	cout << "Enter the registration number >>" << endl;
	cin >> Registrationnum;
	a.SetRegistrationnum(Registrationnum);
	string dis;
	cout << "Enter the discipline >>" << endl;
	cin >> dis;
	a.Setdiscipline(dis);
	string ungru;
	cout << "Enter the undergraduate or postgraduate course >>" << endl;
	cin >> ungru;
	a.Setundergraduate(ungru);
	cout << "Enter the proctor >>" << endl;
	cin >> a.staff;
	cout << "The universite name is " << a.GetUniversiteName() << "." << endl;
	cout << "The registration number is " << a.GetRegistrationnum() << "." << endl;
	cout << "_____________________________________________" << endl;
	cout << "The discipline is " << a.Getdiscipline() << "." << endl;
	cout << "The undergraduate or postgraduate course is " << a.Getundergraduate() << "." << endl;
	cout << "The proctor is ";
	cout << a.staff;
}
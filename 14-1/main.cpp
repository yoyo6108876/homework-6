#include<iostream>
#include"Administrator.h"
#include <cstdlib>
using namespace SavitchEmployees;
using namespace std;
int 
main()
{
	Administrator a;
	string name;
	cout << "Please enter his name>>" << endl;
	cin >> name;
	a.setName(name);
	string SSN;
	cout << "Please enter his SSN>>" << endl;
	cin >> SSN;
	a.setSsn(SSN);
	double annualsalary;
	cout << "Please enter his annualsalary" << endl;
	cin >> annualsalary;
	a.setannualSalary(annualsalary);
	string title;
	cout << "Please enter his title >>" << endl;
	cin >> title;
	a.setadministrator_title(title);
	string reposibility;
	cout << "Please enter his reposibility >>" << endl;
	cin >> reposibility;
	a.setresponsibility(reposibility);
	string Supervior;
	cout << "Please enter his Supervior >>" << endl;
	cin >> Supervior;
	a.setresponsibility(Supervior);
	a.printCheck();
	return 0;
}
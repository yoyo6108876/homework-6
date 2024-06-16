#include<iostream>
#include"student.h"
using namespace std;

namespace studentlist
{
	student::student() :universite_name("None"), registrationnum(0) {};
	student::student(string&universitename, int registrationnumvalue)
		:universite_name(universitename), registrationnum(registrationnumvalue) {};
	int student::GetRegistrationnum()
	{
		return registrationnum;
	}
	string student::GetUniversiteName()
	{
		return  universite_name;
	}
	void student::SetRegistrationnum(int registrationnumvalu)
	{
		registrationnum = registrationnumvalu;
	}
	void student::SetUniversiteName(string universitenam)
	{
		universite_name = universitenam;
	}
	UniversityStaff::UniversityStaff() :name("NONE") {};
	UniversityStaff::UniversityStaff(string ProctorName) :name(ProctorName) {};
	UniversityStaff::UniversityStaff(const UniversityStaff& theObject) {};
	string UniversityStaff::getName() const
	{
		return name;
	}
	istream& operator >>(istream& inStream, UniversityStaff& staffObject)
	{
		cin >> staffObject.name;
		return(inStream);
	}
	ostream& operator <<(ostream& outStream, const UniversityStaff& staffObject)
	{
		cout << staffObject.getName();
		return(outStream);
	}
	/*UniversityStaff& operator=(const UniversityStaff& rtSide)
	{
		
	}*/
}
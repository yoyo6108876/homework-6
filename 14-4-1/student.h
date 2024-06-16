#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;
namespace studentlist
{
	class UniversityStaff
	{
	public:
		UniversityStaff();
		UniversityStaff(string theName);
		UniversityStaff(const UniversityStaff& theObject);
		string getName() const;
		UniversityStaff& operator=(const UniversityStaff& rtSide);
		friend istream& operator >>(istream& inStream,
			UniversityStaff& staffObject);
		friend ostream& operator <<(ostream& outStream,
			const UniversityStaff& staffObject);
	private:
		string name;
	};
	class student
	{
	public:
		student();
		student(string& universitename, int registrationnumvalue);
		void SetUniversiteName(string);
		string GetUniversiteName();
		void SetRegistrationnum(int);
		int GetRegistrationnum();
		UniversityStaff staff;
	private:
		string universite_name;
		int registrationnum;
		
	};
}
#endif // !STUDENT_H

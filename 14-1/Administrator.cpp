//This is the header file employee.h
//This is the interface for the class Employee.
//This is primarily intended to be used as a base class to derive
//classes for different kinds of employees.
#include<iostream>
#include<string>
#include"Administrator.h"
using namespace std;

namespace SavitchEmployees
{
    Administrator::Administrator() : SalariedEmployee(),annualSalary(0)
    {
        //deliberately empty
    }
    Administrator::Administrator(const string& theName, const string& theSsn, double annualSalary)
        :SalariedEmployee(theName,theSsn,0),annualSalary(annualSalary){}
    double Administrator::getannualSalary() const
    {
        return annualSalary;
    }
    void Administrator::setannualSalary(double annualsalary_num)
    {
        annualSalary = annualsalary_num;
    }
    string Administrator::getadministrator_title()
    {
        return administrator_title;
    }
    void Administrator::setadministrator_title(string dministrator_titlename)
    {
        administrator_title = dministrator_titlename;
    }
    string Administrator::getadministratorSupervisor()
    {
        return administratorSupervisor;
    }
    void Administrator::setadministratorSupervisor(string Supervisor)
    {

        administratorSupervisor = Supervisor;
    }
    string Administrator::getresponsibility()
    {

        return responsibility;
    }
    void Administrator::setresponsibility(string respons)
    {

        responsibility = respons;
    }
    void Administrator::printCheck()
    {
        setNetPay(annualSalary);
        cout << "\n__________________________________________________\n";
        cout << "Pay to the order of " << getName() << endl;
        cout << "The sum of " << getNetPay() << " Dollars\n";
        cout << "_________________________________________________\n";
        cout << "Check Stub NOT NEGOTIABLE \n";
        cout << "Employee Number: " << getSsn() << endl;
        cout << "Salaried Employee. Regular Pay: "
            << annualSalary << endl;
        cout << "It's administrator_title is " << administrator_title << endl;
        cout << "It's responsibility is " << responsibility << endl;
        cout << "It's upervisor is " << administratorSupervisor << endl;
        cout << "_________________________________________________\n";

    }
}
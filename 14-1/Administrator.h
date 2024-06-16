#ifndef ADMINDTRSTOR_H
#define ADMINDTRSTOR_H
#include <string>
#include "employee.h"
#include"salariedemployee.h"
using std::string;

namespace SavitchEmployees
{

    class Administrator :public SalariedEmployee
    {
    public:
        Administrator();
        Administrator(const string& theName, const string& theSsn, double annualSalary);
        double getannualSalary() const;
        void setannualSalary(double newSalary);
        string getadministrator_title();
        void setadministrator_title(string administrator_title);
        string getresponsibility();
        void setresponsibility(string responsibility);
        string getadministratorSupervisor();
        void setadministratorSupervisor(string administratorSupervisor);
        void printCheck();
    private:
       string administrator_title;
       string responsibility;  
       string administratorSupervisor;
       double annualSalary;
    };

}//SavitchEmployees

#endif //EMPLOYEE_H


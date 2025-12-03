#include <string>
using std::string;

#include "Employee.h"

Employee::Employee(string firstN, string lastN, int salary_)
{
    setEmployee(firstN, lastN, salary_);
}

void Employee::setEmployee(string firstN, string lastN, int salary_)
{
    setFirstName(firstN);
    setLastName(lastN);
    setSalary(salary_);
}

void Employee::setFirstName(string firstN)
{
    firstName = firstN;
}

void Employee::setLastName(string lastN)
{
    lastName = lastN;
}

void Employee::setSalary(int salary_)
{
    salary = salary_ < 0 ? 0 : salary_;
}

string Employee::getFirstName()
{
    return firstName;
}

string Employee::getLastName()
{
    return lastName;
}

int Employee::getSalary()
{
    return salary;
}
#include <string>
using std::string;

class Employee
{
public:
    Employee(string firstN, string lastN, int salary_);
    void setEmployee(string firstN, string lastN, int salary_);
    void setFirstName(string firstN);
    void setLastName(string lastN);
    void setSalary(int salary_);
    string getFirstName();
    string getLastName();
    int getSalary();

private:
    string firstName;
    string lastName;
    int salary;
};
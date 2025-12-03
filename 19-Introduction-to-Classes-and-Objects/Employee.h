#include <string>
using std::string;

class Employee
{
public:
    Employee(string, string, int);
    void setEmployee(string, string, int);
    void setFirstName(string);
    void setLastName(string);
    void setSalary(int);
    string getFirstName();
    string getLastName();
    int getSalary();

private:
    string firstName;
    string lastName;
    int salary;
};
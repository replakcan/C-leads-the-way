#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::getline;
using std::string;

class GradeBook
{
public:
    void displayMessage(string courseName)
    {
        cout << "Welcome to the Grade book for " << courseName << "!" << endl;
    }
};

int main()
{
    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Please enter the course name:" << endl;
    getline(cin, nameOfCourse);

    myGradeBook.displayMessage(nameOfCourse);
    return 0;
}
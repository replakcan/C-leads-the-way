#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main()
{
    GradeBook gradebook1("First Book");
    GradeBook gradebook2("Second Book");

    cout << "gradeBook1 created for course: " << gradebook1.getCourseName() << "\ngradeBook2 created for course: " << gradebook2.getCourseName() << endl;

    return 0;
}
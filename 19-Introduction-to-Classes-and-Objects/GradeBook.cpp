#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

GradeBook::GradeBook(string courseName, string instructorName)
{
    setCourseName(courseName);
    setInstructorName(instructorName);
}

void GradeBook::setCourseName(string name)
{
    if (name.length() <= 25)
        courseName = name;

    if (name.length() > 25)
    {
        courseName = name.substr(0, 25);

        cout << "Name \"" << name << "\"exceeds maximum length (25).\n"
                                     "Limiting courseName to first 25 characters.\n"
             << endl;
    }
}

string GradeBook::getCourseName()
{
    return courseName;
}

void GradeBook::setInstructorName(string name)
{
    if (name.length() <= 25)
        instructorName = name;
    if (name.length() > 25)
    {
        instructorName = name.substr(0, 25);

        cout << "Name \"" << name << "\"exceeds maximum length (25)."
                                     "Limiting instructorName to first 25 characters.\n"
             << endl;
    }
}

string GradeBook::getInstructorName()
{
    return instructorName;
}

void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for "
         << getCourseName() << "!"
                               "\nThis course is presented by: "
         << getInstructorName() << "."
         << endl;
}

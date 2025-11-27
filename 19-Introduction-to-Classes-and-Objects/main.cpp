#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main()
{
    GradeBook gradebook1("FirstBook", "Alperovski");
    GradeBook gradebook2("SecondBook", "Mutlucavcav");

    gradebook1.displayMessage();
    gradebook2.displayMessage();

    return 0;
}
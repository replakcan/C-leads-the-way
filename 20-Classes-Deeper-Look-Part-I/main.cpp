#include <iostream>
using std::cout;
using std::endl;

#include "CreateAndDestroy.h"
#include "Time.h"
#include "Rational.h"

// void create(void);

// CreateAndDestroy first(1, "(global before main)");

int main()
{
    Rational rational1(4, 2);
    Rational rational2(16, 32);

    rational1.printRational();
    rational1.printInFloat();

    rational2.printRational();
    rational2.printInFloat();

    rational1.divide(rational2);

    cout << "after division num1 numerator:" << rational1.getNumerator() << endl;
    cout << "after division num1 denominator: " << rational1.getDenominator() << endl;

    // Time time1;

    // int hours = time1.getHour();
    // int mins = time1.getMinute();
    // int secs = time1.getSecond();

    // cout << "hours: " << hours << endl;
    // cout << "mins: " << mins << endl;
    // cout << "secs: " << secs << endl;

    /* cout << "\nMAIN FUNCTION: EXECUTION BEGINS" << endl;
    CreateAndDestroy second(2, "(local automatic in main)");
    static CreateAndDestroy third(3, "(local static in main)");

    create();

    cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;
    CreateAndDestroy fourth(4, "(local automatic in main)");
    cout << "\nMAIN FUNCTION: EXECUTION ENDS" << endl; */

    return 0;
}

void create(void)
{
    /* cout << "\nCREATE FUNCTION: EXECUTION BEGINS" << endl;
    CreateAndDestroy fifth(5, "(local automatic in create)");
    static CreateAndDestroy sixth(6, "(local static in create)");
    CreateAndDestroy seventh(7, "(local automatic in create)");
    cout << "\nCREATE FUNCTION: EXECUTION ENDS" << endl; */
}
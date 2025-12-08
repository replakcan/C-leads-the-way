#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "Complex.h"

int main()
{
    Complex x;
    Complex y(4.3, 8.2);
    Complex z(3.3, 1.1);

    // cout << "x ";
    // x.print();
    // cout << "\ny ";
    // y.print();
    // cout << "\nz ";
    // z.print();

    // x = y + z;
    // cout << "\n\nx = y + z:" << endl;
    // x.print();
    // cout << " = ";
    // y.print();
    // cout << " + ";
    // z.print();

    // x = y - z;
    // cout << "\n\nx = y - z:" << endl;
    // x.print();
    // cout << " = ";
    // y.print();
    // cout << " - ";
    // z.print();
    // cout << endl;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    Complex alper;
    Complex mutlu(11, 21);

    cin >> alper;

    cout << "complex alper: " << alper << endl;

    if (alper == mutlu)
        cout << "alper equals to mutlu" << endl;
    else
        cout << "alper is not equal to mutlu" << endl;

    return 0;
}
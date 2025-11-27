#include <iostream>
using std::cin;
using std::cout;
using std::endl;

inline double cube(const double side)
{
    return side * side * side;
}

int main()
{
    double sideValue;

    for (int i = 1; i <= 3; i++)
    {
        cout << "\nEnter the side length of your cube";
        cin >> sideValue;

        cout << "Volume of cube with side " << sideValue << " is " << cube(sideValue) << endl;
    }

    return 0;
}
#include <iostream>
using std::cout;
using std::endl;

#include "Increment.h"

Increment::Increment(int c, int i)
    : count(c), increment(i) // member initializer syntax
{
}

void Increment::print() const
{
    cout << "count = " << count << ", increment = " << increment << endl;
}
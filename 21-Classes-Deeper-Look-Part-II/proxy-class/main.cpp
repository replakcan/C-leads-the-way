#include <iostream>
using std::cout;
using std::endl;

#include "Interface.h"

int main()
{
    Interface i(5);

    cout << "Interface contains: " << i.getValue()
         << " before setValue" << endl;

    i.setValue(10);

    cout << "Interface contains: " << i.getValue()
         << " after setValue" << endl;

    return 0;
}
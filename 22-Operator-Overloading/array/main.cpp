#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "PhoneNumber.h"
#include "Array.h"

void outputArray(const Array &arrayToOutput);

int main()
{
    Array *copyArray = new Array(10);

    copyArray->insert(1, 23);
    copyArray->insert(2, 2);
    copyArray->insert(3, 23);
    copyArray->insert(4, 23);
    copyArray->insert(5, 2);
    copyArray->insert(6, 1);
    copyArray->insert(7, 11);
    copyArray->insert(8, 12);
    copyArray->insert(9, 15);

    Array *arr1 = new Array();
    Array *arr2 = new Array(*copyArray);

    arr2->sortArray();
    arr2->uniqueArray();

    arr1->printArray();
    arr2->printArray();

    outputArray(*arr2);
    // outputArray(3); int parametre alan ctor'u explicit tanımlayınca cortladı

    return 0;
}

void outputArray(const Array &arrayToOutput)
{
    cout << "The Array recieved has " << arrayToOutput.getSize()
         << "elements. The contents are:" << arrayToOutput;
}
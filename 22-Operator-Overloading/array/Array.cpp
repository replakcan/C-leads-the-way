#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include "Array.h"

Array::Array(int size)
{
    this->size = size > 0 ? size : 10;
    ptr = new int[size];
}

Array::Array(const Array &arrayToCopy)
    : size(arrayToCopy.size)
{
    ptr = new int[size];

    for (int i = 0; i < size; i++)
    {
        ptr[i] = arrayToCopy.ptr[i];
    }
}

Array::~Array()
{
    delete[] ptr;
}

int Array::getSize() const
{
    return size;
}

void Array::emptyArray()
{
    for (int i = 0; i < size; i++)
    {
        ptr[i] = 0;
    }
}

void Array::uniqueArray()
{
    if (!isSorted())
        sortArray();

    if (size == 0)
        return;

    int writeIndex = 0;

    for (int i = 0; i < size;)
    {
        int value = ptr[i];
        ptr[writeIndex++] = value;

        int j = i + 1;
        while (j < size && ptr[j] == value)
            j++;

        i = j;
    }

    size = writeIndex;
}

void Array::sortArray()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                int temp;
                temp = ptr[j + 1];
                ptr[j + 1] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}

void Array::printArray()
{
    cout << "{ ";

    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << " ";
    }

    cout << "}" << endl;
}

void Array::insert(int index, int value)
{
    if (index >= size)
    {
        cout << "Invalid index." << endl;
        exit(1);
    }

    ptr[index] = value;
}

bool Array::isSorted() const
{
    for (int i = 0; i < size - 1; i++)
    {
        if (ptr[i] > ptr[i + 1])
            return false;
    }
    return true;
}

bool Array::isUnique() const
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ptr[i] == ptr[j])
                return false;
        }
    }
    return true;
}

int &Array::operator[](int nthHighestValue)
{
    if (nthHighestValue < 1)
        throw std::out_of_range("nth value must be >= 1");

    if (!isSorted())
        sortArray();

    if (!isUnique())
        uniqueArray();

    if (nthHighestValue > size)
        throw std::out_of_range("nth value exceeds number of unique elements.");

    return ptr[size - nthHighestValue];
}

istream &operator>>(istream &input, Array &a)
{
    for (int i = 0; i < a.size; i++)
        input >> a.ptr[i];

    return input;
}

ostream &operator<<(ostream &output, const Array &a)
{
    int i;

    for (i = 0; i < a.size; i++)
    {
        output << setw(12) << a.ptr[i];

        if ((i + 1) % 4 == 0)
            output << endl;
    }

    if (i % 4 != 0)
        output << endl;

    return output;
}
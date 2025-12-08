#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using std::istream;
using std::ostream;

#include <algorithm>
using std::sort;

class Array
{
    friend istream &operator>>(istream &input, Array &a);
    friend ostream &operator<<(ostream &output, const Array &a);

public:
    explicit Array(int = 10);
    Array(const Array &);
    ~Array();

    int &operator[](int);
    int getSize() const;
    void emptyArray();
    void uniqueArray();
    void sortArray();
    void printArray();
    void insert(int, int);

private:
    int size;
    int *ptr;
    bool isSorted() const;
    bool isUnique() const;
};

#endif
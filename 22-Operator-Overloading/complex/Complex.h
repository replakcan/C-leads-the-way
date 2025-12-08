#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using std::istream;
using std::ostream;

class Complex
{
    friend istream &operator>>(istream &input, Complex &a);
    friend ostream &operator<<(ostream &output, const Complex &a);

public:
    Complex(double = 0.0, double = 0.0);
    Complex operator+(const Complex &) const;
    Complex operator-(const Complex &) const;
    Complex operator*(const Complex &) const;
    bool operator==(const Complex &) const;

private:
    double real;
    double imaginary;
};

#endif
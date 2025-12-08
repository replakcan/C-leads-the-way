#include <iostream>
using std::cout;

#include "Complex.h"

Complex::Complex(double realPart, double imaginaryPart)
    : real(realPart), imaginary(imaginaryPart)
{
}

Complex Complex::operator+(const Complex &operand2) const
{
    return Complex(real + operand2.real, imaginary + operand2.imaginary);
}

Complex Complex::operator-(const Complex &operand2) const
{
    return Complex(real - operand2.real, imaginary - operand2.imaginary);
}

istream &operator>>(istream &input, Complex &a)
{
    input >> a.real >> a.imaginary;

    return input;
}

ostream &operator<<(ostream &output, const Complex &a)
{
    output << '(' << a.real << ')' << " + " << '(' << a.imaginary << "i)";

    return output;
}

Complex Complex::operator*(const Complex &a) const
{
    int realPart = real * a.real - imaginary * a.imaginary;
    int imaginaryPart = real * a.imaginary + imaginary * a.real;

    return Complex(realPart, imaginaryPart);
}

bool Complex::operator==(const Complex &operand2) const
{
    if (real != operand2.real)
        return false;

    if (imaginary != operand2.imaginary)
        return false;

    return true;
}
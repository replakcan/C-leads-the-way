#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setprecision;

#include <algorithm>
using std::__gcd;

#include "Rational.h"

Rational::Rational(int numerator, int denominator)
{
    setRational(numerator, denominator);
}

void Rational::setRational(int numerator, int denominator)
{
    if (denominator == 0)
    {
        cout << "Denominator cannot be equal to 0." << endl;
        cout << "Setting denomintor to 1." << endl;
    }
    else
    {
        int gcdivisor = gcd(numerator, denominator);
        int num = numerator / gcdivisor;
        int denom = denominator / gcdivisor;

        setNumerator(num);
        setDenominator(denom);
    }
}

void Rational::setNumerator(int numerator)
{
    this->numerator = numerator;
}

void Rational::setDenominator(int denominator)
{
    this->denominator = denominator;
}

int Rational::getNumerator()
{
    return numerator;
}

int Rational::getDenominator()
{
    return denominator;
}

int Rational::gcd(int numerator, int denominator)
{
    return __gcd(numerator, denominator);
}

void Rational::printRational()
{
    cout << numerator << "/" << denominator << endl;
}

void Rational::printInFloat()
{
    cout << std::fixed << setprecision(2)
         << (double)numerator / denominator << endl;
}

void Rational::add(Rational num2)
{
    int num = numerator * num2.denominator + num2.numerator * denominator;

    int denom = denominator * num2.denominator;

    setRational(num, denom);
}

void Rational::subtract(Rational num2)
{
    int num = numerator * num2.denominator - num2.numerator * denominator;

    int denom = denominator * num2.denominator;

    setRational(num, denom);
}

void Rational::multiply(Rational num2)
{
    int num = numerator * num2.numerator;
    int denom = denominator * num2.denominator;

    setRational(num, denom);
}

void Rational::divide(Rational num2)
{
    int num = numerator * num2.denominator;
    int denom = denominator * num2.numerator;

    if (denom == 0)
        cout << "division with 0 forbidden." << endl;
    else
        setRational(num, denom);
}
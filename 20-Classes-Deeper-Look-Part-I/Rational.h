#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
public:
    Rational(int = 1, int = 1);
    void setRational(int, int);
    void setNumerator(int);
    void setDenominator(int);
    int getNumerator();
    int getDenominator();
    void add(Rational);
    void subtract(Rational);
    void multiply(Rational);
    void divide(Rational);
    void printRational();
    void printInFloat();

private:
    int gcd(int, int);
    int numerator;
    int denominator;
};

#endif
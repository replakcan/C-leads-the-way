#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
using std::istream;
using std::ostream;

#include <string>
using std::string;

class PhoneNumber
{
    friend ostream &operator<<(ostream &, const PhoneNumber &);
    friend istream &operator>>(istream &, PhoneNumber &);

private:
    string areaCode;
    string exchange;
    string line;
};

#endif
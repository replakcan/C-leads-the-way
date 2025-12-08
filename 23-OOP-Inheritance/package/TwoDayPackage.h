#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "Package.h"

class TwoDayPackage : public Package
{
public:
    TwoDayPackage(string, string, string, string, string, string, string, string, string, string, double, double, double);
    double calculateCost() const;
    void setFlatFee(double);

private:
    double flatFee;
};

#endif
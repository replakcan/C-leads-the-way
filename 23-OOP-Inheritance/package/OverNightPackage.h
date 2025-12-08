#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

class OverNightPackage : public Package
{
public:
    OverNightPackage(string, string, string, string, string, string, string, string, string, string, double, double, double);
    double calculateCost() const;
    void setAdditionalFeePerOunce(double);

private:
    double additionalFeePerOunce;
};

#endif
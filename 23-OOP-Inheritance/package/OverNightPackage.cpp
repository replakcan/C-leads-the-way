#include "OverNightPackage.h"

OverNightPackage::OverNightPackage(string sName, string sAddress, string sCity, string sState, string sZIP, string rName, string rAddress, string rCity, string rState, string rZIP, double weightInOunces, double costPerOunces, double additionalFeePerOunce)
    : Package(sName, sAddress, sCity, sState, sZIP, rName, rAddress, rCity, rState, rZIP, weightInOunces, costPerOunces)
{
    setAdditionalFeePerOunce(additionalFeePerOunce);
}

void OverNightPackage::setAdditionalFeePerOunce(double fee)
{
    additionalFeePerOunce = fee;
}

double OverNightPackage::calculateCost() const
{
    return Package::calculateCost() + additionalFeePerOunce * getWeightInOunces();
}
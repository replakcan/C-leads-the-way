#include "Package.h"
#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(string sName, string sAddress, string sCity, string sState, string sZIP, string rName, string rAddress, string rCity, string rState, string rZIP, double weightInOunces, double costPerOunces, double flatFee)
    : Package(sName, sAddress, sCity, sState, sZIP, rName, rAddress, rCity, rState, rZIP, weightInOunces, costPerOunces)
{
    setFlatFee(flatFee);
}

void TwoDayPackage::setFlatFee(double fee)
{
    flatFee = fee;
}

double TwoDayPackage::calculateCost() const
{
    return flatFee + Package::calculateCost();
}
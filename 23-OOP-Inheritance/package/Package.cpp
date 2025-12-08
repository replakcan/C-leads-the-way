#include <string>
using std::string;

#include "Package.h"

Package::Package(string sName, string sAddress, string sCity, string sState, string sZIP, string rName, string rAddress, string rCity, string rState, string rZIP, double weightInOunces, double costPerOunces)
{
    setSender(sName, sAddress, sCity, sState, sZIP);
    setReciepent(rName, rAddress, rCity, rState, rZIP);
    setWeightInOunces(weightInOunces);
    setCostPerOunces(costPerOunces);
}

void Package::setSender(string sName, string sAddress, string sCity, string sState, string sZIP)
{
    setSenderName(sName);
    setSenderAddress(sAddress);
    setSenderCity(sCity);
    setSenderState(sState);
    setSenderZIPCode(sZIP);
}

void Package::setReciepent(string rName, string rAddress, string rCity, string rState, string rZIP)
{
    setReciepentName(rName);
    setReciepentAddress(rAddress);
    setReciepentCity(rCity);
    setReciepentState(rState);
    setReciepentZIPCode(rZIP);
}

string Package::getSenderName() const
{
    return senderName;
}

string Package::getSenderAddress() const
{
    return senderAddress;
}

string Package::getSenderCity() const
{
    return senderCity;
}

string Package::getSenderState() const
{
    return senderState;
}

string Package::getSenderZIPCode() const
{
    return senderZIPCode;
}

string Package::getReciepentName() const
{
    return reciepentName;
}

string Package::getReciepentAddress() const
{
    return reciepentAddress;
}

string Package::getReciepentCity() const
{
    return reciepentCity;
}

string Package::getReciepentState() const
{
    return reciepentState;
}

string Package::getReciepentZIPCode() const
{
    return reciepentZIPCode;
}

void Package::setSenderName(string sName)
{
    senderName = sName;
}

void Package::setSenderAddress(string sAddress)
{
    senderAddress = sAddress;
}

void Package::setSenderCity(string sCity)
{
    senderCity = sCity;
}

void Package::setSenderState(string sState)
{
    senderState = sState;
}

void Package::setSenderZIPCode(string sZIP)
{
    senderZIPCode = sZIP;
}

void Package::setReciepentName(string rName)
{
    reciepentName = rName;
}

void Package::setReciepentAddress(string rAddress)
{
    reciepentAddress = rAddress;
}

void Package::setReciepentCity(string rCity)
{
    reciepentCity = rCity;
}

void Package::setReciepentState(string rState)
{
    reciepentState = rState;
}

void Package::setReciepentZIPCode(string rZIP)
{
    reciepentZIPCode = rZIP;
}

void Package::setWeightInOunces(double weight)
{
    weightInOunces = weight > 0.0 ? weight : 0.0;
}

void Package::setCostPerOunces(double cost)
{
    costPerOunces = cost > 0.0 ? cost : 0.0;
}

double Package::getWeightInOunces() const
{
    return weightInOunces;
}

double Package::getCostPerOunces() const
{
    return costPerOunces;
}

double Package::calculateCost() const
{
    return weightInOunces * costPerOunces;
}

ostream &operator<<(ostream &output, const Package &a)
{
    output << "Package weight: " << a.getWeightInOunces() << " ounces"
           << "\nPackage cost: " << a.calculateCost() << "$"
           << "\n\nPackage Sender Info:"
           << "\n\tsender name: " << a.getSenderName()
           << "\n\tsender address: " << a.getSenderAddress()
           << "\n\tsender city: " << a.getSenderCity()
           << "\n\tsender state: " << a.getSenderState()
           << "\n\tsender zipcode: " << a.getSenderZIPCode()
           << "\n\nPackage Reciepent Info:"
           << "\n\treciepent name: " << a.getReciepentName()
           << "\n\treciepent address: " << a.getReciepentAddress()
           << "\n\treciepent city: " << a.getReciepentCity()
           << "\n\treciepent state: " << a.getReciepentState()
           << "\n\treciepent zipcode: " << a.getReciepentZIPCode();

    return output;
}
#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
using std::string;

#include <iostream>
using std::istream;
using std::ostream;

class Package
{
    friend ostream &operator<<(ostream &output, const Package &a);

public:
    Package(string, string, string, string, string, string, string, string, string, string, double, double);
    void setSender(string, string, string, string, string);
    void setReciepent(string, string, string, string, string);
    void setSenderName(string);
    void setSenderAddress(string);
    void setSenderCity(string);
    void setSenderState(string);
    void setSenderZIPCode(string);
    void setReciepentName(string);
    void setReciepentAddress(string);
    void setReciepentCity(string);
    void setReciepentState(string);
    void setReciepentZIPCode(string);
    string getSenderName() const;
    string getSenderAddress() const;
    string getSenderCity() const;
    string getSenderState() const;
    string getSenderZIPCode() const;
    string getReciepentName() const;
    string getReciepentAddress() const;
    string getReciepentCity() const;
    string getReciepentState() const;
    string getReciepentZIPCode() const;
    void setWeightInOunces(double);
    void setCostPerOunces(double);
    double getWeightInOunces() const;
    double getCostPerOunces() const;
    double calculateCost() const;

private:
    string senderName;
    string senderAddress;
    string senderCity;
    string senderState;
    string senderZIPCode;
    string reciepentName;
    string reciepentAddress;
    string reciepentCity;
    string reciepentState;
    string reciepentZIPCode;
    double weightInOunces;
    double costPerOunces;
};

#endif
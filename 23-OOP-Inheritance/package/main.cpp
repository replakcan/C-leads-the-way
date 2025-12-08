#include <iostream>
using std::cout;
using std::endl;

#include "Package.h"
#include "TwoDayPackage.h"
#include "OverNightPackage.h"

int main()
{
    Package p1("Alper", "mecidiyeKöy", "Istanbul", "Marmara", "34", "Mutlu", "mutluAdres", "mutluCity", "mutluState", "mutluZip", 12.4, 23.5);

    TwoDayPackage p2("Alper", "mecidiyeKöy", "Istanbul", "Marmara", "34", "Mutlu", "mutluAdres", "mutluCity", "mutluState", "mutluZip", 12.4, 23.5, 10);

    OverNightPackage p3("Alper", "mecidiyeKöy", "Istanbul", "Marmara", "34", "Mutlu", "mutluAdres", "mutluCity", "mutluState", "mutluZip", 12.4, 23.5, 10);

    double cost = p1.calculateCost();
    double twoDayCost = p2.calculateCost();
    double overNightCost = p3.calculateCost();

    cout << "regular package cost: " << cost << endl;
    cout << "twodayp cost: " << twoDayCost << endl;
    cout << "overnightp cost: " << overNightCost << endl;

    // cout << p1 << endl;

    return 0;
}
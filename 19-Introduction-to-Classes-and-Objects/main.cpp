#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "GradeBook.h"
#include "Account.h"
#include "Invoice.h"
#include "GradeBook.h"

int main()
{
    GradeBook gradebook1("FirstBook", "Alperovski");
    GradeBook gradebook2("SecondBook", "Mutlucavcav");

    gradebook1.displayMessage();
    gradebook2.displayMessage();

    Account acc1(3131);
    Account acc2(6969);

    acc1.credit(6969);
    acc1.debit(287382);

    Invoice inv1("a123", "denemebirki", 10, 11);

    string partNum = inv1.getPartNumber();
    string desc = inv1.getDescription();
    int quantitySold = inv1.getQuantityPurchased();
    int price = inv1.getPrice();

    cout << "Total invoice amount($): " << inv1.getInvoiceAmount()
         << endl;

    cout << "PartNumber: " << partNum << "\n"
         << "description: " << desc << "\n"
         << "quantity: " << quantitySold << "\n"
         << "price: " << price << endl;

    return 0;
}
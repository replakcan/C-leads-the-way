#include <string>
using std::string;

#include "Invoice.h"

Invoice::Invoice(string partNumber, string description, int quantityPurchased, int price)
{
    setInvoice(partNumber, description, quantityPurchased, price);
}

void Invoice::setInvoice(string partNumber, string description, int quantityPurchased, int price)
{
    setPartNumber(partNumber);
    setDescription(description);
    setQuantityPurchased(quantityPurchased);
    setPrice(price);
}

void Invoice::setPartNumber(string partNumber)
{
    partNum = partNumber;
}

void Invoice::setDescription(string description)
{
    desc = description;
}

void Invoice::setQuantityPurchased(int quantityPurchased)
{
    quantity = quantityPurchased < 0 ? 0 : quantityPurchased;
}

void Invoice::setPrice(int price)
{
    prc = price < 0 ? 0 : price;
}

string Invoice::getPartNumber()
{
    return partNum;
}

string Invoice::getDescription()
{
    return desc;
}

int Invoice::getQuantityPurchased()
{
    return quantity;
}

int Invoice::getPrice()
{
    return prc;
}

int Invoice::getInvoiceAmount()
{
    return prc * quantity;
}
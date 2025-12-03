#include <string>
using std::string;

class Invoice
{
public:
    Invoice(string partNumber, string description, int quantityPurchased, int price);
    void setInvoice(string partNumber, string description, int quantityPurchased, int price);
    void setPartNumber(string partNumber);
    void setDescription(string description);
    void setQuantityPurchased(int quantityPurchased);
    void setPrice(int price);
    string getPartNumber();
    string getDescription();
    int getQuantityPurchased();
    int getPrice();
    int getInvoiceAmount();

private:
    string partNum;
    string desc;
    int quantity;
    int prc;
};
#include <string>
using std::string;

class Invoice
{
public:
    Invoice(string, string, int, int);
    void setInvoice(string, string, int, int);
    void setPartNumber(string);
    void setDescription(string);
    void setQuantityPurchased(int);
    void setPrice(int);
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
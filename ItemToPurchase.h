#ifndef LAB11_27_ITEMTOPURCHASE_H
#define LAB11_27_ITEMTOPURCHASE_H

#include <string>
using namespace std;


class ItemToPurchase {
private:
    string itemName;
    int itemPrice;
    int itemQuantity;
    string itemDescription;

public:
    ItemToPurchase();
    ItemToPurchase(string, string, int, int);
    void SetName(string);
    string GetName();
    void SetPrice(int);
    int GetPrice() const;
    void SetQuantity(int);
    int GetQuantity() const;
    int GetCost() const;
    void SetDescription(string);
    string GetDescription() const;
    void PrintItemCost();
    void PrintItemDescription();
};

#endif
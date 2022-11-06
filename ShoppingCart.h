#ifndef LAB11_27_SHOPPINGCART_H
#define LAB11_27_SHOPPINGCART_H

#include <string>
#include <vector>
#include "ItemToPurchase.h"
using namespace std;

class ShoppingCart {
private:
    string customerName;
    string currentDate;
    vector <ItemToPurchase> cartItems;

public:
    ShoppingCart();
    ShoppingCart(string customerName, string currentDate);
    void SetCustomerName(string);
    string GetCustomerName() const;
    void SetDate(string);
    string GetDate() const;
    void AddItem(ItemToPurchase);
    void RemoveItem(string);
    void ModifyItem(ItemToPurchase);
    int GetNumItemsInCart();
    int GetCostOfCart();
    void PrintTotal();
    void PrintDescription();
};

#endif
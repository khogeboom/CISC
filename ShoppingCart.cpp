#include <iostream>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"

ShoppingCart::ShoppingCart() {
    customerName = "none";
    currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string userName, string userDate) {
    customerName = userName;
    currentDate = userDate;
}

void ShoppingCart::SetCustomerName(string userName) {
    customerName = userName;
}

string ShoppingCart::GetCustomerName() const {
    return customerName;
}

void ShoppingCart::SetDate(string userDate) {
    currentDate = userDate;
}

string ShoppingCart::GetDate() const {
    return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item) {
    string userName, userDescription;
    int userPrice, userQuantity;
    cout << "Enter the item name:" << endl;
    getline(cin, userName);
    cout << "Enter the item description:" << endl;
    getline(cin, userDescription);
    cout << "Enter the item price:" << endl;
    cin >> userPrice;
    cout << "Enter the item quantity:" << endl;
    cin >> userQuantity;

    item = ItemToPurchase(userName, userDescription, userPrice, userQuantity);
    cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string userName) {
    bool found = false;
    for (int i = 0; i < cartItems.size(); i++) {
        if (userName == cartItems.at(i).GetName()) {
            for (int j = i; j < cartItems.size() - 1; j++) {
                cartItems.at(j) = cartItems.at(j + 1);
            }
            cartItems.pop_back();
            found = true;
        }
    }
    if (found == false)
        cout << "Item not found in cart. Nothing removed." << endl;
}

void ShoppingCart::ModifyItem(ItemToPurchase item) {
    string description;
    int price, quantity;
    bool found = false;
    for (int i = 0; i < cartItems.size(); i++) {
        if (item.GetName() == cartItems.at(i).GetName()) {
            if (cartItems.at(i).GetDescription() == "none") {
                cout << "Enter the new description:" << endl;
                getline(cin, description);
                cartItems.at(i).SetDescription(description);
            }
            if (cartItems.at(i).GetPrice() == 0) {
                cout << "Enter the new price:" << endl;
                cin >> price;
                cartItems.at(i).SetPrice(price);
            }
            if (cartItems.at(i).GetQuantity() == 0) {
                cout << "Enter the new quantity:" << endl;
                cin >> quantity;
                cartItems.at(i).SetQuantity(quantity);
            }
            found = true;
        }
    }
    if (found == false)
        cout << "Item not found in cart. Nothing modified." << endl;
}

int ShoppingCart::GetNumItemsInCart() {
    return cartItems.size();
}

int ShoppingCart::GetCostOfCart() {
    int cost = 0;
    for (int i = 0; i < cartItems.size(); i++) {
        cost += cartItems.at(i).GetPrice() * cartItems.at(i).GetQuantity();
    }
    return cost;
}

void ShoppingCart::PrintTotal() {
    cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl;
    cout << "Number of Items: " << GetNumItemsInCart() << endl;
    cout << endl;
    if (GetNumItemsInCart() == 0)
        cout << "SHOPPING CART IS EMPTY" << endl;
    else {
        for (int i = 0; i < cartItems.size(); i++) {
            cartItems.at(i).PrintItemCost();
        }
    }
    cout << endl;
    cout << "Total: $" << GetCostOfCart() << endl;
}

void ShoppingCart::PrintDescription() {
    cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl;
    cout << endl;
    cout << "Item Descriptions" << endl;
    for (int i = 0; i < cartItems.size(); i++) {
        cartItems.at(i).PrintItemDescription();
    }
}
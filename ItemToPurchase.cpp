#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemDescription = "none";
    itemPrice = 0;
    itemQuantity = 0;
}

ItemToPurchase::ItemToPurchase(string userName, string userDescription, int userPrice, int userQuantity) {
    itemName = userName;
    itemDescription = userDescription;
    itemPrice = userPrice;
    itemQuantity = userQuantity;
}

void ItemToPurchase::SetName(string userName) {
    itemName = userName;
}

string ItemToPurchase::GetName() {
    return itemName;
}

void ItemToPurchase::SetPrice(int userPrice) {
    itemPrice = userPrice;
}

int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int userQuantity) {
    itemQuantity = userQuantity;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

int ItemToPurchase::GetCost() const {
    return itemPrice * itemQuantity;
}

void ItemToPurchase::SetDescription(string userDescription) {
    itemDescription = userDescription;
}

string ItemToPurchase::GetDescription() const {
    return itemDescription;
}

void ItemToPurchase::PrintItemCost() {
    cout << GetName() << " " << GetQuantity() << " @ $" << GetPrice() << " = $" << GetQuantity() * GetPrice() << endl;
}

void ItemToPurchase::PrintItemDescription() {
    cout << GetName() << ": " << GetDescription() << endl;
}
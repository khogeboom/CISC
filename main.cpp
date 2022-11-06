#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;
    cout << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
    string userName;
    ItemToPurchase item = ItemToPurchase();
    switch (option) {
        case 'a':
            cout << "ADD ITEM TO CART" << endl;
            theCart.AddItem(item);
            break;
        case 'd':
            cout << "REMOVE ITEM FROM CART" << endl;
            cout << "Enter name of item to remove:" << endl;
            getline(cin, userName);
            theCart.RemoveItem(userName);
            break;
        case 'c':
            cout << "CHANGE ITEM QUANTITY" << endl;
            cout << "Enter the item name:" << endl;
            getline(cin, userName);
            item.SetName(userName);
            theCart.ModifyItem(item);
            break;
        case 'i':
            cout << "OUTPUT ITEMS' DESCRIPTION" << endl;
            theCart.PrintDescription();
            break;
        case 'o':
            cout << "OUTPUT SHOPPING CART" << endl;
            theCart.PrintTotal();
            break;
        default:
            break;
    }
}

int main() {
    ShoppingCart cart;
    string userName, userDate;
    char option;
    cout << "Enter customer's name:" << endl;
    getline(cin, userName);
    cart.SetCustomerName(userName);
    cout << "Enter today's date:" << endl;
    getline(cin, userDate);
    cart.SetDate(userDate);
    cart.ShoppingCart(userName, userDate, cart);

    cout << endl;
    cout << "Customer name: " << cart.GetCustomerName() << endl;
    cout << "Today's date: " << cart.GetDate() << endl;
    cout << endl;

    do {
        PrintMenu();
        do {
            cout << "Choose an option:" << endl;
            cin >> option;
        } while (option != 'a' && option != 'd' && option != 'c' && option != 'i' && option != 'o' && option != 'q');
        ExecuteMenu(option, cart);
    } while (option != 'q');

    return 0;
}
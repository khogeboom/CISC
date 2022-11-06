//
// Created by Kasey Hogeboom on 11/1/21.
//

#include <iostream>
#include "Book.h"
using namespace std;

Book::Book(string userTitle, Author userAuthor, double userPrice, int userQuantity = 0) {
    title = userTitle;
    author = userAuthor;
    setPrice(userPrice);
    setQtyInStock(userQuantity);
    price = getPrice();
    qtyInStock = getQtyInStock();
}

string Book::getTitle() const {
    return title;
}

Author Book::getAuthor() const {
    return author;
}

double Book::getPrice() const {
    return price;
}

void Book::setPrice(double userPrice) {
    if (userPrice < 0)
        price = 0;
    else
        price = userPrice;
}

int Book::getQtyInStock() const {
    return qtyInStock;
}

void Book::setQtyInStock(int userQuantity) {
    if (userQuantity < 0)
        qtyInStock = 0;
    else
        qtyInStock = userQuantity;
}

void Book::print() {
    cout << getTitle() << " by ";
    author.print();
    cout << ", price = " << getPrice() << ", quantity = " << getQtyInStock() << endl;
}

string Book::getAuthorName() const {
    return author.getName();
}
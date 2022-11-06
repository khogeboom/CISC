//
// Created by Kasey Hogeboom on 11/1/21.
//

#ifndef MIDTERMLAB_BOOK_H
#define MIDTERMLAB_BOOK_H
#include <iostream>
#include <string>
#include "Author.h"
using namespace std;


class Book {
    private:
        string title;
        Author author;
        double price;
        int qtyInStock;
    public:
        Book(string, Author, double, int);
        string getTitle() const;
        Author getAuthor() const;
        double getPrice() const;
        void setPrice(double userPrice);
        int getQtyInStock() const;
        void setQtyInStock(int userQuantity);
        void print();
        string getAuthorName() const;
};

#endif //MIDTERMLAB_BOOK_H

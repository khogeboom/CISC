#ifndef MIDTERMLAB1_AUTHOR_H
#define MIDTERMLAB1_AUTHOR_H
#include <string>
#include <iostream>
using namespace std;


class Author {
private:
    string name;
    string email;
    char gender;
public:
    Author();
    Author(string, string, char);
    string getName() const;
    void setEmail(string);
    string getEmail() const;
    char getGender() const;
    void print() const;
};


#endif //MIDTERMLAB1_AUTHOR_H

#include "Author.h"
#include <iostream>
using namespace std;

Author::Author() {

}
Author::Author(string userName, string userEmail, char userGender) {
    name = userName;
    email = userEmail;
    gender = userGender;
}

string Author::getName() const {
    return name;
}

void Author::setEmail(string userEmail) {
    bool valid = false;
    int i = userEmail.find('@');
    if (i != 0 && i != userEmail.length() - 1)
        valid = true;
    if (valid)
        email = userEmail;
    else
        cout << "Invalid email" << endl;
}

string Author::getEmail() const {
    return email;
}

char Author::getGender() const {
    return gender;
}

void Author::print() const {
    cout << getName() << " (" << getGender() << ") at " << getEmail();
}
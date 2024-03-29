#include "Account.h"

// Account::Account() {
//     balance = 0;
//     name = "";
// }

Account::Account()
    : name{"None"}, balance{0} {
}

void Account::set_name(string n) {
    name = n;
}

string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    balance+=amount;
    return true;
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance-=amount;
        return true;
    }
    return false;
}
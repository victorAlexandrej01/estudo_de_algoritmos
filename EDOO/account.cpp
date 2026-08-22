#include "account.h"
#include <iostream>
#include <iomanip>
using namespace std;

bool Account::init(const string& i_name,
                   unsigned long i_number,
                   double i_balance){
    if (i_name .size() < 1) return false;
    name = i_name;
    number = i_number;
    balance = i_balance;
    return true;
}

void Account::display(){
    cout << fixed << setprecision(2)
         << "---------------------------------\n"
         << "Account holder:  " << name << endl
         << "Account number:  " << number << endl
         << "Account balance: " << balance << endl
         << "---------------------------------\n";
}


int main(){
    Account conta1;
    conta1.init("Victor", 1234, 5302.4435 );
    conta1.display();  
    return 0;
}
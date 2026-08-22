#ifndef _ACCOUNT_
#define _ACCOUNT_

#include <iostream>
#include <string>
using namespace std;

class Account{
    private:
        unsigned long number;   
        string name;
        double balance;

    public:
        bool init (const string&, unsigned long, double);
        void display();

};


#endif

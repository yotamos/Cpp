#ifndef Address_H
#define Address_H
#include <iostream>
#include <string>

using namespace std;

class Address {
    private:
        string country;
        string state;
        string city;
        string street;
        int number;
        int zipCode;
    public:
        Address(string c, string s, string ci, string st, int n, int z) {
            country = c;
            state = s;
            city = ci;
            street = st;
            number = n;
            zipCode = z;
        }
};

#endif

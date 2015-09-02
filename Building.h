#ifndef Building_H
#define Building_H
#include <iostream>
#include <string>

using namespace std;

class Building {
    private:
        string name;
        Address *address;
    public:
        Building(string n, Address *a) { name = n; address = a; }
        string getName() { return name; }
        Address *getAddress() { return address;}
        void setName(string n) { name = n; }
};

#endif

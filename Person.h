#ifndef Person_H
#define Person_H
#include <iostream>
#include <string>

using namespace std;

class Person {
    protected:
        string name;
        int age;
    public:
        Person (string n, int a) { name = n; age = a; }
        string getName() { return name; }
        int getAge() { return age; }
        void speak() { cout << "Hello, my name is " << name << endl; }
};

#endif

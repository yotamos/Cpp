#ifndef Major_H
#define Major_H
#include <iostream>
#include <string>

using namespace std;

class Major {
    private:
        string name;
        int numCreditsRequired;
    public:
        Major(string n, int ncr) { name = n; numCreditsRequired = ncr; }
        string getName() { return name; }
        int getNumCreditsRequired() { return numCreditsRequired; }
        void setNumCreditsRequired(int ncr) { numCreditsRequired = ncr; } 
};

#endif

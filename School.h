#ifndef School_H
#define School_H
#include <iostream>
#include <string>

using namespace std;

class School {
    private:
        string name;
        int foundingYear;
        Major *availableMajors;
        Building *classroomBuildings;
        Building *residenceHalls;
        Building *otherBuildings;
        Address *address;
    public:
        School(string n, int fy, Major *m, Building  *cb,
            Building *rh, Building *ob, Address *a) {
                name = n;
                foundingYear = fy;
                availableMajors = m;
                classroomBuildings = cb;
                residenceHalls = rh;
                otherBuildings = ob;
                address = a;
            }
        string getName() { return name; }
        int getFoundingYear() { return foundingYear; }
        Major *getAvailableMajors() { return availableMajors; }
        Building *getClassroomBuildings() { return classroomBuildings; }
        Building *getResidenceHalls() { return residenceHalls; }
        Building *getOtherBuildings() { return otherBuildings; }
        Address getAddress() {return *address; }
        void addClassroom(Building b);
        void addResidenceHall(Building b);
        void addOtherBuilding(Building b);
        void addMajor(Major m);
        void setAddress(Address *a) { address = a; }
};

#endif

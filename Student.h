#ifndef Student_H
#define Student_H
#include <iostream>
#include <string>

using namespace std;

class Student: public Person {
    private:
        Major *major;
        School *school;
        int graduationYear;
    public:
        Student(string name, int age, Major *m, School *s, int gy) : Person(name, age) {
            major = m;
            school = s;
            graduationYear = gy;
        }
        School *getSchool() {return school; } 
        Major *getMajor() { return major; }
        int getGraduationYear() { return graduationYear; }
        void setSchool(School *s) { school = s; }
        void setMajor(Major *m) { major = m; }
        void setGraduationYear(int g) { graduationYear = g; }
        void speak();
};

void Student::speak() {
    cout << "Hello, my name is " << name << " and I am studying " <<
        major -> getName() << " at " << school -> getName() << endl;
}

#endif

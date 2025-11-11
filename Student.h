#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here
class Student : public person {
private:
    string major;
    int yearlevel;
public:
    Student(string name, string major, int yearlevel, int id):person(name,id);
    void setMajor(string major);
    string getMajor();
    void setYearLevel(int yearlevel);
    int getYearLevel();
    void display();
    ~Student();
};

#endif















#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
class instructor : public person {
private:
    string department;
    int experienceyears;
public:
    instructor(string name, int id, int experienceyears, string department):person(name,id);
    void setDepartment(string department);
    string getDepartment();
    void setExperienceYears(int experienceyears);
    int getExperienceYears();
    void display();
    ~instructor();
};

#endif














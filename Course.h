#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class course {
private:
    string coursename;
    string coursecode;
    int maxstudents;
    Student* students;
    int currentstudents;
public:
    course(string coursename, string coursecode, int maxstudents, Student* students, int currentstudents);
    void setCourseName(string coursename);
    string getCourseName();
    void setCourseCode(string coursecode);
    string getCourseCode();
    void setMaxStudents(int maxstudents);
    int getMaxStudents();
    void setCurrentStudents(int currentstudents);
    int getCurrentStudents();
    void addstudent(const Student& s);
    void displaycourseinfo();
    ~course();
};

#endif
















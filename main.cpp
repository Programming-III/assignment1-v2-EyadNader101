#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
person::person(string name, int id) {
    this->name = name;
    this->id = id;
}

void person::setName(string name) {
    this->name = name;
}

string person::getName() {
    return name;
}

void person::setId(int id) {
    this->id = id;
}

int person::getId() {
    return id;
}

void person::display() {
    cout << "Name: " << name << endl;
    cout << "Id: " << id << endl;
}

person::~person() {}
// ==================== Student Class Implementation ====================
Student::Student(string name, string major, int yearlevel, int id) : person(name, id) {
    this->major = major;
    this->yearlevel = yearlevel;
};

void Student::setMajor(string major) {
    this->major = major;
};

string Student::getMajor() {
    return major;
};

void Student::setYearLevel(int yearlevel) {
    this->yearlevel = yearlevel;
};

int Student::getYearLevel() {
    return yearlevel;
};

void Student::display() {
    cout << "Major: " << major << endl;
    cout << "Yearlevel: " << yearlevel << endl;
    cout << "Name: " << getName() << endl;
    cout << "Id: " << getId() << endl;
};

Student::~Student() {}






// ==================== Instructor Class Implementation ====================

instructor::instructor(string name, int id, int experienceyears, string department) : person(name, id) {
    this->department = department;
    this->experienceyears = experienceyears;
};

void instructor::setDepartment(string department) {
    this->department = department;
};

string instructor::getDepartment() {
    return department;
};

void instructor::setExperienceYears(int experienceyears) {
    this->experienceyears = experienceyears;
};

int instructor::getExperienceYears() {
    return experienceyears;
};

void instructor::display() {
    cout << "Department: " << department << endl;
    cout << "Experience: " << experienceyears << endl;
    cout << "Name: " << getName() << endl;
    cout << "Id: " << getId() << endl;
}

instructor::~instructor() {}






// ==================== Course Class Implementation ====================
course::course(string coursename, string coursecode, int maxstudents, Student* students, int currentstudents) {
    this->coursename = coursename;
    this->coursecode = coursecode;
    this->maxstudents = maxstudents;
    this->students = students;
    this->currentstudents = currentstudents;
};
void course::setCourseName(string coursename) {
    this->coursename = coursename;
};
string course::getCourseName() {
    return coursename;
};
void course::setCourseCode(string coursecode) {
    this->coursecode = coursecode;
};

string course::getCourseCode() {
    return coursecode;
};

void course::setMaxStudents(int maxstudents) {
    this->maxstudents = maxstudents;
};

int course::getMaxStudents() {
    return maxstudents;
};

void course::setCurrentStudents(int currentstudents) {
    this->currentstudents = currentstudents;
};

int course::getCurrentStudents() {
    return currentstudents;
};

void course::addStudent(const Student& s) {
    if (currentstudents < maxstudents) {
        students[currentstudents] = s;
        currentstudents++;
    } else {
        cout << "Course is full" << endl;
    }
};

void course::displayCourseInfo() {
    cout << "Course Name: " << coursename << endl;
    cout << "Course Code: " << coursecode << endl;
    cout << "Max Students: " << maxstudents << endl;
    cout << "Current Students: " << currentstudents << endl;
    for (int i = 0; i < currentstudents; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        students[i].display();
    }
};

course::~course() {
    delete[] students;
};

// ==================== Main Function ====================
int main() {
    Student* s = new Student[3]{
        Student("omar Nabil", "CS", 2, 2202),
        
    };

    course c("introduction to Programming", "CS101", 3, 2);
    c.displayCourseInfo();

    instructor inst("Dr.Linda khaled", 201, 5, "Computer Science");
    inst.display();

    delete[]s;
    
}

    
    return 0;
}

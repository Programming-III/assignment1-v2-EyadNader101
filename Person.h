#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here
class person {
private:
    string name;
    int id;
public:
    person(string name, int id);
    void setName(string name);
    string getName();
    void setId(int id);
    int getId();
    void display();
    ~person();
};

#endif














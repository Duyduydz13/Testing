#ifndef DEPARTMENT_H_INCLUDED
#define DEPARTMENT_H_INCLUDED

#include<string>
#include <iostream>

using namespace std;

class Department {
protected :
    string department;
public:
    void setDepartment(string);
    string getDepartment();
};
void Department::setDepartment(string s){
    department=s;
}
string Department::getDepartment(){
    return department;
}

#endif 
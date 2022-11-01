#ifndef BLOOD_H_INCLUDED
#define BLOOD_H_INCLUDED

#include<string>
#include <iostream>

using namespace std;

class bloodGroup{
protected :
    string bloodGroup;
public:
    string getBloodGroup();
    void setBloodGroup(string);
};

void bloodGroup::setBloodGroup(string s){
    bloodGroup=s;
}
string bloodGroup::getBloodGroup(){
    return bloodGroup;
}
#endif 
//BLOOD_GROUP_H_INCLUDED
#ifndef NAME_H_INCLUDED
#define NAME_H_INCLUDED

#include<string>
#include <iostream>

using namespace std;
class Name{
protected:
    string name;
public:
    void setName(string);
    string getName();
};

void Name::setName(string s){
    name=s;
}
string Name::getName(){
    return name;
}
#endif 
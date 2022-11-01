#ifndef ROLL_H_INCLUDED
#define ROLL_H_INCLUDED

#include<string>
#include <iostream>
using namespace std;

class Roll{
protected:
    long int roll;
public :   
    void setRoll(long int);
    long int getRoll();
};

void Roll::setRoll(long int s){
    roll =s;
}
long int Roll::getRoll(){
    return roll;
}

#endif
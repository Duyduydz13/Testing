#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED

#include<string>
#include <iostream>

using namespace std;
class Contact{
protected :
    string numPhone;
    string email;
public :
    void setNumPhone(string);
    string getNumPhone();
    void setEmail(string);
    string getEmail();
};

void Contact::setNumPhone(string s){
    numPhone=s;
}
void Contact::setEmail(string a){
    email=a;
}
string Contact::getNumPhone(){
    return numPhone;
}
string Contact::getEmail(){
    return email;
}
#endif 
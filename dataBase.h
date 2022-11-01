#ifndef DATABASE_H_INCLUDED
#define DATABASE_H_INCLUDED
#include<string>
#include "donar.h"
#include<vector>
#include<windows.h>
#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
class DataBase{
protected:
    Donor don [1000];
public:
    DataBase(){}
    void data(string s){
        int static i=0;
        if (s=="add"){
             string n;
            long int r;
            int  t;
            cout<<"\n\t\t\t Enter Name : "<<endl;
            cout<<"\t\t\t";
            getchar();
            getline(cin>>n,n);
            don[i].setName(n);


            cout<<"\n\t\t\tEnter Roll ID :"<<endl;
            cout<<"\t\t\t";
            cin>>r;
            don[i].setRoll(r);

            cout<<"\n\t\t\t Enter Department: "<<endl;
            cout<<"\t\t\t";
            cin>>n;
            don[i].setDepartment(n);

            cout<<"\n\t\t\tEnter  Blood Group: "<<endl;
            cout<<"\t\t\t";
            cin>>n;
            don[i].setBloodGroup(n);

            cout<<"\n\t\t\tEnter No.of Blood Donate: "<<endl;
            cout<<"\t\t\t";
            cin>>t;
            don[i].set_no_of_blood_donate(t);

            cout<<"\n\t\t\t Last Date of Blood Donation:"<<endl;
            cout<<" \t\t\t ";
            cin>>n;
            don[i].set_last_date_of_blood_donation(n);

            cout<<"\n\t\t\tEnter Phone Number: "<<endl;
            cout<<"\t\t\t";
            cin>>n;
            don[i].setNumPhone(n);

            cout<<"\n\t\t\tEnter Email: "<<endl;
            cout<<"\t\t\t";
            cin>>n;
            don[i].setEmail(n);
         i++;
        }
        if (s=="view"){
            int j=0;
            system("cls");
            for (int j=0;j<i;j++){
                cout<<"\n\t\t\tDonor no :"<<j+1<<endl;
                cout<<"\t\t\t Name :"<<don[j].getName()<<endl;
                cout<<"\t\t\t Roll : "<<don[j].getRoll()<<endl;
                cout<<"\t\t\t Department : "<<don[j].getDepartment()<<endl;
                cout<<"\t\t\tBlood Group: "<<don[j].getBloodGroup()<<endl;
                cout<<"\t\t\tNo. of Blood Donation: "<<don[j].get_no_of_blood_donate()<<endl;
                cout<<"\t\t\tLast Date of Blood Donation: "<<don[j].get_last_date_of_blood_donation()<<endl;
                cout<<"\t\t\t:-:Contact Info:-:"<<endl;
                cout<<"\t\t\tPhone No.: "<<don[j].getNumPhone()<<endl;
                cout<<"\t\t\tE-mail: "<<don[j].getEmail()<<endl;
                cout<<"\n\n";
                system("PAUSE");
                system("CLS");
            }
            if(j<1)
            //brought to you by code-projects.org
                cout<<"\aPlease Insert some data first.\n\n";

        }
        if (s=="search"){
            string s;
            cout<<"\n\t\t\t\tEnter Name/Blood Group/Department : "<<endl;
            cout<<"\t\t\t\t";
            cin>>s;
            for (int j=0;j<i;j++){
                if (s==don[j].getName() || s==don[j].getBloodGroup()||s==don[j].getDepartment()){
                cout<<"\n\t\t\tDonor no :"<<j+1<<endl;
                cout<<"\t\t\t Name :"<<don[j].getName()<<endl;
                cout<<"\t\t\t Roll : "<<don[j].getRoll()<<endl;
                cout<<"\t\t\t Department : "<<don[j].getDepartment()<<endl;
                cout<<"\t\t\tBlood Group: "<<don[j].getBloodGroup()<<endl;
                cout<<"\t\t\tNo. of Blood Donation: "<<don[j].get_no_of_blood_donate()<<endl;
                cout<<"\t\t\tLast Date of Blood Donation: "<<don[j].get_last_date_of_blood_donation()<<endl;
                cout<<"\t\t\t:-:Contact Info:-:"<<endl;
                cout<<"\t\t\tPhone No.: "<<don[j].getNumPhone()<<endl;
                cout<<"\t\t\tE-mail: "<<don[j].getEmail()<<endl;
                cout<<"\n\n";
                system("PAUSE");
                system("CLS");
                }
            }
        }
    }

};
#endif
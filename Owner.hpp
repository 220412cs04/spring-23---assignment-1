#ifndef ASSIGNMENT__1_OWNER_H
#define ASSIGNMENT__1_OWNER_H

#include <iostream>
using namespace std;

//------Class Owner-------//

class Owner{
private:
    //members
    string name;
    int age;
    int phoneNumber;
    string dogName;

public:
    //constructors
    Owner();
    Owner(string n, int a, int pn, string dn);

    //setters
    void setName(string n);
    void setAge(int a);
    void setPhoneNumber(int pn);
    void setDogName(string dn);

    //getters
    string getName();
    int getAge();
    int getPhoneNumber();
    string getDogName();

    //member functions
    void setDetails();
    void printDetails();
};

#endif //ASSIGNMENT__1_OWNER_H

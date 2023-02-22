//
//  Owner.hpp
//  spring'23 - assignment #1
//
//  Created by Angela Choi on 22/02/23.
//

#ifndef Owner_hpp
#define Owner_hpp

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

#endif /* Owner_hpp */

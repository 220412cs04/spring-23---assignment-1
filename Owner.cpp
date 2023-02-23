#include "Owner.hpp"
#include <iostream>
using namespace std;

Owner::Owner(){} //default constructor
Owner::Owner(string n, int a, int pn, string dn){
    name = n;
    age = a;
    phoneNumber = pn;
    dogName = dn;
}


//setters - details:
void Owner::setName(string n) {
    name = n;
}
void Owner::setAge(int a) {
    age = a;
}
void Owner::setPhoneNumber(int pn) {
    phoneNumber = pn;
}
void Owner::setDogName(string dn) {
    dogName = dn;
}


//getters - details:
string Owner::getName() {
    return name;
}
int Owner::getAge() {
    return age;
}
int Owner::getPhoneNumber() {
    return phoneNumber;
}
string Owner::getDogName() {
    return dogName;
}


//member functions - details:
void Owner::setDetails() {
    cin >> name;
    cin >> age;
    cin >> phoneNumber;
    cin >> dogName;
}

void Owner::printDetails() {
    cout << name << endl;
    cout << age << endl;
    cout << phoneNumber << endl;
    cout << dogName << endl;
}

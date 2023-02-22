//
// Created by User on 21.02.2023.
//

#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog(){}
Dog::Dog(string n, string b, int e, int a, float s, string c) {
    name = n;
    breed = b;
    energy = e;
    age = a;
    size = s;
    color = c;
}


//setters - details:
void Dog::setName(string n) {
    name = n;
}
void Dog::setBreed(string b) {
    breed = b;
}
void Dog::setEnergy(int e) {
    energy = e;
}
void Dog::setAge(int a) {
    age = a;
}
void Dog::setSize(float s) {
    size = s;
}
void Dog::setColor(string c) {
    color = c;
}


//getters - details:
string Dog::getName() {
    return name;
}
string Dog::getBreed() {
    return breed;
}
int Dog::getEnergy() {
    return energy;
}
int Dog::getAge() {
    return age;
}
float Dog::getSize() {
    return size;
}
string Dog::getColor() {
    return color;
}

//creating an object(?)
Dog myDog;

//member functions - details:

void Dog::setDetails() {
    string theName;
    cin >> theName;
    myDog.setName(theName);

    string theBreed;
    getline(cin, theBreed);
    myDog.setBreed(theBreed);

    int theEnergy;
    cin >> theEnergy;
    myDog.setEnergy(theEnergy);

    int theAge;
    cin >> theAge;
    myDog.setAge(theAge);

    float theSize;
    cin >> theSize;
    myDog.setSize(theSize);

    string theColor;
    cin >> theColor;
    myDog.setColor(theColor);
}

void Dog::printDetails() {
    cout << myDog.getName() << endl;
    cout << myDog.getBreed() << endl;
    cout << myDog.getEnergy() << endl;
    cout << myDog.getAge() << endl;
    cout << myDog.getSize() << endl;
    cout << myDog.getColor() << endl;
}


void Dog::walk(int minutes) {
    if(energy <= 0) {cout << energy << "% - " << name << ": Dog needs some sleep!" << endl;}
    minutes *=2;
    energy -= minutes;
    cout << energy << "% - " << name << endl;
}

void Dog::sleep(int minutes) {
    if(energy ==  100) {cout << energy << "% - " << name << endl;}
    minutes *= 3;
    energy += minutes;
    if(energy >= 100) {cout << "100% - " << name << endl;}
    cout << energy << "% - " << name << endl;
}

void Dog::bark() {
    cout << "Bowwow! - " << name << endl;
}

void Dog::eat() {
    size += 0.5;
    cout << size << " kg - " << name << endl;
}

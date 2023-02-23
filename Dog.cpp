#include "Dog.hpp"
#include <iostream>
using namespace std;

Dog::Dog(){}; //default constructor
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


//member functions - details:
void Dog::setDetails() {
    string n;
    getline(cin, n);
    setName(n);
    string b;
    getline(cin, b);
    setBreed(b);
    cin >> energy;
    cin.ignore();
    cin >> age;
    cin.ignore();
    cin >> size;
    cin.ignore();
    cin >> color;
    cin.ignore();
}

void Dog::printDetails() {
    cout << name << endl;
    cout << breed << endl;
    if(energy >= 100) {cout << "100%" << endl;}
    else cout << energy << "%" << endl;
    cout << age << endl;
    cout << size << endl;
    cout << color << endl;
}


void Dog::walk(int minutes) {
    minutes *=2;
    energy -= minutes;
    if(energy <= 0) cout << energy << "% - " << name << ": Dog needs some sleep!" << endl;
    else cout << energy << "% - " << name << endl;
}


void Dog::sleep(int minutes) {
    minutes *= 3;
    energy += minutes;
    if(energy >= 100) cout << "100% - " << name << endl;
    else cout << energy << "% - " << name << endl;
}


void Dog::bark() {
    cout << "Bowwow! - " << name << endl;
}


void Dog::eat() {
    size += 0.5;
    cout << size << " kg - " << name << endl;
}
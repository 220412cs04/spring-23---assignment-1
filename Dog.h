//
// Created by User on 21.02.2023.
//

#ifndef ASSIGNMENT__1_DOG_H
#define ASSIGNMENT__1_DOG_H
#include <iostream>
using namespace std;

class Dog {
private:
    string name;
    string breed;
    int energy{};
    int age{};
    float size{};
    string color;
public:
    Dog();
    Dog(string n, string b, int e, int a, float s, string c);

    void setName(string n);
    void setBreed(string b);
    void setEnergy(int e);
    void setAge(int a);
    void setSize(float s);
    void setColor(string color);

    string getName();
    string getBreed();
    int getEnergy();
    int getAge();
    float getSize();
    string getColor();

    void setDetails();
    void printDetails();
    void walk(int minutes);
    void sleep(int minutes);
    void bark();
    void eat();

};


#endif //ASSIGNMENT__1_DOG_H

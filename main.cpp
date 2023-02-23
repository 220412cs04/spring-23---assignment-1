#include <iostream>
#include "Dog.hpp"
#include "Owner.hpp"
#include "Pair.hpp"
using namespace std;


int main() {

    Dog d("Beethoven","Saint Bernard",100,1,19.5,"Brown");
    d.printDetails();
    cout << "----------------------" << endl;
    d.walk(5);
    cout << "----------------------" << endl;
    d.sleep(2);
    cout << "----------------------" << endl;
    d.bark();
    cout << "----------------------" << endl;
    d.eat();
    cout << "----------------------" << endl;
    d.printDetails();
    cout << "*------------------------------------------*" << endl;
    Owner o("Jack",25,99891,"Beethoven");
    o.printDetails();
    cout << "----------------------" << endl;
    cout << "*------------------------------------------*" << endl;


    Dog dogs[4];
    for(auto & dog : dogs){
        dog.setDetails();
    }

    Owner owners[4];
    for(auto & owner : owners){
        owner.setDetails();
    }

    Pair pairs[4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(owners[i].getDogName() == dogs[j].getName()){
                pairs[i].dogName = dogs[j].getName();
                pairs[i].ownerName = owners[i].getName();
            }
        }
    }

    for(auto & pair : pairs){
        cout << pair.dogName << " --- " << pair.ownerName << endl;
    }

    return 0;
}

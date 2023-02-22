#include <iostream>
#include "Dog.h"
using namespace std;

int main() {

    Dog d (" Beethoven "," Saint Bernard " ,100 ,1 ,19.5 ," Brown ") ;
    d.printDetails () ;
    cout <<" ----------------------" << endl ;
    d.walk(5) ;
    cout <<" ----------------------" << endl ;
    d.sleep(2) ;
    cout <<" ----------------------" << endl ;
    d.bark();
    cout <<" ----------------------" << endl ;
    d.eat();
    cout <<" ----------------------" << endl ;
    d.printDetails();
    cout <<"* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*" << endl ;

    return 0;
}

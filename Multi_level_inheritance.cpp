#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "I can eat." << endl;
    }
    void sleep() {
        cout << "I can sleep." << endl;
    }
};

class Mammal : public Animal {
public:
    void walk() {
        cout << "I can walk." << endl;
    }
};


class Dog : public Mammal {
public:
    void bark() {
        cout << "I can bark." << endl;
    }
};

int main() {
    Dog myDog;

    myDog.eat();
    myDog.sleep();
    myDog.walk();
    myDog.bark();

    return 0;
}
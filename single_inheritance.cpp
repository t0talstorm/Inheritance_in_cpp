#include <iostream>
using namespace std;

// Base class
class Vehicle {
    public:
        string brand = "Ford";
        void color() {
                cout << "Color: Red" << endl;
        }
};

// Derived class
class Car : public Vehicle {
    public:
        string model = "Mustang";
        void speed() {
                cout << "Max speed is 200km/h" << endl;
        }
};

int main() {
        Car myCar;
        myCar.color();
        cout << "Brand: " << myCar.brand << endl;
        cout << "Model: " << myCar.model << endl;
        myCar.speed();

        return 0;
}

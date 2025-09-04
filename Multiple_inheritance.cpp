#include <iostream>
#include <string>

using namespace std;

class Vehicle {
public:
    void showType() const {
         cout << "This is a vehicle." << endl; 
        }
};

class Device {
public:
    void showName() const {
        cout << "This is a device." << endl;
    }
};

class SmartCar : public Vehicle, public Device {
public:
    void showDetails() const {
        showType();
        showName();
        cout << "This is a smart car." << endl;
    }
};

int main() {
    SmartCar myCar;
    myCar.showDetails();
    return 0;
}

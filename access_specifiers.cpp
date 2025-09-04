#include <iostream>
using namespace std; 
//base class 
class Vehicle {
  private:
  int cost = 10000;

  public:
  string brand = "Ford";
    void color() {
        cout << "wao red " << endl;
    }
    void showCost() {
        cout << "Cost: " << cost << endl;
    }
    protected:
    void displayInfo() {
        cout << "Brand: " << brand << endl;
    }
    
};
//Derived class 

class car: public Vehicle {
  public:
    string model = "Mustang";
    void speed() {
        cout << "Max speed is 200km/h" << endl;
        displayInfo(); 
    }
    
};
class twowheeler: protected Vehicle {
  public:
    string type = "Jawa";
    void showCost() {
      //  cout << "Cost: " << cost << endl;
    }
    void speed() {
        cout << "Max speed is 100km/h" << endl;
        displayInfo(); 
    }
};
int main() {
    Vehicle myVehicle;
    myVehicle.color();

    car myCar;
    myCar.color();
    myCar.speed();    

    return 0;
}
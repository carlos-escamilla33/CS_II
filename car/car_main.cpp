#include <iostream>
#include <vector>
#include <string>
#include "Car.h"
using namespace std;

int main(void) {
    cout << "Welcome to Car Program!" << endl;

    string modelName = "Toyota";
    Car c1(modelName, 1990);
    Car c2, c3;
    c2.set(modelName, 2007);

    cout << c1 << endl;
    cout << c2 << endl;
    // cout << c1.name << endl; // cannot access private member
    cout << "objects count = " << Car::get_count() << endl;
    // cout << c1.name << endl; // name private
    cout << c1.get_model_name() << endl; // get_modelName public
    c1.set_model_name("Honda");
    cout << "c1 modelName = " << c1.get_model_name() << endl; // get_model_name public
    c1.set_year(2023);
    cout << "c1 year = " << c1.get_year() << endl; // get_year public
    cout << c1 << endl;
    c1.set(c2);
    c1.print();

    while (true) {
        int num = 0;
        cout << "Enter num of cars: ";
        cin >> num;

        if (num <= 0)
            break;

        Car* cc1 = new Car();
        
        vector<Car> carsList(num);

        for (size_t i = 0; i < num; i++) {
            carsList[i].read();
        }
        for (size_t i = 0; i < num; i++) {
            cout << carsList[i] << endl;
        }
        cout << "using different form of the for loop" << endl;
        for (auto obj: carsList) {// obj is an object
            cout << obj << endl;
        } 
        char userDecision;
        cout << "Would you like to conintue? (y/n): ";
        cin >> userDecision;

        if (userDecision == 'n')
            break;
    }

    return 0;
}
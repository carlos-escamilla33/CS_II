#include <iostream>
#include <vector>
#include <string>
#include "Car.h"
using namespace std;

int main(void) {
    cout << "Welcome to Car Program!" << endl;

    string modelName = "Toyota";
    Car c1(modelName, 1990);
    // Car c2, c3;

    // c2.set(modelName, 2007);

    // // cout << c1 << endl;
    // cout << "objects count = " << Car::get_count() << endl;

    return 0;
}
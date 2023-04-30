#pragma once
#include <iostream>
using namespace std;

class Car {
    public:
        Car(); // default constructor (1)
        ~Car(); // default deconstructor (2)
        Car(const Car& c); // assignment operator (3)
        Car& operator=(const Car& c);
        Car(string& modelName, int modelYear);

        // Set functions; modifiers; read/write

    private:
        static int count;
        string make, model;
        unsigned int year;
};
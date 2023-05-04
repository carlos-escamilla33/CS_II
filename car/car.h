#pragma once
#include <iostream>
using namespace std;

class Car {
    // Basic four methods
    public:
        Car(); // default constructor 1
        virtual ~Car(); // default deconstructor 2
        Car(const Car& c); // copy constructor 3
        virtual Car& operator=(const Car& c); // assignment operator 4

        Car(const string& modelName_i, int year_i);

        const string get_model_name() const; 
        int get_year() const;

        void set_model_name(const string& modelName_i);
        void set_year(int year_i);

        private:
            string modelName;
            int year;
};
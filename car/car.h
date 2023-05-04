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
        void set_name(const string& carName);
        void set_year(int carYear);
        virtual void set(const string& carName, int carYear); // a function that can be editied or changed in another class

        // get function; selectors; read only
        //  const means function does not change the object (*this)
        const string& get_name() const;
        int get_year() const;

        // this is not a member (no this); no Person::; no "this" pointer
        // but has access to private members
        friend ostream& operator<< (ostream& os, const Car& p);

        // static(no this)
        static int get_count(); // Car::getCount()

        virtual void read();

        // data
    private:
        static int count;
        string make, model;
        unsigned int year;
};
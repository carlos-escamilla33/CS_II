#pragma once
#include <iostream>
#include "Car.h"
using namespace std;

class Ev: public Car {
    public:
        Ev(); // default constructor 1
        virtual ~Ev(); // default destructor 2
        Ev(const Ev& e); // copy constructor 3
        virtual Ev& operator=(const Ev& e);

        Ev(const string& make_i, unsigned int year_i,
        unsigned int battery_i);

        //getter functions
        const string get_make() const;
        unsigned int get_year() const;

        // set functions
        void set_make(const string& make_i);
        void set_year(const int year_i);
        virtual void set(const string& make_i, unsigned int year_i);
        virtual void set(const string& make_i, unsigned int year_i, unsigned int battery_i);

        virtual void set(const Ev& e);

        // static (no this)
        static unsigned int get_count(); // Ev::get_count()

        // construction
        virtual void read();
        virtual void print() const; // print to screen

        // this is not a member (no this) but has access to private members
        friend ostream& operator << (ostream& os, const Ev& e);

        private:
            // class or static data
            static unsigned int count;
            // instance or object or non-static data
            // do not use it in static methods
            string make;
            unsigned int year;
};
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

        virtual void set(const string& modelName_i, int year_i);
        virtual void set(const Car& c);

        virtual void read();
        virtual void print() const;

        static int get_count();

        friend ostream& operator << (ostream& os, const Car& p);

        private:
            static int count;
            string modelName;
            int year;
};
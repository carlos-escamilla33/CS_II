#include <iostream>
#include <string>
#include "Ev.h"
using namespace std;

// Intialize static data here
unsigned int Ev::count = 0;

Ev::Ev() {
    Car();
    set(" ", 0);
}

Ev::~Ev() {
    count--;
}

Ev::Ev(const Ev& e) {
    Ev::set(e);
    set(e);
    count++;
}

Ev& Ev::operator=(const Ev& e) {
    if (this == &e) {
        return *this;
    }
    Car::operator=(e);
    set(e);
    return *this;
}

Ev::Ev(const string& make_i, unsigned int year_i,
        unsigned int battery_i) {
    Car(make_i, year_i);
    set(make_i, year_i);
    count++;
}

// getfunction
const string Ev::get_make() const {
    
}


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
    return make;
}

unsigned int Ev::get_year() const {
    return year;
}

// this is  not a member; no Ev::; no "this" pointer

ostream& operator << (ostream& os, const Ev& e) {
    os << Car(e) << 
        ", Make = " << e.make << ", year = " << e.year;
    return os;
}

// set functions

void Ev::set_make(const string& make_i) {
    make = make_i;
}

void Ev::set_year(int year_i) {
    year = year_i;
}

void Ev::set(const string& make_i, unsigned int year_i) {
    set_make(make_i);
    set_year(year_i);
}

void Ev::set(const string& make_i, unsigned int year_i, unsigned int battery_i) {
    Car::set(make_i, year_i);
    set(make_i, battery_i);
}

void Ev::set(const Ev& e) {
    Car::set(e);
    set(e.make, e.year);
}

unsigned int Ev::get_count() {
    // no "this" in static; no object
    return count;
}

void Ev::print() const {
    Car::print();
    cout << "Make = " << make << ", year = " << year << ", battery life = " << battery << endl;
}

// read an object from the keyboard and construct it

void Ev::read() {
    string make1;
    int year1 = 1990;

    cin.ignore(); // works with getline to clear end of line
    cout << "Enter the make of the car: ";
    getline(cin, make1);
    // getline used for more than one word
    // cin a string; reads one word
    // cout << "Name = " << name1 << endl;
    cout << "Enter year of car: ";
    cin >> year1;
    Ev::set(make1, year1);

    string make1;
    int battery_life;
    cin.ignore(); // works with getline to clear end of line
    cout << "Enter make of the car: ";
    getline(cin, make1);
    cout << "Enter the battery life of the car: ";
    cin >> battery_life;
    set(make1, year1, battery_life);
}
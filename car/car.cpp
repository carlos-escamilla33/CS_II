#include <iostream>
#include "car.h"
using namespace std;

int Car::count = 0;

Car::Car() {
    set(" ", 0);
    // modelName = " ";
    // year = 0;
    count++;
}

Car::~Car() {
    count--;
}

Car::Car(const Car& c) {
    set(c);
    // set(c.name, p.age);
    count++;
}

Car& Car::operator=(const Car& c) {
    // you have an object *this make it = p;
    // this is a pointer to the current object
    // *this is the object
    if (this == &c) {
        return *this;
    }
    set(c);
    // set(c.name, c.year)
    return *this;
}

Car::Car(const string& modelName_i, int year_i) {
    count++;
}

const string Car::get_model_name() const {
    return modelName;
}

int Car::get_year() const {
    return year;
}

void Car::set_model_name(const string& modelName_i) {
    modelName = modelName_i;
}

void Car::set_year(int year_i) {
    year = year_i;
}

void Car::set(const string& modelName_i, int year_i) {
    set_model_name(modelName_i);
    set_year(year_i);
    // year = year_i
    // modelName = modelName_i
}

void Car::set(const Car& c) {
    set(c.modelName, c.year);
    // modelName = c.modelName
    // year = c.year
}

int Car::get_count() {
    return count;
}

// this is not a member; no Car::; no "this" pointer
ostream& operator << (ostream& os, const Car& c) {
    os << "Model Name = " << c.modelName << ", Year = " << c.year;
    return os;
}

void Car::read() {
    string modelName1;
    int year1;
    cin.ignore(); // works with getline to clear end of line
    cout << "Enter model name of the car: ";
    getline(cin, modelName1);
    // getline used for more than one word
    // cin a string; reads one word
    cout << "Enter year of the car: ";
    cin >> year1;
    set(modelName1, year1);
}

void Car::print() const {
    cout << "Model Name = " << modelName << ", Year = " << year << endl;
}

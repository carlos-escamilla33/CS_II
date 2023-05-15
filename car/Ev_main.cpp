#include <iostream>
#include <vector>
#include "Car.h"
#include "Ev.h"
using namespace std;

int main_car(void)
{
    cout << "Welcome to Car program!" << endl;
    string modelName = "model3";
    Car c1(modelName, 2001);
    Car c2, c3;
    c2.set(modelName, 2002);
    cout << c1 << endl;
    cout << c2 << endl;
    cout << "objects count = " << Car::get_count() << endl;
    cout << c1.get_model_name() << endl;
    c1.set_model_name("ModelY");
    cout << "c1 name= " << c1.get_model_name() << endl;
    c1.set_year(2022);
    cout << "p1 age= " << c1.get_year() << endl;
    cout << c1 << endl;
    c1.set(c2);
    c1.print();
    while (true)
    {
        int num = 0;
        cout << "Enter num of Cars: ";
        cin >> num;
        if (num <= 0)
            break;
        Car *cc1 = new Car();
        vector<Car> ca(num);
        for (size_t i = 0; i < num; i++)
        {
            ca[i].read();
        }
        for (size_t i = 0; i < num; i++)
        {
            cout << ca[i] << endl;
        }
        cout << "using a different form of the for loop" << endl;
        for (auto obj : ca)
        {
            cout << obj << endl;
        }
    }
    return 0;
}
int main_ev(void)
{
    cout << "Welcome to Ev program!" << endl;
    string make = "Tesla";
    Ev e1(make, 2023, 270);
    Ev e2, e3;
    e2.set(make, 2023, 270);
    cout << e1 << endl;
    cout << e2 << endl;
    cout << "objects count = " << Ev::get_count() << endl;
    cout << e1.get_make() << endl;
    e1.set_make("Lexus");
    cout << "e1 make= " << e1.get_make() << endl;
    e1.set_year(20);
    cout << "e1 year= " << e1.get_year() << endl;
    cout << e1 << endl;
    e1.set(e2);
    e1.print();
    while (true)
    {
        int num = 0;
        cout << "Enter num of Evs: ";
        cin >> num;
        if (num <= 0)
            break;
        vector<Ev> ea(num);
        for (size_t i = 0; i < num; i++)
        {
            ea[i].read();
        }
        for (size_t i = 0; i < num; i++) // i is an index
        {
            cout << ea[i] << endl;
        }
    }
    return 0;
}
int main(void)
{
    main_car();
    main_ev();
    return 0;
}

#include <iostream>
using namespace std;

int f2c(int fahrenheit);

int main() {
    
    return 0;
}

int f2c(int fahrenheit) {
    int celcius = (fahrenheit - 32) * (5/9);
    return celcius;
}
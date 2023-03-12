#include <iostream>
#include <iomanip>
using namespace std;

double f2c(double fahrenheit);
void seqsum(int n);

int main() {
    double userTemp;
    double tempInCelsius;
    const int maxnum = 1000;
    int n;
    int i = 0;
    int runningSum;

    cout << "Enter temp in fahrenheit: ";
    cin >> userTemp;
    tempInCelsius = f2c(userTemp);

    cout << setprecision(4) << endl;
    cout << userTemp << " degrees fahrenheit = " << tempInCelsius << " degrees celsius" << endl << endl;

    cout << "Enter number greater than 0: ";
    cin >> n;

    cout << n << ":  ";

    while (n > 0 && n <=1000) {
        if (n < 1 || n > maxnum) {
            break;
        }
        cout << i + 1;
        if (n != 1) {
            cout << " + ";
        }
        runningSum+=n;
        i++;
        n--;
    }
    cout << " = " << runningSum;

    return 0;
}

double f2c(double fahrenheit) {
    double celcius = (fahrenheit - 32) * 0.556;
    return celcius;
}

void seqsum(int n) {

}
#include <iostream>
#include <iomanip>
using namespace std;

int seqsum(int num1, int num2);

int main() {
    int num1;
    int num2;
    int totalSum;
    char userResponse;

    while (true) {
        cout << "Enter two positive integers less than 1000: ";
        cin >> num1;
        cin >> num2;
        if (!(num1 > 0 && num1 < 1000 && num2 > 0 && num2 < 1000)) {
            cout << "Try again! Enter two positive integers less than 1000: ";
            cin >> num1 >> num2;
        }
        totalSum = seqsum(num1, num2);
        cout << "The total is: " << totalSum << endl;
        
        cout << "Do you wish to continue (Y/N)?" << endl;
        cin >> userResponse;
        if (userResponse == 'N') {
            break;
        }

    }

    return 0;
}

int seqsum(int num1, int num2) {
    int i;
    int sum = 0;
    for (i = num1; i <= num2; i++) {
        sum+=i;
    }
    return sum;
}
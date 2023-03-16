#include <iostream>
#include <iomanip>
using namespace std;

bool isTriangle(int side1, int side2, int side3);
bool isRightTriangle(int side1, int side2, int side3);

int main() {
    int num1;
    int num2;
    int num3;
    bool isTri;
    bool isRight;
    char userResponse;

    while (true) {
        cout << "Enter three positive numbers less than 1000: ";
        cin >> num1;
        cin >> num2;
        cin >> num3;
        if (!(num1 > 0 && num1 < 1000 && num2 > 0 && num2 < 1000 && num3 > 0 && num3 < 1000)) {
            cout << "Try again! Enter three positive integers less than 1000: ";
            cin >> num1;
            cin >> num2;
            cin >> num3;
        }
        isTri = isTriangle(num1, num2, num3);
        if (isTri) {
            cout << "The three numbers(sides) form a triangle!" << endl;
            isRight = isRightTriangle(num1, num2, num3);
            if (isRight) {
                cout << "It's also a right triangle!" << endl;
            } else {
                cout << "It's not a right triangle though!" << endl;
            }
        } else {
            cout << "Those numbers dont form a right triangle!" << endl;
        }
        cout << "Do you wish to continue? (Y/N):";
        cin >> userResponse;
        if (userResponse == 'N') {
            break;
        }
    }
    return 0;
}

bool isTriangle(int side1, int side2, int side3) {
    if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2) {
        return true;
    }
    return false;
}

bool isRightTriangle(int side1, int side2, int side3) {
    int a = side1;
    int b = side2;
    int c = side3;
    if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b) {
        return true;
    } 
    return false;
}
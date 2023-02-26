#include <iostream>
#include <cctype>
#include <vector>
#include <string>
using namespace std;

bool isPrime(int n) { // possible refactor of this function
    bool isPrimeNum;
    int size = n;
    int primesCount = 0;

    for (int i = 1; i <= size; i++) {
        if (n % i == 0) {
            primesCount+=1;
        }
    }
    if (primesCount != 2) {
        isPrimeNum = false;
    }

    return isPrimeNum;
}


int main() {
    vector<int> primes_list;
    int userNum;
    string userResponse;

    while (true) {
        cout << "Enter a positive number: ";
        cin >> userNum;
        if (isPrime(userNum)) { // check variable data type
            primes_list.push_back(userNum);
        }
        cout << "Do you want to enter a new number? ";
        cin >> userResponse;
        if (userResponse == "no") { // refactor to be more efficient and clear
            break;
        }
    }

    for (int i = 0; i < primes_list.size(); i++) {
        cout << primes_list[i] << " " << endl;
    }

    return 0;
}


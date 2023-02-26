#include <iostream>
#include <cctype>
#include <vector>
using namespace std;

bool isPrime(int n) {
    int divBy = 1;
    // if (n)
    return 0;
}


int main() {
    vector<int> primes_list;
    int userNum;
    unsigned int i;

    while (true) {
        cout << "Enter a positive number: " << endl;
        cin >> userNum;

        if (isPrime(userNum)) {
            primes_list.at(i) = userNum;
        }
    }
    return 0;
}


#include <iostream>
#include <cctype>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    int maxSize = sqrt(n);
    for (int i = 2; i <= maxSize; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> primes_list;
    while (true) {
        int userNum;
        char userResponse;
        cout << "Enter a positive number: ";
        cin >> userNum;
        for (int i = 1; i <= userNum; i++) {
            bool result = isPrime(i);
            if (result && !(count(primes_list.begin(), primes_list.end(), i))) {
                primes_list.push_back(i);
            }
        }
        cout << "Do you want to enter a new number, type Y or N: ";
        cin >> userResponse;
        if (toupper(userResponse) == 'N') {
            break;
        }
    }
    for (int i = 0; i < primes_list.size(); i++) {
        cout << primes_list[i] << " " << endl;
    }
    return 0;
}

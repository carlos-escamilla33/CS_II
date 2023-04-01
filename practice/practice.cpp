#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numValues;
    unsigned int i;
    vector<double> valsList;

    cout << "Enter vector size: ";
    cin >> numValues;

    valsList.resize(numValues);

    cout << "Enter values for vector 0 and 1 index: ";
    cin >> valsList.at(0);
    cin >> valsList.at(1);

    for (i = 1; i < valsList.size() - 1; i++) {
        double currSum = valsList.at(i - 1) + valsList.at(i);
        valsList.at(i + 1) = currSum;
        cout << currSum << " " << i;
        cout << endl;
    }

    return 0;
}
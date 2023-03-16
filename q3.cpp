#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string f1name;
    string f2name;

    cout << "Enter the name of the input file: ";
    cin >> f1name;
    cout << "Enter the name of the output file: ";
    cin >> f2name;

    ifstream f1;
    ofstream f2;

    f1.open(f1name);
    f2.open(f2name);

    if (!f1.is_open() || !f2.is_open()){
        cout << "Error reading files..." << endl;
        exit(1);
    }
    string myName = "Carlos";
    int letterCounts[26] = {0};
    string line;
    while (getline(f1, line)) {
        for (char c : line) {
            if (isalpha(c)) {
                c = tolower(c);
                letterCounts[c - 'a']+=1;
            }
        }
    }
    for (char c: myName) {
        int count = letterCounts[c - 'a'];
        f2 << c << ": " << count << endl;
        cout << c << ": " << count << endl;
    }

    f1.close();
    f2.close();

    return 0;
}
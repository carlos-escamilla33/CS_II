#include "phone.hpp"

bool isValid(string &line) {
    // char* line = &line[0];
    int alnumCharsCount;
    unsigned int i;
    int size;
    size = line.size();
    alnumCharsCount = 0;
    for (i = 0; i < size; i++) {
        char ch = line.at(i);
        if (isalnum(ch)) {
            alnumCharsCount+=1;
        }
    }
    cout << line << endl;

    return (alnumCharsCount == 10 or alnumCharsCount == 11) ? true : false;
}

// Alphanumeric means consisting of both letters and numbers
//Examples: 800-Beat-Cal ; 1-800.Got.Milk ; 888-IMask.up; 1(800)---got Milk
int main(void) {
    cout << "Welcome to phone assignment!" << endl;
    while(true) {
        string line;
        cout << "Enter a 10-11 digit phone number: " << endl;
        getline(cin, line);
        if (line.empty()) {
            break;
        }
        if (!isValid(line)) {
            cout << "You typed an invalid US phone number: " << endl;
            continue;
        }
        break;
    }
    
    return 0;
}
#include "phone.cpp"

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
        toNumeric(line);
        punctsToSpaces(line);
        removeSpaces(line);
        formatNumber(line);
        cout << "Number = " << line << endl;
        break;
    }
    
    return 0;
}
#include "phone.hpp"

bool isValid(string &line) {
    int size = line.size() + 1;
    char charArr[size];
    strcpy(charArr, line.c_str());
    unsigned int i;
    int alnumCharsCount = 0;

    for (i = 0; i < size; i++) {
        char ch = charArr[i];
        if (isalnum(ch)) {
            alnumCharsCount+=1;
        }
    }

    return (alnumCharsCount == 10 or alnumCharsCount == 11) ? true : false;
}

char phone_digit(char ch) {
    if (!isalpha(ch)) {
        return ch;
    }
    ch = tolower(ch);

    char digit;

    switch(ch) {
        case 'a':
        case 'b':
        case 'c':
            digit = '2';
            break;
        case 'd':
        case 'e':
        case 'f':
            digit = '3';
            break;
        case 'g':
        case 'h':
        case 'i':
            digit = '4';
            break;
        case 'j':
        case 'k':
        case 'l':
            digit = '5';
            break;
        case 'm':
        case 'n':
        case 'o':
            digit = '6';
            break;
        case 'p':
        case 'q':
        case 'r':
        case 's':
            digit = '7';
            break;
        case 't':
        case 'u':
        case 'v':
            digit = '8';
            break;
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            digit = '9';
            break;
    }

    return digit;

}

void toNumeric(string &line) {
    int size = line.size();
    unsigned int i;

    for (i = 0; i < size; i++) {
        line[i] = phone_digit(line[i]);
    }
    return;
}

void punctsToSpaces(string &line) {
    int size = line.size();
    unsigned int i;

    for (i = 0; i < size; i++) {
        if (ispunct(line[i])) {
            line[i] = ' ';
        }
    }
    return;
}

void removeSpaces(string &line) {
    line.erase(
        remove(line.begin(), line.end(), ' '),
        line.end()
    );
    return;
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
        toNumeric(line);
        punctsToSpaces(line);
        removeSpaces(line);
        cout << "Number = " << line << endl;
        break;
    }
    
    return 0;
}
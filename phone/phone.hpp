#pragma once

#include <iostream>
#include <string>
#include <cstdbool> // for true or false
#include <cctype> //https://www.cplusplus.com/reference/cctype/
using namespace std;

bool isValid(string &line);
char phone_digit(char ch);
void toNumeric(string &line);
void puncts_to_spaces(string &line);
void removeSpaces2(string &line);
void remove_spaces(string &line);
void formatNumber2(string &line);
void format_number(string &line);

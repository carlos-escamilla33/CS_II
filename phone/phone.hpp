#pragma once

#include <iostream>
#include <string>
#include <cstdbool> // for true or false
#include <cctype> //https://www.cplusplus.com/reference/cctype/
using namespace std;

bool isValid(string &line);
char phone_digit(char ch);
void toNumeric(string &line);
void punctsToSpaces(string &line);
void removeSpaces(string &line);
void formatNumber(string &line);

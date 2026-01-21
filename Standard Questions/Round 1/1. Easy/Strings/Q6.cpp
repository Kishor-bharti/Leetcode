// Convert string to lowercase / uppercase
#include <iostream>
#include <cctype>
using namespace std;

string toUpperCase(string s) {
    for (char &c : s) {
        c = toupper(c);
    }
    return s;
}

string toUpperCase(string s) {
    for (char &c : s) {
        c = toupper(c);
    }
    return s;
}

transform(s.begin(), s.end(), s.begin(), ::tolower);
transform(s.begin(), s.end(), s.begin(), ::toupper);
// need algorithms import!
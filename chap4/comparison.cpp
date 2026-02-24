/*
A program that determines whether two strings equal
*/
#include <iostream>
#include <cctype>
#include <string>
#include <cstring> // for strcmp
using namespace std;

int main() {
    string str1, str2, lower_str1, lower_str2;

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    // Convert to lowercase
    for (char c : str1) lower_str1 += tolower(c);
    for (char c : str2) lower_str2 += tolower(c);

    // Compare using strcmp
    int result = strcmp(lower_str1.c_str(), lower_str2.c_str());

    if(result == 0)
        cout << "Strings are equal" << endl;
    else if(result < 0)
        cout << "First string is less than second" << endl;
    else
        cout << "First string is greater than second" << endl;

    return 0;
}

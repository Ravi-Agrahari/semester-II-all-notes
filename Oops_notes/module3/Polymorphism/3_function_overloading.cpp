/*
Introduction and Explanation:
Function overloading allows defining multiple functions with the same name but different parameters within the same scope.

Example Programs (in C++):
*/

#include <iostream>
using namespace std;

void print(int i) {
    cout << "Printing int: " << i << endl;
}

void print(double f) {
    cout << "Printing float: " << f << endl;
}

void print(string s) {
    cout << "Printing string: " << s << endl;
}

int main() {
    print(10);
    print(5.6);
    print("Hello");
    return 0;
}

/*
Applications:
- Enhancing code readability and usability by using the same function name for similar operations.
- Simplifying function interfaces.

Summary:
Function overloading allows multiple functions with the same name but different parameters, improving code readability and usability.
*/

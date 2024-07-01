/*
Introduction and Explanation:
Operator overloading allows customizing the behavior of operators for user-defined types, enabling intuitive operations on objects.

Example Programs (in C++):
*/

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;
public:
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator + (const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.4, 5.6), c2(1.2, 3.8);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}

/*
Applications:
- Enhancing the intuitive use of user-defined types.
- Enabling arithmetic and logical operations on custom objects.

Summary:
Operator overloading allows customizing the behavior of operators for user-defined types, improving the intuitive use and readability of code.
*/

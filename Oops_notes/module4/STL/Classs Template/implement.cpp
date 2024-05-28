

/*
syntax :--

**outside main

template < class type1 , class type2 ,...>
class ClassName {
    body of the class
}

**inside main

ClassName < datatype > objectName (parameter-list);


*/

#include <iostream>  // Include the library for input and output
using namespace std; // Use the standard namespace

// Template class for swapping values of any type
template <class type>
class Swapper
{
public:
    type a; // First value
    type b; // Second value

    // Constructor to initialize values
    Swapper(type a, type b)
    {
        this->a = a;
        this->b = b;
    }

    // Method to swap the values
    void swap()
    {
        type temp = a;
        a = b;
        b = temp;
    }

    // Method to display the values
    void display()
    {
        cout << "The first number is " << a << endl;
        cout << "The second number is " << b << endl;
    }
};

// Template class for storing student information
template <class type1, class type2> // multiple parameter ...
class student
{
public:
    type1 name;   // Student's name
    type2 rollNo; // Student's roll number

    // Constructor to initialize values
    student(type1 name, type2 rollNo)
    {
        this->name = name;
        this->rollNo = rollNo;
    }

    // Method to display the student's information
    void display()
    {
        cout << "The name of the student is " << name << endl;
        cout << "The roll number of the student is " << rollNo << endl;
    }
};

// template withc default parameter
template <class type1=int , class type2=float , class type3=char >
class DummyClass
{
public:
    type1 a;
    type2 b;
    type3 c;

    DummyClass(type1 a, type2 b, type3 c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    // Method to display the values
    void display()
    {
        cout << "The first number is " << a << endl;
        cout << "The second number is " << b << endl;
        cout << "The third number is " << c << endl;
    }
};

int main(void)
{
    Swapper<int> s(10, 20); // Create a Swapper for integers

    cout << "Before swapping : " << endl;
    s.display(); // Display initial values
    s.swap();    // Swap the values
    cout << "After swapping : " << endl;
    s.display(); // Display swapped values
    
    cout << endl ;

    Swapper<float> s1(10, 20); // Create a Swapper for floats

    cout << "Before swapping : " << endl;
    s1.display(); // Display initial values
    s1.swap();    // Swap the values
    cout << "After swapping : " << endl;
    s1.display(); // Display swapped values

    cout << endl ;

    // Create students with names and roll numbers
    student<string, float> stud1("Ravi", 123);
    student<string, float> stud2("Bishal", 125);

    stud1.display(); // Display first student's information
    stud2.display(); // Display second student's information

    cout << endl ; 

    DummyClass<> c1(10,12.5,'6');
    c1.display();

    cout << endl ;

    DummyClass<char , int ,float > c2('m',12,6.5);
    c2.display();

    return 0; // End of the main function
}

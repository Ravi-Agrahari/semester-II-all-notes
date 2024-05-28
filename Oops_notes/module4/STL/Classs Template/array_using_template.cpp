#include <iostream>
using namespace std;

// Forward declaration of the template class Array
template <class type>
class Array;

// Declaration of the friend function sumArrayElement as a template function
template <class type>
void sumArrayElement(Array<type>& obj);

// Definition of the template class Array
template <class type>
class Array {
    type* arr;
    int size;

public:
    Array(); // Constructor
    ~Array(); // Destructor
    void displayArrayElement(); // Member function
    friend void sumArrayElement<type>(Array<type>&); // Friend function declaration
};

template <class type>
Array<type>::Array() {
    cout << "Enter the size of arr: ";
    cin >> size;
    arr = new type[size];
    cout << "Enter the elements of arr: ";
    for (int i = 0; i < size; i++) {
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }
}

template <class type>
Array<type>::~Array() {
    delete[] arr; // Free allocated memory
}

template <class type>
void Array<type>::displayArrayElement() {
    cout << "The elements of arr are: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i << ": " << arr[i] << endl;
    }
}

// Definition of the friend function sumArrayElement as a template function
template <class type>
void sumArrayElement(Array<type>& obj) {
    type sum = 0;
    for (int i = 0; i < obj.size; i++) {
        sum += obj.arr[i];
    }
    cout << "Sum of array elements: " << sum << endl;
}

int main() {
    Array<int> arr1;
    arr1.displayArrayElement();
    sumArrayElement(arr1);
    return 0;
}

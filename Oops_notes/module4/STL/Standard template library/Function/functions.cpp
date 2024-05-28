#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // For predefined function objects like std::plus, std::greater
using namespace std;

/*

    Definition:
    
        A function object, or functor, is any object that can be used with the syntax of a function call. It is created by overloading the operator().



    Note:

    - Function objects are objects of a class that overload the operator().

    - They can maintain state and can be passed as arguments to algorithms.

    - The STL provides several predefined function objects, like std::plus, std::minus, std::multiplies, std::divides, std::modulus, std::negate, std::equal_to, std::not_equal_to, std::greater, std::less, std::greater_equal, and std::less_equal.

    - Custom function objects can be created by defining a class with the operator().
*/

// Custom function object that multiplies a number by a given factor
class MultiplyBy {
    int factor;
public:
    MultiplyBy(int f) : factor(f) {}
    int operator()(int x) const {
        return x * factor;
    }
};

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Using a custom function object
    cout << "Elements multiplied by 3 using custom function object:" << endl;
    MultiplyBy mult3(3);
    for_each(v.begin(), v.end(), [&mult3](int &n) { n = mult3(n); });
    for (int n : v) {
        cout << n << " "; // Output: 3 6 9 12 15
    }
    cout << endl;

    // Using predefined function objects
    vector<int> v2 = {1, 2, 3, 4, 5};
    cout << "Elements added by 5 using std::plus:" << endl;
    transform(v2.begin(), v2.end(), v2.begin(), bind(std::plus<int>(), placeholders::_1, 5));
    for (int n : v2) {
        cout << n << " "; // Output: 6 7 8 9 10
    }
    cout << endl;

    // Sorting using std::greater
    vector<int> v3 = {3, 1, 4, 1, 5, 9};
    sort(v3.begin(), v3.end(), std::greater<int>());
    cout << "Sorted elements in descending order using std::greater:" << endl;
    for (int n : v3) {
        cout << n << " "; // Output: 9 5 4 3 1 1
    }
    cout << endl;

    return 0;
}

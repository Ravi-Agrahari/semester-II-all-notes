/*
Introduction and Explanation:
Aggregation represents a "has-a" relationship between objects. It is a type of association where one class contains objects of another class, but both can exist independently.

Example Programs (in C++):
*/

#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started" << endl;
    }
};

class Car {
private:
    Engine engine; // Car "has-a" Engine
public:
    void start() {
        engine.start();
        cout << "Car started" << endl;
    }
};

int main() {
    Car myCar;
    myCar.start();
    return 0;
}

/*
Applications:
- Modeling real-world relationships in code.
- Creating complex objects composed of simpler objects.

Summary:
Aggregation models "has-a" relationships between classes, allowing the composition of complex objects from simpler ones.
*/

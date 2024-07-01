#include <iostream>
#include <vector>
#include <list>
#include <set>
using namespace std;

/*
    Definition:

        Iterators are objects that point to elements within a container and provide a way to traverse through the elements of the container.

    Note:

        - Iterators are similar to pointers but are more powerful and versatile.
        
        - They are used to iterate over a container (like vector, list, set, etc.).

        - There are several types of iterators: input iterators, output iterators, forward iterators, bidirectional iterators, and random-access iterators.

        - Common operations with iterators include incrementing (++), dereferencing (*), and comparing (==, !=).

    


    Types of Iterators:

        1. Input Iterator: Reads elements (e.g., istream_iterator).
        2. Output Iterator: Writes elements (e.g., ostream_iterator).
        3. Forward Iterator: Reads and writes elements, supports single-pass algorithms (e.g., forward_list).
        4. Bidirectional Iterator: Like forward iterator, but can be iterated in both directions (e.g., list, set).
        5. Random-Access Iterator: Supports bidirectional iteration and allows jumping to any element in constant time (e.g., vector, deque).
*/

int main() {

// Example using vector (Random-Access Iterator)

    vector<int> v = {10, 20, 30, 40, 50};
    cout << "Vector elements using iterator:" << endl;\

    vector<int>::iterator it ; //declaration of iterator
    for (it = v.begin(); it != v.end(); ++it) {
        cout << *it << " "; // Output: 10 20 30 40 50
    }
    cout << endl;


// this is so important , improvement made in c++11 ... 

    // range based looping // simple , sweet and short ... // can be used in every container 
        for(int val : v ){ 
            cout << val << " ";    
        }
        cout << endl;

        // but val is copy of elements, so we can uses reference , if we want real values :)
        for(int &val : v ){
            val++ ; // each element will be incremented by 1 
            cout << val << " "; 
        }
        cout << endl;


    // using auto keyword ... 
    // auto keyword is used to declare variables of any type , it will automatically detect the datatype of variable ... 

        for(auto it = v.begin() ; it!= v.end() ; it++){ // here we need not to declare iterator ... 
            cout << *it << " ";
        }

        // we can use auto with range based loop also 
        for(auto val : v){
            cout << val << " ";
        }



// Example using list (Bidirectional Iterator)

    list<int> l = {10, 20, 30, 40, 50};
    cout << "List elements using iterator:" << endl;
    for (list<int>::iterator it = l.begin(); it != l.end(); ++it) {
        cout << *it << " "; // Output: 10 20 30 40 50
    }
    cout << endl;

// Example using set (Bidirectional Iterator)

    set<int> s = {50, 10, 40, 20, 30};
    cout << "Set elements using iterator:" << endl;
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
        cout << *it << " "; // Output: 10 20 30 40 50
    }
    cout << endl;

    
// Example modifying elements using iterator
    cout << "Vector elements after modification using iterator:" << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        *it += 10;
        cout << *it << " "; // Output: 20 30 40 50 60
    }
    cout << endl;

// Example using reverse iterator
    cout << "Vector elements using reverse iterator:" << endl;
    for (vector<int>::reverse_iterator rit = v.rbegin(); rit != v.rend(); ++rit) {
        cout << *rit << " "; // Output: 60 50 40 30 20
    }
    cout << endl;

// using iterator with vector of pair 
    vector<pair<int, int>> v1 = {{10, 20}, {30,40} ,{50,60}} ;
    cout << "Vector of pair elements using iterator:" << endl;
    vector<pair<int,int>> :: iterator iter ; 
    for (iter = v1.begin(); iter != v1.end(); ++iter) {
        // cout << (*iter).first << " " << (*iter).second << endl;
        cout << iter->first << " " << iter->second << endl ; 
    }
    


    return 0;
}

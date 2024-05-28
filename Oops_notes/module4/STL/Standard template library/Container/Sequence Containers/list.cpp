/*
    Definition:
        ->   (std::list) is a doubly linked list container that allows fast insertion and deletion at any position. It provides bidirectional iterators and does not invalidate iterators or references to elements upon insertion or deletion.

    Note:

    -> Unlike vectors and deques, std::list does not provide random access to elements. Instead, it provides constant-time insertion and deletion operations at the beginning, middle, and end of the list.

    -> It's suitable for scenarios where frequent insertion and deletion operations are performed, but random access is not required.

*/

#include <iostream>
#include <list>
using namespace std;

// fuction to diplay the list 
void display(list<int> &lst){

// Print elements using iterators
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        cout << " " << *it;
    }
    cout << endl ;
}


int main() {
    
// Declare and initialize a list of integers
    list<int> lst = {1, 2, 3, 4, 5,25,22,43,75,63};

// Insert element at the beginning
    lst.push_front(0);

// Insert element at the end
    lst.push_back(6);

// Insert element at position 3
    auto it = lst.begin();
    advance(it, 3);
    lst.insert(it, 10);

// Print elements using range-based for loop
    cout << "Elements of the list:";
    for (int x : lst) {
        cout << " " << x;
    }
    cout << endl;

// Remove element at position 2
    it = lst.begin();
    advance(it, 2);
    lst.erase(it);


//Remove element based on value 
    lst.remove(3);
    cout << "Elements of the list after erasing and removing 3 :";
    display(lst);

    lst.pop_back() ; // to remove element from front
    lst.pop_front() ; // to remove element from last 

    cout << "Elements of the list after removing first and last elements :";
    display(lst);


//sorting the list 
    lst.sort() ;// to sort the list in ascending order
    cout << "Sorted list :";
    display(lst);


//merging the list 
    list<int> lst2 = {100,200,300,400,500};
    lst.merge(lst2) ; // to merge the list lst2 with lst
    cout << "Merged list :";
    display(lst);


//reversing the list 
    lst.reverse() ; // to reverse the list
    cout << "Reversed list :";
    display(lst);

// Access front and back elements
    cout << "First element: " << lst.front() << endl;
    cout << "Last element: " << lst.back() << endl;

// Check if list is empty
    if (lst.empty()) {
        cout << "List is empty." << endl;
    } else {
        cout << "Size of the list: " << lst.size() << endl;
    }

    return 0;
}

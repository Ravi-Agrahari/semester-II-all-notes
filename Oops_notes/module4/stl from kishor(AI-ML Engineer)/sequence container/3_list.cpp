/*

    List:
    -----

    -> list is a doubly linked list that allows faster inseration and deletion at any position.
    -> It is not randomly accessable and generally, less friendly to memory , compare vector.


    KEY FEATURES 
    ------------
        -> dynamic size 
        -> no random access 
        -> more memory usage towards pointer 

    Syntax:
    -------
        std::list<type> name;

    Important functions:
    -------------------
    -> push_back() : adds element at the end
    -> push_front() : adds element at the beginning
    -> insert() : inserts element at specified position
    -> erase() : removes element at specified position
    -> size() : return size of list
    -> empty() : return 1 if list is empty 
    -> front() : returns the first element
    -> back() : returns the last element


*/


#include<iostream>
#include<list>

using namespace std ;

int main(void){
    list<int> mylist ;

    // inserting elements ... 
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);

    mylist.push_front(1000);


    // inserting element at position 2
    list<int>::iterator it = mylist.begin();
    it++;
    mylist.insert(it, 500);


    // printing the list 
    for(int num : mylist){
        cout << num << " ";
    }
    cout << endl; 

    // printing the front element 
    cout << "Front element: " << mylist.front() << endl;

    // printing the last element 
    cout << "Back element: " << mylist.back() << endl;


    
return 5;  // note we can return any value ...

}
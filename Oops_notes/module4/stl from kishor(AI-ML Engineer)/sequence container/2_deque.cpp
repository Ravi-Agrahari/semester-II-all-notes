/*

Deque:
------
    -> It is mainly target toward insertion and deletion at (start , end )
    -> This make fast addition or deletion from both end efficienctly 
    -> It is implemented using Doubly Linked List

    KEY FEATURE 
    -----------
    - Dynamic Size 
    - Time complexity : O(n) for traversal.
    - Elements are stored continguously in a vector , support random access 

    IMPORTANT FUNCTIONS :
    -------------------
    - push_back() : Add element at the end
    - push_front() : Add element at the start
    - pop_back() : Remove element from the end
    - pop_front() : Remove element from the start
    

Syntax:
    std:: deque <data_type>  name ;

*/


#include<iostream>
#include<deque>

using namespace std ;

int main(void){
    deque<int> d = {10,20,30} ;

    // inserting in front 
    d.push_front(5);

    // inserting in back
    d.push_back(10);

    // printing the data .. 
    // for(auto i = d.begin(); i != d.end(); i++){
    //     cout << *i << " ";
    // }

    for(int i : d){
        cout << i << " ";
    }
    cout << endl ;



return 0;
}
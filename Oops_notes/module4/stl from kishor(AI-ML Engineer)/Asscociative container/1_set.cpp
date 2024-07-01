
/*
    SET
    ----
    
    -> SET is a collection of unique elements.
    -> It is an ordered collection of elements.

    KEY FEATURES
    ------------

    -> automatically sort the element
    -> automatically remove duplicate elements
    -> faster search, insertion and deletion operations, Time Complexity : O(log n )

    SYNTAX:
    ------
        std::set<type> name ;

*/


#include<iostream>
#include<set>

using namespace std ;

int main(void){
    set<int> mySet = {10,10,10,90,90,90,60,60,70,70} ;

    mySet.insert(15);
    mySet.erase(70);

    // printing the elements of set 
    for(int num : mySet){
        cout << num << " ";
    }

    
return 0;
}
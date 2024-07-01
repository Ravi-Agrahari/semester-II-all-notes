/*

    Multiset
    ---------
        -> The elements in a multiset are sorted in ascending order.
        -> The multiset does allow duplicate element.

    KEY FEATURES
    ------------
        -> store multiple intances of element 
        -> automatically sorts the element 
        -> no random access 

*/


#include<iostream>
#include<set>
using namespace std ;

int main(void){
    multiset<int> m ;
    m.insert(10);
    m.insert(20);
    m.insert(10);
    m.insert(30);
    m.insert(20);

    for(int num : m ){
        cout << num << " ";
    }
    
    
return 0;
}
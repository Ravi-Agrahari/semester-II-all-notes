/*
    Vector 
    -------
        -> Vector is an dynamic array 
        -> That can resize itself automatically ... 
        -> it provide random access to element.
        -> is one of the commonly used in c++ , due to it's flexibility and key uses 

        KEY FEATURES :
            - Dynamic size 
            - Provide fast random access... 
            - Time Complexity is O(1)
            - Elements are stored in continguous memeory 

        SOME IMPORTANT FUNCTIONS OF VECTOR 

            -size()  -> provide the number of elements 
            -push_back() -> add element at the end
            -pop_back() -> remove element from the end
            -begin() -> Provide a reference to first element 
            -end() -> Provide a reference to last element
            -at() -> Provide a reference to element at specific position



    Syntax : 
        std::vector<data_type> name;
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Creating a vector
    vector<int> vec = {10,20,30,40,50,60} ;

    // inserting one more element at last 
    vec.push_back(70);

    //Printing the element of the vector 

    // method 1 
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl ; 

    // method 2
    for(int num : vec){
        cout << num << " ";
    }
    cout << endl ; 

    // method 3 , using iteratror
    vector<int>::iterator it;
    for( it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }

    return 0 ; 
}
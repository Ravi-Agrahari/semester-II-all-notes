
/*
    Stack:
    ------
        -> Last in first out (LIFO)
        -> Elements are added and removed from the top of the stack

        KEY FEATURES:
        ------------
            -> provide push() , pop() and top() operation
            -> no iteration or random access 
            -> elements are added and removed from the top



        Syntax:
        -------
            std::stack <data_type> name ;

*/


#include<iostream>
#include<stack>

using namespace std ;

int main(void){

// declaring stack 
    stack<int> st ; 

// inserting element in stack 
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(10);
    st.push(20);
    st.push(30);   

// removing element from stack 
    st.pop();

// printing the element in the stack 
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }


// we can't do like this 
    // for(int num : st){
    //     cout << num << " ";
    // }

// we can't use iterator 
    // for(auto it= st.begin() ;  it != st.end() ; it++ ){
    //     cout << *it << " ";
    // }



return 0;
}


/*

    Lamda function
    --------------

        -> convient way to define an anoymous function in an object in line 
        -> lamda function are expression,that can capture variables from the surrounding scope 
        -> and provide the easiest way to define sort and single use functions 


        KEY FEATURE : 
        ------------
            -> Inline function defination
            -> Anonymous function
            -> variable capture 
            -> flexiblity

        

*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(void){

    vector <int > vec = {10,20,30,40,50};

    // simple lamda function 
    auto print = [](int value){
        cout << value << " ";
    };


    // printing the element of vector usign lamda function 
    for_each(vec.begin() ,vec.end() ,  print) ;

    
return 0;
}
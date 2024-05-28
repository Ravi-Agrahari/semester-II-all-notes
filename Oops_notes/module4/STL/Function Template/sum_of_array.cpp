
#include<iostream>
using namespace std ;

template<class type> 

type sum(type* arr , int size){

    type sum = 0 ; 
    for(int i = 0 ; i < size ; i++ ){
        sum += arr[i];
    }
    return sum  ; 

}

int main(void){

    int arr[] = {10,20,30,40,50}; 
    cout << "sum = " << sum(arr ,5) << endl ;  
    float float_arr[] = {1.6,20.5,30.4,40.2,50.7}; 
    cout << "sum = " << sum(float_arr ,5) << endl ;  
return 0;
}
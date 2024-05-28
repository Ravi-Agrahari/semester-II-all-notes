
#include<iostream>
using namespace std ;

template <class type> 

type fact(type num){
    if(num == 0 || num == 1 )
        return 1 ; 
    else
        return num * fact(num-1);
}

int main(void){
    cout << fact(10.253) ; 
return 0;
}
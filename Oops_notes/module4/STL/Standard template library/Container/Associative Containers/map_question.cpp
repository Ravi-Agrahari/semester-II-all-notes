/*
    Given N string , print unique string in lexiographical order with their frequency
    N <= 10^5
    |s| <= 100

    INPUT
        8
        cdef
        abcd
        abcd
        cdef
        cdef
        mno
        mno
        xyz

    OUTPUT
        abcd 2
        cdef 3
        mno 2
        xyz 1


*/


#include<iostream>
#include<map>
using namespace std ;

int main(void){
    int n;
    cin >> n ;
    map<string , int > m ; 

    // to take n strings and store it in map  
    for (int i = 0; i < n; i++)
    {
       string s ;
       cin >> s ;
       m[s]++ ;  // increment val if given string key ... // understand it's easy 
    }


    cout << "Count of string in lexicographical order : " << endl ;

    for(auto &pair : m ){
        cout << pair.first << " " << pair.second << endl ;
    }

return 0;
}
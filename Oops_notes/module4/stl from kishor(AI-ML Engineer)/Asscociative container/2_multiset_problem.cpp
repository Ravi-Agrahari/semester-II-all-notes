/*

    Program that reads a list of integers from the user , stroes them in  a multiset , ant then prints each unique number along with it's count (frequency)

    Input :
    2 3 2 4 3 2 5

    Output:

    Number 2 appears 3 times 
    Number 3 appears 2 times
    Number 4 appears 1 times
    Number 5 appears 1 times

*/


#include<iostream>
#include<set>
using namespace std ;

int main(void){

    set<int> s; 

    cout << "Write -1 to exit : " << endl ;
    while(true){
        int num ; 
        cin >> num ;
        if(num == -1) break ;
        s.insert(num) ;
    }

    for(int i : s){
        cout << "Number" << i 
    }
    

    
return 0;
}
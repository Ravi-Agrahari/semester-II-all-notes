
/*
    program that reads a list of words from the user stores them in a set to remove duplicates, an then prrints the unique words in alphabetical order.

    Input:
        apple orange banna apple grape orange 

    Output: 
        Unique words : apple banana grape orange 

*/


#include<iostream>
#include<set>
using namespace std ;

int main(void){

    set<string> fruits ; 

    cout << "Write -1 to exit : " << endl ;
    while(true){
        string fruit ;
        cout << "Enter fruit :" ;
        cin >> fruit ;
        if(fruit == "-1") break ;
        fruits.insert(fruit) ;
    }

    cout << "Unique words :" ;
    for(string word : fruits){
        cout << word << " " ;
    }




    
return 0;
}
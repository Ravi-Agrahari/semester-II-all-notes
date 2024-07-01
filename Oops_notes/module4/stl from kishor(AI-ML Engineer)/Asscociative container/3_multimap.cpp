/*

    multimap:
    ---------

        -> multimap is similar to map , it allow multiple key-value pairs... 
        -> it is also sorted by key...
        -> multimap allow duplicate keys 

        KEY FEATURES:

            -> store multiple key-value pair based on same key... 
            -> keys are automatically sorted 
            -> allow traversal in sorted order of keys 

        Syntax:
            std::multimap<data_type> name ;

*/




#include<iostream>
#include<map>
using namespace std ;

int main(void){

// declaring a multimap
    
    multimap <int,string> myMap = {{0 , "zero"}, {0 , "zero"}, {10 , "zero"}} ;

    
// inserting key-value

    //method 1 
    // myMap.insert(pair<int,string>(1,"one")); // or
    myMap.insert({1,"one"}) ;

    //method 2
    // myMap[2]="two";  // note we cann't use this method here in multimap 

    //method 3
    myMap.insert(make_pair(3,"three"));

    // method 4
    myMap.emplace(4,"four");

    // method 5
    myMap.emplace_hint(myMap.begin(),5,"five");

// printing the key-value pairs of map 

    // method 1 
    for(pair item : myMap){
        cout << item.first << " : " << item.second << endl ;
    }

    // method 2
    // for(auto it = myMap.begin() ; it != myMap.end() ; it++){
    //     cout << it->first << " : " << it->second << endl ;
    // }

    // method 3  , using reference ... 
    // for(const auto &pair : myMap){
    //     cout << pair.first << " : " << pair.second << endl ;
    // }


    
return 0;
}
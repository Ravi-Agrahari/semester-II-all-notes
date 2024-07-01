/*
    unordered map is almost same as map .... 

    but , let 's see the difference 
    1. unordered map is not sorted
    2. unordered map is faster than map
    3. unordered map is used when we don't need to sort the elements

    # implementation 
        - unordered map uses hash table for implementation 

    # time complexity 
        - insertion : O(1)
        - deletion : O(1)
        - search : O(1)
        - iteration : O(n)
        - size : O(1)
        - empty : O(1)
        - clear : O(1)
        - find : O(1)
        - count : O(1)
        - lower_bound : O(1)
    
        

*/


#include<iostream>
#include<unordered_map>
using namespace std ;

int main(void){
    unordered_map<int,int> umap ;
    umap[1] = 10 ;
    umap[2] = 20 ;
    umap[3] = 30 ;
    umap[4] = 40 ;
    for(auto &pair : umap){
        cout << pair.first << " " << pair.second << endl ;
    }
return 0;
}
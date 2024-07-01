/*
Program to read unknown number of integers from user , until they enter a negative number , store them in vector and then prints the sum of the elements in the vector. 

Test case :

3 5 2 4 -1

output 
Sum of the elements in the vector is: 11
*/

#include<iostream>
#include<vector>
using namespace std ;

int main(void){
    int num ;
    vector<int> vec ;
    cout << "Enter integers (enter a negative number to stop):" ;
    while(true){
        cin >> num ;
        if(num < 0){
            break ;
        }
        vec.push_back(num) ;
    }
    int sum = 0 ;
    for(int i = 0 ; i < vec.size() ; i++){
        sum += vec[i] ;
    }
    cout << "Sum of the elements in the vector is: " << sum << endl ;

   


return 0;
}

#include<iostream>
using namespace std ;

// using template is not necessary but for practice , I know template :)

template <class T1 , class T2>
void display(pair<T1,T2> p){
    cout << "{" << p.first << ", " << p.second << "}" << endl ; 
}


int main(void){

// declaration of pair ... 

    // method 1 ... 
    pair<int,string> p ; 
    p.first = 10;
    p.second = "Hello" ;
    display(p) ;
    

    // method 2 
    pair<string , int > p1 ; 
    p1 = make_pair("Ravi",123) ; 
    display(p1) ;

    //method 3 
    pair<string,int> p2 = {"Bishal" , 1};
    display(p2);


// I know the idea of referencing , we can use this here also ... 

    // pair<string,int> p3 = p2 ;
    // p3.first = "Awadesh" ; // this not not change in p2 

    pair<string,int> &p3  = p2 ; 
    p3.first = "Awadesh" ; // this will change in p2
    display(p2) ;

// array of pairs ... 
    pair<int,int> p_array[4] ; 
    p_array[0] = make_pair(1,2) ;
    p_array[1] = make_pair(3,4) ;
    p_array[2] = make_pair(5,6) ;
    p_array[3] = make_pair(7,8) ;

    for(int i = 0 ; i < 4 ; i++){ 
        display(p_array[i]) ;
    }


// taking value from user in pair .. 
    pair<int,int> p4 ;
    cout << "Enter the value of first and second element of pair : " << endl ;
    cin >> p4.first >> p4.second ; // this is how we can simply take input form user ... 
    display(p4) ;


return 0;
}
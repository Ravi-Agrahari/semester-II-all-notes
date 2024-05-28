
 
 #include<iostream>
 using namespace std ;

 template < class type > 
 type sum(type x , type y ){
    return x+y ;
 }


// we can overload the function like this .... 
 template <class type> 
type sum(type x , type y ,type z){
    return  x+y+z  ; 
 }
 
 int main(void){
    
    cout << "int sum 2 value is " << sum(10,20) << endl ;
    cout << "int sum 3 value is " << sum(10,20,80) << endl ;
    cout << "float sum 2 value is " << sum(10.5,20.4) << endl ;
    cout << "float sum 3 value is " << sum(10.6,20.2,50.45) << endl ;

 return 0;
 }
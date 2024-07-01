/*
    Program that simulates a double ended queue (deque)

Example :

    Input 
        add_front 10 
        add_back 20
        add_front 5
        remove_back 
        display 

    Output

        Current deque : 5 10 

*/


#include<iostream>
#include<deque>

using namespace std ;

int main(void){
    deque<int> dq ;
    string choice ;
    while(choice != "display"){
        cout << "Enter your choice (add_front, add_back, remove_front, remove_back) : " ;
        cin >> choice ;
        
        if(choice == "add_front"){
            int num ; 
            cin >> num ;
            dq.push_front(num) ;
        }
        else if(choice == "add_back"){
            int num ;
            cin >> num ; 
            dq.push_back(num) ;
        }
        else if(choice == "remove_back"){
            if(dq.empty()){
                cout << "Deque is empty. Cannot remove element.\n" ;
            }
            else{
                dq.pop_back() ;
            }
        }
        else if(choice == "remove_front"){
            if(dq.empty()){
                cout << "Deque is empty. Cannot remove element.\n" ;
            }
            else{
                dq.pop_front() ;
            }
        }
        else if(choice == "display"){
            cout << "Current deque : " ;
            for(int i : dq){
                cout << i << " " ;
            }
            cout << "\n" ;
        }
    } 

return 0;
}
/*
    Here we will see 
        - vector of pair 
        - array of vector 
        - nested vector and other staffs (vector of vector)

*/


#include<iostream>
#include<vector>
using namespace std ;

// function to print vector of pair 
void printVectorOfPair(vector<pair<int,int>> vec){
    for(int i = 0 ; i<vec.size() ; i++){
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
    cout<<endl; 

}

// function to print vector
void printVector(vector<int> vec){
    for(int i = 0 ; i<vec.size() ; i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl ;
}


int main(void){

// vector of pair declaration 

    // method 1 
    vector<pair<int,int>> v;
    v.push_back({1,2});
    v.push_back({3,4});
    v.push_back({5,6});
    printVectorOfPair(v);

    // method 2
    vector<pair<int,int>> v1 = {{1,2},{2,4},{3,9}} ;
    printVectorOfPair(v1);

// array of vector declaration 
    // vector<int> vec[10];  // here is 10 vector v[0],v[1],v[2],...v[9] 
    
    /*
    //example program
    //try to understand this is easy only man .. 

        cout << "Enter the size of vector : " ; 
        int n; cin >> n;
        vector<int> vec[n];
        for(int i = 0 ; i<n ; i++){
            cout << "Enter the size of vector " << i << " : " ;
            int m; cin >> m;

            for(int j = 0 ; j<m ; j++){
                int num ;
                cout << "Enter the element " << j << " : " ;
                cin >> num ;
                vec[i].push_back(num);
            }
        }

        for(int i = 0 ; i<n ; i++){
            printVector(vec[i]);
        }
    
    */


// vector of vector declartion 


    vector<vector<int>> vv ;

/*
    // Example program .. .
    cout << "Enter the number of elements to inserted in vector : " ;
    int n; cin >> n;
    for(int i = 0 ; i<n ; i++){
        vector<int> temp;
        cout << "Enter the size of vector " << i << " : " ;
        int m; cin >> m;
        for(int j = 0 ; j<m ; j++){
            int num ;
            cout << "Enter the element " << j << " : " ;
            cin >> num ;
            temp.push_back(num);
        }
        vv.push_back(temp);  // this is important ... 
    }
    //printing vector
    for(int i = 0 ; i<n ; i++){
        printVector(vv[i]);
    }


*/



 
return 0;
}


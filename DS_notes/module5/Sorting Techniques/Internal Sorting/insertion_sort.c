// here we will learn insertion sort 
// first revise the algorithm 


#include<stdio.h>


// Dryrun this code .... 

void insertionSort(int arr[] , int size){
    int i , j , key ;
    for(i = 1 ; i < size ; i++){ // for passes 
        key = arr[i];
        j = i - 1 ;
        while(j > -1 && arr[j] > key ){
            arr[j + 1] = arr[j]; 
            j-- ; 
        }
        arr[j+1] = key ; 
    }
}


void printArray(int arr[] , int size ){
    for(int i = 0 ; i<size ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n"); 
}

int main(void){
    int arr[] = {10,5,7,9,4,52,34,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n );
    printArray(arr, n) ; 
return 0;
}
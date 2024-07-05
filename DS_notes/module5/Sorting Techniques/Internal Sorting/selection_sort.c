// program for selection sort 
#include<stdio.h>
#include<conio.h>

void swap(int* a , int* b ){
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}

void selectionSort(int*arr ,int n ){
    for(int i = 0 ; i < n-1 ; i++){
        int min = i ; 
        for(int j = i+1 ; j < n ; j++){
            if(arr[min] > arr[j]){
                min = j ;
            }
        }
        swap(&arr[min], &arr[i]);
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
    selectionSort(arr, n );
    printArray(arr, n) ; 
return 0;
}
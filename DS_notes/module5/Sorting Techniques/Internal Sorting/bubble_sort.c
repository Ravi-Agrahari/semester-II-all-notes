
#include<stdio.h>


// function  for bubble sortug 
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// printing the array 
void printArray(int arr[] , int n ){

    int i ;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
}



int main(void){
    
int arr[] = {10,5,3,7,36,85,34,46};
int n = sizeof(arr) / sizeof(arr[0]);
bubbleSort(arr,n);
printArray(arr,n);
return 0;

}
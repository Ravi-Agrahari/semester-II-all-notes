#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}  

// Function to partition the array for quicksort
// This function selects a pivot element and rearranges the array
// such that elements less than the pivot are on the left, and elements greater than the pivot are on the right
int partition(int arr[], int low, int high) {
    int pivot = arr[low];  // Choosing the pivot element (first element in the array)
    int i = low + 1;       // Starting index for elements greater than the pivot
    int j = high;          // Starting index for elements less than the pivot

    do {
        // Increment i until we find an element greater than the pivot
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        // Decrement j until we find an element less than or equal to the pivot
        while (j >= low && arr[j] > pivot) {
            j--;
        }
        // If i is less than j, swap the elements at i and j 
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    } while (i < j);  // Repeat until i and j cross

    // Swap the pivot element with the element at index j to place the pivot in its correct position
    swap(&arr[low], &arr[j]);
    return j;  // Return the partitioning index
}

// Recursive function to implement quicksort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array and get the partitioning index
        int j = partition(arr, low, high);
        // Recursively sort the elements before and after the partition
        quickSort(arr, low, j - 1);
        quickSort(arr, j + 1, high);
    }   
}


int main() {
    int arr[] = {30, 50, 40, 60, 80, 90, 70, 40, 10, 20};  // Input array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array

    // Perform quicksort on the array
    quickSort(arr, 0, n - 1);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

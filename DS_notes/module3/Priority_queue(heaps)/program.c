/*
Introduction and Explanation:
A heap is a specialized tree-based data structure that satisfies the heap property. In a max heap, for any given node I, the value of I is greater than or equal to the values of its children. In a min heap, the value of I is less than or equal to the values of its children.

Diagram (Max Heap):
          50
         /  \
        30   40
       / \   / \
      10 20 35  15

Example Program (in C):
*/

#include <stdio.h>
#include <stdlib.h>

// Define the structure of a heap
struct MaxHeap {
    int* array;
    int size;
    int capacity;
};

// Create a max heap
struct MaxHeap* createMaxHeap(int capacity) {
    struct MaxHeap* maxHeap = (struct MaxHeap*)malloc(sizeof(struct MaxHeap));
    maxHeap->capacity = capacity;
    maxHeap->size = 0;
    maxHeap->array = (int*)malloc(capacity * sizeof(int));
    return maxHeap;
}

// Swap two integers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Heapify the node at index i in a max heap
void maxHeapify(struct MaxHeap* maxHeap, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < maxHeap->size && maxHeap->array[left] > maxHeap->array[largest])
        largest = left;

    if (right < maxHeap->size && maxHeap->array[right] > maxHeap->array[largest])
        largest = right;

    if (largest != i) {
        swap(&maxHeap->array[i], &maxHeap->array[largest]);
        maxHeapify(maxHeap, largest);
    }
}

// Insert a new key into max heap
void insertMaxHeap(struct MaxHeap* maxHeap, int key) {
    if (maxHeap->size == maxHeap->capacity) {
        printf("Overflow: Could not insert key\n");
        return;
    }

    maxHeap->size++;
    int i = maxHeap->size - 1;
    maxHeap->array[i] = key;

    while (i != 0 && maxHeap->array[(i - 1) / 2] < maxHeap->array[i]) {
        swap(&maxHeap->array[i], &maxHeap->array[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Extract the maximum element from max heap
int extractMax(struct MaxHeap* maxHeap) {
    if (maxHeap->size <= 0)
        return INT_MAX;

    if (maxHeap->size == 1) {
        maxHeap->size--;
        return maxHeap->array[0];
    }

    int root = maxHeap->array[0];
    maxHeap->array[0] = maxHeap->array[maxHeap->size - 1];
    maxHeap->size--;
    maxHeapify(maxHeap, 0);

    return root;
}

int main() {
    struct MaxHeap* maxHeap = createMaxHeap(11);
    insertMaxHeap(maxHeap, 3);
    insertMaxHeap(maxHeap, 2);
    insertMaxHeap(maxHeap, 15);
    insertMaxHeap(maxHeap, 5);
    insertMaxHeap(maxHeap, 4);
    insertMaxHeap(maxHeap, 45);

    printf("Max value: %d\n", extractMax(maxHeap));
    printf("Max value: %d\n", extractMax(maxHeap));
    printf("Max value: %d\n", extractMax(maxHeap));

    return 0;
}

/*
Summary:
Heaps are a critical part of many efficient algorithms. Max heaps and min heaps provide an efficient way to implement priority queues, which are used in various applications like scheduling and simulation systems.
*/

/*
A priority queue is a special type of queue where each element is associated with a priority, and elements are dequeued based on their priority.

Priority queues can be efficiently implemented using a min-heap, where the minimum element always resides at the root.

Applications:
- Dijkstra's algorithm for finding the shortest path
- Task scheduling in operating systems
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int items[MAX];
    int size;
} PriorityQueue;

// Initialize the priority queue
void initialize(PriorityQueue* pq) {
    pq->size = 0;
}

// Check if the priority queue is empty
int isEmpty(PriorityQueue* pq) {
    return pq->size == 0;
}

// Get the parent index of a node
int parent(int i) {
    return (i - 1) / 2;
}

// Get the left child index of a node
int leftChild(int i) {
    return (2 * i) + 1;
}

// Get the right child index of a node
int rightChild(int i) {
    return (2 * i) + 2;
}

// Swap two elements in the priority queue
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Heapify a subtree rooted at index i
void heapify(PriorityQueue* pq, int i) {
    int smallest = i;
    int l = leftChild(i);
    int r = rightChild(i);
    if (l < pq->size && pq->items[l] < pq->items[smallest]) {
        smallest = l;
    }
    if (r < pq->size && pq->items[r] < pq->items[smallest]) {
        smallest = r;
    }
    if (smallest != i) {
        swap(&pq->items[i], &pq->items[smallest]);
        heapify(pq, smallest);
    }
}

// Enqueue an element with priority to the priority queue
void enqueue(PriorityQueue* pq, int item) {
    if (pq->size == MAX) {
        printf("Priority queue overflow\n");
        return;
    }
    int i = pq->size;
    pq->items[i] = item;
    pq->size++;
    while (i != 0 && pq->items[parent(i)] > pq->items[i]) {
        swap(&pq->items[i], &pq->items[parent(i)]);
        i = parent(i);
    }
}

// Dequeue the element with the highest priority from the priority queue
int dequeue(PriorityQueue* pq) {
    if (isEmpty(pq)) {
        printf("Priority queue underflow\n");
        return -1;
    }
    if (pq->size == 1) {
        pq->size--;
        return pq->items[0];
    }
    int root = pq->items[0];
    pq->items[0] = pq->items[pq->size - 1];
    pq->size--;
    heapify(pq, 0);
    return root;
}

// Example usage of priority queue with min-heap implementation
int main() {
    PriorityQueue pq;
    initialize(&pq);

    // Enqueue elements with priorities
    enqueue(&pq, 10);
    enqueue(&pq, 20);
    enqueue(&pq, 5);

    // Dequeue elements from the priority queue
    printf("Dequeued element with highest priority: %d\n", dequeue(&pq));
    printf("Dequeued element with highest priority: %d\n", dequeue(&pq));

    return 0;
}

/*
Summary:
Priority queues are efficiently implemented using a min-heap, where the minimum element always resides at the root. This example demonstrates basic operations like enqueue and dequeue with priorities using a min-heap.
*/

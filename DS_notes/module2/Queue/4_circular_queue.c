/*
A circular queue is a type of queue where the last position is connected back to the first position, making the queue circular.

Advantages:
- Efficient memory utilization: Utilizes the entire array space without wastage.
- No need to shift elements during dequeues, as the front and rear indices wrap around.

Applications:
- Call log management
- Circular buffers in operating systems

Implementation:
- Maintain front and rear indices, and wrap them around if needed.
- The queue is full if (rear + 1) % MAX == front, and empty if front == -1.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct {
    int items[MAX];
    int front, rear;
} CircularQueue;

// Initialize the circular queue
void initialize(CircularQueue* cq) {
    cq->front = -1;
    cq->rear = -1;
}

// Check if the circular queue is full
int isFull(CircularQueue* cq) {
    return (cq->rear + 1) % MAX == cq->front;
}

// Check if the circular queue is empty
int isEmpty(CircularQueue* cq) {
    return cq->front == -1;
}

// Enqueue an element to the circular queue
void enqueue(CircularQueue* cq, int item) {
    if (isFull(cq)) {
        printf("Circular queue overflow\n");
        return;
    }
    if (isEmpty(cq)) {
        cq->front = 0;
    }
    cq->rear = (cq->rear + 1) % MAX;
    cq->items[cq->rear] = item;
}

// Dequeue an element from the circular queue
int dequeue(CircularQueue* cq) {
    if (isEmpty(cq)) {
        printf("Circular queue underflow\n");
        return -1;
    }
    int item = cq->items[cq->front];
    if (cq->front == cq->rear) {
        cq->front = cq->rear = -1;
    } else {
        cq->front = (cq->front + 1) % MAX;
    }
    return item;
}

// Example usage of circular queue with array implementation
int main() {
    CircularQueue cq;
    initialize(&cq);

    // Enqueue elements to the circular queue
    enqueue(&cq, 10);
    enqueue(&cq, 20);
    enqueue(&cq, 30);

    // Dequeue elements from the circular queue
    printf("Dequeued element: %d\n", dequeue(&cq));
    printf("Dequeued element: %d\n", dequeue(&cq));

    return 0;
}

/*
Summary:
Circular queues are efficiently implemented using arrays, where the last position is connected back to the first position. This example demonstrates basic operations like enqueue and dequeue with a circular queue.
*/

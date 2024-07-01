/*
A queue is a linear data structure that follows the First In, First Out (FIFO) principle. The primary operations are:
- Enqueue: Adding an element to the rear of the queue.
- Dequeue: Removing the element from the front of the queue.

Applications of queues include:
- Managing tasks in a printer spooler
- Call log management in customer service systems

A priority queue is a special type of queue where each element is associated with a priority, and elements are dequeued based on their priority.

A circular queue is a type of queue where the last position is connected back to the first position, making the queue circular.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int items[MAX];
    int front;
    int rear;
} Queue;

// Initialize the queue
void initialize(Queue* q) {
    q->front = -1;
    q->rear = -1;
}

// Check if the queue is full
int isFull(Queue* q) {
    return (q->rear + 1) % MAX == q->front;
} 

// Check if the queue is empty
int isEmpty(Queue* q) {
    return q->front == -1;
}

// Enqueue an element to the queue
void enqueue(Queue* q, int item) {
    if (isFull(q)) {
        printf("Queue overflow\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear = (q->rear + 1) % MAX;
    q->items[q->rear] = item;
}

// Dequeue an element from the queue
int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue underflow\n");
        return -1;
    }
    int item = q->items[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX;
    }
    return item;
}

// Example usage of queue with array implementation
int main() {
    Queue q;
    initialize(&q);

    // Enqueue elements to the queue
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    // Dequeue elements from the queue
    printf("Dequeued element: %d\n", dequeue(&q));
    printf("Dequeued element: %d\n", dequeue(&q));

    return 0;
}

/*
Summary:
Queues can be efficiently implemented using arrays. This example demonstrates basic operations like enqueue and dequeue. Queues follow the FIFO order, making them suitable for various applications like task scheduling and call log management.
*/

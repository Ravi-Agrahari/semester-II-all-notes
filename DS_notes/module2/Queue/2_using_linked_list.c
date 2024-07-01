/*
A queue can also be implemented using a linked list. Each node in the linked list represents an element in the queue.

Advantages:
- Dynamic size: Queue can grow and shrink according to the needs at runtime.
- No wastage of memory.

Disadvantages:
- Extra memory for a pointer is required with each element.

Applications:
- Managing tasks in a printer spooler
- Call log management in customer service systems
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* front;
    Node* rear;
} Queue;

// Initialize the queue
void initialize(Queue* q) {
    q->front = q->rear = NULL;
}

// Check if the queue is empty
int isEmpty(Queue* q) {
    return q->front == NULL;
}

// Enqueue an element to the queue
void enqueue(Queue* q, int item) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Queue overflow\n");
        return;
    }
    newNode->data = item;
    newNode->next = NULL;
    
    if (isEmpty(q)) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

// Dequeue an element from the queue
int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue underflow\n");
        return -1;
    }
    Node* temp = q->front;
    int item = temp->data;
    q->front = q->front->next;
    free(temp);
    if (q->front == NULL) {
        q->rear = NULL;
    }
    return item;
}

// Example usage of queue with linked list implementation
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
Queues can be implemented using linked lists for dynamic memory management. This example demonstrates basic operations like enqueue and dequeue using a linked list. This approach avoids the fixed size limitation of arrays.
*/

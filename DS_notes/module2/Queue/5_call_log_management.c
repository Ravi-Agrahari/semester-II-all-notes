/*
Queues are commonly used in call log management systems to handle incoming calls and manage them based on their priorities or timestamps.

Example:
- Each call request is enqueued into the call log queue.
- Calls are dequeued and handled by customer service representatives based on their priorities or timestamps.

Implementation:
- Maintain a queue of call logs with appropriate data structures.
- Enqueue incoming calls and dequeue calls for processing or handling.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int callId;
    char callerName[50];
    int priority; // Priority can be based on caller's status or urgency of the issue
} CallLog;

typedef struct Node {
    CallLog data;
    struct Node* next;
} Node;

typedef struct {
    Node* front;
    Node* rear;
} CallLogQueue;

// Initialize the call log queue
void initialize(CallLogQueue* q) {
    q->front = q->rear = NULL;
}

// Check if the call log queue is empty
int isEmpty(CallLogQueue* q) {
    return q->front == NULL;
}

// Enqueue a call log to the queue
void enqueue(CallLogQueue* q, CallLog item) {
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

// Dequeue a call log from the queue
CallLog dequeue(CallLogQueue* q) {
    CallLog emptyCallLog = {-1, "", -1}; // Placeholder for empty call log
    if (isEmpty(q)) {
        printf("Queue underflow\n");
        return emptyCallLog;
    }
    Node* temp = q->front;
    CallLog item = temp->data;
    q->front = q->front->next;
    free(temp);
    if (q->front == NULL) {
        q->rear = NULL;
    }
    return item;
}

// Example usage of call log queue for call log management
int main() {
    CallLogQueue q;
    initialize(&q);

    // Incoming call logs
    CallLog call1 = {101, "John", 1}; // Low priority
    CallLog call2 = {102, "Alice", 3}; // High priority
    CallLog call3 = {103, "Bob", 2}; // Medium priority

    // Enqueue call logs
    enqueue(&q, call1);
    enqueue(&q, call2);
    enqueue(&q, call3);

    // Process call logs
    printf("Processing incoming calls:\n");
    while (!isEmpty(&q)) {
        CallLog call = dequeue(&q);
        printf("Call ID: %d, Caller: %s, Priority: %d\n", call.callId, call.callerName, call.priority);
    }

    return 0;
}

/*
Summary:
Queues are widely used in call log management systems for handling incoming calls efficiently. This example demonstrates enqueueing and dequeuing call logs based on their priorities.
*/

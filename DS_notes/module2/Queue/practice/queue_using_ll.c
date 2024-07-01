/*
    * implementation of queue using linked list 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// structure for node
struct Node {
    int data;
    struct Node *next;
};

// structure for queue 
struct Queue {
    struct Node *front;
    struct Node *rear;
};


// function to initialize queue
struct Queue *init_queue() {
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = NULL;
    q->rear = NULL;
    return q;
}


// function to create newNode 
struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// function to check if the queue is empty 
int isEmpty(struct Queue *q) {
    return (q->front == NULL);
}


// function to enqueue element 
void enqueue(struct Queue *q, int data) {
    struct Node *newNode = createNode(data);

    if (newNode == NULL) {
        printf("Queue is full \n");
        return;
    }
    if (q->front == NULL) {
        q->front = q->rear = newNode;
    } 
    else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}


// function to dequeue element from queue 
int dequeue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }

    int data = q->front->data;
    struct Node *temp = q->front;
    q->front = q->front->next;

    if (q->front == NULL) { // Update rear if queue becomes empty
        q->rear = NULL;
    }

    free(temp);
    return data;
}


// function to print the element in queue
void print(struct Queue *q) {
    struct Node *temp = q->front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


int main(void) {

    struct Queue *q = init_queue();

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    printf("Queue elements: ");
    print(q);

    printf("Dequeued: %d\n", dequeue(q));
    printf("Queue elements after dequeue: ");
    print(q);

    return 0;
}

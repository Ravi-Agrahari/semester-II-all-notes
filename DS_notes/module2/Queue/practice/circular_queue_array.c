

/*
    * Implementation of Circular Queue
    ------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for queue
struct Queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

// Function to initialize queue
struct Queue *init_queue(int size)
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = q->rear = 0;
    q->size = size + 1; // To differentiate full and empty states
    q->arr = (int *)malloc(q->size * sizeof(int));
    return q;
}

// Function to check if circular queue is full
int isFull(struct Queue *q)
{
    return ((q->rear + 1) % q->size == q->front);
}

// Function to check if circular queue is empty
int isEmpty(struct Queue *q)
{
    return (q->rear == q->front);
}

// Function to enqueue (insert in circular queue)
void enqueue(struct Queue *q, int data)
{
    if (isFull(q))
    {
        printf("Circular queue is Full\n");
        return;
    }
    q->rear = (q->rear + 1) % q->size;
    q->arr[q->rear] = data;
    printf("%d enqueued to the circular queue\n", data);
}

// Function to dequeue from the circular queue
int dequeue(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Circular queue is Empty, so dequeue is not possible\n");
        return -1;
    }
    q->front = (q->front + 1) % q->size;
    int data = q->arr[q->front];
    printf("%d dequeued from the circular queue\n", data);
    return data;
}


// fucntion to print element of the queue 
void print(struct Queue* q)
{
    if (isEmpty(q))
    {
        printf("Circular queue is empty\n");
        return;
    } 

    int i = (q->front + 1) % q->size; // next of front 
    while (i != (q->rear + 1) % q->size) // run until next of rear 
    {
        printf("%d ", q->arr[i]); 
        i = (i + 1) % q->size;
    }
    printf("\n"); 
}


int main(void)
{
    int size, choice, data;

    printf("Enter the size of the circular queue: ");
    scanf("%d", &size);

    struct Queue *q = init_queue(size);

    while (1)
    {
        printf("\n1. Enqueue\n2. Dequeue \n3. Print the element of queue \n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data to enqueue: ");
            scanf("%d", &data);
            enqueue(q, data);
            break;
        case 2:
            data = dequeue(q);
            if (data != -1)
            {
                printf("Dequeued: %d\n", data);
            }
            break;
        case 3:
            printf("\n The element in the queue are: \n"); 
            print(q);
            break ;

        case 4:
            free(q->arr);
            free(q);
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice! Please enter a valid choice.\n");
        }
    }
}

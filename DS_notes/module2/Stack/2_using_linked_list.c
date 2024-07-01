/*
A stack can also be implemented using a linked list. Each node in the linked list represents an element in the stack.

Advantages:
- Dynamic size: Stack can grow and shrink according to the needs at runtime.
- No wastage of memory.

Disadvantages:
- Extra memory for a pointer is required with each element.

Applications:
- Expression evaluation and conversion (infix to postfix)
- Function call management in programming languages
*/

#include <stdio.h>
#include <stdlib.h>

// Define the structure of a stack node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Push an element onto the stack
void push(Node** top, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Stack overflow\n");
        return;
    }
    newNode->data = data;
    newNode->next = *top;
    *top = newNode;
}

// Pop an element from the stack
int pop(Node** top) {
    if (*top == NULL) {
        printf("Stack underflow\n");
        return -1;
    }
    Node* temp = *top;
    *top = (*top)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

// Example usage of stack with linked list implementation
int main() {
    Node* stack = NULL;

    // Push elements onto the stack
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    // Pop elements from the stack
    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));

    return 0;
}

/*
Summary:
Stacks can be implemented using linked lists for dynamic memory management. This example demonstrates basic operations like push and pop using linked list. This approach avoids the fixed size limitation of arrays.
*/

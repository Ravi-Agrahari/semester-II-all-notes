/*
A stack is a linear data structure that follows the Last In, First Out (LIFO) principle. The primary operations are:
- Push: Adding an element to the top of the stack.
- Pop: Removing the element from the top of the stack.

Applications of stacks include:
- Expression evaluation and conversion (infix to postfix)
- Function call management in programming languages
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Maximum size of the stack

typedef struct Stack {
    int items[MAX];
    int top;
} Stack;

// Initialize the stack
void initialize(Stack* s) {
    s->top = -1;
}

// Check if the stack is full
int isFull(Stack* s) {
    return s->top == MAX - 1;
}

// Check if the stack is empty
int isEmpty(Stack* s) {
    return s->top == -1;
}

// Push an element onto the stack
void push(Stack* s, int item) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        return;
    }
    s->items[++(s->top)] = item;
}

// Pop an element from the stack
int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1;
    }
    return s->items[(s->top)--];
}

// Example usage of stack with array implementation
int main() {
    Stack s;
    initialize(&s);

    // Push elements onto the stack
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    // Pop elements from the stack
    printf("Popped element: %d\n", pop(&s));
    printf("Popped element: %d\n", pop(&s));

    return 0;
}

/*
Summary:
Stacks can be efficiently implemented using arrays. This example demonstrates basic operations like push and pop. The stack follows LIFO order, making it useful for various applications like expression evaluation and function call management.
*/

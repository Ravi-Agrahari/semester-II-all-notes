/*
Stacks are used in expression evaluation and conversion, such as converting infix expressions (where operators are between operands) to postfix expressions (where operators follow their operands).

Example:
Infix: A + B * (C - D)
Postfix: A B C D - * +

Algorithm:
1. Scan the infix expression from left to right.
2. Use a stack to keep operators and manage their precedence.
3. Output operands immediately.
4. Push '(' on stack and pop when ')' is encountered.
5. Pop from stack when the incoming operator has less precedence than the stack top.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

typedef struct {
    char items[MAX];
    int top;
} Stack;

void initialize(Stack* s) {
    s->top = -1;
}

int isFull(Stack* s) {
    return s->top == MAX - 1;
}

int isEmpty(Stack* s) {
    return s->top == -1;
}

void push(Stack* s, char item) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        return;
    }
    s->items[++(s->top)] = item;
}

char pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return '\0';
    }
    return s->items[(s->top)--];
}

char peek(Stack* s) {
    return s->items[s->top];
}

int precedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return 0;
}

void infixToPostfix(char* infix) {
    Stack s;
    initialize(&s);
    char postfix[MAX];
    int j = 0;

    for (int i = 0; infix[i] != '\0'; i++) {

        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        } 
        else if (infix[i] == '(') {
            push(&s, infix[i]);
        } 
        else if (infix[i] == ')') {
            while (!isEmpty(&s) && peek(&s) != '(') {
                postfix[j++] = pop(&s);
            }
            pop(&s); // remove '(' from stack
        } 
        else {
            while (!isEmpty(&s) && precedence(infix[i]) <= precedence(peek(&s))) {
                postfix[j++] = pop(&s);
            }
            push(&s, infix[i]);
        }
    }

    while (!isEmpty(&s)) {
        postfix[j++] = pop(&s);
    }

    postfix[j] = '\0';
    printf("Postfix expression: %s\n", postfix);
}

int main() {
    char infix[] = "A+B*(C-D)";
    infixToPostfix(infix);
    return 0;
}

/*
Summary:
This example demonstrates the conversion of infix expressions to postfix using a stack. This conversion is useful for easier and faster expression evaluation in computer systems.
*/

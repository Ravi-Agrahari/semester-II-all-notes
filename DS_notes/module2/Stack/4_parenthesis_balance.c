/*
Parenthesis balancing is a common problem in computer science, where the goal is to determine whether a given expression has balanced parentheses.

Example:
- "(a + b) * (c - (d + e))"
- "((())())"
- "()()((()))"

Algorithm:
- Use a stack to track opening parentheses.
- When encountering an opening parenthesis, push it onto the stack.
- When encountering a closing parenthesis:
  - If the stack is empty, return false (unbalanced).
  - If the top of the stack is a matching opening parenthesis, pop it from the stack.
  - If not matching, return false (unbalanced).
- After processing all parentheses, if the stack is empty, return true (balanced).

Implementation:
- Iterate through the expression character by character.
- If the character is an opening parenthesis, push it onto the stack.
- If the character is a closing parenthesis, check if the stack is empty or if the top of the stack matches.
- Return true if the stack is empty after processing all characters, indicating balanced parentheses.

Applications:
- Syntax checking in compilers and interpreters
- Validating mathematical expressions in calculators
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    char items[MAX];
    int top;
} Stack;

// Initialize the stack
void initialize(Stack* s) {
    s->top = -1;
}

// Check if the stack is empty
int isEmpty(Stack* s) {
    return s->top == -1;
}

// Push an element onto the stack
void push(Stack* s, char item) {
    s->items[++(s->top)] = item;
}

// Pop an element from the stack
char pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return s->items[(s->top)--];
}

// Check if parentheses are balanced
int isBalanced(char* expression) {
    Stack s;
    initialize(&s);

    for (int i = 0; expression[i] != '\0'; i++) {
        if (expression[i] == '(') {
            push(&s, expression[i]);
        } else if (expression[i] == ')') {
            if (isEmpty(&s)) {
                return 0; // Unbalanced: more closing than opening parentheses
            }
            char top = pop(&s);
            if (top != '(') {
                return 0; // Unbalanced: mismatched closing parenthesis
            }
        }
    }

    return isEmpty(&s); // Balanced if the stack is empty
}

// Example usage of parenthesis balancing
int main() {
    char expression1[] = "(a + b) * (c - (d + e))";
    char expression2[] = "((())())";
    char expression3[] = "()()((()))";

    printf("Expression 1 is %s\n", isBalanced(expression1) ? "balanced" : "unbalanced");
    printf("Expression 2 is %s\n", isBalanced(expression2) ? "balanced" : "unbalanced");
    printf("Expression 3 is %s\n", isBalanced(expression3) ? "balanced" : "unbalanced");

    return 0;
}

/*
Summary:
This program demonstrates the use of a stack to check whether parentheses in an expression are balanced. It iterates through the expression, pushing opening parentheses onto the stack and popping them when encountering a closing parenthesis. If the stack is empty after processing all characters, the parentheses are considered balanced.
*/

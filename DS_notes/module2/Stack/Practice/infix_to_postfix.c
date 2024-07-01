#include <stdio.h>
#include <stdlib.h>

// structure for stack
struct stack
{
    int size;
    int top;
    char *arr;
};

// function to create stack
struct stack *createStack(int size)
{
    struct stack *st = (struct stack *)malloc(sizeof(struct stack));
    st->size = size;
    st->top = -1;
    st->arr = (char *)malloc(st->size * sizeof(char));
    return st;
}

int isFull(struct stack *st)
{
    return (st->top == st->size - 1);
}

int isEmpty(struct stack *st)
{
    return (st->top == -1);
}

// function to push to the top of stack
void push(struct stack *st, char val)
{
    if (isFull(st))
    {
        printf("Stack overflow\n");
        return;
    }
    st->arr[++(st->top)] = val;
}

// function to return and pop from the top of stack
char pop(struct stack *st)  
{
    if (isEmpty(st))
    {
        printf("Stack underflow\n");
        return '\0';
    }
    return st->arr[(st->top)--];
}

char stackTop(struct stack *st)
{
    return st->arr[st->top];
}

int isOperand(char ch)
{
    return !(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '(' || ch == ')');
}

// function to return the precedence of operator
int precedence(char op)
{
    switch (op)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    default:
        return 0;
    }
}

char *infix_to_postfix(char *infix)
{
    struct stack *st = createStack(100);
    char *postfix = (char *)malloc(100 * sizeof(char));
    int i = 0, j = 0;

    while (infix[i] != '\0')
    {
        if(isOperand(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else if (infix[i] == '(')
        {
            push(st, infix[i++]);
        }
        else if (infix[i] == ')')
        {
            while (!isEmpty(st) && stackTop(st) != '(')
            {
                postfix[j++] = pop(st);
            }
            pop(st); // Pop the '(' from the stack
            i++;
        }
        else
        {
            while (!isEmpty(st) && precedence(infix[i]) <= precedence(stackTop(st)))
            {
                postfix[j++] = pop(st);
            }
            push(st, infix[i++]);
        }
    }
    while (!isEmpty(st))
    {
        postfix[j++] = pop(st);
    }
    postfix[j] = '\0'; // Null-terminate the postfix expression

    free(st->arr);
    free(st);

    return postfix;
}

int main(void)
{
    char infix[] = "a+b*(c-d/e)";
    printf("Infix Expression: %s\n", infix);
    char *postfix = infix_to_postfix(infix);
    printf("Postfix Expression: %s\n", postfix);
    free(postfix);
    return 0;
}

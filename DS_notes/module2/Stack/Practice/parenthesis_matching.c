
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    int size ; 
    int top ; 
    char *arr ; 
}Stack;

// function to initize stack 
Stack* init_stack(int size){
    Stack* st = (Stack*) malloc(sizeof(Stack));
    st->size = size ; 
    st->top = -1 ; 
    st->arr= (char*) malloc(st->size * sizeof(char));
    return st; 
}

// to check if stack is full 
int isFull(Stack* st){
    return(st->top == st->size-1);
}


// to check if stack is empty 
int isEmpty(Stack* st){
    return(st->top == -1);
}

// function to push in stack 
void push(Stack *st , char ch){
    if(isFull(st)){
        printf("Stack overflow\n"); 
        return ;
    } 
    st->arr[++(st->top)] = ch ; 
}

// function to pop from the stack 
char pop(Stack *st){
    if(isEmpty(st)){
        printf("Stack underflow");
        return '\0';
    }
    return st->arr[(st->top)--];
}

//function to return the top of the stack 
char stackTop(Stack *st){
    return st->arr[st->top];
}

// function to return if brackets are similar 
int isSimilar(char a , char b){
    return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']')) ;
}

// function to check if the expression is balance or not 
int isBalance(char *exp){

    Stack *st = init_stack(strlen(exp));

    for(int i=0 ; exp[i] != '\0'; i++){
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
            push(st,exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
            if( !isEmpty(st) && isSimilar(stackTop(st) , exp[i])){
                pop(st);
            }
            else{
                free(st->arr);
                free(st);
                return 0 ;
            }
        }
    }

    int balanced = isEmpty(st);
    free(st->arr);
    free(st);
    return balanced ;

}

int main(void){

    char expression[] = "{a+b*(c-d)/[e+f]}";
    if (isBalance(expression)) {
        printf("The expression is balanced.\n");
    } else {
        printf("The expression is not balanced.\n");
    }
    return 0;


}
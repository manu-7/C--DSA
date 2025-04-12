#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Function to push element onto the stack
void push(char item) {
    if(top >= MAX-1) {
        printf("\nStack Overflow.");
    } else {
        stack[++top] = item;
    }
}

// Function to pop element from the stack
char pop() {
    if(top < 0) {
        printf("Stack Underflow\n");
        exit(1);
    } else {
        return stack[top--];
    }
}

// Function to return the precedence of operators
int precedence(char symbol) {
    switch(symbol) {
        case '+':
        case '-':
            return 2;
        case '*':
        case '/':
            return 3;
        case '(':
        case ')':
            return 1;
        default:
            return 0;
    }
}

// Function to check if the character is operator
int isOperator(char symbol) {
    switch(symbol) {
        case '+':
        case '-':
        case '*':
        case '/':
            return 1;
        default:
            return 0;
    }
}

// Function to convert infix expression to postfix
void infixToPostfix(char infix[], char postfix[]) {
    int i, j = 0;
    char item;
    char x;

    push('('); // Add '(' to infix expression
    strcat(infix,")"); // Add ')' to infix expression

    for(i = 0; infix[i] != '\0'; i++) {
        item = infix[i];
        if(item == '(') {
            push(item);
        } else if(isdigit(item)) {
            postfix[j++] = item;
        } else if(isOperator(item) == 1) {
            x = pop();
            while(isOperator(x) == 1 && precedence(x) >= precedence(item)) {
                postfix[j++] = x;
                x = pop();
            }
            push(x);
            push(item);
        } else if(item == ')') {
            x = pop();
            while(x != '(') {
                postfix[j++] = x;
                x = pop();
            }
        } else {
            printf("\nInvalid infix Expression.\n");
            exit(1);
        }
    }

    postfix[j] = '\0'; // Add '\0' to make postfix a string
}

int main() {
    char infix[MAX], postfix[MAX];
    printf("Enter Infix expression : ");
    gets(infix);

    infixToPostfix(infix,postfix);
    printf("Postfix Expression: ");
    puts(postfix);

    return 0;
}

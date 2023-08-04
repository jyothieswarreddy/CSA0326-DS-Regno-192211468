#include <stdio.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;
int i;
void push(int element) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = element;
        printf("Element %d pushed to stack\n", element);
    }
}
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Element %d popped from stack\n", stack[top]);
        top--;
    }
}
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack {
    int arr[MAX_SIZE];
    int top;
};

void push(struct Stack* s, int element) {
    if (s->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    s->arr[++(s->top)] = element;
}

int pop(struct Stack* s) {
    if (s->top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->arr[(s->top)--];
}

void enqueue(struct Stack* s1, struct Stack* s2, int element) {
    push(s1, element);
}

void printBottomToTop(struct Stack* s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements from bottom to top: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

void printTopToBottom(struct Stack* s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements from top to bottom: ");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

int main() {
    struct Stack s1, s2;
    s1.top = -1;
    s2.top = -1;

    enqueue(&s1, &s2, 10);
    enqueue(&s1, &s2, 20);
    enqueue(&s1, &s2, 30);

    printBottomToTop(&s1);
    printTopToBottom(&s1);

    return 0;
}

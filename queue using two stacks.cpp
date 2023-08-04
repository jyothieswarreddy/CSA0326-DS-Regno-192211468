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
    while (s1->top != -1) {
        push(s2, pop(s1));
    }
    push(s1, element);
    while (s2->top != -1) {
        push(s1, pop(s2));
    }
}

int dequeue(struct Stack* s1) {
    if (s1->top == -1) {
        printf("Queue Underflow\n");
        return -1;
    }
    return pop(s1);
}

void display(struct Stack* s1) {
    if (s1->top == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = 0; i <= s1->top; i++) {
        printf("%d ", s1->arr[i]);
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
    display(&s1);
    int dequeuedElement = dequeue(&s1);
    printf("Dequeued element: %d\n", dequeuedElement);
    display(&s1);
    return 0;
}

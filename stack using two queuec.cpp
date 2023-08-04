#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
struct Queue {
    int arr[MAX_SIZE];
    int front;
    int rear;
};
void enqueue(struct Queue* q, int element) {
    if (q->rear == MAX_SIZE - 1) {
        printf("Queue is full\n");
        return;
    }
    q->arr[++(q->rear)] = element;
}
int dequeue(struct Queue* q) {
    if (q->front > q->rear) {
        printf("Queue is empty\n");
        return -1;
    }
    return q->arr[(q->front)++];
}
void push(struct Queue* q1, struct Queue* q2, int element) {
    if (q1->rear == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    enqueue(q1, element);
}
int pop(struct Queue* q1, struct Queue* q2) {
    if (q1->front > q1->rear) {
        printf("Stack Underflow\n");
        return -1;
    }
    while (q1->front < q1->rear) {
        enqueue(q2, dequeue(q1));
    }
    int poppedElement = dequeue(q1);
    struct Queue* temp = q1;
    q1 = q2;
    q2 = temp;
    return poppedElement;
}
void display(struct Queue* q1) {
    if (q1->front > q1->rear) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = q1->front; i <= q1->rear; i++) {
        printf("%d ", q1->arr[i]);
    }
    printf("\n");
}
int main() {
    struct Queue q1, q2;
    q1.front = 0;
    q1.rear = -1;
    q2.front = 0;
    q2.rear = -1;
    push(&q1, &q2, 30);
    push(&q1, &q2, 20);
    push(&q1, &q2, 50);
    display(&q1);
    int poppedElement = pop(&q1, &q2);
    printf("Popped element: %d\n", poppedElement);
    display(&q1);
    return 0;
}

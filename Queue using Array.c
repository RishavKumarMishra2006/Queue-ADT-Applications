#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int x) {
    if (rear == MAX - 1) {
        printf("Overflow\n");
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = x;
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Underflow\n");
        return -1;
    }
    return queue[front++];
}

int peek() {
    if (front == -1 || front > rear) return -1;
    return queue[front];
}

int main() {
    enqueue(10);
    enqueue(20);
    printf("%d\n", dequeue());
    printf("%d\n", peek());
    return 0;
}

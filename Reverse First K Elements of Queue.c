#include <stdio.h>
#define MAX 100

int queue[MAX], front = 0, rear = -1;

void enqueue(int x) {
    queue[++rear] = x;
}

int dequeue() {
    return queue[front++];
}

void reverseK(int k) {
    int stack[MAX], top = -1;

    for (int i = 0; i < k; i++)
        stack[++top] = dequeue();

    while (top != -1)
        enqueue(stack[top--]);

    int size = rear - front + 1;

    for (int i = 0; i < size - k; i++)
        enqueue(dequeue());
}

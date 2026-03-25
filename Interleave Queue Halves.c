#include <stdio.h>
#define MAX 100

int queue[MAX], front = 0, rear = -1;

void enqueue(int x) { queue[++rear] = x; }
int dequeue() { return queue[front++]; }

void interleave(int n) {
    int half = n / 2;
    int stack[MAX], top = -1;

    for (int i = 0; i < half; i++)
        stack[++top] = dequeue();

    while (top != -1)
        enqueue(stack[top--]);

    for (int i = 0; i < half; i++)
        enqueue(dequeue());

    for (int i = 0; i < half; i++)
        stack[++top] = dequeue();

    while (top != -1) {
        enqueue(stack[top--]);
        enqueue(dequeue());
    }
}

#include <stdio.h>
#define MAX 100

int s1[MAX], s2[MAX];
int top1 = -1, top2 = -1;

void enqueue(int x) {
    s1[++top1] = x;
}

void shiftStacks() {
    if (top2 == -1) {
        while (top1 != -1)
            s2[++top2] = s1[top1--];
    }
}

void dequeue() {
    shiftStacks();
    top2--;
}

int frontElement() {
    shiftStacks();
    return s2[top2];
}

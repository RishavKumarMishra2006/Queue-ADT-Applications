#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int cache[SIZE], size = 0, capacity = 3;

void refer(int x) {
    int i;
    for (i = 0; i < size; i++) {
        if (cache[i] == x) break;
    }

    if (i < size) {
        for (int j = i; j > 0; j--)
            cache[j] = cache[j - 1];
    } else {
        if (size < capacity) size++;
        for (int j = size - 1; j > 0; j--)
            cache[j] = cache[j - 1];
    }
    cache[0] = x;
}

void display() {
    for (int i = 0; i < size; i++)
        printf("%d ", cache[i]);
    printf("\n");
}

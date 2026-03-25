#include <stdio.h>
#include <string.h>

char queue[1000];
int front = 0, rear = -1;
int freq[26] = {0};

void process(char str[]) {
    for (int i = 0; str[i]; i++) {
        char ch = str[i];
        freq[ch - 'a']++;
        queue[++rear] = ch;

        while (front <= rear && freq[queue[front] - 'a'] > 1)
            front++;

        if (front <= rear)
            printf("%c ", queue[front]);
        else
            printf("-1 ");
    }
}

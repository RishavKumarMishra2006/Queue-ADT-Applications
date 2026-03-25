#include <stdio.h>

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int orangesRotting(int grid[3][3]) {
    int queue[100][2], front = 0, rear = -1;
    int time = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i][j] == 2) {
                queue[++rear][0] = i;
                queue[rear][1] = j;
            }
        }
    }

    while (front <= rear) {
        int size = rear - front + 1;
        int changed = 0;

        for (int i = 0; i < size; i++) {
            int x = queue[front][0];
            int y = queue[front++][1];

            for (int d = 0; d < 4; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];

                if (nx >= 0 && ny >= 0 && nx < 3 && ny < 3 && grid[nx][ny] == 1) {
                    grid[nx][ny] = 2;
                    queue[++rear][0] = nx;
                    queue[rear][1] = ny;
                    changed = 1;
                }
            }
        }
        if (changed) time++;
    }

    return time;
}

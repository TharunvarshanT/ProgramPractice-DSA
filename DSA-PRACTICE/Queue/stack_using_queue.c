#include <stdio.h>

#define MAX 1000

int q[MAX];
int front = 0, rear = -1;

void push(int x) {
    q[++rear] = x;
    int size = rear - front + 1;

    for (int i = 0; i < size - 1; i++) {
        q[++rear] = q[front++];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        char cmd[10];
        scanf("%s", cmd);

        if (cmd[0] == 'P' && cmd[1] == 'U') {
            int x;
            scanf("%d", &x);
            push(x);
        }
        else if (cmd[0] == 'P' && cmd[1] == 'O') {
            if (front > rear)
                printf("EMPTY\n");
            else
                printf("%d\n", q[front++]);
        }
        else if (cmd[0] == 'T') {
            if (front > rear)
                printf("EMPTY\n");
            else
                printf("%d\n", q[front]);
        }
        else if (cmd[0] == 'E') {
            if (front > rear)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }

    return 0;
}
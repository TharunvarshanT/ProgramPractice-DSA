#include <stdio.h>
#include <string.h>

char q[20005][20];
int front = 0, rear = 0;

int main() {
    int n;
    scanf("%d", &n);

    strcpy(q[rear++], "1");

    for (int i = 0; i < n; i++) {
        char s[20];
        strcpy(s, q[front++]);

        printf("%s", s);
        if (i != n - 1)
            printf(" ");

        strcpy(q[rear], s);
        strcat(q[rear++], "0");

        strcpy(q[rear], s);
        strcat(q[rear++], "1");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char s[100005];
    scanf("%s", s);

    int freq[26] = {0};
    char q[100005];
    int front = 0, rear = 0;

    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
        q[rear++] = s[i];

        while (front < rear && freq[q[front] - 'a'] > 1)
            front++;

        if (front == rear)
            printf("#");
        else
            printf("%c", q[front]);

        if (i != n - 1)
            printf(" ");
    }

    return 0;
}
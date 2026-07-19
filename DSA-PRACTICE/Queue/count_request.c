#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL, *rear = NULL;

void enqueue(int x) {
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;

    if (rear == NULL) {
        front = rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }
}

void dequeue() {
    if (front == NULL)
        return;

    struct Node *temp = front;
    front = front->next;

    if (front == NULL)
        rear = NULL;

    free(temp);
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int t;
        scanf("%d", &t);

        enqueue(t);

        while (front != NULL && front->data < t - 3000)
            dequeue();

        int count = 0;
        struct Node *cur = front;

        while (cur != NULL) {
            count++;
            cur = cur->next;
        }

        printf("%d", count);

        if (i != n - 1)
            printf(" ");
    }

    return 0;
}
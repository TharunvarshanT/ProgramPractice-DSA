#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int x) {
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = top;
    top = temp;
}

void pop() {
    if (top != NULL) {
        struct Node *temp = top;
        top = top->next;
        free(temp);
    }
}

int peek() {
    return top->data;
}

int isEmpty() {
    return top == NULL;
}

int main() {

    int n;
    scanf("%d", &n);

    int arr[n], ans[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = n - 1; i >= 0; i--) {

        while (!isEmpty() && peek() <= arr[i])
            pop();

        if (isEmpty())
            ans[i] = -1;
        else
            ans[i] = peek();

        push(arr[i]);
    }

    for (int i = 0; i < n; i++)
        printf("%d ", ans[i]);

    return 0;
}
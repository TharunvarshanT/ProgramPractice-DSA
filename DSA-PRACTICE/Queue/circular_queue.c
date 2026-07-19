#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int x) {
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;

    if (front == NULL) {
        front = rear = temp;
        rear->next = front;
    } else {
        temp->next = front;
        rear->next = temp;
        rear = temp;
    }
}

void dequeue() {
    if (front == NULL) {
        printf("Queue is Empty\n");
        return;
    }

    if (front == rear) {
        printf("Deleted: %d\n", front->data);
        free(front);
        front = rear = NULL;
    } else {
        struct Node *temp = front;
        printf("Deleted: %d\n", front->data);
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

void display() {
    if (front == NULL) {
        printf("Queue is Empty\n");
        return;
    }

    struct Node *temp = front;

    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != front);

    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    enqueue(40);

    display();

    return 0;
}

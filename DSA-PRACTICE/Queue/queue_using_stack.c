#include <stdio.h>

#define MAX 1000

int s1[MAX], s2[MAX];
int top1 = -1, top2 = -1;

void push1(int x) {
    s1[++top1] = x;
}

void push2(int x) {
    s2[++top2] = x;
}

int pop1() {
    return s1[top1--];
}

int pop2() {
    return s2[top2--];
}

void shift() {
    if (top2 == -1) {
        while (top1 != -1) {
            push2(pop1());
        }
    }
}

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        char cmd[10];
        scanf("%s", cmd);

        if (cmd[0] == 'P' && cmd[1] == 'U') {
            int x;
            scanf("%d", &x);
            push1(x);
        }
        else if (cmd[0] == 'P' && cmd[1] == 'O') {
            shift();
            if (top2 == -1)
                printf("EMPTY\n");
            else
                printf("%d\n", pop2());
        }
        else if (cmd[0] == 'P' && cmd[1] == 'E') {
            shift();
            if (top2 == -1)
                printf("EMPTY\n");
            else
                printf("%d\n", s2[top
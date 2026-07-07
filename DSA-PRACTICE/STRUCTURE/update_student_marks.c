#include <stdio.h>
struct Student{
    int roll;
    char name[50];
    float marks;
};
int main(){
    struct Student s;
    struct Student *ptr =&s;
    float bonus;

    // Read student details and bonus mark
    if (scanf("%d %s %f %f", &ptr->roll,ptr->name,&ptr->marks,&bonus) ==4) {
        ptr->marks+=bonus;
        if (ptr->marks>100.0) {
            ptr->marks=100.0;
        }
        printf("Updated Marks:%.2f\n",ptr->marks);
    }
    return 0;
}

#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
struct Student createStudent() {
    struct Student temp;
    scanf("%d %s %f",&temp.roll,temp.name,&temp.marks);
    return temp;
}
int main() {
    struct Student s1 = createStudent();
    printf("Student Created\n");
    printf("Roll NO: %d\n",s1.roll);
    printf("Name: %s\n",s1.name);
    printf("Marks: %.2f\n",s1.marks);
    return 0;
}

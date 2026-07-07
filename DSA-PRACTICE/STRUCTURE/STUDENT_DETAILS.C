#include<stdio.h>
struct student{
    int roll_no;
    char name[30];
    int age ;
    int marks;
};
int main(){
    struct student s1;
    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);
    printf("\n");
    printf("Enter name: ");
    scanf(" %[^\n]", s1.name);
    printf("\n");
    printf("Enter age: ");
    scanf(" %d", &s1.age);
    printf("\n");
    printf("Enter marks: ");
    scanf("%d", &s1.marks);
    printf("------------------------------------\n");
    printf(" Roll No:%d\n Name: %s\n Age: %d\n Marks: %d", s1.roll_no, s1.name, s1.age, s1.marks);
    return 0;
}
#include<stdio.h>
struct student{
    int roll_no;
    char name[30];
    int age ;
    int marks;
};
int main(){
    int n, i;
    float sum = 0.0, avg;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];
    for(i = 0; i < n; i++){
        printf("Enter details for st    udent %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &s[i].roll_no);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Age: ");
        scanf(" %d", &s[i].age);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
        sum += s[i].marks;
    }
    avg = sum / n;
    printf("------------------------------------\n");
    printf("Average marks of %d students: %.2f\n", n, avg);
    return 0;
}
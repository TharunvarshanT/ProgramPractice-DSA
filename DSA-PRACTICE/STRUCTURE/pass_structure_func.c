#include<stdio.h>
struct student{
    char name[30];
    float marks;
};
char get_student_name(struct student s){
    if (s.marks >= 90.0) {
        return 'A';
    } else if (s.marks >= 75.0) {
        return 'B';
    } else if (s.marks >= 50.0) {
        return 'C';
    } else {
        return 'F';
    }
}
int main(){
    struct student s1;
    printf("Enter student name: ");
    scanf(" %[^\n]", s1.name);
    printf("Enter student marks: ");
    scanf("%f", &s1.marks);
    char grade = get_student_name(s1);
    printf("------------------------------------\n");
    printf("Student Name: %s\n", s1.name);
    printf("Student Marks: %.2f\n", s1.marks);
    printf("Student Grade: %c\n", grade);
    return 0;
}
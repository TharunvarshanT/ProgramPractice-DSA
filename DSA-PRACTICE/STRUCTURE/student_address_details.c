#include<stdio.h>
struct student_address_details
{
    int roll_no;
    char name[30];
    char address[50];
    int pincode;
};

int main(){
    struct student_address_details s1;
    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);
    printf("enter the Name : ");
    scanf(" %[^\n]", s1.name);
    printf("Enter a city Name : ");
    scanf(" %[^\n]", s1.address);
    printf("Enter a pincode : " );
    scanf(" %d" , &s1.pincode);
    printf("------------------------------------\n");
    printf(" Roll No:%d\n Name: %s\n Address: %s\n pincode: %d", s1.roll_no, s1.name, s1.address, s1.pincode);
    return 0;
}
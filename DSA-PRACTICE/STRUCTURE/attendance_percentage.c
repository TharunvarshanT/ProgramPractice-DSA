#include <stdio.h>
struct Attendance {
    int totalClasses;
    int attendedClasses;
};
struct Student {
    int roll;
    char name[30];
    struct Attendance att;
};
int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n] ;
    for (int i = 0; i < n; i++) {
        scanf(" %d %s %d %d", &students[i].roll, students[i].name, &students[i].att.totalClasses, &students[i].att.attendedClasses);
    }
    for (int i = 0; i < n; i++) {
        float percentage = ((float)students[i].att.attendedClasses * 100.0) / students[i].att.totalClasses;
        printf("%s Attendance: %.2f%%\n", students[i].name, percentage);
    }
    return 0;
}

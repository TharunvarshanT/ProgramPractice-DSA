#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    int n;
    float total_mark = 0.0;
    float avg_mark = 0.0;
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
        total_mark += students[i].marks;
    }
    avg_mark = total_mark / n;
    printf("Total Marks: %.2f\n", total_mark);
    printf("Average Marks: %.2f\n", avg_mark);
    free(students);
    return 0;
}

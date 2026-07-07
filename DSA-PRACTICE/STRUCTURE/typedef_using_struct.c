#include <stdio.h>
typedef struct {
	int roll;
	char name[50];
	float mark1;
	float mark2;
	float mark3;
} Student;
int main() {
	Student s;
	float total;
	float percentage;
	if (scanf("%d %s %f %f %f", &s.roll, s.name, &s.mark1, &s.mark2, &s.mark3) == 5) {
		total = s.mark1 + s.mark2 + s.mark3;
		percentage = total / 3.0;
		printf("Total: %.0f\n", total);
		printf("Percentage: %.2f\n", percentage);
	}
	return 0;
}

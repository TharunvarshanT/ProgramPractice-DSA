#include <stdio.h>
struct StudentFee {
    int roll;
    char name[50];
    double totFee;
    double paidFee;   
};

int main() {
    struct StudentFee s;
    double balfee;
    if (scanf("%d %s %lf %lf", &s.roll, s.name, &s.totFee, &s.paidFee)== 4) {
        balfee = s.totFee - s.paidFee;
        printf("Balance Fee: %.2f\n", balfee);
    }return 0;
}

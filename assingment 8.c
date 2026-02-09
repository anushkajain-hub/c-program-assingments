#include<stdio.h>

int main() {
   int m1,m2,m3,m4,m5 , total;
   float percentage;
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500.0) * 100;
    printf("Total marks: %d\n", total); 
    printf("Percentage: %f\n", percentage);

    if (m1<40 || m2<40 || m3<40 || m4<40 || m5<40) {
        printf("Result: Fail\n");
    } else {
        printf("Result: Pass\n");
    }

    if (percentage >= 75) {
        printf("Distinction\n");
    } else if (percentage >= 60 || percentage < 75) {
        printf("First Division\n");
    } else if (percentage >= 50 || percentage < 60) {
        printf("Second Divison\n");
    } else if (percentage >= 40 || percentage < 50) {
        printf("Third Divison\n");
    } else {
        printf("Fail\n");
    }
   

}
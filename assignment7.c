#include <stdio.h>

struct Student {
    int roll_no;
    char name[20];
    int m1, m2, m3;
    int total;
    float percentage;
};

int main() {
    struct Student s[2];   
    int i;
    for (i = 0; i < 2; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Enter marks of 3 subjects:\n");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);

        
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].percentage = s[i].total / 3.0;
    }

    
    printf("\nSTUDENT RESULT\n");

    for (i = 0; i < 2; i++) {
        printf("\nRoll No: %d", s[i].roll_no);
        printf("\nName: %s", s[i].name);
        printf("\nTotal Marks: %d", s[i].total);
        printf("\nPercentage: %.2f", s[i].percentage);

        if (s[i].percentage >= 40)
            printf("\nResult: PASS");
        else
            printf("\nResult: FAIL");

    }

    return 0;
}

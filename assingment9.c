#include<stdio.h>
int main() {
    int digit, temp,sum=0; ;
    printf("Enter the number:");
    scanf("%d", &digit);
    temp = digit;

    while (temp>0) {
        int digit = temp % 10;
        sum += digit*digit*digit;
        temp /= 10;
 }
    if (sum == digit) {
        printf("%d is an Armstrong number.\n", digit);
    } else {
        printf("%d is not an Armstrong number.\n", digit);
    }
}
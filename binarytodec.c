#include<stdio.h>
#include<math.h>

void main() {
    int num, temp, bi = 0, i;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    for (i = 0; i < 8; i++) {  
        temp = num % 10;        
        bi = bi + temp * pow(2, i);
        num = num / 10;         
    }

    printf("The decimal value is: %d", bi);
}
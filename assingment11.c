#include<stdio.h>
#include<math.h>
int main() {
    int a,square, cube, square_root, factorial=1,i;
    printf("enter a number:");
    scanf("%d", &a);

    square = a * a;
    cube = a * a * a;   
    square_root = sqrt(a);
    printf("Square: %d\n", square);
    printf("Cube: %d\n", cube); 
    printf("Square Root: %d\n", square_root);
    if (a<0) {
        printf("error: factorial of negative number is not defined");
    } else {
        for(i=1;i<=a;i++) {
            factorial *= i;
        }
        printf("Factorial: %d\n", factorial);
        
}
}
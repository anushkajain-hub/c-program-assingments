#include<stdio.h>
#include<math.h>
int main() {
    int choice , i, a, b ,result;

    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n"); 
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Factorial\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            result = a + b;
            printf("Result: %d\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            result = a - b;
            printf("Result: %d\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            result = a * b;
            printf("Result: %d\n", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            if (b != 0) {
                result = a / b;
                printf("Result: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            result = pow(a,b);
            printf("Result: %d\n", result);
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%d", &a);
            if (a < 0) {
                printf("Error: Factorial is not defined for negative numbers.\n");
            } else {
                result = 1;
                for (int i = 1; i <= a; i++) 
                    result *= i;
                
                printf("Result: %d\n", result);
            }
            break;
        default:
            printf("Invalid choice. Please select a valid operation.\n");
    }


}
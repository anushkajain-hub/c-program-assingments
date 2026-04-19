#include <stdio.h>

int fact(int n ) {
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
} 
int main() {
    int num;
    printf ("enter a number: ");
    scanf("%d", &num);

    if(num<0)
      printf("Factorial not defined");

    else 
    printf("Factorial of %d is %d ", num , fact(num));




}   


    

#include<stdio.h>
#include<math.h>

void main() {
    int num , b=0, rem;
     printf("Enter a binary number: ");
     scanf("%d" , &num);

     while (num>0){
     rem = num%10;
     b = b+ num*pow(2, num);
     num= num/10;

     
     }
     printf("the decimal value is ; %d", b) ;
}
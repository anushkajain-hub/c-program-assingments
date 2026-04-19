#include<stdio.h>

void main(){
    int i , a, b, gcd=1 ;
    printf("enter first number; ");
    scanf ("%d", &a);
    printf("enter second number; ");
    scanf ("%d", &b);

    for(i=2; i<=a;i++){
        if(a % i == 0){
        printf("Smallest divisor is %d\n" , i);
        break;
        }
   }


    for(i=2; i<=b;i++){
      if(a % i == 0){
        printf("Smallest divisor is %d\n" , i);
        break;
      }
   }


 printf("common divisors are:");
 for(i=2; (i<=a && i<=b) ; i++){
    if ( a %i==0 && b%i==0)
        gcd= i;
 }
  printf( "GCD is =%d" , gcd);
         

  }

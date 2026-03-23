#include <stdio.h>
int add(int,int);
int sub (int,int);
int mul(int,int);
float div(float,float );

int main() {
    int choice;
    int a , b ;
    printf("-----Menu------");
    printf("1: Addition\n");
    printf("2: Subtraction\n");
    printf("3: Multiplication\n");
    printf("4: Division\n");

    printf("select choice");
    scanf("%d" ,&choice);
    printf("Enter two numbers");
    scanf("%d %d" , &a , &b);
   switch(choice) {
      case 1:
      printf("result is : %d" , add(a,b));
          break;
       case 2:
          printf("result is : %d" , sub(a,b));
          break;
       case 3:
          printf("result is : %d" , mul(a,b));
          break;
       case 4:
          printf("result is : %.2f" , div(a,b ));
          break;
        default:
          printf("Invalid Choice");
   }
}
  int add (int x , int y)
 {     
   return x + y ;
}
 int sub( int x , int y )
 { 
    return x-y;
 }
int mul (int x , int y)
{
    return x*y;
}
float div(float x , float y )
{
    return x/y;
}

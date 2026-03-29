#include <stdio.h> 
#include <string.h>

int main(){
    char str[100] , str2[100] , rev[100];
    int choice , i , len ;

    while(1){
        printf("\n-----String Menu-----\n");
        printf("1.Find length\n");
        printf("2.Reverse String\n" );
        printf("3. Check Palindrome\n");
        printf("4. Compare two strings\n");
        printf("5.Copy String\n");
        printf("6. Concatenate Strings\n");
        printf("7. Exit\n");

        printf("Enter choice : ");
        scanf("%d" , &choice);

        switch(choice) {

        case 1:
           printf("Enter strimg: ");
           scanf("%s" , str);
           printf("Length = %lu\n" , strlen(str));
           break;

        case 2:
           printf("Enter strimg: ");
           scanf("%s" , str);

           len = strlen(str);
           for (i=0 ; i < len ; i++)
           rev[i] = str[len-i-1] ;
           rev[i] = '\0';

           printf("Reverse = %s" , rev);
           break;

        case 3:
           printf("Enter strimg: ");
           scanf("%s" , str);
           
           len = strlen(str);
           for (i=0 ; i < len ; i++)
             rev[i] = str[len-i-1] ;
           rev[i] = '\0';
           

           if (strcmp(str, rev) == 0)
              printf("Palindrome\n");
           else
              printf("Not Palindrome\n");
            break;

        case 4:
            printf("Enter strimg: ");
            scanf("%s" , str);

            printf("Enter strimg: ");
            scanf("%s" , str2);
            

            if (strcmp(str,str2) == 0)
              printf("Strings are Equal\n");
            else
            printf("Strings are Not Equal\n");
            break;
        case 5:
            printf("Enter strimg: ");
            scanf("%s" , str);

            printf("Enter strimg: ");
            scanf("%s" , str2);

            strcat(str,str2);
            printf("concatenate string = %s\n",str);
            break;

        case 7 :
            return 0;

        default:
        printf("Invalid Choice\n");
        }
    }
}

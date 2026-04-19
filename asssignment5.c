#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int i, j, r, c, choice;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of Matrix A:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("\nMenu:\n");
    printf("1. Addition\n");
    printf("2. Saddle Point\n");
    printf("3. Inverse (2x2 only)\n");
    printf("4. Magic Square\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    
    if(choice == 1) {
        printf("Enter elements of Matrix B:\n");
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                scanf("%d",&b[i][j]);

        printf("Result (A + B):\n");
        for(i=0;i<r;i++) {
            for(j=0;j<c;j++) {
                sum[i][j] = a[i][j] + b[i][j];
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }


    else if(choice == 2) {
        for(i=0;i<r;i++) {
            int min = a[i][0], col = 0;

            for(j=1;j<c;j++) {
                if(a[i][j] < min) {
                    min = a[i][j];
                    col = j;
                }
            }

            for(int k=0;k<r;k++) {
                if(a[k][col] > min)
                    break;
                if(k == r-1)
                    printf("Saddle Point = %d\n", min);
            }
        }
    }

    
    else if(choice == 3) {
        if(r == 2 && c == 2) {
            int det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

            if(det == 0) {
                printf("Inverse not possible\n");
            } else {
                printf("Inverse Matrix:\n");
                printf("%.2f %.2f\n", a[1][1]/(float)det, -a[0][1]/(float)det);
                printf("%.2f %.2f\n", -a[1][0]/(float)det, a[0][0]/(float)det);
            }
        } else {
            printf("Only for 2x2 matrix\n");
        }
    }

    
    else if(choice == 4) {
        if(r != c) {
            printf("Not a square matrix\n");
        } else {
            int sum1 = 0;

            for(j=0;j<c;j++)
                sum1 += a[0][j];

            
            for(i=1;i<r;i++) {
                int s = 0;
                for(j=0;j<c;j++)
                    s += a[i][j];
                if(s != sum1) {
                    printf("Not a Magic Square\n");
                    return 0;
                }
            }

            
            for(j=0;j<c;j++) {
                int s = 0;
                for(i=0;i<r;i++)
                    s += a[i][j];
                if(s != sum1) {
                    printf("Not a Magic Square\n");
                    return 0;
                }
            }

            
            int d1=0, d2=0;
            for(i=0;i<r;i++) {
                d1 += a[i][i];
                d2 += a[i][r-i-1];
            }

            if(d1 != sum1 || d2 != sum1)
                printf("Not a Magic Square\n");
            else
                printf("Magic Square\n");
        }
    }

    else {
        printf("Invalid choice\n");
    }

    return 0;
}
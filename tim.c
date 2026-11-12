#include <stdio.h>
int main () {
    int n; 
    printf("Enter the choice b/w 1 - 2: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Matrix Addition\n");
        int a[2][2], b[2][2], c[2][2];
        printf("Enter numbers in matrix A: ");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2 ; j++) {
            scanf("\t %d", &a[i][j]);
        }
    }
            printf("Enter numbers in matrix B: ");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2 ; j++) {
             scanf("\t %d", &b[i][j]);
        }
    }
        
        printf("\n Matrix A\n");
    for (int i = 0; i < 2; i++) {
         printf("\n");
        for (int j = 0; j < 2; j++){
            printf("\t%d", a[i][j]);
        }
    }
    printf("\n Matrix B\n");
    for (int i = 0; i < 2; i++) {
        printf("\n");
        for (int j = 0; j < 2; j++){
            printf("\t%d", b[i][j]);
        }
    }
    printf("\n Matrix C: \n");
        for (int i = 0; i<2; i++) {
            printf("\n");
            for (int j = 0; j<2; j++) {
                printf ("\t %d", c[i][j] = a[i][j] + b[i][j]);
            }
        }
        break;
    case 2:   //floyd triangle 
        printf("Number pattern triangle\n");
        int row,count = 1;
        printf("Enter the number of rows: ");
        scanf("%d",&row);
        for (int i=1; i<=row; i++) {
            for(int j=1; j<=i; j++) {
                printf("%d\t", count);
                count++;
            }
            printf("\n");
        }
        break;
    
    default:
    printf("Invalid Input ");
        break;
    }
}
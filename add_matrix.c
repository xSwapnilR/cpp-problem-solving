#include <stdio.h>
int main() {
    int a[2][2], b[2][2], c[2][2];
    printf("Enter matrix A: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j<2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter matrix B: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j<2; j++) {
            scanf("%d", &b[i][j]);
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
    printf("\n Matrix C\n");
    for (int i = 0; i < 2; i++) {
        printf("\n");
        for (int j = 0; j < 2; j++)
        printf("\t%d", c[i][j] = a[i][j] + b[i][j]);
    }
    
    return 0;
}
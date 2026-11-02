#include <stdio.h>
void readMatrix(int mat[2][2], char name) {
    printf("Enter the matrix %c: ", name);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j<2; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}
void printMatrix (int mat[2][2], char name) {
    printf("\nMatrix %c", name);
        for (int i=0; i<2; i++) {
            printf("\n");
            for (int j = 0;j<2; j++) {
                printf("%d\t",mat[i][j]);
            }
        }
    }

int main() {
    int a[2][2], b[2][2], c[2][2];
    readMatrix(a, 'A');
    readMatrix(b, 'B');
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printMatrix(a, 'A');
    printMatrix(b, 'B');
    printMatrix(c,'C');
    return 0;
}
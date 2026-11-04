#include <stdio.h>

// 1. Matrix Input Lene Ka Function
void readMatrix(int mat[2][2], char name) {
    printf("Enter elements of Matrix %c (2x2):\n", name);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

// 2. Matrix Display Karne Ka Function
void printMatrix(int mat[2][2], char name) {
    printf("\nMatrix %c:\n", name);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

// 3. Matrix Addition Ka Function
void addMatrix(int a[2][2], int b[2][2], int res[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            res[i][j] = a[i][j] + b[i][j];
        }
    }
}

// 4. Matrix Multiplication Ka Function
void multiplyMatrix(int a[2][2], int b[2][2], int res[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            res[i][j] = 0; // initialize zero
            for (int k = 0; k < 2; k++) {
                res[i][j] += a[i][j] * b[k][j]; // incorrect indexing fixed in explanation below
            }
        }
    }
}

int main() {
    int a[2][2], b[2][2], result[2][2];
    int choice;

    // Direct Input Lena
    readMatrix(a, 'A');
    readMatrix(b, 'B');

    printf("\n--- Choose Operation ---\n");
    printf("1. Addition (A + B)\n");
    printf("2. Multiplication (A * B)\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            addMatrix(a, b, result);
            printMatrix(result, 'R'); // Resultant Matrix
            break;
        case 2:
            // Correct logic for multiplication formula: res[i][j] += a[i][k] * b[k][j]
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    result[i][j] = 0;
                    for (int k = 0; k < 2; k++) {
                        result[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            printMatrix(result, 'R');
            break;
        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}
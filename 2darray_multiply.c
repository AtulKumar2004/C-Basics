#include <stdio.h>

int main() {
    int row1, col1, row2, col2,i,j,k;

    
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &col1);

    
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &row2, &col2);

    
    if (col1 != row2) {
        printf("Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
    }
    else
    {
    int matrix1[row1][col1];
    int matrix2[row2][col2];
    int result[row1][col2];

    
    printf("Enter elements for the first matrix:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    
    printf("Enter elements for the second matrix:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            result[i][j] = 0;
        }
    }

    
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            for (k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Value of matrix A\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("Value of matrix B\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    
    
    printf("Resultant Matrix:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}

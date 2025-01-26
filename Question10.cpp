#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Input the dimensions of the first matrix
    printf("Input Rows and Columns of the 1st matrix: ");
    scanf("%d %d", &rows1, &cols1);

    // Input the dimensions of the second matrix
    printf("Input Rows and Columns of the 2nd matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if the matrices are of the same size
    if (rows1 != rows2 || cols1 != cols2) {
        printf("The matrices cannot be compared because they have different dimensions.\n");
        return 0;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], sumMatrix[rows1][cols1];

    // Input elements in the first matrix
    printf("Input elements in the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("element - [%d],[%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements in the second matrix
    printf("Input elements in the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("element - [%d],[%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Display the first matrix
    printf("\nThe first matrix is:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    // Display the second matrix
    printf("\nThe second matrix is:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Check if the matrices are equal
    int equal = 1; // Assume they are equal
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                equal = 0; // Matrices are not equal
                break;
            }
        }
        if (!equal) break;
    }

    if (equal) {
        printf("\nThe Matrices can be compared:\nTwo matrices are equal.\n");
    } else {
        printf("\nThe Matrices can be compared:\nTwo matrices are not equal.\n");
    }

    // Matrix addition
    printf("\nThe addition of the two matrices is:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


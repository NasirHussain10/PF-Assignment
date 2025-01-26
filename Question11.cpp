#include <stdio.h>

int main() {
    int matrix[3][3];
    int isIdentity = 1;  // Flag to check if the matrix is identity
    int min, max;

    // Input the elements of the matrix
    printf("Enter elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("element - [%d],[%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initializing min and max with the first element
    min = matrix[0][0];
    max = matrix[0][0];

    // Check for identity matrix and find the min and max values
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Check for identity matrix (1's on the diagonal and 0's elsewhere)
            if (i == j) {
                if (matrix[i][j] != 1) {
                    isIdentity = 0;
                }
            } else {
                if (matrix[i][j] != 0) {
                    isIdentity = 0;
                }
            }

            // Update min and max
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    // Output whether the matrix is identity matrix or not
    if (isIdentity) {
        printf("\nThe matrix is an identity matrix.\n");
    } else {
        printf("\nThe matrix is not an identity matrix.\n");
    }

    // Output the min and max values
    printf("\nThe minimum number in the matrix is: %d\n", min);
    printf("The maximum number in the matrix is: %d\n", max);

    return 0;
}

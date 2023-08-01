#include <stdio.h>
int main() {
    int r1, c1, r2, c2, i, j, k;
    int first[10][10], second[10][10], result[10][10];
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c1; ++j) {
            scanf("%d", &first[i][j]);
        }
    }
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < r2; ++i) {
        for (j = 0; j < c2; ++j) {
            scanf("%d", &second[i][j]);
        }
    }

    if (c1 != r2) {
        printf("Error: The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 0;
    }
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            result[i][j] = 0;
            for (k = 0; k < c1; ++k) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
    printf("The result of matrix multiplication is:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

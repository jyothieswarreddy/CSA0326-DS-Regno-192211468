#include <stdio.h>
int main() {
	int i,j;
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row_sum[3] = {0};
    int col_sum[3] = {0};
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            row_sum[i] += matrix[i][j];
        }
    }
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3; i++) {
            col_sum[j] += matrix[i][j];
        }
}
    printf("Sum of each row: ");
    for (i = 0; i < 3; i++) {
        printf("%d ", row_sum[i]);
    }
    printf("\n");
    printf("Sum of each column: ");
    for (j = 0; j < 3; j++) {
        printf("%d ", col_sum[j]);
    }
    printf("\n");
    return 0;
}

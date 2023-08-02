#include <stdio.h>
int main() {
	int i,j;
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int largest = matrix[0][0];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] > largest) {
                largest = matrix[i][j];
            }
        }
    }
    printf("Largest element in the matrix: %d\n", largest);
    return 0;
}

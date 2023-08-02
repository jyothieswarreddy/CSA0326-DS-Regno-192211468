#include <stdio.h>
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int merged_arr[10];
    int i, j,k;
    for (i = 0; i < 5; i++) {
        merged_arr[i] = arr1[i];
    }
    for (j = 0; j < 5; j++) {
        merged_arr[i + j] = arr2[j];
    }
    printf("Merged array: ");
    for (k = 0; k < 10; k++) {
        printf("%d ", merged_arr[k]);
    }
    printf("\n");
    return 0;
}

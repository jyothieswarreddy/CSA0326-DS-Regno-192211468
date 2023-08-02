#include <stdio.h>
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int i, j, arr3[n1 + n2];
    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        arr3[i + j] = arr2[j];
    }
   printf("Concatenated array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    return 0;
}

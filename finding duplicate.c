#include <stdio.h>
int main() {
	int i,j;
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Duplicate elements in the given array: ");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
            }
        }
    }
    printf("\n");   
    return 0;
}

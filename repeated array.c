#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    printf("Elements repeated twice in the array: ");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}

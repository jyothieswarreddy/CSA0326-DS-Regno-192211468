#include <stdio.h>
int main() {
    int arr[] = {5, 2, 8, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;   
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }   
    printf("Elements of array sorted in descending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");  
    return 0;
}

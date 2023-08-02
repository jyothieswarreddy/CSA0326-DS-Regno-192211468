#include <stdio.h>
int main() {
    int arr[5];
    int i, sum = 0, missing_num;
    printf("Enter 4 elements of the array:\n");
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    missing_num = 10 * (10 + 1) / 2 - sum;
    printf("Missing element: %d\n", missing_num);
    return 0;
}

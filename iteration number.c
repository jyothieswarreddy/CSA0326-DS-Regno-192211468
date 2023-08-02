#include <stdio.h>
int main() {
    int arr[5];
    int i;
    printf("Enter 5 elements of the array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("5th iteration number: %d\n", arr[4]);
    return 0;
}

#include <stdio.h>

int main() {
    int n, i, a[100], even_count = 0, odd_count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter array elements: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d is even.\n", a[i]);
            even_count++;
        } else {
            printf("%d is odd.\n", a[i]);
            odd_count++;
        }
    }

    printf("Total even numbers in the array: %d\n", even_count);
    printf("Total odd numbers in the array: %d\n", odd_count);

    return 0;
}

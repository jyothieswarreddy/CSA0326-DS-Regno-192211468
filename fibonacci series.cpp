#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int num, i;
    printf("Number of elements: ");
    scanf("%d", &num);
    printf("Fibonacci series: ");
    for (i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}

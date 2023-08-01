#include <stdio.h>

unsigned long long factorial(int num) {
    if (num == 0) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
        return 0;
    }

    printf("The factorial of %d is: %llu\n", num, factorial(num));

    return 0;
}


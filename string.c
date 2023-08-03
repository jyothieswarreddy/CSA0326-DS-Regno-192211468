#include <stdio.h>
#include <string.h>
int main() {
    char *arr[] = {"apple", "banana", "orange", "grape", "kiwi"};
    char *str = "orange";
    int len = sizeof(arr)/sizeof(arr[0]);
    int i;
    for (i = 0; i < len; i++) {
        if (strcmp(arr[i], str) == 0) {
            printf("Valid\n");
            return 0;
        }
    }
    printf("Invalid\n");
    return 0;
}

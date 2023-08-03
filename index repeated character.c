#include <stdio.h>
int main() {
    char str[100];
    int i, j, len;   
    printf("Enter a string: ");
    scanf("%s", str);   
    len = strlen(str);   
    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                printf("'%c' is repeated at index %d and %d\n", str[i], i, j);
            }
        }
    }   
    return 0;
}

#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    int index = linearSearch(arr, n, key);
    
    if (index != -1) {
        printf("Element found at index %d", index);
    } else {
        printf("Element not found");
    }
    
    return 0;
}

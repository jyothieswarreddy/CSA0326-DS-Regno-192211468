#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
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
    
    int index = binarySearch(arr, n, key);
    
    if (index != -1) {
        printf("Element found at index %d", index);
    } else {
        printf("Element not found");
    }
    
    return 0;
}

#include <stdio.h>
int main() {
    int reg_nums[] = {1234, 5678, 9012, 3456, 7890};
    int n = sizeof(reg_nums) / sizeof(reg_nums[0]);
    int search_reg_num, i, found = 0;
    printf("Enter a registration number to search for: ");
    scanf("%d", &search_reg_num);  
    for (i = 0; i < n; i++) {
        if (reg_nums[i] == search_reg_num) {
            printf("Registration number %d found at index %d.\n", search_reg_num, i);
            found = 1;
            break;
        }
    }    
    if (!found) {
        printf("Registration number %d not found.\n", search_reg_num);
    }   
    return 0;
}

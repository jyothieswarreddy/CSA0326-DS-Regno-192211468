#include <stdio.h>
#include <stdlib.h>
struct Node {
    char data;
    struct Node* next;
};
int isPalindrome(struct Node* head) {
    struct Node* slow = head;
    struct Node* fast = head;
    struct Node* prev_slow = head;
    struct Node* midnode = NULL;
    int res = 1; 
    while (fast && fast->next) {
        fast = fast->next->next;
        prev_slow = slow;
        slow = slow->next;
    }
    if (fast != NULL) {
        midnode = slow;
        slow = slow->next;
}
    struct Node* second_half = slow;
    prev_slow->next = NULL;
    struct Node* prev = NULL;
    struct Node* current = second_half;
    struct Node* next = NULL;  
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    second_half = prev;
    struct Node* p1 = head;
    struct Node* p2 = second_half;
    while (p2 != NULL) {
        if (p1->data != p2->data) {
            res = 0; 
            break;
        }
        p1 = p1->next;
        p2 = p2->next;
    }
    prev = NULL;
    current = second_half;
    next = NULL;   
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }   
    second_half = prev;
    prev_slow->next = second_half;
    
    if (res == 1) {
        return 1; 
    } else {
        return 0; 
    }
}
void insert(struct Node** head, char data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = (*head);
    (*head) = new_node;
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%c ", node->data);
        node = node->next;
    }
}
int main() {
    struct Node* head = NULL;
    char str[100];
    int i, len;   
    printf("Enter a string: ");
    scanf("%s", str);  
    len = strlen(str);   
    for (i = 0; i < len; i++) {
        insert(&head, str[i]);
    }   
    printf("The linked list is: ");
    printList(head);   
    if (isPalindrome(head) == 1) {
        printf("\nThe linked list is a palindrome");
    } else {
        printf("\nThe linked list is not a palindrome");
    }   
    return 0;
}

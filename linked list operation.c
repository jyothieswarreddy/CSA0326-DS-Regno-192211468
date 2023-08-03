#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void insert(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void delete(struct Node** head_ref, int key) {
    struct Node* temp = *head_ref;
    struct Node* prev = NULL;
    
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    
    if (temp == NULL) {
        return;
    }
    
    prev->next = temp->next;
    free(temp);
}

void display(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main() {
    struct Node* head = NULL;
    int choice, data, key;
    
    do {
        printf("\nLinked List Operations\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter the data to be inserted: ");
                scanf("%d", &data);
                insert(&head, data);
                break;
            case 2:
                printf("Enter the key to be deleted: ");
                scanf("%d", &key);
                delete(&head, key);
                break;
            case 3:
                printf("The linked list is: ");
                display(head);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);
    
    return 0;
}

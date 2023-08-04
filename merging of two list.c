#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* mergeLists(struct Node* list1, struct Node* list2) {
    struct Node* mergedList = NULL;
    struct Node** lastPtrRef = &mergedList;

    while (1) {
        if (list1 == NULL) {
            *lastPtrRef = list2;
            break;
        } else if (list2 == NULL) {
            *lastPtrRef = list1;
            break;
        }

        if (list1->data <= list2->data) {
            moveNode(lastPtrRef, &list1);
        } else {
            moveNode(lastPtrRef, &list2);
        }

        lastPtrRef = &((*lastPtrRef)->next);
    }

    return mergedList;
}

void moveNode(struct Node** destRef, struct Node** sourceRef) {
    struct Node* newNode = *sourceRef;
    *sourceRef = newNode->next;
    newNode->next = *destRef;
    *destRef = newNode;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}
int main() {
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;
    // Add elements to list1
    list1 = (struct Node*)malloc(sizeof(struct Node));
    list1->data = 1;
    list1->next = (struct Node*)malloc(sizeof(struct Node));
    list1->next->data = 3;
    list1->next->next = (struct Node*)malloc(sizeof(struct Node));
    list1->next->next->data = 5;
    list1->next->next->next = NULL;
    // Add elements to list2
    list2 = (struct Node*)malloc(sizeof(struct Node));
    list2->data = 2;
    list2->next = (struct Node*)malloc(sizeof(struct Node));
    list2->next->data = 4;
    list2->next->next = (struct Node*)malloc(sizeof(struct Node));
    list2->next->next->data = 6;
    list2->next->next->next = NULL;
    printf("List 1: ");
    printList(list1);
    printf("\nList 2: ");
    printList(list2);
    struct Node* mergedList = mergeLists(list1, list2);
    printf("\nMerged List: ");
    printList(mergedList);
    return 0;
}

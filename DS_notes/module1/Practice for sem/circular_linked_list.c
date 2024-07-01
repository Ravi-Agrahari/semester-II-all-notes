#include <stdio.h>
#include <stdlib.h>

// Definition of a Node
struct Node {
    int data;
    struct Node *next;
};

// Functions for Circular Singly Linked List
struct Node *createNode(int data);
struct Node *insertAtFirst(struct Node *head, int data);
struct Node *insertAtLast(struct Node *head, int data);
struct Node *insertAtMiddle(struct Node *head, int data, int position);
struct Node *deleteFromFirst(struct Node *head);
struct Node *deleteFromLast(struct Node *head);
struct Node *deleteFromMiddle(struct Node *head, int position);
struct Node *find(struct Node *head, int key);
struct Node *reverse(struct Node *head);
void display(struct Node *head);

// Main function
int main() {
    struct Node *head = NULL;
    int choice, data, key, position;

    while(1) {
        printf("\nMenu:\n");
        printf("1. Insert at first\n");
        printf("2. Insert at last\n");
        printf("3. Insert at middle\n");
        printf("4. Delete from first\n");
        printf("5. Delete from last\n");
        printf("6. Delete from middle\n");
        printf("7. Find a key\n");
        printf("8. Reverse the list\n");
        printf("9. Display the list\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                head = insertAtFirst(head, data);
                break;
            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                head = insertAtLast(head, data);
                break;
            case 3:
                printf("Enter data and position: ");
                scanf("%d %d", &data, &position);
                head = insertAtMiddle(head, data, position);
                break;
            case 4:
                head = deleteFromFirst(head);
                break;
            case 5:
                head = deleteFromLast(head);
                break;
            case 6:
                printf("Enter position: ");
                scanf("%d", &position);
                head = deleteFromMiddle(head, position);
                break;
            case 7:
                printf("Enter key to find: ");
                scanf("%d", &key);
                struct Node* foundNode = find(head, key);
                if (foundNode != NULL) {
                    printf("Key found: %d\n", foundNode->data);
                } else {
                    printf("Key not found.\n");
                }
                break;
            case 8:
                head = reverse(head);
                break;
            case 9:
                display(head);
                break;
            case 10:
                exit(0);
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

// Function to create a new node
struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert element at the first of the circular linked list
struct Node *insertAtFirst(struct Node *head, int data) {
    struct Node *newNode = createNode(data);
    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
    } else {
        struct Node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }
    return head;
}

// Function to insert element at the last
struct Node *insertAtLast(struct Node *head, int data) {
    struct Node *newNode = createNode(data);
    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
    } else {
        struct Node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
    return head;
}

// Function to insert element in the middle
struct Node *insertAtMiddle(struct Node *head, int data, int position) {
    struct Node *newNode = createNode(data);
    if (head == NULL || position == 1) {
        newNode->next = head;
        if (head != NULL) {
            struct Node *temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
        } else {
            newNode->next = newNode;
        }
        head = newNode;
        return head; 
    }
    struct Node *temp = head;
    for (int i = 1; i < position - 1 && temp->next != head; i++) {
        temp = temp->next;
    }
    if (temp->next == head && position != 2) {
        printf("Position out of bounds\n");
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}

// Function to delete the first node
struct Node *deleteFromFirst(struct Node *head) {
    if (head == NULL) {
        printf("Circular linked list is empty\n");
        return head;
    }
    struct Node *temp = head;
    if (head->next == head) {
        free(head);
        head = NULL;
        return head;
    }
    while (temp->next != head) {
        temp = temp->next;
    }
    struct Node *firstNode = head;
    temp->next = head->next;
    head = head->next;
    free(firstNode);
    return head;
}

// Function to delete the last node
struct Node *deleteFromLast(struct Node *head) {
    if (head == NULL) {
        printf("Circular linked list is empty\n");
        return head;
    }
    struct Node *temp = head;
    if (head->next == head) {
        free(head);
        head = NULL;
        return head;
    }
    struct Node *prev = NULL;
    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = head;
    free(temp);
    return head;
}

// Function to delete a node from the middle
struct Node *deleteFromMiddle(struct Node *head, int position) {
    if (head == NULL) {
        printf("Circular linked list is empty\n");
        return head;
    }
    if (position == 1) {
        return deleteFromFirst(head);
    }
    struct Node *temp = head;
    struct Node *prev = NULL;
    for (int i = 1; i < position && temp->next != head; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (temp->next == head && position != 2) {
        printf("Position out of bounds\n");
        return head;
    }
    prev->next = temp->next;
    free(temp);
    return head;
}

// Function to find and return the node with the given key
struct Node *find(struct Node *head, int key) {
    if (head == NULL) {
        return NULL;
    }
    struct Node *temp = head;
    do {
        if (temp->data == key) {
            return temp;
        }
        temp = temp->next;
    } while (temp != head);
    return NULL;
}

// Function to reverse the circular singly linked list
struct Node *reverse(struct Node *head) {
    if (head == NULL) {
        return head;
    }
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *nextNode = NULL;
    struct Node *tail = head;
    while (tail->next != head) {
        tail = tail->next;
    }
    do {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    } while (current != head);
    head->next = prev;
    head = prev;
    tail->next = head;
    return head;
}

// Function to display the list
void display(struct Node *head) {
    if (head == NULL) {
        printf("Circular linked list is empty\n");
        return;
    }
    struct Node *temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

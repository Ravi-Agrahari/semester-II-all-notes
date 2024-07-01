#include <stdio.h>
#include <stdlib.h>

// Definition of a Node
struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

// Functions for Doubly Linked List
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
    newNode->prev = NULL;
    return newNode;
}

// Function to insert element at the first of the doubly linked list
struct Node *insertAtFirst(struct Node *head, int data) {
    struct Node *newNode = createNode(data);
    if (head != NULL) {
        head->prev = newNode;
    }
    newNode->next = head;
    head = newNode;
    return head;
}

// Function to insert element at the last
struct Node *insertAtLast(struct Node *head, int data) {
    struct Node *newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    return head;
}

// Function to insert element in the middle
struct Node *insertAtMiddle(struct Node *head, int data, int position) {
    struct Node *newNode = createNode(data);
    if (head == NULL || position == 1) {
        newNode->next = head;
        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
        return head; 
    }
    struct Node *temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of bounds\n");
    } else {
        newNode->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    return head;
}

// Function to delete the first node
struct Node *deleteFromFirst(struct Node *head) {
    if (head == NULL) {
        printf("Doubly linked list is empty\n");
        return head;
    }
    struct Node *temp = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    free(temp);
    return head;
}

// Function to delete the last node
struct Node *deleteFromLast(struct Node *head) {
    if (head == NULL) {
        printf("Doubly linked list is empty\n");
        return head;
    }
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return head;
    }
    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);
    return head;
}

// Function to delete a node from the middle
struct Node *deleteFromMiddle(struct Node *head, int position) {
    if (head == NULL) {
        printf("Doubly linked list is empty\n");
        return head;
    }
    if (position == 1) {
        return deleteFromFirst(head);
    }
    struct Node *temp = head;
    for (int i = 1; i < position && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of bounds\n");
        return head;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    free(temp);
    return head;
}

// Function to find and return the node with the given key
struct Node *find(struct Node *head, int key) {
    struct Node *temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

// Function to reverse the doubly linked list
struct Node *reverse(struct Node *head) {
    struct Node *current = head;
    struct Node *temp = NULL;
    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if (temp != NULL) {
        head = temp->prev;
    }
    return head;
}

// Function to display the list
void display(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

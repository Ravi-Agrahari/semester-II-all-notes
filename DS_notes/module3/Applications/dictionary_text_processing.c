/*
Introduction and Explanation:
Applications of data structures like trees and heaps include:
- Dictionary: Efficiently storing and retrieving key-value pairs.
- Text Processing: Parsing and analyzing text data.

Example Program (Dictionary in C using BST):
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure of a node
struct Node
{
    char key[50];
    char value[50];
    struct Node *left;
    struct Node *right;
};

// Create a new node
struct Node *createNode(char *key, char *value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    strcpy(newNode->key, key);
    strcpy(newNode->value, value);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert a node into BST
struct Node *insert(struct Node *root, char *key, char *value)
{
    if (root == NULL)
        return createNode(key, value);
    if (strcmp(key, root->key) < 0)
        root->left = insert(root->left, key, value);
    else if (strcmp(key, root->key) > 0)
        root->right = insert(root->right, key,value);
    return root;
}

// Search for a key in the BST
struct Node *search(struct Node *root, char *key)
{
    if (root == NULL || strcmp(root->key, key) == 0)
        return root;
    if (strcmp(key, root->key) < 0)
        return search(root->left, key);
    return search(root->right, key);
}

// In-order traversal of BST
void inOrder(struct Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%s: %s\n", root->key, root->value);
        inOrder(root->right);
    }
}

int main()
{
    struct Node *root = NULL;
    root = insert(root, "apple", "A fruit that is red or green.");
    root = insert(root, "banana", "A long yellow fruit.");
    root = insert(root, "cherry", "A small red fruit.");
    root = insert(root, "date", "A sweet brown fruit.");

    printf("In-order traversal of dictionary:\n");
    inOrder(root);

    struct Node *result = search(root, "banana");
    if (result != NULL)
        printf("\nDefinition of 'banana': %s\n", result->value);
    else
        printf("\n'banana' not found in the dictionary.\n");

    return 0;
}

/*
Summary:
Using a Binary Search Tree (BST) to implement a dictionary allows for efficient searching, insertion, and retrieval of key-value pairs. This is useful for applications requiring fast lookups and updates.
*/

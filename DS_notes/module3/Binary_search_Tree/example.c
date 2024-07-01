/*
Introduction and Explanation:
A Binary Search Tree (BST) is a binary tree where each node has a value greater than all the values in its left subtree and less than all the values in its right subtree.

Diagram:
          8
         / \
        3   10
       / \    \
      1   6    14
         / \   /
        4   7 13

Example Program (in C):
*/

#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert a node into BST
struct Node *insert(struct Node *root, int key)
{
    if (root == NULL)
        return createNode(key);
    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
    return root;
}

// In-order traversal of BST
void inOrder(struct Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}

// Find minimum value node
struct Node *findMin(struct Node *root)
{
    while(root && root->left != NULL)
        root = root->left;
    return root;
}

// Delete a node from BST
struct Node *deleteNode(struct Node *root, int key)
{
    if (root == NULL)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);

    else if (key > root->data)
        root->right = deleteNode(root->right, key);

    else
    {
        // Node with only one child or no child
        if (root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        
        struct Node *temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);

    }
    return root;
}

int main()
{
    struct Node *root = NULL;
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 10);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 14);
    root = insert(root, 4);
    root = insert(root, 7);
    root = insert(root, 13);

    printf("In-order Traversal: ");
    inOrder(root);
    printf("\n");

    root = deleteNode(root, 10);
    printf("In-order Traversal after deletion: ");
    inOrder(root);
    printf("\n");

    return 0;
}

/*
Summary:
Binary Search Trees (BSTs) allow for efficient searching, insertion, and deletion operations. The properties of BSTs make them suitable for applications requiring dynamic data storage and retrieval.
*/

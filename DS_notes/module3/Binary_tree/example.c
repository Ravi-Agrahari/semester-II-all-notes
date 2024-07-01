/*
Introduction and Explanation:
A binary tree is a tree data structure where each node has at most two children, referred to as the left child and the right child.

Diagram:
          A
         / \
        B   C
       / \
      D   E

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

// Pre-order Traversal: Root, Left, Right
void preOrder(struct Node *node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}

// In-order Traversal: Left, Root, Right
void inOrder(struct Node *node)
{
    if (node == NULL)
        return;
    inOrder(node->left);
    printf("%d ", node->data);
    inOrder(node->right);
}

// Post-order Traversal: Left, Right, Root
void postOrder(struct Node *node)
{
    if (node == NULL)
        return;
    postOrder(node->left);
    postOrder(node->right);
    printf("%d ", node->data);
}

int main()
{
    // Constructing a binary tree
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Pre-order Traversal: ");
    preOrder(root);
    printf("\n");

    printf("In-order Traversal: ");
    inOrder(root);
    printf("\n");

    printf("Post-order Traversal: ");
    postOrder(root);
    printf("\n");

    return 0;
}

/*
Summary:
Binary trees are a foundational structure in computer science. Traversal methods like pre-order, in-order, and post-order allow for different ways to process nodes.
*/

#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    int height;
};

// Create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->height = 1; // New node is initially added at leaf
    return newNode;
}

// Get height of node
int height(struct Node* N) {
    return (N == NULL) ? 0 : N->height;
}

// Get balance factor of node
int getBalance(struct Node* N) {
    return (N == NULL) ? 0 : height(N->left) - height(N->right);
}

// Right rotate subtree rooted with y
struct Node* rightRotate(struct Node* y) {
    struct Node* x = y->left;
    struct Node* T2 = x->right;
    x->right = y;
    y->left = T2;
    y->height = height(y->left) > height(y->right) ? height(y->left) + 1 : height(y->right) + 1;
    x->height = height(x->left) > height(x->right) ? height(x->left) + 1 : height(x->right) + 1;
    return x;
}

// Left rotate subtree rooted with x
struct Node* leftRotate(struct Node* x) {
    struct Node* y = x->right;
    struct Node* T2 = y->left;
    y->left = x;
    x->right = T2;
    x->height = height(x->left) > height(x->right) ? height(x->left) + 1 : height(x->right) + 1;
    y->height = height(y->left) > height(y->right) ? height(y->left) + 1 : height(y->right) + 1;
    return y;
}

// Insert a node into AVL tree
struct Node* insert(struct Node* node, int key) {
    if (node == NULL) return createNode(key);
    if (key < node->data)
        node->left = insert(node->left, key);
    else if (key > node->data)
        node->right = insert(node->right, key);
    else
        return node;

    node->height = 1 + (height(node->left) > height(node->right) ? height(node->left) : height(node->right));
    int balance = getBalance(node);

    // Left Left Case
    if (balance > 1 && key < node->left->data)
        return rightRotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->data)
        return leftRotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->data) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->data) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

// In-order traversal of AVL tree
void inOrder(struct Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

    printf("In-order traversal of the AVL tree is: ");
    inOrder(root);
    printf("\n");

    return 0;
}

/*
Summary:
AVL trees are self-balancing binary search trees that maintain balance through rotations. They ensure that operations such as insertion, deletion, and search have a logarithmic time complexity.
*/

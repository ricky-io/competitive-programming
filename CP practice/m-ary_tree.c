#include <stdio.h>
#include <stdlib.h>

// Structure of a node
typedef struct Node {
    int data;
    int numChildren;
    struct Node **children; // double pointer
} Node;

// Function to create a node
Node* createNode(int data, int numChildren) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->numChildren = numChildren;

    // Allocate memory for children pointers
    if (numChildren > 0) {
        newNode->children = (Node**)malloc(numChildren * sizeof(Node*));
    } else {
        newNode->children = NULL;
    }

    return newNode;
}

// Function to build tree recursively
Node* buildTree() {
    int data, n;

    printf("Enter node data: ");
    scanf("%d", &data);

    printf("Enter number of children of %d: ", data);
    scanf("%d", &n);

    Node *root = createNode(data, n);

    // Recursively create children
    for (int i = 0; i < n; i++) {
        printf("Enter child %d of %d:\n", i + 1, data);
        root->children[i] = buildTree();
    }

    return root;
}

// Preorder traversal
void preorder(Node *root) {
    if (root == NULL) return;

    printf("%d ", root->data);

    for (int i = 0; i < root->numChildren; i++) {
        preorder(root->children[i]);
    }
}

// Free memory
void freeTree(Node *root) {
    if (root == NULL) return;

    for (int i = 0; i < root->numChildren; i++) {
        freeTree(root->children[i]);
    }

    free(root->children);
    free(root);
}

// Main function
int main() {
    printf("Build your M-ary Tree:\n");
    Node *root = buildTree();

    printf("\nPreorder Traversal:\n");
    preorder(root);

    freeTree(root);

    return 0;
}
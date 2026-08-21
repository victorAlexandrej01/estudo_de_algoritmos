#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node *createNode(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->right = NULL;
    newNode->left = NULL;

    return newNode;
}

Node *insert(Node *root, int value) {
    if (root == NULL) return createNode(value);

    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

void preOrder(Node *root) {
    if (root != NULL) {
        printf("%d -> ", root->data);
        preOrder(root->left);  
        preOrder(root->right);
    }
}

void order(Node *root) {
    if (root != NULL) {
        order(root->left);
        printf("%d -> ", root->data);
        order(root->right);
    }
    
}

int main() {
    Node *root = NULL;
    int n;
    
    root = insert(root, 20);

    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        root = insert(root, n); 
    }


    preOrder(root);
    printf("\n");
    order(root);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int value;
    struct Node* left;
    struct Node* right;
}Node;

Node* insert(Node* tree, int data){
    if(tree == NULL) {
        Node* node = (Node *)malloc(sizeof(Node));
        node->value = data;
        node->left = NULL;
        node->right = NULL;
        return node;
    } 
    else if(data < tree->value) tree->left = insert(tree->left, data);
    else if(data > tree->value) tree->right = insert(tree->right, data);
    return tree;
}

void printTree(Node* tree){
    if(tree == NULL) return;
    printTree(tree->left);
    printTree(tree->right);
    printf("%d\n", tree->value);
}

int main(){
    int data;
    Node* tree = NULL;
    while(scanf("%d", &data) != EOF){
        tree = insert(tree, data);
    }
    printTree(tree);
}
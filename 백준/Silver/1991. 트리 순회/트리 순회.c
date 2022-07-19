#include<stdio.h>
#include<stdlib.h>

#define null NULL

typedef struct Node{
    char s;
    struct Node* left;
    struct Node* right;
}Node;

Node* createnode(char s){
    Node* newnode = (Node*)malloc(sizeof(Node));
    newnode->s = s;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

Node* search(Node* tree, char data){
    Node* temp;
    if(tree != NULL){
        if(tree->s == data) return tree;
        temp = search(tree->left, data);
        return temp != NULL ? temp : search(tree->right, data);
    }
    return NULL;
}

void insert(Node* tree, char a, char b, char c){
    tree->s = a;
    if(b == '.' && c == '.') return;
    else {
        if(b != '.') tree->left = createnode(b);
        if(c != '.') tree->right = createnode(c);
    }
}

void preorder(Node* tree){
    if(tree != null){
        printf("%c", tree->s);
    }
    if(tree->left != NULL){
        preorder(tree->left);
    }
    if(tree->right != null){
        preorder(tree->right);
    }
}

void inorder(Node* tree){
    if(tree->left != NULL){
        inorder(tree->left);
    }
    if(tree != null){
        printf("%c", tree->s);
    }
    if(tree->right != null){
        inorder(tree->right);
    }
}

void postorder(Node* tree){
    if(tree->left != NULL){
        postorder(tree->left);
    }
    if(tree->right != null){
        postorder(tree->right);
    }
    if(tree != null){
        printf("%c", tree->s);
    }
}

int main(){
    int n;
    char a, b, c;
    Node* Binary_Tree = createnode(NULL);
    Node* temp;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf(" %c %c %c", &a, &b, &c);
        temp = search(Binary_Tree, a);
        temp != NULL ? insert(temp, a, b, c) : insert(Binary_Tree, a, b, c);
    }
    preorder(Binary_Tree);
    printf("\n");
    inorder(Binary_Tree);
    printf("\n");
    postorder(Binary_Tree);
    printf("\n");
    return 0;
}
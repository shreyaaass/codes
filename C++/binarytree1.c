#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
} Node;

void dealloc(Node **root)
{
    if (*root == NULL)
        return;
    Node *left = (*root)->left;
    Node *right = (*root)->right;
    free(*root);
    dealloc(&left);
    dealloc(&right);
}

void create(Node **root)
{
    Node *newNode = malloc(sizeof(Node));

    if (newNode == NULL)
    {
        printf("Error occurred!");
        exit(0);
    }
    printf("Enter value : ");
    scanf("%d", &(newNode->val));

    if (newNode->val == -1)
    {
        *root = NULL;
        free(newNode);
        return;
    }

    create(&newNode->left);
    create(&newNode->right);
    *root = newNode;
}

void displayPreOrder(Node **root)
{
    if (*root == NULL)
        return;
    printf("%d\n", (*root)->val);
    displayPreOrder(&(*root)->left);
    displayPreOrder(&(*root)->right);
}

void displayInOrder(Node **root)
{
    if (*root == NULL)
        return;
    displayInOrder(&(*root)->left);
    printf("%d\n", (*root)->val);
    displayInOrder(&(*root)->right);
}

void displayPostOrder(Node **root)
{
    if (*root == NULL)
        return;
    displayPostOrder(&(*root)->left);
    displayPostOrder(&(*root)->right);
    printf("%d\n", (*root)->val);
}

bool checkSearchTree(Node *root)
{
    if (root == NULL)
        return true;
    if (root->left != NULL)
        if (root->val < (root->left)->val)
            return false;
    if (root->right != NULL)
        if (root->val > (root->right)->val)
            return false;

    //if(root->left != NULL)
    if (checkSearchTree(root->left) && checkSearchTree(root->right))
        //if(root->right != NULL)
        return true;
    return false;
}

int main(int argc, char *argv)
{
    Node *root = NULL;
    create(&root);
    displayPreOrder(&root);
    printf("\n");
    displayInOrder(&root);
    printf("\n");
    displayPostOrder(&root);
    printf("\n");
    checkSearchTree(root) ? printf("It\'s a binary search tree") : printf("It\'s not a binary search tree");
    dealloc(&root);
    return 0;
}

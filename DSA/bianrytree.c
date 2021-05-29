#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node *create()
{
    int x;
    struct node *newNode;
    newNode = (struct newnode *)malloc(sizeof(struct node));
    printf("enter data(-1 for no node)\n");
    scanf("%d", &x);
    if (x == -1)
    {
        return NULL;
    }
    newNode->data = x;
    printf("left child of %d\n", x);
    newNode->left = create();
    printf("right child of %d\n", x);
    newNode->right = create();
    return newNode;
}

void inorder(struct node *root)
{
    if (root == 0)
        return;
    inorder(root->left);
    printf("%d\n", root->data);
    inorder(root->right);
}
void postorder(struct node *root)
{
    if (root == 0)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d\n", root->data);
}
void preorder(struct node *root)
{
    if (root == 0)
        return;
    printf("%d\n", root->data);
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    struct node *root;
    root = create();
    int d;
    printf("enter 1 for preorder\nEnter 2 for inorder\nEnter 3 for post order\n");
    scanf("%d", &d);
    switch (d)
    {
    case 1:
    {
        printf("preorder:\n");
        preorder(root);
        break;
    }
    case 2:
    {
        printf("inorder:\n");
        inorder(root);
        break;
    }
    case 3:
    {
        printf("postorder:\n");
        postorder(root);
        break;
    }
    }
}
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node * left;
    struct node * right;
}tree;
void inOrder(tree* root)
{
    if (root == NULL) return;
    inOrder(root -> left);
    printf ("%d ",root -> data);
    inOrder(root -> right);
}
void preOrder(tree *root)
{
    if (root == NULL) return;
    printf("%d ",root -> data);
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder (tree* root)
{
    if (root == NULL) return;
    postOrder(root ->left);
    postOrder(root ->right);
    printf("%d ",root -> data);
}
int heightOfTree (tree * root)
{
    if (root == NULL) return -1;
    else return (heightOfTree(root ->left)>heightOfTree(root->right)) ? heightOfTree(root->left) + 1 : heightOfTree(root->right) + 1;
}
tree *createNode(int data)
{
    tree *newNode = (tree *) malloc (sizeof(tree));
    newNode ->data = data;
    newNode ->left = NULL;
    newNode ->right = NULL;
    return newNode;
}
int leafCount(tree *node)
{
    if (node == NULL) return 0;
    if (node ->left == NULL && node ->right == NULL) return 1;
    return leafCount(node ->left) + leafCount(node ->right) ;
}
int main()
{
    tree *aTree = (tree *) malloc (sizeof(tree));
    aTree->data = 1;
    aTree ->left = createNode(2);
    aTree ->right = createNode(3);
    aTree ->left ->left = createNode(4);
    aTree ->left->right = createNode(5);
    aTree ->right ->left = createNode(6);
    aTree ->right ->right = createNode(7);
    aTree ->right ->right ->left = createNode(8);
    printf("The preorder traversal of the tree: ");
    preOrder(aTree);
    printf("\n");
    printf("The postorder traversal of the tree: ");
    postOrder(aTree);
    printf("\n");
    printf("The inorder traversal of the tree: ");
    inOrder(aTree);
    printf("\n");
    printf("The height of the tree: %d",heightOfTree(aTree));
    printf("\nThe number of leaves in the tree: %d",leafCount(aTree));
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct TreeNode
{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

TreeNode* createNode(int data)
{
    TreeNode *NewNode = (TreeNode*) malloc(sizeof(TreeNode));
    NewNode->val = data;
    NewNode->left = NULL;
    NewNode->right = NULL;
    return NewNode;
}
int maxInTree(TreeNode **root)
{
    if ((*root) == NULL) 
    {
        printf ("\nThere is no nodes here.");
        return;
    }

    if ((*root)->right == NULL)
    {
        return (*root) -> val;
    }
    return maxInTree((*root)->right);
}
void SearchInBST(TreeNode **root, int key)
{
    if (*root == NULL)
    {
        printf("The %d is not found in the binary search tree.\n", key);
        return;
    }
    if ((*root)->val == key)
    {
        printf("The %d is found in the binary search tree.\n", key);
        return;
    }
    else if ((*root)->val < key) SearchInBST(&(*root)->right, key);
    else SearchInBST(&(*root)->left, key);
}
void insertNode(TreeNode **root, int data)
{
    if (*root == NULL) 
    {
        *root = createNode(data);
        return;
    }
    if ((*root)->val < data)
    {
        if ((*root)->right == NULL)
        {
            (*root)->right = createNode(data);
        }
        else 
        {
            insertNode(&(*root)->right, data);
        }
    }
    else if ((*root)->val > data)
    {
        if ((*root)->left == NULL)
        {
            (*root)->left = createNode(data);
        }
        else 
        {
            insertNode(&(*root)->left, data);
        }
    }
}

void inOrder(TreeNode* root)
{
    if (root == NULL) return;
    inOrder(root -> left);
    printf ("%d ",root -> val);
    inOrder(root -> right);
}
int main()
{
    TreeNode *Tree = NULL;

    insertNode(&Tree, 4);
    insertNode(&Tree, 2);
    insertNode(&Tree, 6);
    insertNode(&Tree, 1);
    insertNode(&Tree, 3);
    insertNode(&Tree, 5);
    insertNode(&Tree, 7);
    insertNode(&Tree , 10);
    printf("The inorder tree: ");
    inOrder(Tree);
    printf("\n");
    SearchInBST(&Tree,10);
    printf("\n%d is the maxInTreeimum in this tree.");
    return 0;
}
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
typedef struct TreeNode
{
    int val;
    struct TreeNode* left ;
    struct TreeNode* right;
}TreeNode;
TreeNode* createNode(int data)
{
    TreeNode *NewNode = (TreeNode*) malloc (sizeof(TreeNode));
    NewNode ->val = data;
    NewNode ->left = NULL;
    NewNode ->right = NULL;
    return NewNode;
}
int leafCount( TreeNode *node)
{
    if (node == NULL) return 0;
    if (node ->left == NULL && node ->right == NULL) return 1;
    return leafCount(node ->left) + leafCount(node ->right) ;
}
int countNodes(TreeNode* root)
{
    if (root == NULL) return 0;
    return 1 + countNodes(root ->left) + countNodes (root ->right);
}
bool IsCBT(TreeNode *root , int i , int n)
{
    if (root == NULL) return true;
    if (i >= n) return false;
    return IsCBT(root ->left , i*2 + 1 , n) && IsCBT(root -> right , i*2 + 2 , n);
}
int main()
{
    TreeNode *aTree = (TreeNode *) malloc (sizeof(TreeNode));
    aTree->val = 1;
    aTree ->left = createNode(2);
    aTree ->right = createNode(3);
    aTree ->left ->left = createNode(4);
    aTree ->left->right = createNode(5);
    aTree ->right ->left = createNode(6);
    aTree ->right ->right = createNode(7);
    aTree ->right ->right ->left = createNode(8);
    if (IsCBT(aTree , 0 , countNodes(aTree))) printf("The tree is CBT.");
    else printf("The tree is not CBT.");
}
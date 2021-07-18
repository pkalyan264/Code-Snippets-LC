#include<iostream>
using namespace std;
TreeNode * Search(TreeNode * root,int val)
{
  if(!root)return root;
  if(root->val==val)return root;
  if(root->val<val)
  {
    return Search(root->right,val);
  }
  else
  {
    return Search(root->left,val);
  }
}
TreeNode * Predecessor(TreeNode * root,int val)
{
  TreeNode * curr=Search(TreeNode * root,int val);
  if(curr==NULL)return nullptr;
//   Case 1: If the curr node has right subtree, The left most value in the right subtree will be the inorder successor.
  if(curr->left)
  {
    TreeNode* temp=curr->left;
    while(temp->right)
    {
      temp=temp->right;
    }
    return temp;
  }
  else
  {
// Case 2: If there's no right subtree ,the inorder successor could be the parent of the node if the node is left child of that parent.

    TreeNode * predecessor=NULL;
    TreeNode * ancestor=root;
    while(ancestor!=curr)
    {
      if(curr->val>ancestor->val)
      {
        predecessor=ancestor; /*So far this is the deepest node for which our curent is in the left.*/
        ancestor=ancestor->right;
      }
      else
      {
        ancestor=ancestor->left;
      }
    }
    return predecessor;
  }
}

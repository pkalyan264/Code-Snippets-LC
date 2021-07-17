#include<iostream>
using namespace std;
TreeNode * helper(vector<int>preorder,int bound,int &i)
{
  if(i==preorder.size()||preorder[i]>bound)return NULL;
  TreeNode * root=new TreeNode(preorder[i++]);
  root->left=helper(preorder,root->val,i);
  root->right=helper(preorder,bound,i);
  return root;
}
TreeNode * BSTFrompreorder(vector<int>preorder)
{
  int bound=INT_MAX;
  int i=0;
  return helper(preorder,bound,i);
}

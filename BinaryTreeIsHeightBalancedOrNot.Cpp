#include<iostream>
using namespace std;
int height(TreeNode * root)
{
  if(!root)return 0;
  int l=height(root->left);
  int r=height(root->right);
  if(l==-1 or r==-1 or abs(l-r)>1)
    return -1;
  return 1+max(l,r);
}
bool isBalanced(TreeNode * root)
{
 return height(root)==-1?false:true; 
}

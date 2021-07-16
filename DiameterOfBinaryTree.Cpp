#include<iostream>
usiong namespace std;
pair<int,int>helper(TreeNode * root)
{
  if(!root)return {0,0};
  pair<int,int>p;
  pair<int,int>l=helper(root->left);
  pair<int,int>r=helper(root->right);
  p.first=1+max(l.first,r.first);
  p.second=max(1+p.first+l.first,max(p.second,l.second));
  return p;
}
int diameter(TreeNode * root)
{
  pair<int,int>heightdiameter=helper(root);
  return heightdiameter.second();
}

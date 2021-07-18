include<iostream>
using namespace std;
int Ceil(int data,TreeNode * root)
{
  if(!root)return -1;
  if(root->val==data)return root->val;
  if(data>root->val)
    return Ceil(data,root->right);
  int temp=Ceil(data,root->left);
  if(temp>=data)return temp;
  return root->val;
}

#include<iostream>
using namespace std;
TreeNode * SearchInBST(TreeNode * root, int target)
{
  if(!root)return nullptr;
  if(root->val==target)return root;
  if(target<root->val)
  {
    return SearchInBST(root->left,target);
  }
  else return SearchInBST(root->right,target);
        return NULL;
}

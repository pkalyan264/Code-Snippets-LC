bool helper(TreeNode * root,long mini,long maxi)
{
  if(!root)return true;
  if(root->val=<mini or root->val>=maxi)return false;
  return helper(root->right,root->val,maxi) and helper(root->left, mini, root->val);
}
bool isValidBST(TreeNode * root)
{
  if(!root)return 1;
  return helper(root,LONG_MIN,LONG_MAX);
}

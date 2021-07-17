int helper(TreeNode * root,int &res)
{
  if(!root)return 0;
  int l=helper(root->left,res);
  int r=helper(root->right,res);
  int ms=max(root->val,root->val+max(l,r));
  int m2=max(ms,root->val+r+l);
  res=max(res,m2);
  return ms;
}
int maxPathSum(TreeNode * root)
{
  int res=INT_MIN;
  helper(root,res);
  return res;
}

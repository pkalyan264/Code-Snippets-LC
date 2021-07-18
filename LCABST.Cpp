TreeNode* LCA(TreeNode*root ,TreeNode * a,TreeNode * b)
{
  if(!root)return root;
  if(a->val>root->val and b->bal>root->val)
    return LCA(root->right,a,b);
  else if(a->val<root->val and b->val<root->val)return LCA(root->left,a,b);
  return root;
}

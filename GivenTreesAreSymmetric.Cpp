bool helper(TreeNode * root1, TreeNode* root2)
{
  if(!root1 and !root2)return 1;
  if(!root1|| !root2)return 0;
  if(root1->val!=root2->val) return false;
  return helper(root1->right,root2->left) and helper(root1->left, root2->right);
}
bool isSymmetric(TreeNode *root)
{
  return helper(root,root);
}

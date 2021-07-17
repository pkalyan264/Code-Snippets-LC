TreeNode*InvertTree(TreeNode * root)
{
  if(!root)return root;
  TreeNode * l=InvertTree(root->left);
  TreeNode *r=InvertTree(root->right);
  root->left=right;
  root->right=left;
  return root;
}

bool isIdentical(TreeNode *root1,TreeNode * root2)
{
  if(!root1 and !root2)return true;
  if(!root1||!root2)return false;
  if(root1->val!=root2->val)return false;
  return isIdentical(root1->left,root2->left)and isIdentical(root1->right,root2->right);
}

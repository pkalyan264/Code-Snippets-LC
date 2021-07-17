bool isSubtree(TreeNode * root, TreeNode* subTree)
{
  if(!root and !subRoot)return true;
  if(!root or !subRoot) return false;
  if(isSame(root,subRoot))return true;
  return isSubtree(root->left,subTree)||isSubtree(root->right,subTree);
}
bool isSame(TreeNode * s, TreeNode * t)
{
  if(!s and !t)return true;
  if(!s or !t)return false;
  if(s->val!=t->val)return false
    return isSame(s->left,t->left) and isSame(s->right,t->right);
}

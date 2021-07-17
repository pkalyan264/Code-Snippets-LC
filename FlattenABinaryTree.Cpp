void Flatten(TreeNode * root)
{
  if(!root)return;
  if(!root->left and !root->right)return;
  if(root->left)
  {
    flatten(root->left);
    TreeNode * temp=root->right;
    root->right=root->left;
    root->left=NULL;
    TreeNode * curr=root->right;
    while(curr->right)
    {
      curr=curr->right;
    }
    curr->right=temp;
  }
  flatten (root->right);
}

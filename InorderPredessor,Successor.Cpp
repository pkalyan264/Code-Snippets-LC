TreeNode * Search(TreeNode * root,int val)
{
  if(!root)return nullptr;
  if(root->val==val)return root;
  if(root->val>val)
  {
    return Search(root->left,val);
  }
  else
    return Search(root->right,val);
}
TreeNode * Successor(TreeNode * root,int val)
{
  TreeNode * curr=Search(TreeNode * root,int val);
  if(curr==NULL)return nullptr;
//   Case 1: If the curr node has right subtree, The left most value in the right subtree will be the inorder successor.
  if(curr->right)
  {
    TreeNode* temp=curr->right;
    while(temp->left)
    {
      temp=temp->left;
    }
    return temp;
  }
  else
  {
// Case 2: If there's no right subtree ,the inorder successor could be the parent of the node if the node is left child of that parent.

    TreeNode * successor=NULL;
    TreeNode * ancestor=root;
    while(ancestor!=curr)
    {
      if(curr->val<ancestor->val)
      {
        successor=ancestor; /*So far this is the deepest node for which our curent is in the left.*/
        ancestor=ancestor->left;
      }
      else
      {
        ancestor=ancestor->right;
      }
    }
    return successor;
  }
}

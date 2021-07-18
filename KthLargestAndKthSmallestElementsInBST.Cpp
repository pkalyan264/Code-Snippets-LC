// Inorder Traversal Without storing them in an array ,just maintain a acounter and when the counter is equal to k, return .
void helper(TreeNode * root,int &k,int &res)
{
  if(root->left)helper(root->left,k,res)
  k--;
   if(k==0)
   {
     res=root->val;
     return;
   }
  if(root->right)
  {
    helper(root->right,k,res);
  }
}
int kthSmallest(TreeNode* root, int k)
    {
        int ans=-1;
        helper(root,k,ans);
        return ans;
    }




// Kth Largest in BST:
// Similar to Kth smallest, but here we modify the inorder traversal a bit as root->right, root, root->left;
// Code:
void helper(Node * root,int &k,int &ans)
    {
        if(root->right)
        helper(root->right,k,ans);
        k--;
        if(k==0)
        {
            ans=root->val;
            return;
        }
        if(root->left)
        {
            helper(root->left,k,ans);
        }
    }
    public:
    int kthLargest(Node *root, int K)
    {
        int ans=-1;
        helper(root,K,ans);
        return ans;
        //Your code here
    }

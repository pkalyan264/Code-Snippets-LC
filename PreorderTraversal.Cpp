// Recursive Code
vector<int>ans;
vector<int>Preorder(TreeNode * root)
{
  if(!root)return ans;
  ans.push_back(root->val);
  Preorder(root->left);
  Preorder(root->right);
  return ans;
}

// Iterative Code 1
vector<int>Preorder(TreeNode * root)
{
  if(!root)return {};
  vector<int>ans;
  stack<TreeNode * >st;
  while(root || !st.empty())
  {
    if(root)
    {
      ans.push_back(root->val);
      st.push(root);
      root=root->left;
    }
    else
    {
      root=st.top();
      st.pop();
      root=root->right;
    }
  }
  return ans;
  }


// Iterative Code 2
vector<int> preorderTraversal(TreeNode* root) 
    {
        if(!root)return {};
        vector<int>ans;
        stack<TreeNode * >st;
        while(true)
        {
            if(root)
            {
                ans.push_back(root->val);
                st.push(root);
                root=root->left;
            }
            else
            {
                 if(st.empty())break;
                root=st.top();
                st.pop();
                root=root->right;
            }
        }
        return ans;
    }

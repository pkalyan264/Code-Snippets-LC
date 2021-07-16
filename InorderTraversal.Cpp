// Recursive Code
vector<int>ans;
vector<int>inorder(TreeNode * root)
{
  if(!root)return ans;
  inorder(root->left);
  ans.push_back(root->val);
  inorder(root->right);
  return ans;
}



// Iterative Code:
vector<int>inorder(TreeNode * root)
{
  vector<int>ans;
  stack<TreeNode*>st;
  while(true)
  {
    if(root)
    {
      st.push(root);
      root=root->left;
    }
    else
    {
      if(st.empty())break;
      root=st.top();
      st.pop();
      ans.push_back(root->val);
      root=root->right;
    }
  }
  return ans;
}


// Iterative Code 2
vector<int>Inorder(TreeNode * root)
{
  vector<int>ans;
  stack<TreeNode*>st;
  while(!st.empty()||root)
  {
    if(root)
    {
      st.push(root);
      root=root->left;
    }
    else
    {
      root=st.top();
      st.pop();
      ans.push_back(root->val);
      root=root->right;
    }
  }
  return ans;
}

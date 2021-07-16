#include<iostream>
using namespace std;
vector<int>leftSideView(TreeNode * root)
{
  vector<int>ans;
  queue<TreeNode*>q;
  if(!root)
    return ans;
  q.push(root)
  while(!q.empty())
  {
    int m=q.size();
    for(int i=0;i<m;i++)
    {
      TreeNode * temp=q.top();
      q.pop();
      if(i==0)
      {
        ans.push_back(temp->val);
      }
      if(temp->left)q.push(temp->left);
      if(temp->right)q.push(temp->right);
    }
  }
  return ans;
}

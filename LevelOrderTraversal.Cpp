#include<iostream>
using namespace std;
vector<vector<int>>LevelOrder(TreeNode * root)
{
if(!root)return {};
  vector<vector<int>>ans;
  queue<TreeNode*>q;
  q.push(root);
  while(!q.empty())
  {
    vector<int>t;
    int m=q.size();
    for(int i=0;i<m;i++)
    {
      TreeNode * temp=q.front();
      q.pop();
      t.push_back(temp->val);
      if(temp->left)q.push(temp->left);
      if(temp->right)q.push(temp->right);
    }
    ans.push_back(t);
  }
  return ans;
}

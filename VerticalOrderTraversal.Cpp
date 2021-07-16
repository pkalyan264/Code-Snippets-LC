#include<iostream>
using namespace std;
vector<vector<int>>VerticaLOrder(TreeNode * root)
{
  map<int,map<int,vector<int>>>nodes;
  queue<pair<TreeNode*,pair<int,int>>>q;
  q.push({root,{0,0}});
  while(!q.empty())
  {
    auto temp=q.front();
    q.pop();
    TreeNode * curr=temp.first;
    int x=temp.second.first;
    int y=temp.second.second;
    nodes[x][y].push_back(curr->val);
    if(curr->left)
    {
      q.push({curr->left,{x-1,y+1}});
    }
    if(curr->right)
    {
      q.push({curr->right,{x+1,y+1}});
    }
  }
  vector<vector<int>>ans;
  for(auto p:nodes)
  {
    vector<int>cols;
      for(auto q: p.second)
      {
        sort(q.second.begin(),q.second.end());
        cols.insert(cols.end(),q.second.begin(),q.second.end());
      }
    ans.push_back(cols);
  }
  return ans;
}

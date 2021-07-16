vector<vector<int>>VerticalOrder(TreeNode * root)
{
  if(!root)return {{}};
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
      q.push({cirr->left,{x-1,y+1}});
    }
    if(curr->right)
    {
      q.push({curr->right,{x+1,y+1}});
    }
  }
  for (auto p:nodes)
  {
    vector<int>cols;
    for (auto q: p.second)
    {
      sort(q.second.begin(),q.second.end());
      cols.insert(cols.end(),q.second.begin(),q.second.end());
    }
    ans.push_back(cols);
  }
  return ans;
}





Top View:
for(auto it: ans)
{
  res.push_back(it[0]);
}
return res;





Bottom View:
for(auto it :ans)
{
  res.push_back(it[it.size()-1]);
}
return res;

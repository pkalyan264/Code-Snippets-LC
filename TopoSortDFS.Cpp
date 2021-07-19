void dfstopo(int node,vector<int>&visited,stack<int>&st,vector<int>adj[])
{
  visited[node]=1;
  for(auto it:adj[node])
  {
    if(!visited[it])
    {
      dfstopo(it,visited,st,adj);
    }
  }
  st.push(node);
}
vector<int>TopoSort(int N, vector<int>adj[])
{
  vector<int>ans;
  vector<int>visited(N+1,0);
  stack<int>st;
  for(int i=1;i<=N;i++)
  {
    if(!visited[i])
      dfstopo(i,visited,st,adj);
  }
  while(!st.empty())
  {
    ans.push_back(st.top());
    st.pop();
  }
  return ans;
}

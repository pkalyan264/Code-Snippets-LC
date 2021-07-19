int main()
{
  int n,m;
  cin>>n>>m;
//   1 - based index
//   unweighted graph
  vector<int>adj[n+1];
  for(int i=0;i<m;i++)
  {
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
//   weighted graph
  vector<pair<int>>adj[n+1];
  for(int i=0;i<m;i++)
  {
    int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
  }
  return 0;
}

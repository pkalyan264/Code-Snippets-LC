vector<int> ShortestPath(int src,int N,vector<int>adj[])
{
  vector<int>dist(N+1,INT_MAX);
  dist[src]=0;
  queue<int>q;
  q.push(src);
  while(!q.empty())
  {
    int node=q.front();
    q.pop();
    for(int it:adj[node])
    {
      if(dist[node]+1<dist[it])
      {
        dist[it]=dist[node]+1;
        q.push(it);
      }
    }
  }
  return dist;
}

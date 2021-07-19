bool checkForCycleDFS(int node,int parent,vector<int>adj,vector<int>&visited)
{
  visited[node]=1;
  for(auto it:adj[node])
  {
    if(!visited[it])
    {
      checkForCycle(it,node,adj,visited);
    }
    else
    {
      if(it!=parent)return true;
    }
  }
  return false;
}
bool isCycle(vector<int>&adj[],int N)
{
  vector<int>visited(N+1,0);
  for(int i=1;i<=N;i++)
  {
    if(checkForCycle(i,-1,adj,visited))return true;
  }
  return false;
}

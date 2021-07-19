bool CheckForCycle(int curr,int parent,vector<int>adj[],vector<int>&visited)
{
  queue<pair<int,int>>q;
  visited[curr]=1;
  q.push({curr,-1});
  while(!q.empty())
  {
    int temp=q.front().first;
    int par=q.front().second;
    q.pop();
    for(auto it:adj[temp])
    {
      if(!visited[it])
      {
        visited[it]=1;
        q.push({it,temp});
      }
      else if(par!=it)
        return true;
    }
  }
  return false;
}
bool isCycle(vector<int>adj[],int N)
{
  vector<int>visited(N+1,0);
  for(int i=1;i<=N;i++)
  {
    if(!visited[i])
    {
      if(CheckForCycle(i,-1,adj,visited))return true;
    }
  }
  return false;
}

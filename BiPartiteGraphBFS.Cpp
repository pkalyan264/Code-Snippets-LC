#include<iostream>
using namespace std;
bool isBipartite(vector<int>adj[],int N)
{
  vector<int>visited(N+1,-1);
  for(int i=1;i<=N;i++)
  {
    if(visited[i]==-1)
    {
      if(BFSBipartite(i,visited,adj)==false)return false;
    }
  }
  return true;
}

bool BFSBipartite(int node,vector<int>&visited,vector<int>adj[])
{
  queue<int>q;
  q.push(node);
  visited[node]=0;
  while(!q.empty())
  {
    int curr=q.front();
    q.pop();
    for(auto it:adj[curr])
    {
      if(visited[it]==-1)
      {
        visited[it]=1-visited[curr];
        q.push(it);
      }
      else if (visited[it]==visited[curr])return false;
    }
  }
  return true;
}

#include<iostream>
using namespace std;
void helper(vector<int>&res,vector<int>&visited,vector<int>adj[],int curr)
{
  visited[curr]=1;
  res.push_back(curr);
  for(auto it:adj[curr])
  {
    if(!visited[it])
      helper(res,visited,adj,it);
  }
  return;
}
vector<int>DFS(vector<int>adj[],int N)
{
  vector<int>visited(N+1,0);
  vector<int>ans;
  for(int i=1;i<=N;i++)
  {
    if(!visited[i])
    {
      helper(ans,visited,adj,i);
    }
  }
}

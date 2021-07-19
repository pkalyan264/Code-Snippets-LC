#include<iostream>
using namespace std;
vector<int> BFS(vector<int>adj[],int N)
{
  vector<int>visited(N+1,0);
  vector<int>ans;
  for(int i=1;i<=m;i++)
  {
    if(!visited[i])
    {
      queue<int>q;
      q.push(i);
      visited[i]=1;
      while(!q.empty())
      {
        int curr=q.front();
        ans.push_back(curr);
        q.pop();
        for(auto it:adj[curr])
        {
          if(!visited[it])
          {
            q.push(it);
            visited[it]=1;
          }
        }
      }
    }
  }
  return ans;
}

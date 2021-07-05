#include<iostream>
using namespace std;
vector<vector<int>>PascalTriangle(int n)
{
  vector<vector<int>>ans(n,vector<int>(n,1));
  /*Initialise Carefully */
  for(int i=0;i<n;i++)
  {
    ans[i].resize(i+1);
    for(int j=1;j<i;j++)
    {
      ans[i][j]=ans[i-1][j]+ ans[i-1][j-1];
    }
  }
  return ans;
}

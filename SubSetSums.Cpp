#include<iostream>
using namespace std;
void helper(vector<int>arr,vector<int>&ans,int index,int sum)
{
  if(index==arr.size())
  {
    ans.push_back(sum);
    return;
  }
  helper(arr,ans,index+1;sum+arr[i]);
  helper(arr,ans,index+1,sum);
}
vector<int>subsetSums(vector<int>arr,int N)
{
  vector<int>res;
  subsetSums(arr,res,0,0);
  sort(res.begin(),res.end());
  return res;
}

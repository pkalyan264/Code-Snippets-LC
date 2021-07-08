#include<iostream>
using namespace std;
void backtrack(vector<int>nums,vector<int>&temp,vector<vector<int>>&ans,int target,int start)
{
  if(target==0)
  {
  ans.push_back(temp);
    }
  if(target<0)return ;
  for(int i=start;i<nums.size();i++)
  {
    temp.push_back(nums[i]);
    backtrack(nums,temp,ans,target-nums[i],i);
    temp.pop_back();
  }
}
vector<vector<int>>CombinationSum(vector<int>&nums,int target)
{
}

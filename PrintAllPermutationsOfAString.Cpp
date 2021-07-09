// Extra Space of Map Approach
#include<iostream>
using namespace std;
void helper(vector<vector<int>>&ans,vector<int>&ds,vector<int>&nums,unordered_map<int,int>&um)
{
  if(ds.size()==nums.size())ans.push_back(ds);
  for(int i=0;i<n;i++)
  {
  if(!um[nums[i]])
    {
      um[nums[i]]=1;
      ds.push_back(nums[i]);
      helper(ans,ds,nums,um);
      ds.pop_back();
      um[nums[i]]=0;
    }
   }
}
vector<vector<int>>PermuteString(vector<int>&nums)
{
  vector<vector<int>>ans;
  vector<int>ds;
  unordered_map<int,int>um;
  helper(ans,ds,nums,um);
  return ans;
}

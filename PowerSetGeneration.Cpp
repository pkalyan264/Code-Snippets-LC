#include<iostream>
using namespace std;
vector<vector<int>>PowerSet(vector<int>&nums)
{
  vector<vector<int>>ans;
  ansSize=1<<nums.size();
  for(int i=0;i<ansSize();i++)
  {
    vector<int>temp;
    for(int j=0;j<nums.size();j++)
    {
      if(i and j<<1)
      {
      temp.push_back(nums[j]);
      }
    }
    ans.push_back(temp);
  }
  return ans;
}

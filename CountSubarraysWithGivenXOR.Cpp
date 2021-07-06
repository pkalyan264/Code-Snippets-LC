#include<iostream>
using namespace std;
int CountSubArrays(vector<int>nums,int target)
{
  int xr=0,cnt=0;
  unordered_map<int,int>freq;
  for(int i=0;i<nums.size();i++)
  {
    xr^=nums[i];
    if(xr==target)cnt++;
    if(freq.find(xr^target)!=freq.end())
    {
      cnt+=freq[xr^target];
    }
    freq[xr]++;
  }
  return cnt;
}

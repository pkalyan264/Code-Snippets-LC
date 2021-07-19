#include<iostream>
using namespace std;
vector<int>DistinctNumbersCount(vector<int>nums,int k)
{
  vector<int>ans;
  int count=0;
  if(!nums.size())return ans;
  unordered_map<int,int>freq;
  for(int i=0;i<k;i++)
  {
    if(freq[nums[i]]==0)count++;
    freq[nums[i]]++;
  }
  ans.push_back(count);
  for(int i=k;i<nums.size();i++)
  {
    if(freq[nums[i-k]]==1)
      count--;
    freq[nums[i-k]]--;
    if(freq[nums[i]]==0)count++;
    freq[nums[i]]++;
    ans.push_back(count);
  }
  return ans;
}

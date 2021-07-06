#include<iostream>
using namespace std;
vector<vector<int>>FourSum(vector<int>nums,int target)
{
  if(!nums.size())return {{}};
  vector<vector<int>>ans;
  sort(nums.begin(),nums.end());
  for(int i=0;i<nums.size();i++)
  {
    for(int j=i+1;j<nums.size();j++)
    {
      int tar=target-(nums[i]+nums[j]);
      int left=j+1;
      int right=nums.size()-1;
      while(left<right)
                {
                    
                    if(nums[left]+nums[right]<tar)
                    {
                            left++;
                    }
                    else if(nums[left]+nums[right]>tar)
                    {
                        right--;
                    }
                    else
                    {
                        vector<int>quads(4,0);
                        quads[0]=nums[i];
                        quads[1]=nums[j];
                        quads[2]=nums[left];
                        quads[3]=nums[right];
                        ans.push_back(quads);
                        while(left<right and nums[left]==quads[2])left++;
                        while(left<right and nums[right]==quads[3])right--;
                    }   
                }
      while(j+1<nums.size() and nums[j]==nums[j+1])j++;
    }
    while(1+1<nums.size() and nums[1]==nums[i+1])i++;    
  }
  return ans;
}

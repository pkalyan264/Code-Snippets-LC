#include<iostream>
using namespace std;
vector<int>sortshell(vector<int>&nums1,vector<int>&nums2)
{
  for(int i=0;i<nums2.size();i++
  {
    nums1.push_back(nums2[i]);
  }
  int gap=nums1.size();
  while(gap!=1)
  {
    gap=gap/2+gap%2;
    for(int i=0;i<nums1.size()-gap;i++)
      {
        if(nums1[i]>nums1[gap+i])
          swap(nums1[i],nums1[gap+i];
      }
  }
  return nums1;
}

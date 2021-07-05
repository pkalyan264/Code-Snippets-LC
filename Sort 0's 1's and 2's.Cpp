#include<iostream>
using namespace std;
#include<bits/stdc++>
vector<int>Sort(vector<int>&nums)
{
  int low=0,high=nums.size()-1,mid=0;
  while(mid<=high)
  {
    switch(nums[mid])
    {
      case 0:
        swap(nums[mid++],nums[low++]);
        break;
      case 1:
        mid++;
        break;
      case 2:
        swap(nums[mid],nums[high--]);
        break;
      default:
        break;
    }
  }
  return nums;
}

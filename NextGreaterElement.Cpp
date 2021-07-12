#include<iostream>
using namespace std;
vector<int>NextGreaterElement(vector<int>&nums)
{
  int n=nums.size();
  vector<int>ans(n);
  for(int i=2*n-1;i>=0;i--)
  {
    while(!st.empty() and st.top()<=nums[i])
      st.pop();
    if(st.empty())
    {
      ans[i%n]=-1;
    }
    else
      ans[i%n]=st.top();
    st.push(nums[i]);
  }
  return ans;
}

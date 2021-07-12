#include<iostream>
using namespace std;
vector<int>NextSmallerElement(vector<int>&nums)
{
  vector<int>ans;
  for(int i=n-1;i>=0;i--)
  {
    if(st.empty())ans.push_back(-1);
    else if(st.size()>0 and st.top()<nums[i])
      {
        ans.push_back(st.top());
      }
    else if(st.size()>0 and st.top()>=nums[i])
    {
      while(st.size()>0 and st.top()>=nums[i])
      {
        st.pop();
      }
      if(st.size()==0)
      ans.push_back(-1);
      else ans.push_back(st.top());
    }
    st.push(nums[i]);
  }
  reverse (ans.begin(),ans.end());
return ans;
}

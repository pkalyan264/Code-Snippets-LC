#include<iostream>
using namespace std;
int SubarrayZero(int A[],int n)
{
  unordered_map<int,int>um;
  int sum=0,ans=0;
  for(int i=0;i<n;i++)
  {
    sum+=A[i];
    if(sum==0)ans=i+1;
    else
    {
      if(um.find(sum)==um.end())
        um[sum]=i;
      else
        {
          ans=max(ans,i-um[sum])];
        }
    }
  }
  return ans;
}

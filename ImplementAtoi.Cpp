#include<iostream>
using namespace std;
int atoi(string s)
{
  int sign=1;
  int i=0;
  int ans=0;
  s[i]=='-'?sign=-1:sign=1;
  for(i=1;i<s.size();i++)
  {
    if(s[i]-'0'>=0 and s[i]-'0'<=9)
    {
      ans=ans*10+(s[i]-'0');
    }
    else return -1;
  }
  return ans;
}
